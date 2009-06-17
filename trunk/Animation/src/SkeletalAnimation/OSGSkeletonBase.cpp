/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class Skeleton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESKELETONINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSkeletonBase.h"
#include "OSGSkeleton.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SkeletonBase::RootJointsFieldMask = 
    (TypeTraits<BitVector>::One << SkeletonBase::RootJointsFieldId);

const OSG::BitVector SkeletonBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var JointPtr        SkeletonBase::_mfRootJoints
    
*/

//! Skeleton description

FieldDescription *SkeletonBase::_desc[] = 
{
    new FieldDescription(MFJointPtr::getClassType(), 
                     "RootJoints", 
                     RootJointsFieldId, RootJointsFieldMask,
                     false,
                     (FieldAccessMethod) &SkeletonBase::getMFRootJoints)
};


FieldContainerType SkeletonBase::_type(
    "Skeleton",
    "AttachmentContainer",
    NULL,
    (PrototypeCreateF) &SkeletonBase::createEmpty,
    Skeleton::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SkeletonBase, SkeletonPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SkeletonBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SkeletonBase::shallowCopy(void) const 
{ 
    SkeletonPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Skeleton *>(this)); 

    return returnValue; 
}

UInt32 SkeletonBase::getContainerSize(void) const 
{ 
    return sizeof(Skeleton); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SkeletonBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SkeletonBase *) &other, whichField);
}
#else
void SkeletonBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SkeletonBase *) &other, whichField, sInfo);
}
void SkeletonBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SkeletonBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfRootJoints.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SkeletonBase::SkeletonBase(void) :
    _mfRootJoints             (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SkeletonBase::SkeletonBase(const SkeletonBase &source) :
    _mfRootJoints             (source._mfRootJoints             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SkeletonBase::~SkeletonBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SkeletonBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
    {
        returnValue += _mfRootJoints.getBinSize();
    }


    return returnValue;
}

void SkeletonBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
    {
        _mfRootJoints.copyToBin(pMem);
    }


}

void SkeletonBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
    {
        _mfRootJoints.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SkeletonBase::executeSyncImpl(      SkeletonBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
        _mfRootJoints.syncWith(pOther->_mfRootJoints);


}
#else
void SkeletonBase::executeSyncImpl(      SkeletonBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
        _mfRootJoints.syncWith(pOther->_mfRootJoints, sInfo);


}

void SkeletonBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
        _mfRootJoints.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SkeletonPtr>::_type("SkeletonPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SkeletonPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SkeletonPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGSKELETONBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSKELETONBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSKELETONFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

