/*
 * Copyright (C) 2017 deipi.com LLC and contributors. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#pragma once

#include "circle.h"


// Intersection of circles.
class Convex : public Geometry {
	enum class Sign : uint8_t {
		MIXED     = 0b0000,
		POS       = 0b0001,
		NEG       = 0b0010,
		ZERO      = 0b0011,
	};

	std::vector<Circle> circles;
	Sign sign;

	int insideVertex(const Cartesian& v) const noexcept;
	bool intersectConstraint(const Constraint& bounding_circle) const;
	TypeTrixel verifyTrixel(const Cartesian& v0, const Cartesian& v1, const Cartesian& v2) const;

	void lookupTrixels(const Cartesian& v0, const Cartesian& v1, const Cartesian& v2, std::string name, trixel_data& info, uint8_t level, uint8_t Pp) const;
	void lookupTrixels(const Cartesian& v0, const Cartesian& v1, const Cartesian& v2, uint64_t id, range_data& info, uint8_t level, uint8_t Pp) const;

public:
	Convex()
		: Geometry(Type::CONVEX),
		  sign(Sign::ZERO) { }

	Convex(Convex&& convex) noexcept
		: Geometry(std::move(convex)),
		  circles(std::move(convex.circles)),
		  sign(std::move(convex.sign)) { }

	Convex(const Convex& convex)
		: Geometry(convex),
		  circles(convex.circles),
		  sign(convex.sign) { }

	~Convex() = default;

	Convex& operator=(Convex&& convex) noexcept {
		Geometry::operator=(std::move(convex));
		circles = std::move(convex.circles);
		sign = std::move(convex.sign);
		return *this;
	}

	Convex& operator=(const Convex& convex) {
		Geometry::operator=(convex);
		circles = convex.circles;
		sign = convex.sign;
		return *this;
	}

	template <typename T, typename = std::enable_if_t<std::is_same<Circle, std::decay_t<T>>::value>>
	void add(T&& circle) {
		sign = static_cast<Convex::Sign>(static_cast<uint8_t>(sign) & static_cast<uint8_t>(circle.constraint.sign));
		circles.push_back(std::forward<T>(circle));
	}

	const std::vector<Circle>& getCircles() const noexcept {
		return circles;
	}

	void simplify();

	std::string toWKT() const override;
	std::string to_string() const override;
	std::vector<std::string> getTrixels(bool partials, double error) const override;
	std::vector<range_t> getRanges(bool partials, double error) const override;
};