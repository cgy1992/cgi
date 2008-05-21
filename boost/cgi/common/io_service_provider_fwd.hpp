//            -- io_service_provider_fwd.hpp --
//
//            Copyright (c) Darren Garvey 2007.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
//
////////////////////////////////////////////////////////////////
#ifndef CGI_IO_SERVICE_PROVIDER_FWD_HPP_INCLUDED__
#define CGI_IO_SERVICE_PROVIDER_FWD_HPP_INCLUDED__

#if _MSC_VER > 1020
#pragma once
#endif

#include "boost/cgi/tags.hpp"

namespace cgi {
 namespace common {

   template<typename = tags::single_service>
   class io_service_provider;

 } // namespace common
} // namespace cgi

#endif // CGI_IO_SERVICE_PROVIDER_FWD_HPP_INCLUDED__
