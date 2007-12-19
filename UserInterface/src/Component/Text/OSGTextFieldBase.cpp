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
 **     class TextField!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTFIELDINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTextFieldBase.h"
#include "OSGTextField.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TextFieldBase::HorizontalAlignmentFieldMask = 
    (TypeTraits<BitVector>::One << TextFieldBase::HorizontalAlignmentFieldId);

const OSG::BitVector  TextFieldBase::VerticalAlignmentFieldMask = 
    (TypeTraits<BitVector>::One << TextFieldBase::VerticalAlignmentFieldId);

const OSG::BitVector TextFieldBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          TextFieldBase::_sfHorizontalAlignment
    
*/
/*! \var Real32          TextFieldBase::_sfVerticalAlignment
    
*/

//! TextField description

FieldDescription *TextFieldBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "HorizontalAlignment", 
                     HorizontalAlignmentFieldId, HorizontalAlignmentFieldMask,
                     false,
                     (FieldAccessMethod) &TextFieldBase::getSFHorizontalAlignment),
    new FieldDescription(SFReal32::getClassType(), 
                     "VerticalAlignment", 
                     VerticalAlignmentFieldId, VerticalAlignmentFieldMask,
                     false,
                     (FieldAccessMethod) &TextFieldBase::getSFVerticalAlignment)
};


FieldContainerType TextFieldBase::_type(
    "TextField",
    "EditableTextComponent",
    NULL,
    (PrototypeCreateF) &TextFieldBase::createEmpty,
    TextField::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TextFieldBase, TextFieldPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextFieldBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TextFieldBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TextFieldBase::shallowCopy(void) const 
{ 
    TextFieldPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TextField *>(this)); 

    return returnValue; 
}

UInt32 TextFieldBase::getContainerSize(void) const 
{ 
    return sizeof(TextField); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TextFieldBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((TextFieldBase *) &other, whichField);
}
#else
void TextFieldBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TextFieldBase *) &other, whichField, sInfo);
}
void TextFieldBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TextFieldBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TextFieldBase::TextFieldBase(void) :
    _sfHorizontalAlignment    (Real32(0.0)), 
    _sfVerticalAlignment      (Real32(0.5)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TextFieldBase::TextFieldBase(const TextFieldBase &source) :
    _sfHorizontalAlignment    (source._sfHorizontalAlignment    ), 
    _sfVerticalAlignment      (source._sfVerticalAlignment      ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TextFieldBase::~TextFieldBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TextFieldBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        returnValue += _sfHorizontalAlignment.getBinSize();
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        returnValue += _sfVerticalAlignment.getBinSize();
    }


    return returnValue;
}

void TextFieldBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        _sfHorizontalAlignment.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        _sfVerticalAlignment.copyToBin(pMem);
    }


}

void TextFieldBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        _sfHorizontalAlignment.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        _sfVerticalAlignment.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TextFieldBase::executeSyncImpl(      TextFieldBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
        _sfHorizontalAlignment.syncWith(pOther->_sfHorizontalAlignment);

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
        _sfVerticalAlignment.syncWith(pOther->_sfVerticalAlignment);


}
#else
void TextFieldBase::executeSyncImpl(      TextFieldBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
        _sfHorizontalAlignment.syncWith(pOther->_sfHorizontalAlignment);

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
        _sfVerticalAlignment.syncWith(pOther->_sfVerticalAlignment);



}

void TextFieldBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<TextFieldPtr>::_type("TextFieldPtr", "EditableTextComponentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TextFieldPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TextFieldPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGTEXTFIELDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTEXTFIELDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTEXTFIELDFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

