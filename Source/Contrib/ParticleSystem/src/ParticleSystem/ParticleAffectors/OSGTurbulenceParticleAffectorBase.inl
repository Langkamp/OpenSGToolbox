/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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

inline
OSG::UInt16 TurbulenceParticleAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the TurbulenceParticleAffector::_sfPerlinDistribution field.
inline
PerlinNoiseDistribution1D * TurbulenceParticleAffectorBase::getPerlinDistribution(void) const
{
    return _sfPerlinDistribution.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfPerlinDistribution field.
inline
void TurbulenceParticleAffectorBase::setPerlinDistribution(PerlinNoiseDistribution1D * const value)
{
    editSField(PerlinDistributionFieldMask);

    _sfPerlinDistribution.setValue(value);
}
//! Get the value of the TurbulenceParticleAffector::_sfAmplitude field.

inline
Real32 &TurbulenceParticleAffectorBase::editAmplitude(void)
{
    editSField(AmplitudeFieldMask);

    return _sfAmplitude.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfAmplitude field.
inline
      Real32  TurbulenceParticleAffectorBase::getAmplitude(void) const
{
    return _sfAmplitude.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfAmplitude field.
inline
void TurbulenceParticleAffectorBase::setAmplitude(const Real32 value)
{
    editSField(AmplitudeFieldMask);

    _sfAmplitude.setValue(value);
}
//! Get the value of the TurbulenceParticleAffector::_sfInterpolationType field.

inline
UInt32 &TurbulenceParticleAffectorBase::editInterpolationType(void)
{
    editSField(InterpolationTypeFieldMask);

    return _sfInterpolationType.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfInterpolationType field.
inline
      UInt32  TurbulenceParticleAffectorBase::getInterpolationType(void) const
{
    return _sfInterpolationType.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfInterpolationType field.
inline
void TurbulenceParticleAffectorBase::setInterpolationType(const UInt32 value)
{
    editSField(InterpolationTypeFieldMask);

    _sfInterpolationType.setValue(value);
}
//! Get the value of the TurbulenceParticleAffector::_sfPhase field.

inline
Vec3f &TurbulenceParticleAffectorBase::editPhase(void)
{
    editSField(PhaseFieldMask);

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
    editSField(PhaseFieldMask);

    _sfPhase.setValue(value);
}
//! Get the value of the TurbulenceParticleAffector::_sfPersistance field.

inline
Real32 &TurbulenceParticleAffectorBase::editPersistance(void)
{
    editSField(PersistanceFieldMask);

    return _sfPersistance.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfPersistance field.
inline
      Real32  TurbulenceParticleAffectorBase::getPersistance(void) const
{
    return _sfPersistance.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfPersistance field.
inline
void TurbulenceParticleAffectorBase::setPersistance(const Real32 value)
{
    editSField(PersistanceFieldMask);

    _sfPersistance.setValue(value);
}
//! Get the value of the TurbulenceParticleAffector::_sfFrequency field.

inline
Real32 &TurbulenceParticleAffectorBase::editFrequency(void)
{
    editSField(FrequencyFieldMask);

    return _sfFrequency.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfFrequency field.
inline
      Real32  TurbulenceParticleAffectorBase::getFrequency(void) const
{
    return _sfFrequency.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfFrequency field.
inline
void TurbulenceParticleAffectorBase::setFrequency(const Real32 value)
{
    editSField(FrequencyFieldMask);

    _sfFrequency.setValue(value);
}
//! Get the value of the TurbulenceParticleAffector::_sfOctaves field.

inline
UInt32 &TurbulenceParticleAffectorBase::editOctaves(void)
{
    editSField(OctavesFieldMask);

    return _sfOctaves.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfOctaves field.
inline
      UInt32  TurbulenceParticleAffectorBase::getOctaves(void) const
{
    return _sfOctaves.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfOctaves field.
inline
void TurbulenceParticleAffectorBase::setOctaves(const UInt32 value)
{
    editSField(OctavesFieldMask);

    _sfOctaves.setValue(value);
}

//! Get the value of the TurbulenceParticleAffector::_sfBeacon field.
inline
Node * TurbulenceParticleAffectorBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfBeacon field.
inline
void TurbulenceParticleAffectorBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}
//! Get the value of the TurbulenceParticleAffector::_sfAttenuation field.

inline
Real32 &TurbulenceParticleAffectorBase::editAttenuation(void)
{
    editSField(AttenuationFieldMask);

    return _sfAttenuation.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfAttenuation field.
inline
      Real32  TurbulenceParticleAffectorBase::getAttenuation(void) const
{
    return _sfAttenuation.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfAttenuation field.
inline
void TurbulenceParticleAffectorBase::setAttenuation(const Real32 value)
{
    editSField(AttenuationFieldMask);

    _sfAttenuation.setValue(value);
}
//! Get the value of the TurbulenceParticleAffector::_sfMaxDistance field.

inline
Real32 &TurbulenceParticleAffectorBase::editMaxDistance(void)
{
    editSField(MaxDistanceFieldMask);

    return _sfMaxDistance.getValue();
}

//! Get the value of the TurbulenceParticleAffector::_sfMaxDistance field.
inline
      Real32  TurbulenceParticleAffectorBase::getMaxDistance(void) const
{
    return _sfMaxDistance.getValue();
}

//! Set the value of the TurbulenceParticleAffector::_sfMaxDistance field.
inline
void TurbulenceParticleAffectorBase::setMaxDistance(const Real32 value)
{
    editSField(MaxDistanceFieldMask);

    _sfMaxDistance.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TurbulenceParticleAffectorBase::execSync (      TurbulenceParticleAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
        _sfPerlinDistribution.syncWith(pFrom->_sfPerlinDistribution);

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
        _sfAmplitude.syncWith(pFrom->_sfAmplitude);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pFrom->_sfInterpolationType);

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
        _sfPhase.syncWith(pFrom->_sfPhase);

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
        _sfPersistance.syncWith(pFrom->_sfPersistance);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
        _sfFrequency.syncWith(pFrom->_sfFrequency);

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
        _sfOctaves.syncWith(pFrom->_sfOctaves);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
        _sfAttenuation.syncWith(pFrom->_sfAttenuation);

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
        _sfMaxDistance.syncWith(pFrom->_sfMaxDistance);
}
#endif


inline
const Char8 *TurbulenceParticleAffectorBase::getClassname(void)
{
    return "TurbulenceParticleAffector";
}
OSG_GEN_CONTAINERPTR(TurbulenceParticleAffector);

OSG_END_NAMESPACE

