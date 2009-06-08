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
 **     class PhysicsSpace!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSSPACEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGPhysicsSpaceBase.h"
#include "OSGPhysicsSpace.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PhysicsSpaceBase::CleanupFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsSpaceBase::CleanupFieldId);

const OSG::BitVector  PhysicsSpaceBase::SublevelFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsSpaceBase::SublevelFieldId);

const OSG::BitVector  PhysicsSpaceBase::InternalParentHandlerFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsSpaceBase::InternalParentHandlerFieldId);

const OSG::BitVector PhysicsSpaceBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            PhysicsSpaceBase::_sfCleanup
    
*/
/*! \var Int32           PhysicsSpaceBase::_sfSublevel
    
*/
/*! \var PhysicsHandlerPtr PhysicsSpaceBase::_sfInternalParentHandler
    
*/

//! PhysicsSpace description

FieldDescription *PhysicsSpaceBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "cleanup", 
                     CleanupFieldId, CleanupFieldMask,
                     false,
                     (FieldAccessMethod) &PhysicsSpaceBase::getSFCleanup),
    new FieldDescription(SFInt32::getClassType(), 
                     "sublevel", 
                     SublevelFieldId, SublevelFieldMask,
                     false,
                     (FieldAccessMethod) &PhysicsSpaceBase::getSFSublevel),
    new FieldDescription(SFPhysicsHandlerPtr::getClassType(), 
                     "InternalParentHandler", 
                     InternalParentHandlerFieldId, InternalParentHandlerFieldMask,
                     false,
                     (FieldAccessMethod) &PhysicsSpaceBase::getSFInternalParentHandler)
};


FieldContainerType PhysicsSpaceBase::_type(
    "PhysicsSpace",
    "Attachment",
    NULL,
    (PrototypeCreateF) &PhysicsSpaceBase::createEmpty,
    PhysicsSpace::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsSpaceBase, PhysicsSpacePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsSpaceBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsSpaceBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsSpaceBase::shallowCopy(void) const 
{ 
    PhysicsSpacePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsSpace *>(this)); 

    return returnValue; 
}

UInt32 PhysicsSpaceBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsSpace); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsSpaceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PhysicsSpaceBase *) &other, whichField);
}
#else
void PhysicsSpaceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsSpaceBase *) &other, whichField, sInfo);
}
void PhysicsSpaceBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsSpaceBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsSpaceBase::PhysicsSpaceBase(void) :
    _sfCleanup                (), 
    _sfSublevel               (), 
    _sfInternalParentHandler  (PhysicsHandlerPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsSpaceBase::PhysicsSpaceBase(const PhysicsSpaceBase &source) :
    _sfCleanup                (source._sfCleanup                ), 
    _sfSublevel               (source._sfSublevel               ), 
    _sfInternalParentHandler  (source._sfInternalParentHandler  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsSpaceBase::~PhysicsSpaceBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsSpaceBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        returnValue += _sfCleanup.getBinSize();
    }

    if(FieldBits::NoField != (SublevelFieldMask & whichField))
    {
        returnValue += _sfSublevel.getBinSize();
    }

    if(FieldBits::NoField != (InternalParentHandlerFieldMask & whichField))
    {
        returnValue += _sfInternalParentHandler.getBinSize();
    }


    return returnValue;
}

void PhysicsSpaceBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        _sfCleanup.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SublevelFieldMask & whichField))
    {
        _sfSublevel.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalParentHandlerFieldMask & whichField))
    {
        _sfInternalParentHandler.copyToBin(pMem);
    }


}

void PhysicsSpaceBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        _sfCleanup.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SublevelFieldMask & whichField))
    {
        _sfSublevel.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalParentHandlerFieldMask & whichField))
    {
        _sfInternalParentHandler.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsSpaceBase::executeSyncImpl(      PhysicsSpaceBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CleanupFieldMask & whichField))
        _sfCleanup.syncWith(pOther->_sfCleanup);

    if(FieldBits::NoField != (SublevelFieldMask & whichField))
        _sfSublevel.syncWith(pOther->_sfSublevel);

    if(FieldBits::NoField != (InternalParentHandlerFieldMask & whichField))
        _sfInternalParentHandler.syncWith(pOther->_sfInternalParentHandler);


}
#else
void PhysicsSpaceBase::executeSyncImpl(      PhysicsSpaceBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CleanupFieldMask & whichField))
        _sfCleanup.syncWith(pOther->_sfCleanup);

    if(FieldBits::NoField != (SublevelFieldMask & whichField))
        _sfSublevel.syncWith(pOther->_sfSublevel);

    if(FieldBits::NoField != (InternalParentHandlerFieldMask & whichField))
        _sfInternalParentHandler.syncWith(pOther->_sfInternalParentHandler);



}

void PhysicsSpaceBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PhysicsSpacePtr>::_type("PhysicsSpacePtr", "AttachmentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsSpacePtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsSpacePtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGPHYSICSSPACEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSSPACEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSSPACEFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

