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
 **     class Container!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECONTAINERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGContainerBase.h"
#include "OSGContainer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ContainerBase::ChildrenFieldMask = 
    (TypeTraits<BitVector>::One << ContainerBase::ChildrenFieldId);

const OSG::BitVector  ContainerBase::LayoutFieldMask = 
    (TypeTraits<BitVector>::One << ContainerBase::LayoutFieldId);

const OSG::BitVector  ContainerBase::LeftInsetFieldMask = 
    (TypeTraits<BitVector>::One << ContainerBase::LeftInsetFieldId);

const OSG::BitVector  ContainerBase::RightInsetFieldMask = 
    (TypeTraits<BitVector>::One << ContainerBase::RightInsetFieldId);

const OSG::BitVector  ContainerBase::TopInsetFieldMask = 
    (TypeTraits<BitVector>::One << ContainerBase::TopInsetFieldId);

const OSG::BitVector  ContainerBase::BottomInsetFieldMask = 
    (TypeTraits<BitVector>::One << ContainerBase::BottomInsetFieldId);

const OSG::BitVector ContainerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ComponentPtr    ContainerBase::_mfChildren
    
*/
/*! \var LayoutPtr       ContainerBase::_sfLayout
    
*/
/*! \var UInt32          ContainerBase::_sfLeftInset
    
*/
/*! \var UInt32          ContainerBase::_sfRightInset
    
*/
/*! \var UInt32          ContainerBase::_sfTopInset
    
*/
/*! \var UInt32          ContainerBase::_sfBottomInset
    
*/

//! Container description

FieldDescription *ContainerBase::_desc[] = 
{
    new FieldDescription(MFComponentPtr::getClassType(), 
                     "Children", 
                     ChildrenFieldId, ChildrenFieldMask,
                     false,
                     (FieldAccessMethod) &ContainerBase::getMFChildren),
    new FieldDescription(SFLayoutPtr::getClassType(), 
                     "Layout", 
                     LayoutFieldId, LayoutFieldMask,
                     false,
                     (FieldAccessMethod) &ContainerBase::getSFLayout),
    new FieldDescription(SFUInt32::getClassType(), 
                     "LeftInset", 
                     LeftInsetFieldId, LeftInsetFieldMask,
                     false,
                     (FieldAccessMethod) &ContainerBase::getSFLeftInset),
    new FieldDescription(SFUInt32::getClassType(), 
                     "RightInset", 
                     RightInsetFieldId, RightInsetFieldMask,
                     false,
                     (FieldAccessMethod) &ContainerBase::getSFRightInset),
    new FieldDescription(SFUInt32::getClassType(), 
                     "TopInset", 
                     TopInsetFieldId, TopInsetFieldMask,
                     false,
                     (FieldAccessMethod) &ContainerBase::getSFTopInset),
    new FieldDescription(SFUInt32::getClassType(), 
                     "BottomInset", 
                     BottomInsetFieldId, BottomInsetFieldMask,
                     false,
                     (FieldAccessMethod) &ContainerBase::getSFBottomInset)
};


