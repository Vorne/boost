
#ifndef BOOST_MPL_FRONT_INSERTER_HPP_INCLUDED
#define BOOST_MPL_FRONT_INSERTER_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2003-2004
// Copyright David Abrahams 2003-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source: O:/Eng/ARM Firmware/boost/boost/mpl/rcs/front_inserter.hpp $
// $Date: 2008/10/10 00:13:24Z $
// $Revision: 1.1 $

#include <boost/mpl/push_front.hpp>
#include <boost/mpl/inserter.hpp>

namespace boost { namespace mpl {

template<
      typename Sequence
    >
struct front_inserter
    : inserter< Sequence,push_front<> >
{
};

}}

#endif // BOOST_MPL_FRONT_INSERTER_HPP_INCLUDED