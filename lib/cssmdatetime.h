/*
 * Copyright (c) 1997-2002,2004 Apple Computer, Inc. All Rights Reserved.
 * 
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */


/*
 *  cssmdatetime.h -- defines for the CSSM date and time utilities for the Mac
 */
#ifndef _SECURITY_CSSMDATETIME_H_
#define _SECURITY_CSSMDATETIME_H_

#include <Security/cssm.h>

namespace Security
{

namespace CSSMDateTimeUtils
{

// Get the current time.
extern void GetCurrentMacLongDateTime(SInt64 &outMacDate);

extern void TimeStringToMacSeconds(const CSSM_DATA &inUTCTime, UInt32 &ioMacDate);
extern void TimeStringToMacLongDateTime(const CSSM_DATA &inUTCTime, SInt64 &outMacDate);

// Length of inLength is an input parameter and must be 14 or 16.
// The outData parameter must point to a buffer of at least inLength bytes.
extern void MacSecondsToTimeString(UInt32 inMacDate, UInt32 inLength, void *outData);
extern void MacLongDateTimeToTimeString(const SInt64 &inMacDate,
                                        UInt32 inLength, void *outData);

} // end namespace CSSMDateTimeUtils

} // end namespace Security

#endif // !_SECURITY_CSSMDATETIME_H_
