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
 **     class LineUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineUIDrawObjectBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LineUIDrawObjectBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LineUIDrawObjectPtr LineUIDrawObjectBase::create(void) 
{
    LineUIDrawObjectPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LineUIDrawObjectPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LineUIDrawObjectPtr LineUIDrawObjectBase::createEmpty(void) 
{ 
    LineUIDrawObjectPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LineUIDrawObject::_sfTopLeft field.
inline
SFPnt2f *LineUIDrawObjectBase::getSFTopLeft(void)
{
    return &_sfTopLeft;
}

//! Get the LineUIDrawObject::_sfBottomRight field.
inline
SFPnt2f *LineUIDrawObjectBase::getSFBottomRight(void)
{
    return &_sfBottomRight;
}

//! Get the LineUIDrawObject::_sfWidth field.
inline
SFReal32 *LineUIDrawObjectBase::getSFWidth(void)
{
    return &_sfWidth;
}

//! Get the LineUIDrawObject::_sfColor field.
inline
SFColor4f *LineUIDrawObjectBase::getSFColor(void)
{
    return &_sfColor;
}

//! Get the LineUIDrawObject::_sfOpacity field.
inline
SFReal32 *LineUIDrawObjectBase::getSFOpacity(void)
{
    return &_sfOpacity;
}


//! Get the value of the LineUIDrawObject::_sfTopLeft field.
inline
Pnt2f &LineUIDrawObjectBase::getTopLeft(void)
{
    return _sfTopLeft.getValue();
}

//! Get the value of the LineUIDrawObject::_sfTopLeft field.
inline
const Pnt2f &LineUIDrawObjectBase::getTopLeft(void) const
{
    return _sfTopLeft.getValue();
}

//! Set the value of the LineUIDrawObject::_sfTopLeft field.
inline
void LineUIDrawObjectBase::setTopLeft(const Pnt2f &value)
{
    _sfTopLeft.setValue(value);
}

//! Get the value of the LineUIDrawObject::_sfBottomRight field.
inline
Pnt2f &LineUIDrawObjectBase::getBottomRight(void)
{
    return _sfBottomRight.getValue();
}

//! Get the value of the LineUIDrawObject::_sfBottomRight field.
inline
const Pnt2f &LineUIDrawObjectBase::getBottomRight(void) const
{
    return _sfBottomRight.getValue();
}

//! Set the value of the LineUIDrawObject::_sfBottomRight field.
inline
void LineUIDrawObjectBase::setBottomRight(const Pnt2f &value)
{
    _sfBottomRight.setValue(value);
}

//! Get the value of the LineUIDrawObject::_sfWidth field.
inline
Real32 &LineUIDrawObjectBase::getWidth(void)
{
    return _sfWidth.getValue();
}

//! Get the value of the LineUIDrawObject::_sfWidth field.
inline
const Real32 &LineUIDrawObjectBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the LineUIDrawObject::_sfWidth field.
inline
void LineUIDrawObjectBase::setWidth(const Real32 &value)
{
    _sfWidth.setValue(value);
}

//! Get the value of the LineUIDrawObject::_sfColor field.
inline
Color4f &LineUIDrawObjectBase::getColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the LineUIDrawObject::_sfColor field.
inline
const Color4f &LineUIDrawObjectBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the LineUIDrawObject::_sfColor field.
inline
void LineUIDrawObjectBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the LineUIDrawObject::_sfOpacity field.
inline
Real32 &LineUIDrawObjectBase::getOpacity(void)
{
    return _sfOpacity.getValue();
}

//! Get the value of the LineUIDrawObject::_sfOpacity field.
inline
const Real32 &LineUIDrawObjectBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the LineUIDrawObject::_sfOpacity field.
inline
void LineUIDrawObjectBase::setOpacity(const Real32 &value)
{
    _sfOpacity.setValue(value);
}


OSG_END_NAMESPACE

#define OSGLINEUIDRAWOBJECTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

