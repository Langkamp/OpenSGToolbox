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
 **     class DragGeometricAttribute!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DragGeometricAttributeBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DragGeometricAttributeBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
DragGeometricAttributePtr DragGeometricAttributeBase::create(void) 
{
    DragGeometricAttributePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = DragGeometricAttributePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
DragGeometricAttributePtr DragGeometricAttributeBase::createEmpty(void) 
{ 
    DragGeometricAttributePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the DragGeometricAttribute::_sfGeometricDragFactor field.
inline
SFReal32 *DragGeometricAttributeBase::getSFGeometricDragFactor(void)
{
    return &_sfGeometricDragFactor;
}

//! Get the DragGeometricAttribute::_sfCenterOfDrag field.
inline
SFPnt3f *DragGeometricAttributeBase::getSFCenterOfDrag(void)
{
    return &_sfCenterOfDrag;
}


//! Get the value of the DragGeometricAttribute::_sfGeometricDragFactor field.
inline
Real32 &DragGeometricAttributeBase::getGeometricDragFactor(void)
{
    return _sfGeometricDragFactor.getValue();
}

//! Get the value of the DragGeometricAttribute::_sfGeometricDragFactor field.
inline
const Real32 &DragGeometricAttributeBase::getGeometricDragFactor(void) const
{
    return _sfGeometricDragFactor.getValue();
}

//! Set the value of the DragGeometricAttribute::_sfGeometricDragFactor field.
inline
void DragGeometricAttributeBase::setGeometricDragFactor(const Real32 &value)
{
    _sfGeometricDragFactor.setValue(value);
}

//! Get the value of the DragGeometricAttribute::_sfCenterOfDrag field.
inline
Pnt3f &DragGeometricAttributeBase::getCenterOfDrag(void)
{
    return _sfCenterOfDrag.getValue();
}

//! Get the value of the DragGeometricAttribute::_sfCenterOfDrag field.
inline
const Pnt3f &DragGeometricAttributeBase::getCenterOfDrag(void) const
{
    return _sfCenterOfDrag.getValue();
}

//! Set the value of the DragGeometricAttribute::_sfCenterOfDrag field.
inline
void DragGeometricAttributeBase::setCenterOfDrag(const Pnt3f &value)
{
    _sfCenterOfDrag.setValue(value);
}


OSG_END_NAMESPACE

#define OSGDRAGGEOMETRICATTRIBUTEBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
