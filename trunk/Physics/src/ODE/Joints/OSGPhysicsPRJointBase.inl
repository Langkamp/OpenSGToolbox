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
 **     class PhysicsPRJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsPRJointBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsPRJointBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsPRJointPtr PhysicsPRJointBase::create(void) 
{
    PhysicsPRJointPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsPRJointPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsPRJointPtr PhysicsPRJointBase::createEmpty(void) 
{ 
    PhysicsPRJointPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsPRJoint::_sfAnchor field.
inline
SFVec3f *PhysicsPRJointBase::getSFAnchor(void)
{
    return &_sfAnchor;
}

//! Get the PhysicsPRJoint::_sfAxis1 field.
inline
SFVec3f *PhysicsPRJointBase::getSFAxis1(void)
{
    return &_sfAxis1;
}

//! Get the PhysicsPRJoint::_sfAxis2 field.
inline
SFVec3f *PhysicsPRJointBase::getSFAxis2(void)
{
    return &_sfAxis2;
}

//! Get the PhysicsPRJoint::_sfHiStop field.
inline
SFReal32 *PhysicsPRJointBase::getSFHiStop(void)
{
    return &_sfHiStop;
}

//! Get the PhysicsPRJoint::_sfLoStop field.
inline
SFReal32 *PhysicsPRJointBase::getSFLoStop(void)
{
    return &_sfLoStop;
}

//! Get the PhysicsPRJoint::_sfBounce field.
inline
SFReal32 *PhysicsPRJointBase::getSFBounce(void)
{
    return &_sfBounce;
}

//! Get the PhysicsPRJoint::_sfCFM field.
inline
SFReal32 *PhysicsPRJointBase::getSFCFM(void)
{
    return &_sfCFM;
}

//! Get the PhysicsPRJoint::_sfStopERP field.
inline
SFReal32 *PhysicsPRJointBase::getSFStopERP(void)
{
    return &_sfStopERP;
}

//! Get the PhysicsPRJoint::_sfStopCFM field.
inline
SFReal32 *PhysicsPRJointBase::getSFStopCFM(void)
{
    return &_sfStopCFM;
}

//! Get the PhysicsPRJoint::_sfHiStop2 field.
inline
SFReal32 *PhysicsPRJointBase::getSFHiStop2(void)
{
    return &_sfHiStop2;
}

//! Get the PhysicsPRJoint::_sfLoStop2 field.
inline
SFReal32 *PhysicsPRJointBase::getSFLoStop2(void)
{
    return &_sfLoStop2;
}

//! Get the PhysicsPRJoint::_sfBounce2 field.
inline
SFReal32 *PhysicsPRJointBase::getSFBounce2(void)
{
    return &_sfBounce2;
}

//! Get the PhysicsPRJoint::_sfCFM2 field.
inline
SFReal32 *PhysicsPRJointBase::getSFCFM2(void)
{
    return &_sfCFM2;
}

//! Get the PhysicsPRJoint::_sfStopERP2 field.
inline
SFReal32 *PhysicsPRJointBase::getSFStopERP2(void)
{
    return &_sfStopERP2;
}

//! Get the PhysicsPRJoint::_sfStopCFM2 field.
inline
SFReal32 *PhysicsPRJointBase::getSFStopCFM2(void)
{
    return &_sfStopCFM2;
}


//! Get the value of the PhysicsPRJoint::_sfAnchor field.
inline
Vec3f &PhysicsPRJointBase::getAnchor(void)
{
    return _sfAnchor.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfAnchor field.
inline
const Vec3f &PhysicsPRJointBase::getAnchor(void) const
{
    return _sfAnchor.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfAnchor field.
inline
void PhysicsPRJointBase::setAnchor(const Vec3f &value)
{
    _sfAnchor.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfAxis1 field.
inline
Vec3f &PhysicsPRJointBase::getAxis1(void)
{
    return _sfAxis1.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfAxis1 field.
inline
const Vec3f &PhysicsPRJointBase::getAxis1(void) const
{
    return _sfAxis1.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfAxis1 field.
inline
void PhysicsPRJointBase::setAxis1(const Vec3f &value)
{
    _sfAxis1.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfAxis2 field.
inline
Vec3f &PhysicsPRJointBase::getAxis2(void)
{
    return _sfAxis2.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfAxis2 field.
inline
const Vec3f &PhysicsPRJointBase::getAxis2(void) const
{
    return _sfAxis2.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfAxis2 field.
inline
void PhysicsPRJointBase::setAxis2(const Vec3f &value)
{
    _sfAxis2.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfHiStop field.
inline
Real32 &PhysicsPRJointBase::getHiStop(void)
{
    return _sfHiStop.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfHiStop field.
inline
const Real32 &PhysicsPRJointBase::getHiStop(void) const
{
    return _sfHiStop.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfHiStop field.
inline
void PhysicsPRJointBase::setHiStop(const Real32 &value)
{
    _sfHiStop.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfLoStop field.
inline
Real32 &PhysicsPRJointBase::getLoStop(void)
{
    return _sfLoStop.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfLoStop field.
inline
const Real32 &PhysicsPRJointBase::getLoStop(void) const
{
    return _sfLoStop.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfLoStop field.
inline
void PhysicsPRJointBase::setLoStop(const Real32 &value)
{
    _sfLoStop.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfBounce field.
inline
Real32 &PhysicsPRJointBase::getBounce(void)
{
    return _sfBounce.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfBounce field.
inline
const Real32 &PhysicsPRJointBase::getBounce(void) const
{
    return _sfBounce.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfBounce field.
inline
void PhysicsPRJointBase::setBounce(const Real32 &value)
{
    _sfBounce.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfCFM field.
inline
Real32 &PhysicsPRJointBase::getCFM(void)
{
    return _sfCFM.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfCFM field.
inline
const Real32 &PhysicsPRJointBase::getCFM(void) const
{
    return _sfCFM.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfCFM field.
inline
void PhysicsPRJointBase::setCFM(const Real32 &value)
{
    _sfCFM.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfStopERP field.
inline
Real32 &PhysicsPRJointBase::getStopERP(void)
{
    return _sfStopERP.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfStopERP field.
inline
const Real32 &PhysicsPRJointBase::getStopERP(void) const
{
    return _sfStopERP.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfStopERP field.
inline
void PhysicsPRJointBase::setStopERP(const Real32 &value)
{
    _sfStopERP.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfStopCFM field.
inline
Real32 &PhysicsPRJointBase::getStopCFM(void)
{
    return _sfStopCFM.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfStopCFM field.
inline
const Real32 &PhysicsPRJointBase::getStopCFM(void) const
{
    return _sfStopCFM.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfStopCFM field.
inline
void PhysicsPRJointBase::setStopCFM(const Real32 &value)
{
    _sfStopCFM.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfHiStop2 field.
inline
Real32 &PhysicsPRJointBase::getHiStop2(void)
{
    return _sfHiStop2.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfHiStop2 field.
inline
const Real32 &PhysicsPRJointBase::getHiStop2(void) const
{
    return _sfHiStop2.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfHiStop2 field.
inline
void PhysicsPRJointBase::setHiStop2(const Real32 &value)
{
    _sfHiStop2.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfLoStop2 field.
inline
Real32 &PhysicsPRJointBase::getLoStop2(void)
{
    return _sfLoStop2.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfLoStop2 field.
inline
const Real32 &PhysicsPRJointBase::getLoStop2(void) const
{
    return _sfLoStop2.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfLoStop2 field.
inline
void PhysicsPRJointBase::setLoStop2(const Real32 &value)
{
    _sfLoStop2.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfBounce2 field.
inline
Real32 &PhysicsPRJointBase::getBounce2(void)
{
    return _sfBounce2.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfBounce2 field.
inline
const Real32 &PhysicsPRJointBase::getBounce2(void) const
{
    return _sfBounce2.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfBounce2 field.
inline
void PhysicsPRJointBase::setBounce2(const Real32 &value)
{
    _sfBounce2.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfCFM2 field.
inline
Real32 &PhysicsPRJointBase::getCFM2(void)
{
    return _sfCFM2.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfCFM2 field.
inline
const Real32 &PhysicsPRJointBase::getCFM2(void) const
{
    return _sfCFM2.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfCFM2 field.
inline
void PhysicsPRJointBase::setCFM2(const Real32 &value)
{
    _sfCFM2.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfStopERP2 field.
inline
Real32 &PhysicsPRJointBase::getStopERP2(void)
{
    return _sfStopERP2.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfStopERP2 field.
inline
const Real32 &PhysicsPRJointBase::getStopERP2(void) const
{
    return _sfStopERP2.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfStopERP2 field.
inline
void PhysicsPRJointBase::setStopERP2(const Real32 &value)
{
    _sfStopERP2.setValue(value);
}

//! Get the value of the PhysicsPRJoint::_sfStopCFM2 field.
inline
Real32 &PhysicsPRJointBase::getStopCFM2(void)
{
    return _sfStopCFM2.getValue();
}

//! Get the value of the PhysicsPRJoint::_sfStopCFM2 field.
inline
const Real32 &PhysicsPRJointBase::getStopCFM2(void) const
{
    return _sfStopCFM2.getValue();
}

//! Set the value of the PhysicsPRJoint::_sfStopCFM2 field.
inline
void PhysicsPRJointBase::setStopCFM2(const Real32 &value)
{
    _sfStopCFM2.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSPRJOINTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

