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
 **     class TextUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTUIDRAWOBJECTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTextUIDrawObjectBase.h"
#include "OSGTextUIDrawObject.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TextUIDrawObjectBase::PositionFieldMask = 
    (TypeTraits<BitVector>::One << TextUIDrawObjectBase::PositionFieldId);

const OSG::BitVector  TextUIDrawObjectBase::TextFieldMask = 
    (TypeTraits<BitVector>::One << TextUIDrawObjectBase::TextFieldId);

const OSG::BitVector  TextUIDrawObjectBase::FontFieldMask = 
    (TypeTraits<BitVector>::One << TextUIDrawObjectBase::FontFieldId);

const OSG::BitVector  TextUIDrawObjectBase::ColorFieldMask = 
    (TypeTraits<BitVector>::One << TextUIDrawObjectBase::ColorFieldId);

const OSG::BitVector  TextUIDrawObjectBase::OpacityFieldMask = 
    (TypeTraits<BitVector>::One << TextUIDrawObjectBase::OpacityFieldId);

const OSG::BitVector TextUIDrawObjectBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt2f           TextUIDrawObjectBase::_sfPosition
    
*/
/*! \var std::string     TextUIDrawObjectBase::_sfText
    
*/
/*! \var UIFontPtr       TextUIDrawObjectBase::_sfFont
    
*/
/*! \var Color4f         TextUIDrawObjectBase::_sfColor
    
*/
/*! \var Real32          TextUIDrawObjectBase::_sfOpacity
    
*/

//! TextUIDrawObject description

FieldDescription *TextUIDrawObjectBase::_desc[] = 
{
    new FieldDescription(SFPnt2f::getClassType(), 
                     "Position", 
                     PositionFieldId, PositionFieldMask,
                     false,
                     (FieldAccessMethod) &TextUIDrawObjectBase::getSFPosition),
    new FieldDescription(SFString::getClassType(), 
                     "Text", 
                     TextFieldId, TextFieldMask,
                     false,
                     (FieldAccessMethod) &TextUIDrawObjectBase::getSFText),
    new FieldDescription(SFUIFontPtr::getClassType(), 
                     "Font", 
                     FontFieldId, FontFieldMask,
                     false,
                     (FieldAccessMethod) &TextUIDrawObjectBase::getSFFont),
    new FieldDescription(SFColor4f::getClassType(), 
                     "Color", 
                     ColorFieldId, ColorFieldMask,
                     false,
                     (FieldAccessMethod) &TextUIDrawObjectBase::getSFColor),
    new FieldDescription(SFReal32::getClassType(), 
                     "Opacity", 
                     OpacityFieldId, OpacityFieldMask,
                     false,
                     (FieldAccessMethod) &TextUIDrawObjectBase::getSFOpacity)
};


FieldContainerType TextUIDrawObjectBase::_type(
    "TextUIDrawObject",
    "UIDrawObject",
    NULL,
    (PrototypeCreateF) &TextUIDrawObjectBase::createEmpty,
    TextUIDrawObject::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TextUIDrawObjectBase, TextUIDrawObjectPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextUIDrawObjectBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TextUIDrawObjectBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TextUIDrawObjectBase::shallowCopy(void) const 
{ 
    TextUIDrawObjectPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TextUIDrawObject *>(this)); 

    return returnValue; 
}

UInt32 TextUIDrawObjectBase::getContainerSize(void) const 
{ 
    return sizeof(TextUIDrawObject); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TextUIDrawObjectBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((TextUIDrawObjectBase *) &other, whichField);
}
#else
void TextUIDrawObjectBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TextUIDrawObjectBase *) &other, whichField, sInfo);
}
void TextUIDrawObjectBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TextUIDrawObjectBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TextUIDrawObjectBase::TextUIDrawObjectBase(void) :
    _sfPosition               (Pnt2f(0,0)), 
    _sfText                   (), 
    _sfFont                   (), 
    _sfColor                  (Color4f(1.0,1.0,1.0,1.0)), 
    _sfOpacity                (Real32(1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TextUIDrawObjectBase::TextUIDrawObjectBase(const TextUIDrawObjectBase &source) :
    _sfPosition               (source._sfPosition               ), 
    _sfText                   (source._sfText                   ), 
    _sfFont                   (source._sfFont                   ), 
    _sfColor                  (source._sfColor                  ), 
    _sfOpacity                (source._sfOpacity                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TextUIDrawObjectBase::~TextUIDrawObjectBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TextUIDrawObjectBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        returnValue += _sfText.getBinSize();
    }

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        returnValue += _sfFont.getBinSize();
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        returnValue += _sfOpacity.getBinSize();
    }


    return returnValue;
}

void TextUIDrawObjectBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        _sfText.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        _sfOpacity.copyToBin(pMem);
    }


}

void TextUIDrawObjectBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        _sfText.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        _sfOpacity.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TextUIDrawObjectBase::executeSyncImpl(      TextUIDrawObjectBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pOther->_sfPosition);

    if(FieldBits::NoField != (TextFieldMask & whichField))
        _sfText.syncWith(pOther->_sfText);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pOther->_sfFont);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pOther->_sfOpacity);


}
#else
void TextUIDrawObjectBase::executeSyncImpl(      TextUIDrawObjectBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pOther->_sfPosition);

    if(FieldBits::NoField != (TextFieldMask & whichField))
        _sfText.syncWith(pOther->_sfText);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pOther->_sfFont);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pOther->_sfOpacity);



}

void TextUIDrawObjectBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<TextUIDrawObjectPtr>::_type("TextUIDrawObjectPtr", "UIDrawObjectPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TextUIDrawObjectPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TextUIDrawObjectPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGTEXTUIDRAWOBJECTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTEXTUIDRAWOBJECTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTEXTUIDRAWOBJECTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

