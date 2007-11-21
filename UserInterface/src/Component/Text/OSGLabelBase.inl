/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
 **     class Label!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LabelBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LabelBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LabelPtr LabelBase::create(void) 
{
    LabelPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LabelPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LabelPtr LabelBase::createEmpty(void) 
{ 
    LabelPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Label::_sfFont field.
inline
SFUIFontPtr *LabelBase::getSFFont(void)
{
    return &_sfFont;
}

//! Get the Label::_sfText field.
inline
SFString *LabelBase::getSFText(void)
{
    return &_sfText;
}

//! Get the Label::_sfVerticalAlignment field.
inline
SFReal32 *LabelBase::getSFVerticalAlignment(void)
{
    return &_sfVerticalAlignment;
}

//! Get the Label::_sfHorizontalAlignment field.
inline
SFReal32 *LabelBase::getSFHorizontalAlignment(void)
{
    return &_sfHorizontalAlignment;
}

//! Get the Label::_sfActiveTextColor field.
inline
SFColor4f *LabelBase::getSFActiveTextColor(void)
{
    return &_sfActiveTextColor;
}

//! Get the Label::_sfFocusedTextColor field.
inline
SFColor4f *LabelBase::getSFFocusedTextColor(void)
{
    return &_sfFocusedTextColor;
}

//! Get the Label::_sfRolloverTextColor field.
inline
SFColor4f *LabelBase::getSFRolloverTextColor(void)
{
    return &_sfRolloverTextColor;
}

//! Get the Label::_sfDisabledTextColor field.
inline
SFColor4f *LabelBase::getSFDisabledTextColor(void)
{
    return &_sfDisabledTextColor;
}

//! Get the Label::_sfTextColor field.
inline
SFColor4f *LabelBase::getSFTextColor(void)
{
    return &_sfTextColor;
}


//! Get the value of the Label::_sfFont field.
inline
UIFontPtr &LabelBase::getFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the Label::_sfFont field.
inline
const UIFontPtr &LabelBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the Label::_sfFont field.
inline
void LabelBase::setFont(const UIFontPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the Label::_sfText field.
inline
std::string &LabelBase::getText(void)
{
    return _sfText.getValue();
}

//! Get the value of the Label::_sfText field.
inline
const std::string &LabelBase::getText(void) const
{
    return _sfText.getValue();
}

//! Set the value of the Label::_sfText field.
inline
void LabelBase::setText(const std::string &value)
{
    _sfText.setValue(value);
}

//! Get the value of the Label::_sfVerticalAlignment field.
inline
Real32 &LabelBase::getVerticalAlignment(void)
{
    return _sfVerticalAlignment.getValue();
}

//! Get the value of the Label::_sfVerticalAlignment field.
inline
const Real32 &LabelBase::getVerticalAlignment(void) const
{
    return _sfVerticalAlignment.getValue();
}

//! Set the value of the Label::_sfVerticalAlignment field.
inline
void LabelBase::setVerticalAlignment(const Real32 &value)
{
    _sfVerticalAlignment.setValue(value);
}

//! Get the value of the Label::_sfHorizontalAlignment field.
inline
Real32 &LabelBase::getHorizontalAlignment(void)
{
    return _sfHorizontalAlignment.getValue();
}

//! Get the value of the Label::_sfHorizontalAlignment field.
inline
const Real32 &LabelBase::getHorizontalAlignment(void) const
{
    return _sfHorizontalAlignment.getValue();
}

//! Set the value of the Label::_sfHorizontalAlignment field.
inline
void LabelBase::setHorizontalAlignment(const Real32 &value)
{
    _sfHorizontalAlignment.setValue(value);
}

//! Get the value of the Label::_sfActiveTextColor field.
inline
Color4f &LabelBase::getActiveTextColor(void)
{
    return _sfActiveTextColor.getValue();
}

//! Get the value of the Label::_sfActiveTextColor field.
inline
const Color4f &LabelBase::getActiveTextColor(void) const
{
    return _sfActiveTextColor.getValue();
}

//! Set the value of the Label::_sfActiveTextColor field.
inline
void LabelBase::setActiveTextColor(const Color4f &value)
{
    _sfActiveTextColor.setValue(value);
}

//! Get the value of the Label::_sfFocusedTextColor field.
inline
Color4f &LabelBase::getFocusedTextColor(void)
{
    return _sfFocusedTextColor.getValue();
}

//! Get the value of the Label::_sfFocusedTextColor field.
inline
const Color4f &LabelBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the Label::_sfFocusedTextColor field.
inline
void LabelBase::setFocusedTextColor(const Color4f &value)
{
    _sfFocusedTextColor.setValue(value);
}

//! Get the value of the Label::_sfRolloverTextColor field.
inline
Color4f &LabelBase::getRolloverTextColor(void)
{
    return _sfRolloverTextColor.getValue();
}

//! Get the value of the Label::_sfRolloverTextColor field.
inline
const Color4f &LabelBase::getRolloverTextColor(void) const
{
    return _sfRolloverTextColor.getValue();
}

//! Set the value of the Label::_sfRolloverTextColor field.
inline
void LabelBase::setRolloverTextColor(const Color4f &value)
{
    _sfRolloverTextColor.setValue(value);
}

//! Get the value of the Label::_sfDisabledTextColor field.
inline
Color4f &LabelBase::getDisabledTextColor(void)
{
    return _sfDisabledTextColor.getValue();
}

//! Get the value of the Label::_sfDisabledTextColor field.
inline
const Color4f &LabelBase::getDisabledTextColor(void) const
{
    return _sfDisabledTextColor.getValue();
}

//! Set the value of the Label::_sfDisabledTextColor field.
inline
void LabelBase::setDisabledTextColor(const Color4f &value)
{
    _sfDisabledTextColor.setValue(value);
}

//! Get the value of the Label::_sfTextColor field.
inline
Color4f &LabelBase::getTextColor(void)
{
    return _sfTextColor.getValue();
}

//! Get the value of the Label::_sfTextColor field.
inline
const Color4f &LabelBase::getTextColor(void) const
{
    return _sfTextColor.getValue();
}

//! Set the value of the Label::_sfTextColor field.
inline
void LabelBase::setTextColor(const Color4f &value)
{
    _sfTextColor.setValue(value);
}


OSG_END_NAMESPACE

#define OSGLABELBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
