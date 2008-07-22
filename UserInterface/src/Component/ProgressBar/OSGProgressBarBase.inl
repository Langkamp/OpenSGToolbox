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
 **     class ProgressBar!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ProgressBarBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ProgressBarBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ProgressBarPtr ProgressBarBase::create(void) 
{
    ProgressBarPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ProgressBarPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ProgressBarPtr ProgressBarBase::createEmpty(void) 
{ 
    ProgressBarPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ProgressBar::_sfIndeterminate field.
inline
SFBool *ProgressBarBase::getSFIndeterminate(void)
{
    return &_sfIndeterminate;
}

//! Get the ProgressBar::_sfIndeterminateBarMoveRate field.
inline
SFReal32 *ProgressBarBase::getSFIndeterminateBarMoveRate(void)
{
    return &_sfIndeterminateBarMoveRate;
}

//! Get the ProgressBar::_sfIndeterminateBarSize field.
inline
SFReal32 *ProgressBarBase::getSFIndeterminateBarSize(void)
{
    return &_sfIndeterminateBarSize;
}

//! Get the ProgressBar::_sfEnableProgressString field.
inline
SFBool *ProgressBarBase::getSFEnableProgressString(void)
{
    return &_sfEnableProgressString;
}

//! Get the ProgressBar::_sfProgressString field.
inline
SFString *ProgressBarBase::getSFProgressString(void)
{
    return &_sfProgressString;
}

//! Get the ProgressBar::_sfVerticalAlignment field.
inline
SFReal32 *ProgressBarBase::getSFVerticalAlignment(void)
{
    return &_sfVerticalAlignment;
}

//! Get the ProgressBar::_sfHorizontalAlignment field.
inline
SFReal32 *ProgressBarBase::getSFHorizontalAlignment(void)
{
    return &_sfHorizontalAlignment;
}

//! Get the ProgressBar::_sfFont field.
inline
SFUIFontPtr *ProgressBarBase::getSFFont(void)
{
    return &_sfFont;
}

//! Get the ProgressBar::_sfFocusedTextColor field.
inline
SFColor4f *ProgressBarBase::getSFFocusedTextColor(void)
{
    return &_sfFocusedTextColor;
}

//! Get the ProgressBar::_sfRolloverTextColor field.
inline
SFColor4f *ProgressBarBase::getSFRolloverTextColor(void)
{
    return &_sfRolloverTextColor;
}

//! Get the ProgressBar::_sfDisabledTextColor field.
inline
SFColor4f *ProgressBarBase::getSFDisabledTextColor(void)
{
    return &_sfDisabledTextColor;
}

//! Get the ProgressBar::_sfTextColor field.
inline
SFColor4f *ProgressBarBase::getSFTextColor(void)
{
    return &_sfTextColor;
}

//! Get the ProgressBar::_sfOrientation field.
inline
SFUInt32 *ProgressBarBase::getSFOrientation(void)
{
    return &_sfOrientation;
}

//! Get the ProgressBar::_sfDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ProgressBarBase::getSFDrawObject(void)
{
    return &_sfDrawObject;
}

//! Get the ProgressBar::_sfFocusedDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ProgressBarBase::getSFFocusedDrawObject(void)
{
    return &_sfFocusedDrawObject;
}

//! Get the ProgressBar::_sfRolloverDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ProgressBarBase::getSFRolloverDrawObject(void)
{
    return &_sfRolloverDrawObject;
}

//! Get the ProgressBar::_sfDisabledDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ProgressBarBase::getSFDisabledDrawObject(void)
{
    return &_sfDisabledDrawObject;
}


//! Get the value of the ProgressBar::_sfIndeterminate field.
inline
bool &ProgressBarBase::getIndeterminate(void)
{
    return _sfIndeterminate.getValue();
}

//! Get the value of the ProgressBar::_sfIndeterminate field.
inline
const bool &ProgressBarBase::getIndeterminate(void) const
{
    return _sfIndeterminate.getValue();
}

//! Set the value of the ProgressBar::_sfIndeterminate field.
inline
void ProgressBarBase::setIndeterminate(const bool &value)
{
    _sfIndeterminate.setValue(value);
}

//! Get the value of the ProgressBar::_sfIndeterminateBarMoveRate field.
inline
Real32 &ProgressBarBase::getIndeterminateBarMoveRate(void)
{
    return _sfIndeterminateBarMoveRate.getValue();
}

//! Get the value of the ProgressBar::_sfIndeterminateBarMoveRate field.
inline
const Real32 &ProgressBarBase::getIndeterminateBarMoveRate(void) const
{
    return _sfIndeterminateBarMoveRate.getValue();
}

//! Set the value of the ProgressBar::_sfIndeterminateBarMoveRate field.
inline
void ProgressBarBase::setIndeterminateBarMoveRate(const Real32 &value)
{
    _sfIndeterminateBarMoveRate.setValue(value);
}

//! Get the value of the ProgressBar::_sfIndeterminateBarSize field.
inline
Real32 &ProgressBarBase::getIndeterminateBarSize(void)
{
    return _sfIndeterminateBarSize.getValue();
}

//! Get the value of the ProgressBar::_sfIndeterminateBarSize field.
inline
const Real32 &ProgressBarBase::getIndeterminateBarSize(void) const
{
    return _sfIndeterminateBarSize.getValue();
}

//! Set the value of the ProgressBar::_sfIndeterminateBarSize field.
inline
void ProgressBarBase::setIndeterminateBarSize(const Real32 &value)
{
    _sfIndeterminateBarSize.setValue(value);
}

//! Get the value of the ProgressBar::_sfEnableProgressString field.
inline
bool &ProgressBarBase::getEnableProgressString(void)
{
    return _sfEnableProgressString.getValue();
}

//! Get the value of the ProgressBar::_sfEnableProgressString field.
inline
const bool &ProgressBarBase::getEnableProgressString(void) const
{
    return _sfEnableProgressString.getValue();
}

//! Set the value of the ProgressBar::_sfEnableProgressString field.
inline
void ProgressBarBase::setEnableProgressString(const bool &value)
{
    _sfEnableProgressString.setValue(value);
}

//! Get the value of the ProgressBar::_sfProgressString field.
inline
std::string &ProgressBarBase::getProgressString(void)
{
    return _sfProgressString.getValue();
}

//! Get the value of the ProgressBar::_sfProgressString field.
inline
const std::string &ProgressBarBase::getProgressString(void) const
{
    return _sfProgressString.getValue();
}

//! Set the value of the ProgressBar::_sfProgressString field.
inline
void ProgressBarBase::setProgressString(const std::string &value)
{
    _sfProgressString.setValue(value);
}

//! Get the value of the ProgressBar::_sfVerticalAlignment field.
inline
Real32 &ProgressBarBase::getVerticalAlignment(void)
{
    return _sfVerticalAlignment.getValue();
}

//! Get the value of the ProgressBar::_sfVerticalAlignment field.
inline
const Real32 &ProgressBarBase::getVerticalAlignment(void) const
{
    return _sfVerticalAlignment.getValue();
}

//! Set the value of the ProgressBar::_sfVerticalAlignment field.
inline
void ProgressBarBase::setVerticalAlignment(const Real32 &value)
{
    _sfVerticalAlignment.setValue(value);
}

//! Get the value of the ProgressBar::_sfHorizontalAlignment field.
inline
Real32 &ProgressBarBase::getHorizontalAlignment(void)
{
    return _sfHorizontalAlignment.getValue();
}

//! Get the value of the ProgressBar::_sfHorizontalAlignment field.
inline
const Real32 &ProgressBarBase::getHorizontalAlignment(void) const
{
    return _sfHorizontalAlignment.getValue();
}

//! Set the value of the ProgressBar::_sfHorizontalAlignment field.
inline
void ProgressBarBase::setHorizontalAlignment(const Real32 &value)
{
    _sfHorizontalAlignment.setValue(value);
}

//! Get the value of the ProgressBar::_sfFont field.
inline
UIFontPtr &ProgressBarBase::getFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the ProgressBar::_sfFont field.
inline
const UIFontPtr &ProgressBarBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the ProgressBar::_sfFont field.
inline
void ProgressBarBase::setFont(const UIFontPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the ProgressBar::_sfFocusedTextColor field.
inline
Color4f &ProgressBarBase::getFocusedTextColor(void)
{
    return _sfFocusedTextColor.getValue();
}

//! Get the value of the ProgressBar::_sfFocusedTextColor field.
inline
const Color4f &ProgressBarBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the ProgressBar::_sfFocusedTextColor field.
inline
void ProgressBarBase::setFocusedTextColor(const Color4f &value)
{
    _sfFocusedTextColor.setValue(value);
}

//! Get the value of the ProgressBar::_sfRolloverTextColor field.
inline
Color4f &ProgressBarBase::getRolloverTextColor(void)
{
    return _sfRolloverTextColor.getValue();
}

//! Get the value of the ProgressBar::_sfRolloverTextColor field.
inline
const Color4f &ProgressBarBase::getRolloverTextColor(void) const
{
    return _sfRolloverTextColor.getValue();
}

//! Set the value of the ProgressBar::_sfRolloverTextColor field.
inline
void ProgressBarBase::setRolloverTextColor(const Color4f &value)
{
    _sfRolloverTextColor.setValue(value);
}

//! Get the value of the ProgressBar::_sfDisabledTextColor field.
inline
Color4f &ProgressBarBase::getDisabledTextColor(void)
{
    return _sfDisabledTextColor.getValue();
}

//! Get the value of the ProgressBar::_sfDisabledTextColor field.
inline
const Color4f &ProgressBarBase::getDisabledTextColor(void) const
{
    return _sfDisabledTextColor.getValue();
}

//! Set the value of the ProgressBar::_sfDisabledTextColor field.
inline
void ProgressBarBase::setDisabledTextColor(const Color4f &value)
{
    _sfDisabledTextColor.setValue(value);
}

//! Get the value of the ProgressBar::_sfTextColor field.
inline
Color4f &ProgressBarBase::getTextColor(void)
{
    return _sfTextColor.getValue();
}

//! Get the value of the ProgressBar::_sfTextColor field.
inline
const Color4f &ProgressBarBase::getTextColor(void) const
{
    return _sfTextColor.getValue();
}

//! Set the value of the ProgressBar::_sfTextColor field.
inline
void ProgressBarBase::setTextColor(const Color4f &value)
{
    _sfTextColor.setValue(value);
}

//! Get the value of the ProgressBar::_sfOrientation field.
inline
UInt32 &ProgressBarBase::getOrientation(void)
{
    return _sfOrientation.getValue();
}

//! Get the value of the ProgressBar::_sfOrientation field.
inline
const UInt32 &ProgressBarBase::getOrientation(void) const
{
    return _sfOrientation.getValue();
}

//! Set the value of the ProgressBar::_sfOrientation field.
inline
void ProgressBarBase::setOrientation(const UInt32 &value)
{
    _sfOrientation.setValue(value);
}

//! Get the value of the ProgressBar::_sfDrawObject field.
inline
UIDrawObjectCanvasPtr &ProgressBarBase::getDrawObject(void)
{
    return _sfDrawObject.getValue();
}

//! Get the value of the ProgressBar::_sfDrawObject field.
inline
const UIDrawObjectCanvasPtr &ProgressBarBase::getDrawObject(void) const
{
    return _sfDrawObject.getValue();
}

//! Set the value of the ProgressBar::_sfDrawObject field.
inline
void ProgressBarBase::setDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfDrawObject.setValue(value);
}

//! Get the value of the ProgressBar::_sfFocusedDrawObject field.
inline
UIDrawObjectCanvasPtr &ProgressBarBase::getFocusedDrawObject(void)
{
    return _sfFocusedDrawObject.getValue();
}

//! Get the value of the ProgressBar::_sfFocusedDrawObject field.
inline
const UIDrawObjectCanvasPtr &ProgressBarBase::getFocusedDrawObject(void) const
{
    return _sfFocusedDrawObject.getValue();
}

//! Set the value of the ProgressBar::_sfFocusedDrawObject field.
inline
void ProgressBarBase::setFocusedDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfFocusedDrawObject.setValue(value);
}

//! Get the value of the ProgressBar::_sfRolloverDrawObject field.
inline
UIDrawObjectCanvasPtr &ProgressBarBase::getRolloverDrawObject(void)
{
    return _sfRolloverDrawObject.getValue();
}

//! Get the value of the ProgressBar::_sfRolloverDrawObject field.
inline
const UIDrawObjectCanvasPtr &ProgressBarBase::getRolloverDrawObject(void) const
{
    return _sfRolloverDrawObject.getValue();
}

//! Set the value of the ProgressBar::_sfRolloverDrawObject field.
inline
void ProgressBarBase::setRolloverDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfRolloverDrawObject.setValue(value);
}

//! Get the value of the ProgressBar::_sfDisabledDrawObject field.
inline
UIDrawObjectCanvasPtr &ProgressBarBase::getDisabledDrawObject(void)
{
    return _sfDisabledDrawObject.getValue();
}

//! Get the value of the ProgressBar::_sfDisabledDrawObject field.
inline
const UIDrawObjectCanvasPtr &ProgressBarBase::getDisabledDrawObject(void) const
{
    return _sfDisabledDrawObject.getValue();
}

//! Set the value of the ProgressBar::_sfDisabledDrawObject field.
inline
void ProgressBarBase::setDisabledDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfDisabledDrawObject.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPROGRESSBARBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

