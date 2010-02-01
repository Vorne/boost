//--------------------------------------------------------------------------------------------------
//
// Copyright (c) 2008 Vorne Industries
//
// $Id: armcc_config.h 1.1 2008/09/25 23:50:11Z phowell Exp $
//
// VERSION HISTORY
// ---------------
// $Log: armcc_config.h $
// Revision 1.1  2008/09/25 23:50:11Z  phowell
// Initial revision
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

#endif
