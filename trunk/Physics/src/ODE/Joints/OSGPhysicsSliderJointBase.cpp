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
 **     Do not change this file, changes should be done in the derived      **
 **     class PhysicsSliderJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSSLIDERJOINTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include "OSGPhysicsSliderJointBase.h"
#include "OSGPhysicsSliderJoint.h"


OSG_USING_NAMESPACE

const OSG::BitVector  PhysicsSliderJointBase::AxisFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsSliderJointBase::AxisFieldId);

const OSG::BitVector PhysicsSliderJointBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec3f           PhysicsSliderJointBase::_sfAxis
    
*/

//! PhysicsSliderJoint description

FieldDescription *PhysicsSliderJointBase::_desc[] = 
{
    new FieldDescription(SFVec3f::getClassType(), 
                     "axis", 
                     AxisFieldId, AxisFieldMask,
                     false,
                     (FieldAccessMethod) &PhysicsSliderJointBase::getSFAxis)
};


FieldContainerType PhysicsSliderJointBase::_type(
    "PhysicsSliderJoint",
    "PhysicsJoint",
    NULL,
    (PrototypeCreateF) &PhysicsSliderJointBase::createEmpty,
    PhysicsSliderJoint::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsSliderJointBase, PhysicsSliderJointPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsSliderJointBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsSliderJointBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsSliderJointBase::shallowCopy(void) const 
{ 
    PhysicsSliderJointPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsSliderJoint *>(this)); 

    return returnValue; 
}

UInt32 PhysicsSliderJointBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsSliderJoint); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsSliderJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PhysicsSliderJointBase *) &other, whichField);
}
#else
void PhysicsSliderJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsSliderJointBase *) &other, whichField, sInfo);
}
void PhysicsSliderJointBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsSliderJointBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsSliderJointBase::PhysicsSliderJointBase(void) :
    _sfAxis                   (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsSliderJointBase::PhysicsSliderJointBase(const PhysicsSliderJointBase &source) :
    _sfAxis                   (source._sfAxis                   ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsSliderJointBase::~PhysicsSliderJointBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsSliderJointBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        returnValue += _sfAxis.getBinSize();
    }


    return returnValue;
}

void PhysicsSliderJointBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        _sfAxis.copyToBin(pMem);
    }


}

void PhysicsSliderJointBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        _sfAxis.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsSliderJointBase::executeSyncImpl(      PhysicsSliderJointBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
        _sfAxis.syncWith(pOther->_sfAxis);


}
#else
void PhysicsSliderJointBase::executeSyncImpl(      PhysicsSliderJointBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
        _sfAxis.syncWith(pOther->_sfAxis);



}

void PhysicsSliderJointBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PhysicsSliderJointPtr>::_type("PhysicsSliderJointPtr", "PhysicsJointPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsSliderJointPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsSliderJointPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGPhysicsSliderJointBase.cpp,v 1.2 2006/02/20 17:04:21 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGPHYSICSSLIDERJOINTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSSLIDERJOINTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSSLIDERJOINTFIELDS_HEADER_CVSID;
}

