/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGKEYFRAMESEQUENCESTRINGFIELDS_H_
#define _OSGKEYFRAMESEQUENCESTRINGFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>

#include "OSGKeyframeSequenceFields.h"

OSG_BEGIN_NAMESPACE

class KeyframeSequenceString;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! KeyframeSequenceStringPtr

typedef FCPtr<KeyframeSequencePtr, KeyframeSequenceString> KeyframeSequenceStringPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<KeyframeSequenceStringPtr> : 
    public FieldTraitsRecurseMapper<KeyframeSequenceStringPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType &getType (void) { return _type;        }

    static char     *getSName(void) { return "SFKeyframeSequenceStringPtr"; }
    static char     *getMName(void) { return "MFKeyframeSequenceStringPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<KeyframeSequenceStringPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
typedef SField<KeyframeSequenceStringPtr> SFKeyframeSequenceStringPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
typedef MField<KeyframeSequenceStringPtr> MFKeyframeSequenceStringPtr;
#endif

OSG_END_NAMESPACE

#define OSGKEYFRAMESEQUENCESTRINGFIELDS_HEADER_CVSID "@(#)$Id: FCFieldsTemplate_h.h,v 1.25 2005/04/04 14:51:48 dirk Exp $"

#endif /* _OSGKEYFRAMESEQUENCESTRINGFIELDS_H_ */