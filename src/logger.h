/*
 * Copyright (C) 2015-2018 Dubalu LLC. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include <algorithm>          // for move
#include <atomic>             // for atomic_bool, atomic, atomic_int
#include <chrono>             // for system_clock, time_point, duration, millise...
#include <condition_variable> // for condition_variable
#include <fstream>            // for ofstream
#include <memory>             // for shared_ptr, enable_shared_from_this, unique...
#include <mutex>              // for condition_variable, mutex
#include <string>             // for string, basic_string
#include "string_view.hh"     // for std::string_view
#include <thread>             // for thread, thread::id
#include <time.h>             // for time_t
#include <type_traits>        // for forward, decay_t, enable_if_t, is_base_of
#include <unordered_map>      // for unordered_map
#include <utility>            // for pair
#include <vector>             // for vector

#include "logger_fwd.h"
#include "scheduler.h"
#include "xapiand.h"


#define DEFAULT_LOG_LEVEL LOG_WARNING  // The default log_level (higher than this are filtered out)


class Logger {
public:
	virtual void log(int priority, std::string_view str, bool with_priority, bool with_endl) = 0;

	virtual ~Logger() = default;
};


class StreamLogger : public Logger {
	std::ofstream ofs;

public:
	explicit StreamLogger(const char* filename)
		: ofs(filename, std::ofstream::out) { }

	void log(int priority, std::string_view str, bool with_priority, bool with_endl) override;
};


class StderrLogger : public Logger {
public:
	void log(int priority, std::string_view str, bool with_priority, bool with_endl) override;
};


class SysLog : public Logger {
public:
	SysLog(const char* ident="xapiand", int option=LOG_PID|LOG_CONS, int facility=LOG_USER);
	~SysLog();

	void log(int priority, std::string_view str, bool with_priority, bool with_endl) override;
};


class Log;


class Logging : public ScheduledTask {
	friend class Log;

	static Scheduler& scheduler();

	static std::mutex collected_mtx;
	static std::vector<std::pair<std::string, bool>> collected;

	static std::mutex stack_mtx;
	static std::unordered_map<std::thread::id, unsigned> stack_levels;

	std::thread::id thread_id;
	const char* function;
	const char* filename;
	int line;
	unsigned stack_level;

	bool clean;
	std::string str;
	BaseException exception;
	bool async;
	bool info;
	bool stacked;
	int priority;
	std::atomic_bool cleaned;

	Logging(Logging&&) = delete;
	Logging(const Logging&) = delete;
	Logging& operator=(Logging&&) = delete;
	Logging& operator=(const Logging&) = delete;

	static Log add(const char* function, const char* filename, int line, const std::string& str, const BaseException* exc, bool clean, const std::chrono::time_point<std::chrono::system_clock>& wakeup, bool async, bool info, bool stacked, int priority, const std::chrono::time_point<std::chrono::system_clock>& created_at = std::chrono::system_clock::now());
	static void log(int priority, std::string str, int indent=0, bool with_priority=true, bool with_endl=true);

public:
	static bool colors;
	static bool no_colors;

	static int log_level;
	static std::vector<std::unique_ptr<Logger>> handlers;

	Logging(const char *function, const char *filename, int line, std::string  str, const BaseException* exc, bool clean, bool async, bool info, bool stacked, int priority, const std::chrono::time_point<std::chrono::system_clock>& created_at = std::chrono::system_clock::now());
	~Logging();

	static std::string colorized(std::string_view str, bool try_coloring);
	static void finish(int wait=10);
	static void join();
	static void dump_collected();

	static void do_println(bool collect, bool with_endl, std::string_view format, fmt::printf_args args);
	static Log do_log(bool clean, const std::chrono::time_point<std::chrono::system_clock>& wakeup, bool async, bool info, bool stacked, int priority, const BaseException* exc, const char* function, const char* filename, int line, std::string_view format, fmt::printf_args args);

	template <typename... Args>
	bool unlog(int _priority, const char* _function, const char* _filename, int _line, std::string_view format, Args&&... args) {
		return vunlog(_priority, _function, _filename, _line, format, fmt::make_printf_args(std::forward<Args>(args)...));
	}
	bool vunlog(int _priority, const char* _function, const char* _filename, int _line, std::string_view format, fmt::printf_args args);

	void cleanup();

	long double age();

	void run() override;

	std::string __repr__() const override {
		return ScheduledTask::__repr__("Logging");
	}
};
