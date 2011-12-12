//--------------------------------------------------------------------------------------------------
//
// Copyright (c) 2008 - 2010 Vorne Industries
//
//--------------------------------------------------------------------------------------------------

#ifndef armcc_config_H
#define armcc_config_H

///-------------------------------------------------------------------------------------------------
///
/// This header file defines configuration options for boost, for the armcc compiler; only versions
/// "ARM/Thumb C/C++ Compiler, RVCT3.1 [Build 569]" and later are supported.  To determine the
/// compiler version, armcc --vsn was used.
///
///-------------------------------------------------------------------------------------------------

#define BOOST_HAS_STDINT_H 1
#define BOOST_NO_RVALUE_REFERENCES 1
#define BOOST_NO_VARIADIC_TEMPLATES 1
#define BOOST_NO_STATIC_ASSERT 1
#define BOOST_NO_DECLTYPE 1
#endif
