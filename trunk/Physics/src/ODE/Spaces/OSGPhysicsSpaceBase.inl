/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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
 **     class PhysicsSpace!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsSpaceBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsSpaceBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsSpacePtr PhysicsSpaceBase::create(void) 
{
    PhysicsSpacePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsSpacePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsSpacePtr PhysicsSpaceBase::createEmpty(void) 
{ 
    PhysicsSpacePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsSpace::_sfCleanup field.
inline
SFBool *PhysicsSpaceBase::getSFCleanup(void)
{
    return &_sfCleanup;
}

//! Get the PhysicsSpace::_sfSublevel field.
inline
SFInt32 *PhysicsSpaceBase::getSFSublevel(void)
{
    return &_sfSublevel;
}

//! Get the PhysicsSpace::_sfInternalParentHandler field.
inline
SFPhysicsHandlerPtr *PhysicsSpaceBase::getSFInternalParentHandler(void)
{
    return &_sfInternalParentHandler;
}


//! Get the value of the PhysicsSpace::_sfCleanup field.
inline
bool &PhysicsSpaceBase::getCleanup(void)
{
    return _sfCleanup.getValue();
}

//! Get the value of the PhysicsSpace::_sfCleanup field.
inline
const bool &PhysicsSpaceBase::getCleanup(void) const
{
    return _sfCleanup.getValue();
}

//! Set the value of the PhysicsSpace::_sfCleanup field.
inline
void PhysicsSpaceBase::setCleanup(const bool &value)
{
    _sfCleanup.setValue(value);
}

//! Get the value of the PhysicsSpace::_sfSublevel field.
inline
Int32 &PhysicsSpaceBase::getSublevel(void)
{
    return _sfSublevel.getValue();
}

//! Get the value of the PhysicsSpace::_sfSublevel field.
inline
const Int32 &PhysicsSpaceBase::getSublevel(void) const
{
    return _sfSublevel.getValue();
}

//! Set the value of the PhysicsSpace::_sfSublevel field.
inline
void PhysicsSpaceBase::setSublevel(const Int32 &value)
{
    _sfSublevel.setValue(value);
}

//! Get the value of the PhysicsSpace::_sfInternalParentHandler field.
inline
PhysicsHandlerPtr &PhysicsSpaceBase::getInternalParentHandler(void)
{
    return _sfInternalParentHandler.getValue();
}

//! Get the value of the PhysicsSpace::_sfInternalParentHandler field.
inline
const PhysicsHandlerPtr &PhysicsSpaceBase::getInternalParentHandler(void) const
{
    return _sfInternalParentHandler.getValue();
}

//! Set the value of the PhysicsSpace::_sfInternalParentHandler field.
inline
void PhysicsSpaceBase::setInternalParentHandler(const PhysicsHandlerPtr &value)
{
    _sfInternalParentHandler.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSSPACEBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

