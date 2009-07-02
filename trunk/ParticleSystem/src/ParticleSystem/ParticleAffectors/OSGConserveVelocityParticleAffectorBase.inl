/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class ConserveVelocityParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ConserveVelocityParticleAffectorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ConserveVelocityParticleAffectorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ConserveVelocityParticleAffectorPtr ConserveVelocityParticleAffectorBase::create(void) 
{
    ConserveVelocityParticleAffectorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ConserveVelocityParticleAffectorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ConserveVelocityParticleAffectorPtr ConserveVelocityParticleAffectorBase::createEmpty(void) 
{ 
    ConserveVelocityParticleAffectorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ConserveVelocityParticleAffector::_sfConserve field.
inline
SFReal32 *ConserveVelocityParticleAffectorBase::getSFConserve(void)
{
    return &_sfConserve;
}


//! Get the value of the ConserveVelocityParticleAffector::_sfConserve field.
inline
Real32 &ConserveVelocityParticleAffectorBase::getConserve(void)
{
    return _sfConserve.getValue();
}

//! Get the value of the ConserveVelocityParticleAffector::_sfConserve field.
inline
const Real32 &ConserveVelocityParticleAffectorBase::getConserve(void) const
{
    return _sfConserve.getValue();
}

//! Set the value of the ConserveVelocityParticleAffector::_sfConserve field.
inline
void ConserveVelocityParticleAffectorBase::setConserve(const Real32 &value)
{
    _sfConserve.setValue(osg::osgClamp<Real32>(0.0f,value,1.0f));
}


OSG_END_NAMESPACE

#define OSGCONSERVEVELOCITYPARTICLEAFFECTORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

