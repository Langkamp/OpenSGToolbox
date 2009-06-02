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
 **     class PhysicsSphereGeom!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSSPHEREGEOMINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include "OSGPhysicsSphereGeomBase.h"
#include "OSGPhysicsSphereGeom.h"


OSG_USING_NAMESPACE

const OSG::BitVector  PhysicsSphereGeomBase::RadiusFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsSphereGeomBase::RadiusFieldId);

const OSG::BitVector PhysicsSphereGeomBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          PhysicsSphereGeomBase::_sfRadius
    
*/

//! PhysicsSphereGeom description

FieldDescription *PhysicsSphereGeomBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "radius", 
                     RadiusFieldId, RadiusFieldMask,
                     false,
                     (FieldAccessMethod) &PhysicsSphereGeomBase::getSFRadius)
};


FieldContainerType PhysicsSphereGeomBase::_type(
    "PhysicsSphereGeom",
    "PhysicsGeom",
    NULL,
    (PrototypeCreateF) &PhysicsSphereGeomBase::createEmpty,
    PhysicsSphereGeom::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsSphereGeomBase, PhysicsSphereGeomPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsSphereGeomBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsSphereGeomBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsSphereGeomBase::shallowCopy(void) const 
{ 
    PhysicsSphereGeomPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsSphereGeom *>(this)); 

    return returnValue; 
}

UInt32 PhysicsSphereGeomBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsSphereGeom); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsSphereGeomBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PhysicsSphereGeomBase *) &other, whichField);
}
#else
void PhysicsSphereGeomBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsSphereGeomBase *) &other, whichField, sInfo);
}
void PhysicsSphereGeomBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsSphereGeomBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsSphereGeomBase::PhysicsSphereGeomBase(void) :
    _sfRadius                 (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsSphereGeomBase::PhysicsSphereGeomBase(const PhysicsSphereGeomBase &source) :
    _sfRadius                 (source._sfRadius                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsSphereGeomBase::~PhysicsSphereGeomBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsSphereGeomBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        returnValue += _sfRadius.getBinSize();
    }


    return returnValue;
}

void PhysicsSphereGeomBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        _sfRadius.copyToBin(pMem);
    }


}

void PhysicsSphereGeomBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        _sfRadius.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsSphereGeomBase::executeSyncImpl(      PhysicsSphereGeomBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
        _sfRadius.syncWith(pOther->_sfRadius);


}
#else
void PhysicsSphereGeomBase::executeSyncImpl(      PhysicsSphereGeomBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
        _sfRadius.syncWith(pOther->_sfRadius);



}

void PhysicsSphereGeomBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PhysicsSphereGeomPtr>::_type("PhysicsSphereGeomPtr", "PhysicsGeomPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsSphereGeomPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsSphereGeomPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGPhysicsSphereGeomBase.cpp,v 1.2 2006/02/20 17:04:21 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGPHYSICSSPHEREGEOMBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSSPHEREGEOMBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSSPHEREGEOMFIELDS_HEADER_CVSID;
}

