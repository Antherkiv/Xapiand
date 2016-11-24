//
// MessagePack for C++ static resolution routine
//
// Copyright (C) 2008-2009 FURUHASHI Sadayuki
//
//    Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//    http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef MSGPACK_TYPE_BOOL_HPP
#define MSGPACK_TYPE_BOOL_HPP

#include "../versioning.hpp"
#include "adaptor_base.hpp"

namespace msgpack {

/// @cond
MSGPACK_API_VERSION_NAMESPACE(v1) {
/// @endcond

namespace adaptor {

template <>
struct convert<bool> {
    msgpack::object const& operator()(msgpack::object const& o, bool& v) const {
        if(o.type != msgpack::type::BOOLEAN) { THROW(msgpack::type_error); }
        v = o.via.boolean;
        return o;
    }
};

template <>
struct pack<bool> {
    template <typename Stream>
    msgpack::packer<Stream>& operator()(msgpack::packer<Stream>& o, const bool& v) const {
        if(v) { o.pack_true(); }
        else { o.pack_false(); }
        return o;
    }
};

template <>
struct object<bool> {
    void operator()(msgpack::object& o, bool v) const {
        o.type = msgpack::type::BOOLEAN;
        o.via.boolean = v;
    }
};

template <>
struct object_with_zone<bool> {
    void operator()(msgpack::object::with_zone& o, bool v) const {
        static_cast<msgpack::object&>(o) << v;
    }
};

} // namespace adaptor

/// @cond
}  // MSGPACK_API_VERSION_NAMESPACE(v1)
/// @endcond

}  // namespace msgpack

#endif // MSGPACK_TYPE_BOOL_HPP
