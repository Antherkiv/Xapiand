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

#include "xapiand.h"


#ifdef XAPIAND_CLUSTERING

#include "server_base.h"


class Binary;
class Endpoint;


// Binary Server
class BinaryServer : public BaseServer {
	friend Binary;

	std::shared_ptr<Binary> binary;

	ev::async signal_async;

	void signal_async_cb(ev::async& watcher, int revents);

public:
	std::string __repr__() const override {
		return Worker::__repr__("BinaryServer");
	}

	BinaryServer(const std::shared_ptr<XapiandServer>& server_, ev::loop_ref* ev_loop_, unsigned int ev_flags_, const std::shared_ptr<Binary>& binary_);

	~BinaryServer();

	void io_accept_cb(ev::io& watcher, int revents) override;

	bool trigger_replication(const Endpoint& src_endpoint, const Endpoint& dst_endpoint);
};


#endif /* XAPIAND_CLUSTERING */
