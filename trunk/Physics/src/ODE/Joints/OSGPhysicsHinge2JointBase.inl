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
 **     class PhysicsHinge2Joint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsHinge2JointBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsHinge2JointBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsHinge2JointPtr PhysicsHinge2JointBase::create(void) 
{
    PhysicsHinge2JointPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsHinge2JointPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsHinge2JointPtr PhysicsHinge2JointBase::createEmpty(void) 
{ 
    PhysicsHinge2JointPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsHinge2Joint::_sfAnchor field.
inline
SFVec3f *PhysicsHinge2JointBase::getSFAnchor(void)
{
    return &_sfAnchor;
}

//! Get the PhysicsHinge2Joint::_sfAxis1 field.
inline
SFVec3f *PhysicsHinge2JointBase::getSFAxis1(void)
{
    return &_sfAxis1;
}

//! Get the PhysicsHinge2Joint::_sfAxis2 field.
inline
SFVec3f *PhysicsHinge2JointBase::getSFAxis2(void)
{
    return &_sfAxis2;
}

//! Get the PhysicsHinge2Joint::_sfHiStop field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFHiStop(void)
{
    return &_sfHiStop;
}

//! Get the PhysicsHinge2Joint::_sfLoStop field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFLoStop(void)
{
    return &_sfLoStop;
}

//! Get the PhysicsHinge2Joint::_sfBounce field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFBounce(void)
{
    return &_sfBounce;
}

//! Get the PhysicsHinge2Joint::_sfCFM field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFCFM(void)
{
    return &_sfCFM;
}

//! Get the PhysicsHinge2Joint::_sfStopERP field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFStopERP(void)
{
    return &_sfStopERP;
}

//! Get the PhysicsHinge2Joint::_sfStopCFM field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFStopCFM(void)
{
    return &_sfStopCFM;
}

//! Get the PhysicsHinge2Joint::_sfHiStop2 field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFHiStop2(void)
{
    return &_sfHiStop2;
}

//! Get the PhysicsHinge2Joint::_sfLoStop2 field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFLoStop2(void)
{
    return &_sfLoStop2;
}

//! Get the PhysicsHinge2Joint::_sfBounce2 field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFBounce2(void)
{
    return &_sfBounce2;
}

//! Get the PhysicsHinge2Joint::_sfCFM2 field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFCFM2(void)
{
    return &_sfCFM2;
}

//! Get the PhysicsHinge2Joint::_sfStopERP2 field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFStopERP2(void)
{
    return &_sfStopERP2;
}

//! Get the PhysicsHinge2Joint::_sfStopCFM2 field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFStopCFM2(void)
{
    return &_sfStopCFM2;
}

//! Get the PhysicsHinge2Joint::_sfSuspensionERP field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFSuspensionERP(void)
{
    return &_sfSuspensionERP;
}

//! Get the PhysicsHinge2Joint::_sfSuspensionCFM field.
inline
SFReal32 *PhysicsHinge2JointBase::getSFSuspensionCFM(void)
{
    return &_sfSuspensionCFM;
}


//! Get the value of the PhysicsHinge2Joint::_sfAnchor field.
inline
Vec3f &PhysicsHinge2JointBase::getAnchor(void)
{
    return _sfAnchor.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfAnchor field.
inline
const Vec3f &PhysicsHinge2JointBase::getAnchor(void) const
{
    return _sfAnchor.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfAnchor field.
inline
void PhysicsHinge2JointBase::setAnchor(const Vec3f &value)
{
    _sfAnchor.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfAxis1 field.
inline
Vec3f &PhysicsHinge2JointBase::getAxis1(void)
{
    return _sfAxis1.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfAxis1 field.
inline
const Vec3f &PhysicsHinge2JointBase::getAxis1(void) const
{
    return _sfAxis1.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfAxis1 field.
inline
void PhysicsHinge2JointBase::setAxis1(const Vec3f &value)
{
    _sfAxis1.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfAxis2 field.
inline
Vec3f &PhysicsHinge2JointBase::getAxis2(void)
{
    return _sfAxis2.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfAxis2 field.
inline
const Vec3f &PhysicsHinge2JointBase::getAxis2(void) const
{
    return _sfAxis2.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfAxis2 field.
inline
void PhysicsHinge2JointBase::setAxis2(const Vec3f &value)
{
    _sfAxis2.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfHiStop field.
inline
Real32 &PhysicsHinge2JointBase::getHiStop(void)
{
    return _sfHiStop.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfHiStop field.
inline
const Real32 &PhysicsHinge2JointBase::getHiStop(void) const
{
    return _sfHiStop.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfHiStop field.
inline
void PhysicsHinge2JointBase::setHiStop(const Real32 &value)
{
    _sfHiStop.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfLoStop field.
inline
Real32 &PhysicsHinge2JointBase::getLoStop(void)
{
    return _sfLoStop.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfLoStop field.
inline
const Real32 &PhysicsHinge2JointBase::getLoStop(void) const
{
    return _sfLoStop.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfLoStop field.
inline
void PhysicsHinge2JointBase::setLoStop(const Real32 &value)
{
    _sfLoStop.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfBounce field.
inline
Real32 &PhysicsHinge2JointBase::getBounce(void)
{
    return _sfBounce.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfBounce field.
inline
const Real32 &PhysicsHinge2JointBase::getBounce(void) const
{
    return _sfBounce.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfBounce field.
inline
void PhysicsHinge2JointBase::setBounce(const Real32 &value)
{
    _sfBounce.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfCFM field.
inline
Real32 &PhysicsHinge2JointBase::getCFM(void)
{
    return _sfCFM.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfCFM field.
inline
const Real32 &PhysicsHinge2JointBase::getCFM(void) const
{
    return _sfCFM.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfCFM field.
inline
void PhysicsHinge2JointBase::setCFM(const Real32 &value)
{
    _sfCFM.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfStopERP field.
inline
Real32 &PhysicsHinge2JointBase::getStopERP(void)
{
    return _sfStopERP.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfStopERP field.
inline
const Real32 &PhysicsHinge2JointBase::getStopERP(void) const
{
    return _sfStopERP.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfStopERP field.
inline
void PhysicsHinge2JointBase::setStopERP(const Real32 &value)
{
    _sfStopERP.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfStopCFM field.
inline
Real32 &PhysicsHinge2JointBase::getStopCFM(void)
{
    return _sfStopCFM.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfStopCFM field.
inline
const Real32 &PhysicsHinge2JointBase::getStopCFM(void) const
{
    return _sfStopCFM.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfStopCFM field.
inline
void PhysicsHinge2JointBase::setStopCFM(const Real32 &value)
{
    _sfStopCFM.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfHiStop2 field.
inline
Real32 &PhysicsHinge2JointBase::getHiStop2(void)
{
    return _sfHiStop2.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfHiStop2 field.
inline
const Real32 &PhysicsHinge2JointBase::getHiStop2(void) const
{
    return _sfHiStop2.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfHiStop2 field.
inline
void PhysicsHinge2JointBase::setHiStop2(const Real32 &value)
{
    _sfHiStop2.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfLoStop2 field.
inline
Real32 &PhysicsHinge2JointBase::getLoStop2(void)
{
    return _sfLoStop2.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfLoStop2 field.
inline
const Real32 &PhysicsHinge2JointBase::getLoStop2(void) const
{
    return _sfLoStop2.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfLoStop2 field.
inline
void PhysicsHinge2JointBase::setLoStop2(const Real32 &value)
{
    _sfLoStop2.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfBounce2 field.
inline
Real32 &PhysicsHinge2JointBase::getBounce2(void)
{
    return _sfBounce2.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfBounce2 field.
inline
const Real32 &PhysicsHinge2JointBase::getBounce2(void) const
{
    return _sfBounce2.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfBounce2 field.
inline
void PhysicsHinge2JointBase::setBounce2(const Real32 &value)
{
    _sfBounce2.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfCFM2 field.
inline
Real32 &PhysicsHinge2JointBase::getCFM2(void)
{
    return _sfCFM2.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfCFM2 field.
inline
const Real32 &PhysicsHinge2JointBase::getCFM2(void) const
{
    return _sfCFM2.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfCFM2 field.
inline
void PhysicsHinge2JointBase::setCFM2(const Real32 &value)
{
    _sfCFM2.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfStopERP2 field.
inline
Real32 &PhysicsHinge2JointBase::getStopERP2(void)
{
    return _sfStopERP2.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfStopERP2 field.
inline
const Real32 &PhysicsHinge2JointBase::getStopERP2(void) const
{
    return _sfStopERP2.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfStopERP2 field.
inline
void PhysicsHinge2JointBase::setStopERP2(const Real32 &value)
{
    _sfStopERP2.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfStopCFM2 field.
inline
Real32 &PhysicsHinge2JointBase::getStopCFM2(void)
{
    return _sfStopCFM2.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfStopCFM2 field.
inline
const Real32 &PhysicsHinge2JointBase::getStopCFM2(void) const
{
    return _sfStopCFM2.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfStopCFM2 field.
inline
void PhysicsHinge2JointBase::setStopCFM2(const Real32 &value)
{
    _sfStopCFM2.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfSuspensionERP field.
inline
Real32 &PhysicsHinge2JointBase::getSuspensionERP(void)
{
    return _sfSuspensionERP.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfSuspensionERP field.
inline
const Real32 &PhysicsHinge2JointBase::getSuspensionERP(void) const
{
    return _sfSuspensionERP.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfSuspensionERP field.
inline
void PhysicsHinge2JointBase::setSuspensionERP(const Real32 &value)
{
    _sfSuspensionERP.setValue(value);
}

//! Get the value of the PhysicsHinge2Joint::_sfSuspensionCFM field.
inline
Real32 &PhysicsHinge2JointBase::getSuspensionCFM(void)
{
    return _sfSuspensionCFM.getValue();
}

//! Get the value of the PhysicsHinge2Joint::_sfSuspensionCFM field.
inline
const Real32 &PhysicsHinge2JointBase::getSuspensionCFM(void) const
{
    return _sfSuspensionCFM.getValue();
}

//! Set the value of the PhysicsHinge2Joint::_sfSuspensionCFM field.
inline
void PhysicsHinge2JointBase::setSuspensionCFM(const Real32 &value)
{
    _sfSuspensionCFM.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSHINGE2JOINTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

