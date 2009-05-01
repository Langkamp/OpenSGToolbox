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
 **     class ToolTip!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ToolTipBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ToolTipBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ToolTipPtr ToolTipBase::create(void) 
{
    ToolTipPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ToolTipPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ToolTipPtr ToolTipBase::createEmpty(void) 
{ 
    ToolTipPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ToolTip::_sfFont field.
inline
SFUIFontPtr *ToolTipBase::getSFFont(void)
{
    return &_sfFont;
}

//! Get the ToolTip::_sfTippedComponent field.
inline
SFComponentPtr *ToolTipBase::getSFTippedComponent(void)
{
    return &_sfTippedComponent;
}

//! Get the ToolTip::_sfText field.
inline
SFString *ToolTipBase::getSFText(void)
{
    return &_sfText;
}

//! Get the ToolTip::_sfAlignment field.
inline
SFVec2f *ToolTipBase::getSFAlignment(void)
{
    return &_sfAlignment;
}

//! Get the ToolTip::_sfTextColor field.
inline
SFColor4f *ToolTipBase::getSFTextColor(void)
{
    return &_sfTextColor;
}


//! Get the value of the ToolTip::_sfFont field.
inline
UIFontPtr &ToolTipBase::getFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the ToolTip::_sfFont field.
inline
const UIFontPtr &ToolTipBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the ToolTip::_sfFont field.
inline
void ToolTipBase::setFont(const UIFontPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the ToolTip::_sfTippedComponent field.
inline
ComponentPtr &ToolTipBase::getTippedComponent(void)
{
    return _sfTippedComponent.getValue();
}

//! Get the value of the ToolTip::_sfTippedComponent field.
inline
const ComponentPtr &ToolTipBase::getTippedComponent(void) const
{
    return _sfTippedComponent.getValue();
}

//! Set the value of the ToolTip::_sfTippedComponent field.
inline
void ToolTipBase::setTippedComponent(const ComponentPtr &value)
{
    _sfTippedComponent.setValue(value);
}

//! Get the value of the ToolTip::_sfText field.
inline
std::string &ToolTipBase::getText(void)
{
    return _sfText.getValue();
}

//! Get the value of the ToolTip::_sfText field.
inline
const std::string &ToolTipBase::getText(void) const
{
    return _sfText.getValue();
}

//! Set the value of the ToolTip::_sfText field.
inline
void ToolTipBase::setText(const std::string &value)
{
    _sfText.setValue(value);
}

//! Get the value of the ToolTip::_sfAlignment field.
inline
Vec2f &ToolTipBase::getAlignment(void)
{
    return _sfAlignment.getValue();
}

//! Get the value of the ToolTip::_sfAlignment field.
inline
const Vec2f &ToolTipBase::getAlignment(void) const
{
    return _sfAlignment.getValue();
}

//! Set the value of the ToolTip::_sfAlignment field.
inline
void ToolTipBase::setAlignment(const Vec2f &value)
{
    _sfAlignment.setValue(value);
}

//! Get the value of the ToolTip::_sfTextColor field.
inline
Color4f &ToolTipBase::getTextColor(void)
{
    return _sfTextColor.getValue();
}

//! Get the value of the ToolTip::_sfTextColor field.
inline
const Color4f &ToolTipBase::getTextColor(void) const
{
    return _sfTextColor.getValue();
}

//! Set the value of the ToolTip::_sfTextColor field.
inline
void ToolTipBase::setTextColor(const Color4f &value)
{
    _sfTextColor.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTOOLTIPBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
