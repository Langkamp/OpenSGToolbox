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
 **     class PhysicsCharacteristicsDrawable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsCharacteristicsDrawableBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsCharacteristicsDrawableBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsCharacteristicsDrawablePtr PhysicsCharacteristicsDrawableBase::create(void) 
{
    PhysicsCharacteristicsDrawablePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsCharacteristicsDrawablePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsCharacteristicsDrawablePtr PhysicsCharacteristicsDrawableBase::createEmpty(void) 
{ 
    PhysicsCharacteristicsDrawablePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsCharacteristicsDrawable::_sfRoot field.
inline
const SFNodePtr *PhysicsCharacteristicsDrawableBase::getSFRoot(void) const
{
    return &_sfRoot;
}

//! Get the PhysicsCharacteristicsDrawable::_sfRoot field.
inline
SFNodePtr *PhysicsCharacteristicsDrawableBase::editSFRoot(void)
{
    return &_sfRoot;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawGeoms field.
inline
const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawGeoms(void) const
{
    return &_sfDrawGeoms;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawGeoms field.
inline
SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawGeoms(void)
{
    return &_sfDrawGeoms;
}

//! Get the PhysicsCharacteristicsDrawable::_sfGeomColor field.
inline
const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFGeomColor(void) const
{
    return &_sfGeomColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfGeomColor field.
inline
SFColor4f *PhysicsCharacteristicsDrawableBase::editSFGeomColor(void)
{
    return &_sfGeomColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawJoints field.
inline
const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawJoints(void) const
{
    return &_sfDrawJoints;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawJoints field.
inline
SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawJoints(void)
{
    return &_sfDrawJoints;
}

//! Get the PhysicsCharacteristicsDrawable::_sfJointColor field.
inline
const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFJointColor(void) const
{
    return &_sfJointColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfJointColor field.
inline
SFColor4f *PhysicsCharacteristicsDrawableBase::editSFJointColor(void)
{
    return &_sfJointColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawBodies field.
inline
const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawBodies(void) const
{
    return &_sfDrawBodies;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawBodies field.
inline
SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawBodies(void)
{
    return &_sfDrawBodies;
}

//! Get the PhysicsCharacteristicsDrawable::_sfBodyColor field.
inline
const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFBodyColor(void) const
{
    return &_sfBodyColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfBodyColor field.
inline
SFColor4f *PhysicsCharacteristicsDrawableBase::editSFBodyColor(void)
{
    return &_sfBodyColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawSpaces field.
inline
const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawSpaces(void) const
{
    return &_sfDrawSpaces;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawSpaces field.
inline
SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawSpaces(void)
{
    return &_sfDrawSpaces;
}

//! Get the PhysicsCharacteristicsDrawable::_sfSpaceColor field.
inline
const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFSpaceColor(void) const
{
    return &_sfSpaceColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfSpaceColor field.
inline
SFColor4f *PhysicsCharacteristicsDrawableBase::editSFSpaceColor(void)
{
    return &_sfSpaceColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawWorlds field.
inline
const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawWorlds(void) const
{
    return &_sfDrawWorlds;
}

//! Get the PhysicsCharacteristicsDrawable::_sfDrawWorlds field.
inline
SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawWorlds(void)
{
    return &_sfDrawWorlds;
}

//! Get the PhysicsCharacteristicsDrawable::_sfWorldColor field.
inline
const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFWorldColor(void) const
{
    return &_sfWorldColor;
}

//! Get the PhysicsCharacteristicsDrawable::_sfWorldColor field.
inline
SFColor4f *PhysicsCharacteristicsDrawableBase::editSFWorldColor(void)
{
    return &_sfWorldColor;
}


//! Get the value of the PhysicsCharacteristicsDrawable::_sfRoot field.
inline
NodePtr &PhysicsCharacteristicsDrawableBase::editRoot(void)
{
    return _sfRoot.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfRoot field.
inline
const NodePtr &PhysicsCharacteristicsDrawableBase::getRoot(void) const
{
    return _sfRoot.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfRoot field.
inline
void PhysicsCharacteristicsDrawableBase::setRoot(const NodePtr &value)
{
    _sfRoot.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawGeoms field.
inline
bool &PhysicsCharacteristicsDrawableBase::editDrawGeoms(void)
{
    return _sfDrawGeoms.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawGeoms field.
inline
const bool &PhysicsCharacteristicsDrawableBase::getDrawGeoms(void) const
{
    return _sfDrawGeoms.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawGeoms field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawGeoms(const bool &value)
{
    _sfDrawGeoms.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfGeomColor field.
inline
Color4f &PhysicsCharacteristicsDrawableBase::editGeomColor(void)
{
    return _sfGeomColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfGeomColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getGeomColor(void) const
{
    return _sfGeomColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfGeomColor field.
inline
void PhysicsCharacteristicsDrawableBase::setGeomColor(const Color4f &value)
{
    _sfGeomColor.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawJoints field.
inline
bool &PhysicsCharacteristicsDrawableBase::editDrawJoints(void)
{
    return _sfDrawJoints.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawJoints field.
inline
const bool &PhysicsCharacteristicsDrawableBase::getDrawJoints(void) const
{
    return _sfDrawJoints.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawJoints field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawJoints(const bool &value)
{
    _sfDrawJoints.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfJointColor field.
inline
Color4f &PhysicsCharacteristicsDrawableBase::editJointColor(void)
{
    return _sfJointColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfJointColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getJointColor(void) const
{
    return _sfJointColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfJointColor field.
inline
void PhysicsCharacteristicsDrawableBase::setJointColor(const Color4f &value)
{
    _sfJointColor.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawBodies field.
inline
bool &PhysicsCharacteristicsDrawableBase::editDrawBodies(void)
{
    return _sfDrawBodies.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawBodies field.
inline
const bool &PhysicsCharacteristicsDrawableBase::getDrawBodies(void) const
{
    return _sfDrawBodies.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawBodies field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawBodies(const bool &value)
{
    _sfDrawBodies.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfBodyColor field.
inline
Color4f &PhysicsCharacteristicsDrawableBase::editBodyColor(void)
{
    return _sfBodyColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfBodyColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getBodyColor(void) const
{
    return _sfBodyColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfBodyColor field.
inline
void PhysicsCharacteristicsDrawableBase::setBodyColor(const Color4f &value)
{
    _sfBodyColor.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawSpaces field.
inline
bool &PhysicsCharacteristicsDrawableBase::editDrawSpaces(void)
{
    return _sfDrawSpaces.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawSpaces field.
inline
const bool &PhysicsCharacteristicsDrawableBase::getDrawSpaces(void) const
{
    return _sfDrawSpaces.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawSpaces field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawSpaces(const bool &value)
{
    _sfDrawSpaces.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfSpaceColor field.
inline
Color4f &PhysicsCharacteristicsDrawableBase::editSpaceColor(void)
{
    return _sfSpaceColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfSpaceColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getSpaceColor(void) const
{
    return _sfSpaceColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfSpaceColor field.
inline
void PhysicsCharacteristicsDrawableBase::setSpaceColor(const Color4f &value)
{
    _sfSpaceColor.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawWorlds field.
inline
bool &PhysicsCharacteristicsDrawableBase::editDrawWorlds(void)
{
    return _sfDrawWorlds.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawWorlds field.
inline
const bool &PhysicsCharacteristicsDrawableBase::getDrawWorlds(void) const
{
    return _sfDrawWorlds.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawWorlds field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawWorlds(const bool &value)
{
    _sfDrawWorlds.setValue(value);
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfWorldColor field.
inline
Color4f &PhysicsCharacteristicsDrawableBase::editWorldColor(void)
{
    return _sfWorldColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfWorldColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getWorldColor(void) const
{
    return _sfWorldColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfWorldColor field.
inline
void PhysicsCharacteristicsDrawableBase::setWorldColor(const Color4f &value)
{
    _sfWorldColor.setValue(value);
}


OSG_END_NAMESPACE
