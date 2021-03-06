/** 
 *  Copyright (c) 1999~2017, Altibase Corp. and/or its affiliates. All rights reserved.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License, version 3,
 *  as published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
 
/***********************************************************************
 * $Id: aciConvReplaceCharMap.h 11319 2010-06-23 02:39:42Z djin $
 **********************************************************************/
/*
 * Description :
 *     gNlsReplaceCharMap : UNICODE를 다른 charset으로 변환시 대체문자표
 *
 *     대체문자 유니코드 범위 : U+0000 ~ U+212A
 **********************************************************************/

#ifndef _O_ACICONVREPLACECHARMAP_H_
#define _O_ACICONVREPLACECHARMAP_H_ 1

#include <acpTypes.h>

ACP_EXTERN_C_BEGIN

/* 0x212B 이후의 유니코드에 대해서는 대체 문자 문자가 의미가 없음 */
#define ACICONV_NLS_REPLACE_UNICODE_MAX     (0x212B)  /*  8491 */


ACP_EXTERN_C_END

#endif /* _O_ACICONVREPLACECHARMAP_H_ */

 
