
#ifndef BOOST_MPL_AUX_RANGE_C_BACK_HPP_INCLUDED
#define BOOST_MPL_AUX_RANGE_C_BACK_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source: O:/Eng/ARM Firmware/boost/boost/mpl/aux_/range_c/rcs/back.hpp $
// $Date: 2008/10/10 00:12:47Z $
// $Revision: 1.1 $

#include <boost/mpl/back_fwd.hpp>
#include <boost/mpl/prior.hpp>
#include <boost/mpl/aux_/range_c/tag.hpp>

namespace boost { namespace mpl {

template<>
struct back_impl< aux::half_open_range_tag >
{
    template< typename Range > struct apply
    {
        typedef typename prior< typename Range::finish >::type type;
    };
};

}}

#endif // BOOST_MPL_AUX_RANGE_C_BACK_HPP_INCLUDED
