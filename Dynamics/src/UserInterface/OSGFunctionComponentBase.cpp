/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
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
 **     class FunctionComponent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFUNCTIONCOMPONENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGFunctionComponentBase.h"
#include "OSGFunctionComponent.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  FunctionComponentBase::FunctionFieldMask = 
    (TypeTraits<BitVector>::One << FunctionComponentBase::FunctionFieldId);

const OSG::BitVector  FunctionComponentBase::FontFieldMask = 
    (TypeTraits<BitVector>::One << FunctionComponentBase::FontFieldId);

const OSG::BitVector  FunctionComponentBase::FocusedTextColorFieldMask = 
    (TypeTraits<BitVector>::One << FunctionComponentBase::FocusedTextColorFieldId);

const OSG::BitVector  FunctionComponentBase::RolloverTextColorFieldMask = 
    (TypeTraits<BitVector>::One << FunctionComponentBase::RolloverTextColorFieldId);

const OSG::BitVector  FunctionComponentBase::DisabledTextColorFieldMask = 
    (TypeTraits<BitVector>::One << FunctionComponentBase::DisabledTextColorFieldId);

const OSG::BitVector  FunctionComponentBase::TextColorFieldMask = 
    (TypeTraits<BitVector>::One << FunctionComponentBase::TextColorFieldId);

const OSG::BitVector FunctionComponentBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var FunctionPtr     FunctionComponentBase::_sfFunction
    
*/
/*! \var UIFontPtr       FunctionComponentBase::_sfFont
    
*/
/*! \var Color4f         FunctionComponentBase::_sfFocusedTextColor
    
*/
/*! \var Color4f         FunctionComponentBase::_sfRolloverTextColor
    
*/
/*! \var Color4f         FunctionComponentBase::_sfDisabledTextColor
    
*/
/*! \var Color4f         FunctionComponentBase::_sfTextColor
    
*/

//! FunctionComponent description

FieldDescription *FunctionComponentBase::_desc[] = 
{
    new FieldDescription(SFFunctionPtr::getClassType(), 
                     "Function", 
                     FunctionFieldId, FunctionFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionComponentBase::getSFFunction),
    new FieldDescription(SFUIFontPtr::getClassType(), 
                     "Font", 
                     FontFieldId, FontFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionComponentBase::getSFFont),
    new FieldDescription(SFColor4f::getClassType(), 
                     "FocusedTextColor", 
                     FocusedTextColorFieldId, FocusedTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionComponentBase::getSFFocusedTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "RolloverTextColor", 
                     RolloverTextColorFieldId, RolloverTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionComponentBase::getSFRolloverTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "DisabledTextColor", 
                     DisabledTextColorFieldId, DisabledTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionComponentBase::getSFDisabledTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "TextColor", 
                     TextColorFieldId, TextColorFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionComponentBase::getSFTextColor)
};


FieldContainerType FunctionComponentBase::_type(
    "FunctionComponent",
    "Component",
    NULL,
    (PrototypeCreateF) &FunctionComponentBase::createEmpty,
    FunctionComponent::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(FunctionComponentBase, FunctionComponentPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FunctionComponentBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FunctionComponentBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FunctionComponentBase::shallowCopy(void) const 
{ 
    FunctionComponentPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FunctionComponent *>(this)); 

    return returnValue; 
}

UInt32 FunctionComponentBase::getContainerSize(void) const 
{ 
    return sizeof(FunctionComponent); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FunctionComponentBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((FunctionComponentBase *) &other, whichField);
}
#else
void FunctionComponentBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FunctionComponentBase *) &other, whichField, sInfo);
}
void FunctionComponentBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FunctionComponentBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FunctionComponentBase::FunctionComponentBase(void) :
    _sfFunction               (), 
    _sfFont                   (), 
    _sfFocusedTextColor       (), 
    _sfRolloverTextColor      (), 
    _sfDisabledTextColor      (), 
    _sfTextColor              (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

FunctionComponentBase::FunctionComponentBase(const FunctionComponentBase &source) :
    _sfFunction               (source._sfFunction               ), 
    _sfFont                   (source._sfFont                   ), 
    _sfFocusedTextColor       (source._sfFocusedTextColor       ), 
    _sfRolloverTextColor      (source._sfRolloverTextColor      ), 
    _sfDisabledTextColor      (source._sfDisabledTextColor      ), 
    _sfTextColor              (source._sfTextColor              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FunctionComponentBase::~FunctionComponentBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FunctionComponentBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FunctionFieldMask & whichField))
    {
        returnValue += _sfFunction.getBinSize();
    }

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        returnValue += _sfFont.getBinSize();
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        returnValue += _sfFocusedTextColor.getBinSize();
    }

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        returnValue += _sfRolloverTextColor.getBinSize();
    }

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        returnValue += _sfDisabledTextColor.getBinSize();
    }

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        returnValue += _sfTextColor.getBinSize();
    }


    return returnValue;
}

void FunctionComponentBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FunctionFieldMask & whichField))
    {
        _sfFunction.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        _sfRolloverTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        _sfDisabledTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyToBin(pMem);
    }


}

void FunctionComponentBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FunctionFieldMask & whichField))
    {
        _sfFunction.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        _sfRolloverTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        _sfDisabledTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FunctionComponentBase::executeSyncImpl(      FunctionComponentBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FunctionFieldMask & whichField))
        _sfFunction.syncWith(pOther->_sfFunction);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pOther->_sfFont);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pOther->_sfFocusedTextColor);

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
        _sfRolloverTextColor.syncWith(pOther->_sfRolloverTextColor);

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
        _sfDisabledTextColor.syncWith(pOther->_sfDisabledTextColor);

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
        _sfTextColor.syncWith(pOther->_sfTextColor);


}
#else
void FunctionComponentBase::executeSyncImpl(      FunctionComponentBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (FunctionFieldMask & whichField))
        _sfFunction.syncWith(pOther->_sfFunction);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pOther->_sfFont);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pOther->_sfFocusedTextColor);

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
        _sfRolloverTextColor.syncWith(pOther->_sfRolloverTextColor);

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
        _sfDisabledTextColor.syncWith(pOther->_sfDisabledTextColor);

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
        _sfTextColor.syncWith(pOther->_sfTextColor);



}

void FunctionComponentBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<FunctionComponentPtr>::_type("FunctionComponentPtr", "ComponentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FunctionComponentPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(FunctionComponentPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGFUNCTIONCOMPONENTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFUNCTIONCOMPONENTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFUNCTIONCOMPONENTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
