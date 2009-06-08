/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          www.vrac.iastate.edu                             *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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


#ifndef _OSGPHYSICSPISTONJOINTFIELDS_H_
#define _OSGPHYSICSPISTONJOINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "OSGPhysicsDef.h"

#include "OSGPhysicsJointFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsPistonJoint;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! PhysicsPistonJointPtr

typedef FCPtr<PhysicsJointPtr, PhysicsPistonJoint> PhysicsPistonJointPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpPhysicsFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<PhysicsPistonJointPtr> : 
    public FieldTraitsRecurseMapper<PhysicsPistonJointPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFPhysicsPistonJointPtr"; }
    static const char *getMName(void) { return "MFPhysicsPistonJointPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<PhysicsPistonJointPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpPhysicsFieldSingle */

typedef SField<PhysicsPistonJointPtr> SFPhysicsPistonJointPtr;
#endif

#ifndef OSG_COMPILEPHYSICSPISTONJOINTINST
OSG_DLLEXPORT_DECL1(SField, PhysicsPistonJointPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpPhysicsFieldMulti */

typedef MField<PhysicsPistonJointPtr> MFPhysicsPistonJointPtr;
#endif

#ifndef OSG_COMPILEPHYSICSPISTONJOINTINST
OSG_DLLEXPORT_DECL1(MField, PhysicsPistonJointPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGPHYSICSPISTONJOINTFIELDS_HEADER_CVSID "@(#)$Id: FCFieldsTemplate_h.h,v 1.26 2006/02/20 16:55:35 dirk Exp $"

#endif /* _OSGPHYSICSPISTONJOINTFIELDS_H_ */
