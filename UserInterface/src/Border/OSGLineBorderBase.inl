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
 **     class LineBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineBorderBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LineBorderBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LineBorderPtr LineBorderBase::create(void) 
{
    LineBorderPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LineBorderPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LineBorderPtr LineBorderBase::createEmpty(void) 
{ 
    LineBorderPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LineBorder::_sfWidth field.
inline
SFUInt32 *LineBorderBase::getSFWidth(void)
{
    return &_sfWidth;
}

//! Get the LineBorder::_sfColor field.
inline
SFColor4f *LineBorderBase::getSFColor(void)
{
    return &_sfColor;
}

//! Get the LineBorder::_sfMaterial field.
inline
SFMaterialPtr *LineBorderBase::getSFMaterial(void)
{
    return &_sfMaterial;
}


//! Get the value of the LineBorder::_sfWidth field.
inline
UInt32 &LineBorderBase::getWidth(void)
{
    return _sfWidth.getValue();
}

//! Get the value of the LineBorder::_sfWidth field.
inline
const UInt32 &LineBorderBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the LineBorder::_sfWidth field.
inline
void LineBorderBase::setWidth(const UInt32 &value)
{
    _sfWidth.setValue(value);
}

//! Get the value of the LineBorder::_sfColor field.
inline
Color4f &LineBorderBase::getColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the LineBorder::_sfColor field.
inline
const Color4f &LineBorderBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the LineBorder::_sfColor field.
inline
void LineBorderBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the LineBorder::_sfMaterial field.
inline
MaterialPtr &LineBorderBase::getMaterial(void)
{
    return _sfMaterial.getValue();
}

//! Get the value of the LineBorder::_sfMaterial field.
inline
const MaterialPtr &LineBorderBase::getMaterial(void) const
{
    return _sfMaterial.getValue();
}

//! Set the value of the LineBorder::_sfMaterial field.
inline
void LineBorderBase::setMaterial(const MaterialPtr &value)
{
    _sfMaterial.setValue(value);
}


OSG_END_NAMESPACE

#define OSGLINEBORDERBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
