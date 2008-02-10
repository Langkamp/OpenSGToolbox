/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextUIDrawObjectBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextUIDrawObjectBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TextUIDrawObjectPtr TextUIDrawObjectBase::create(void) 
{
    TextUIDrawObjectPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TextUIDrawObjectPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TextUIDrawObjectPtr TextUIDrawObjectBase::createEmpty(void) 
{ 
    TextUIDrawObjectPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TextUIDrawObject::_sfPosition field.
inline
SFPnt2f *TextUIDrawObjectBase::getSFPosition(void)
{
    return &_sfPosition;
}

//! Get the TextUIDrawObject::_sfText field.
inline
SFString *TextUIDrawObjectBase::getSFText(void)
{
    return &_sfText;
}

//! Get the TextUIDrawObject::_sfFont field.
inline
SFUIFontPtr *TextUIDrawObjectBase::getSFFont(void)
{
    return &_sfFont;
}

//! Get the TextUIDrawObject::_sfColor field.
inline
SFColor4f *TextUIDrawObjectBase::getSFColor(void)
{
    return &_sfColor;
}

//! Get the TextUIDrawObject::_sfOpacity field.
inline
SFReal32 *TextUIDrawObjectBase::getSFOpacity(void)
{
    return &_sfOpacity;
}


//! Get the value of the TextUIDrawObject::_sfPosition field.
inline
Pnt2f &TextUIDrawObjectBase::getPosition(void)
{
    return _sfPosition.getValue();
}

//! Get the value of the TextUIDrawObject::_sfPosition field.
inline
const Pnt2f &TextUIDrawObjectBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

//! Set the value of the TextUIDrawObject::_sfPosition field.
inline
void TextUIDrawObjectBase::setPosition(const Pnt2f &value)
{
    _sfPosition.setValue(value);
}

//! Get the value of the TextUIDrawObject::_sfText field.
inline
std::string &TextUIDrawObjectBase::getText(void)
{
    return _sfText.getValue();
}

//! Get the value of the TextUIDrawObject::_sfText field.
inline
const std::string &TextUIDrawObjectBase::getText(void) const
{
    return _sfText.getValue();
}

//! Set the value of the TextUIDrawObject::_sfText field.
inline
void TextUIDrawObjectBase::setText(const std::string &value)
{
    _sfText.setValue(value);
}

//! Get the value of the TextUIDrawObject::_sfFont field.
inline
UIFontPtr &TextUIDrawObjectBase::getFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the TextUIDrawObject::_sfFont field.
inline
const UIFontPtr &TextUIDrawObjectBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the TextUIDrawObject::_sfFont field.
inline
void TextUIDrawObjectBase::setFont(const UIFontPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the TextUIDrawObject::_sfColor field.
inline
Color4f &TextUIDrawObjectBase::getColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the TextUIDrawObject::_sfColor field.
inline
const Color4f &TextUIDrawObjectBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the TextUIDrawObject::_sfColor field.
inline
void TextUIDrawObjectBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the TextUIDrawObject::_sfOpacity field.
inline
Real32 &TextUIDrawObjectBase::getOpacity(void)
{
    return _sfOpacity.getValue();
}

//! Get the value of the TextUIDrawObject::_sfOpacity field.
inline
const Real32 &TextUIDrawObjectBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the TextUIDrawObject::_sfOpacity field.
inline
void TextUIDrawObjectBase::setOpacity(const Real32 &value)
{
    _sfOpacity.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTEXTUIDRAWOBJECTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

