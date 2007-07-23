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
 **     class ToggleButton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ToggleButtonBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ToggleButtonBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ToggleButtonPtr ToggleButtonBase::create(void) 
{
    ToggleButtonPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ToggleButtonPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ToggleButtonPtr ToggleButtonBase::createEmpty(void) 
{ 
    ToggleButtonPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ToggleButton::_sfSelected field.
inline
SFBool *ToggleButtonBase::getSFSelected(void)
{
    return &_sfSelected;
}


//! Get the value of the ToggleButton::_sfSelected field.
inline
bool &ToggleButtonBase::getSelected(void)
{
    return _sfSelected.getValue();
}

//! Get the value of the ToggleButton::_sfSelected field.
inline
const bool &ToggleButtonBase::getSelected(void) const
{
    return _sfSelected.getValue();
}

//! Set the value of the ToggleButton::_sfSelected field.
inline
void ToggleButtonBase::setSelected(const bool &value)
{
    _sfSelected.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTOGGLEBUTTONBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

