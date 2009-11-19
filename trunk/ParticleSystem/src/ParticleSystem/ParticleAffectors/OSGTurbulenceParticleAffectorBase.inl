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
 **     class TurbulenceParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TurbulenceParticleAffectorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TurbulenceParticleAffectorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TurbulenceParticleAffectorPtr TurbulenceParticleAffectorBase::create(void) 
{
    TurbulenceParticleAffectorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TurbulenceParticleAffectorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TurbulenceParticleAffectorPtr TurbulenceParticleAffectorBase::createEmpty(void) 
{ 
    TurbulenceParticleAffectorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TurbulenceParticleAffector::_sfPerlinDistribution field.
inline
const SFPerlinNoiseDistribution1DPtr *TurbulenceParticleAffectorBase::getSFPerlinDistribution(void) const
{
    return &_sfPerlinDistribution;
}

//! Get the TurbulenceParticleAffector::_sfPerlinDistribution field.
inline
SFPerlinNoiseDistribution1DPtr *TurbulenceParticleAffectorBase::editSFPerlinDistribution(void)
{
    return &_sfPerlinDistribution;
}

//! Get the TurbulenceParticleAffector::_sfAmplitude field.
inline
const SFReal32 *TurbulenceParticleAffectorBase::getSFAmplitude(void) const
{
    return &_sfAmplitude;
}

//! Get the TurbulenceParticleAffector::_sfAmplitude field.
inline
SFReal32 *TurbulenceParticleAffectorBase::editSFAmplitude(void)
{
    return &_sfAmplitude;
}

//! Get the TurbulenceParticleAffector::_sfInterpolationType field.
inline
const SFUInt32 *TurbulenceParticleAffectorBase::getSFInterpolationType(void) const
{
    return &_sfInterpolationType;
}

//! Get the TurbulenceParticleAffector::_sfInterpolationType field.
inline
SFUInt32 *TurbulenceParticleAffectorBase::editSFInterpolationType(void)
{
    return &_sfInterpolationType;
}

//! Get the TurbulenceParticleAffector::_sfPhase field.
inline
const SFVec3f *TurbulenceParticleAffectorBase::getSFPhase(void) const
{
    return &_sfPhase;
}

//! Get the TurbulenceParticleAffector::_sfPhase field.
inline
SFVec3f *TurbulenceParticleAffectorBase::editSFPhase(void)
{
    return &_sfPhase;
}

//! Get the TurbulenceParticleAffector::_sfPersistance field.
inline
const SFReal32 *TurbulenceParticleAffectorBase::getSFPersistance(void) const
{
    return &_sfPersistance;
}

//! Get the TurbulenceParticleAffector::_sfPersistance field.
inline
SFReal32 *TurbulenceParticleAffectorBase::editSFPersistance(void)
{
    return &_sfPersistance;
}

//! Get the TurbulenceParticleAffector::_sfFrequency field.
inline
const SFReal32 *TurbulenceParticleAffectorBase::getSFFrequency(void) const
{
    return &_sfFrequency;
}

//! Get the TurbulenceParticleAffector::_sfFrequency field.
inline
SFReal32 *TurbulenceParticleAffectorBase::editSFFrequency(void)
{
    return &_sfFrequency;
}

//! Get the TurbulenceParticleAffector::_sfOctaves field.
inline
const SFUInt32 *TurbulenceParticleAffectorBase::getSFOctaves(void) const
{
    return &_sfOctaves;
}

//! Get the TurbulenceParticleAffector::_sfOctaves field.
inline
SFUInt32 *TurbulenceParticleAffectorBase::editSFOctaves(void)
{
    return &_sfOctaves;
}

//! Get the TurbulenceParticleAffector::_sfBeacon field.
inline
const SFNodePtr *TurbulenceParticleAffectorBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

//! Get the TurbulenceParticleAffector::_sfBeacon field.
inline
SFNodePtr *TurbulenceParticleAffectorBase::editSFBeacon(void)
{
    return &_sfBeacon;
}

//! Get the TurbulenceParticleAffector::_sfAttenuation field.
inline
const SFReal32 *TurbulenceParticleAffectorBase::getSFAttenuation(void) const
{
    return &_sfAttenuation;
}

//! Get the TurbulenceParticleAffector::_sfAttenuation field.
inline
SFReal32 *TurbulenceParticleAffectorBase::editSFAttenuation(void)
{
    return &_sfAttenuation;
}

//! Get the TurbulenceParticleAffector::_sfMaxDistance field.
inline
const SFReal32 *TurbulenceParticleAffectorBase::getSFMaxDistance(void) const
{
    return &_sfMaxDistance;
}

//! Get the TurbulenceParticleAffector::_sfMaxDistance field.
inline
SFReal32 *TurbulenceParticleAffectorBase::editSFMaxDistance(void)
{
    return &_sfMaxDistance;
}


//! Get the value of the TurbulenceParticleAffector::_sfPerlinDistribution field.
inline
PerlinNoiseDistribution1DPtr &TurbulenceParticleAffectorBase::editPerlinDistribution(void)
{
    return _sfPerlinDistribution.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfPerlinDistribution field.
inline
const PerlinNoiseDistribution1DPtr &TurbulenceParticleAffectorBase::getPerlinDistribution(void) const
{
    return _sfPerlinDistribution.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfPerlinDistribution field.
inline
void TurbulenceParticleAffectorBase::setPerlinDistribution(const PerlinNoiseDistribution1DPtr &value)
{
    _sfPerlinDistribution.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfAmplitude field.
inline
Real32 &TurbulenceParticleAffectorBase::editAmplitude(void)
{
    return _sfAmplitude.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfAmplitude field.
inline
const Real32 &TurbulenceParticleAffectorBase::getAmplitude(void) const
{
    return _sfAmplitude.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfAmplitude field.
inline
void TurbulenceParticleAffectorBase::setAmplitude(const Real32 &value)
{
    _sfAmplitude.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfInterpolationType field.
inline
UInt32 &TurbulenceParticleAffectorBase::editInterpolationType(void)
{
    return _sfInterpolationType.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfInterpolationType field.
inline
const UInt32 &TurbulenceParticleAffectorBase::getInterpolationType(void) const
{
    return _sfInterpolationType.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfInterpolationType field.
inline
void TurbulenceParticleAffectorBase::setInterpolationType(const UInt32 &value)
{
    _sfInterpolationType.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfPhase field.
inline
Vec3f &TurbulenceParticleAffectorBase::editPhase(void)
{
    return _sfPhase.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfPhase field.
inline
const Vec3f &TurbulenceParticleAffectorBase::getPhase(void) const
{
    return _sfPhase.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfPhase field.
inline
void TurbulenceParticleAffectorBase::setPhase(const Vec3f &value)
{
    _sfPhase.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfPersistance field.
inline
Real32 &TurbulenceParticleAffectorBase::editPersistance(void)
{
    return _sfPersistance.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfPersistance field.
inline
const Real32 &TurbulenceParticleAffectorBase::getPersistance(void) const
{
    return _sfPersistance.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfPersistance field.
inline
void TurbulenceParticleAffectorBase::setPersistance(const Real32 &value)
{
    _sfPersistance.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfFrequency field.
inline
Real32 &TurbulenceParticleAffectorBase::editFrequency(void)
{
    return _sfFrequency.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfFrequency field.
inline
const Real32 &TurbulenceParticleAffectorBase::getFrequency(void) const
{
    return _sfFrequency.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfFrequency field.
inline
void TurbulenceParticleAffectorBase::setFrequency(const Real32 &value)
{
    _sfFrequency.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfOctaves field.
inline
UInt32 &TurbulenceParticleAffectorBase::editOctaves(void)
{
    return _sfOctaves.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfOctaves field.
inline
const UInt32 &TurbulenceParticleAffectorBase::getOctaves(void) const
{
    return _sfOctaves.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfOctaves field.
inline
void TurbulenceParticleAffectorBase::setOctaves(const UInt32 &value)
{
    _sfOctaves.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfBeacon field.
inline
NodePtr &TurbulenceParticleAffectorBase::editBeacon(void)
{
    return _sfBeacon.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfBeacon field.
inline
const NodePtr &TurbulenceParticleAffectorBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfBeacon field.
inline
void TurbulenceParticleAffectorBase::setBeacon(const NodePtr &value)
{
    _sfBeacon.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfAttenuation field.
inline
Real32 &TurbulenceParticleAffectorBase::editAttenuation(void)
{
    return _sfAttenuation.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfAttenuation field.
inline
const Real32 &TurbulenceParticleAffectorBase::getAttenuation(void) const
{
    return _sfAttenuation.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfAttenuation field.
inline
void TurbulenceParticleAffectorBase::setAttenuation(const Real32 &value)
{
    _sfAttenuation.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfMaxDistance field.
inline
Real32 &TurbulenceParticleAffectorBase::editMaxDistance(void)
{
    return _sfMaxDistance.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfMaxDistance field.
inline
const Real32 &TurbulenceParticleAffectorBase::getMaxDistance(void) const
{
    return _sfMaxDistance.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfMaxDistance field.
inline
void TurbulenceParticleAffectorBase::setMaxDistance(const Real32 &value)
{
    _sfMaxDistance.setValue(value);
}


OSG_END_NAMESPACE
