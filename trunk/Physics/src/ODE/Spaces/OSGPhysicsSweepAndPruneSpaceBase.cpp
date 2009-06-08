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
 **     Do not change this file, changes should be done in the derived      **
 **     class PhysicsSweepAndPruneSpace!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSSWEEPANDPRUNESPACEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGPhysicsSweepAndPruneSpaceBase.h"
#include "OSGPhysicsSweepAndPruneSpace.h"

#include <ode/collision_space.h>          // AxisOrder default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  PhysicsSweepAndPruneSpaceBase::AxisOrderFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsSweepAndPruneSpaceBase::AxisOrderFieldId);

const OSG::BitVector PhysicsSweepAndPruneSpaceBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Int32           PhysicsSweepAndPruneSpaceBase::_sfAxisOrder
    
*/

//! PhysicsSweepAndPruneSpace description

FieldDescription *PhysicsSweepAndPruneSpaceBase::_desc[] = 
{
    new FieldDescription(SFInt32::getClassType(), 
                     "axisOrder", 
                     AxisOrderFieldId, AxisOrderFieldMask,
                     false,
                     (FieldAccessMethod) &PhysicsSweepAndPruneSpaceBase::getSFAxisOrder)
};


FieldContainerType PhysicsSweepAndPruneSpaceBase::_type(
    "PhysicsSweepAndPruneSpace",
    "PhysicsSpace",
    NULL,
    (PrototypeCreateF) &PhysicsSweepAndPruneSpaceBase::createEmpty,
    PhysicsSweepAndPruneSpace::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsSweepAndPruneSpaceBase, PhysicsSweepAndPruneSpacePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsSweepAndPruneSpaceBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsSweepAndPruneSpaceBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsSweepAndPruneSpaceBase::shallowCopy(void) const 
{ 
    PhysicsSweepAndPruneSpacePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsSweepAndPruneSpace *>(this)); 

    return returnValue; 
}

UInt32 PhysicsSweepAndPruneSpaceBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsSweepAndPruneSpace); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsSweepAndPruneSpaceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PhysicsSweepAndPruneSpaceBase *) &other, whichField);
}
#else
void PhysicsSweepAndPruneSpaceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsSweepAndPruneSpaceBase *) &other, whichField, sInfo);
}
void PhysicsSweepAndPruneSpaceBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsSweepAndPruneSpaceBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsSweepAndPruneSpaceBase::PhysicsSweepAndPruneSpaceBase(void) :
    _sfAxisOrder              (Int32(dSAP_AXES_XYZ)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsSweepAndPruneSpaceBase::PhysicsSweepAndPruneSpaceBase(const PhysicsSweepAndPruneSpaceBase &source) :
    _sfAxisOrder              (source._sfAxisOrder              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsSweepAndPruneSpaceBase::~PhysicsSweepAndPruneSpaceBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsSweepAndPruneSpaceBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AxisOrderFieldMask & whichField))
    {
        returnValue += _sfAxisOrder.getBinSize();
    }


    return returnValue;
}

void PhysicsSweepAndPruneSpaceBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AxisOrderFieldMask & whichField))
    {
        _sfAxisOrder.copyToBin(pMem);
    }


}

void PhysicsSweepAndPruneSpaceBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AxisOrderFieldMask & whichField))
    {
        _sfAxisOrder.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsSweepAndPruneSpaceBase::executeSyncImpl(      PhysicsSweepAndPruneSpaceBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AxisOrderFieldMask & whichField))
        _sfAxisOrder.syncWith(pOther->_sfAxisOrder);


}
#else
void PhysicsSweepAndPruneSpaceBase::executeSyncImpl(      PhysicsSweepAndPruneSpaceBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AxisOrderFieldMask & whichField))
        _sfAxisOrder.syncWith(pOther->_sfAxisOrder);



}

void PhysicsSweepAndPruneSpaceBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PhysicsSweepAndPruneSpacePtr>::_type("PhysicsSweepAndPruneSpacePtr", "PhysicsSpacePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsSweepAndPruneSpacePtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsSweepAndPruneSpacePtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGPHYSICSSWEEPANDPRUNESPACEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSSWEEPANDPRUNESPACEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSSWEEPANDPRUNESPACEFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

