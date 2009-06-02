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
 **     class PhysicsHandler!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSHANDLERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include "OSGPhysicsHandlerBase.h"
#include "OSGPhysicsHandler.h"


OSG_USING_NAMESPACE

const OSG::BitVector  PhysicsHandlerBase::WorldFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsHandlerBase::WorldFieldId);

const OSG::BitVector  PhysicsHandlerBase::SpaceFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsHandlerBase::SpaceFieldId);

const OSG::BitVector PhysicsHandlerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var PhysicsWorldPtr PhysicsHandlerBase::_sfWorld
    
*/
/*! \var PhysicsSpacePtr PhysicsHandlerBase::_sfSpace
    
*/

//! PhysicsHandler description

FieldDescription *PhysicsHandlerBase::_desc[] = 
{
    new FieldDescription(SFPhysicsWorldPtr::getClassType(), 
                     "world", 
                     WorldFieldId, WorldFieldMask,
                     false,
                     (FieldAccessMethod) &PhysicsHandlerBase::getSFWorld),
    new FieldDescription(SFPhysicsSpacePtr::getClassType(), 
                     "space", 
                     SpaceFieldId, SpaceFieldMask,
                     false,
                     (FieldAccessMethod) &PhysicsHandlerBase::getSFSpace)
};


FieldContainerType PhysicsHandlerBase::_type(
    "PhysicsHandler",
    "Attachment",
    NULL,
    (PrototypeCreateF) &PhysicsHandlerBase::createEmpty,
    PhysicsHandler::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsHandlerBase, PhysicsHandlerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsHandlerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsHandlerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsHandlerBase::shallowCopy(void) const 
{ 
    PhysicsHandlerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsHandler *>(this)); 

    return returnValue; 
}

UInt32 PhysicsHandlerBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsHandler); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsHandlerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PhysicsHandlerBase *) &other, whichField);
}
#else
void PhysicsHandlerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsHandlerBase *) &other, whichField, sInfo);
}
void PhysicsHandlerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsHandlerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsHandlerBase::PhysicsHandlerBase(void) :
    _sfWorld                  (PhysicsWorldPtr(NullFC)), 
    _sfSpace                  (PhysicsSpacePtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsHandlerBase::PhysicsHandlerBase(const PhysicsHandlerBase &source) :
    _sfWorld                  (source._sfWorld                  ), 
    _sfSpace                  (source._sfSpace                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsHandlerBase::~PhysicsHandlerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsHandlerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        returnValue += _sfWorld.getBinSize();
    }

    if(FieldBits::NoField != (SpaceFieldMask & whichField))
    {
        returnValue += _sfSpace.getBinSize();
    }


    return returnValue;
}

void PhysicsHandlerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        _sfWorld.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SpaceFieldMask & whichField))
    {
        _sfSpace.copyToBin(pMem);
    }


}

void PhysicsHandlerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        _sfWorld.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SpaceFieldMask & whichField))
    {
        _sfSpace.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsHandlerBase::executeSyncImpl(      PhysicsHandlerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
        _sfWorld.syncWith(pOther->_sfWorld);

    if(FieldBits::NoField != (SpaceFieldMask & whichField))
        _sfSpace.syncWith(pOther->_sfSpace);


}
#else
void PhysicsHandlerBase::executeSyncImpl(      PhysicsHandlerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
        _sfWorld.syncWith(pOther->_sfWorld);

    if(FieldBits::NoField != (SpaceFieldMask & whichField))
        _sfSpace.syncWith(pOther->_sfSpace);



}

void PhysicsHandlerBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PhysicsHandlerPtr>::_type("PhysicsHandlerPtr", "AttachmentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsHandlerPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsHandlerPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGPhysicsHandlerBase.cpp,v 1.2 2006/02/20 17:04:21 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGPHYSICSHANDLERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSHANDLERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSHANDLERFIELDS_HEADER_CVSID;
}

