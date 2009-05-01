/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

const OSG::BitVector  ContainerBase::InsetFieldMask = 
    (TypeTraits<BitVector>::One << ContainerBase::InsetFieldId);

const OSG::BitVector ContainerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ComponentPtr    ContainerBase::_mfChildren
    
*/
/*! \var LayoutPtr       ContainerBase::_sfLayout
    
*/
/*! \var Vec4f           ContainerBase::_sfInset
    
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
    new FieldDescription(SFVec4f::getClassType(), 
                     "Inset", 
                     InsetFieldId, InsetFieldMask,
                     false,
                     (FieldAccessMethod) &ContainerBase::getSFInset)
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
    _sfInset                  (Vec4f(0.0f,0.0f,0.0f,0.0f)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ContainerBase::ContainerBase(const ContainerBase &source) :
    _mfChildren               (source._mfChildren               ), 
    _sfLayout                 (source._sfLayout                 ), 
    _sfInset                  (source._sfInset                  ), 
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

    if(FieldBits::NoField != (InsetFieldMask & whichField))
    {
        returnValue += _sfInset.getBinSize();
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

    if(FieldBits::NoField != (InsetFieldMask & whichField))
    {
        _sfInset.copyToBin(pMem);
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

    if(FieldBits::NoField != (InsetFieldMask & whichField))
    {
        _sfInset.copyFromBin(pMem);
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

    if(FieldBits::NoField != (InsetFieldMask & whichField))
        _sfInset.syncWith(pOther->_sfInset);


}
#else
void ContainerBase::executeSyncImpl(      ContainerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (LayoutFieldMask & whichField))
        _sfLayout.syncWith(pOther->_sfLayout);

    if(FieldBits::NoField != (InsetFieldMask & whichField))
        _sfInset.syncWith(pOther->_sfInset);


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