FieldContainerType ContainerBase::_type(
    "Container",
    "Component",
    NULL,
    NULL, 
    Container::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ContainerBase, ContainerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ContainerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ContainerBase::getType(void) const 
{
    return _type;
} 


UInt32 ContainerBase::getContainerSize(void) const 
{ 
    return sizeof(Container); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ContainerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ContainerBase *) &other, whichField);
}
#else
void ContainerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ContainerBase *) &other, whichField, sInfo);
}
void ContainerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ContainerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfChildren.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ContainerBase::ContainerBase(void) :
    _mfChildren               (), 
    _sfLayout                 (), 
    _sfLeftInset              (UInt32(0)), 
    _sfRightInset             (UInt32(0)), 
    _sfTopInset               (UInt32(0)), 
    _sfBottomInset            (UInt32(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ContainerBase::ContainerBase(const ContainerBase &source) :
    _mfChildren               (source._mfChildren               ), 
    _sfLayout                 (source._sfLayout                 ), 
    _sfLeftInset              (source._sfLeftInset              ), 
    _sfRightInset             (source._sfRightInset             ), 
    _sfTopInset               (source._sfTopInset               ), 
    _sfBottomInset            (source._sfBottomInset            ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ContainerBase::~ContainerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ContainerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChildrenFieldMask & whichField))
    {
        returnValue += _mfChildren.getBinSize();
    }

    if(FieldBits::NoField != (LayoutFieldMask & whichField))
    {
        returnValue += _sfLayout.getBinSize();
    }

    if(FieldBits::NoField != (LeftInsetFieldMask & whichField))
    {
        returnValue += _sfLeftInset.getBinSize();
    }

    if(FieldBits::NoField != (RightInsetFieldMask & whichField))
    {
        returnValue += _sfRightInset.getBinSize();
    }

    if(FieldBits::NoField != (TopInsetFieldMask & whichField))
    {
        returnValue += _sfTopInset.getBinSize();
    }

    if(FieldBits::NoField != (BottomInsetFieldMask & whichField))
    {
        returnValue += _sfBottomInset.getBinSize();
    }


    return returnValue;
}

void ContainerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChildrenFieldMask & whichField))
    {
        _mfChildren.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LayoutFieldMask & whichField))
    {
        _sfLayout.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LeftInsetFieldMask & whichField))
    {
        _sfLeftInset.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RightInsetFieldMask & whichField))
    {
        _sfRightInset.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TopInsetFieldMask & whichField))
    {
        _sfTopInset.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BottomInsetFieldMask & whichField))
    {
        _sfBottomInset.copyToBin(pMem);
    }


}

void ContainerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChildrenFieldMask & whichField))
    {
        _mfChildren.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LayoutFieldMask & whichField))
    {
        _sfLayout.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LeftInsetFieldMask & whichField))
    {
        _sfLeftInset.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RightInsetFieldMask & whichField))
    {
        _sfRightInset.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TopInsetFieldMask & whichField))
    {
        _sfTopInset.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BottomInsetFieldMask & whichField))
    {
        _sfBottomInset.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ContainerBase::executeSyncImpl(      ContainerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ChildrenFieldMask & whichField))
        _mfChildren.syncWith(pOther->_mfChildren);

    if(FieldBits::NoField != (LayoutFieldMask & whichField))
        _sfLayout.syncWith(pOther->_sfLayout);

    if(FieldBits::NoField != (LeftInsetFieldMask & whichField))
        _sfLeftInset.syncWith(pOther->_sfLeftInset);

    if(FieldBits::NoField != (RightInsetFieldMask & whichField))
        _sfRightInset.syncWith(pOther->_sfRightInset);

    if(FieldBits::NoField != (TopInsetFieldMask & whichField))
        _sfTopInset.syncWith(pOther->_sfTopInset);

    if(FieldBits::NoField != (BottomInsetFieldMask & whichField))
        _sfBottomInset.syncWith(pOther->_sfBottomInset);


}
#else
void ContainerBase::executeSyncImpl(      ContainerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (LayoutFieldMask & whichField))
        _sfLayout.syncWith(pOther->_sfLayout);

    if(FieldBits::NoField != (LeftInsetFieldMask & whichField))
        _sfLeftInset.syncWith(pOther->_sfLeftInset);

    if(FieldBits::NoField != (RightInsetFieldMask & whichField))
        _sfRightInset.syncWith(pOther->_sfRightInset);

    if(FieldBits::NoField != (TopInsetFieldMask & whichField))
        _sfTopInset.syncWith(pOther->_sfTopInset);

    if(FieldBits::NoField != (BottomInsetFieldMask & whichField))
        _sfBottomInset.syncWith(pOther->_sfBottomInset);


    if(FieldBits::NoField != (ChildrenFieldMask & whichField))
        _mfChildren.syncWith(pOther->_mfChildren, sInfo);


}

void ContainerBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ChildrenFieldMask & whichField))
        _mfChildren.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ContainerPtr>::_type("ContainerPtr", "ComponentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ContainerPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ContainerPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGCONTAINERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCONTAINERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCONTAINERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
