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
 **     class DistanceFadeParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DistanceFadeParticleAffectorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DistanceFadeParticleAffectorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DistanceFadeParticleAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DistanceFadeParticleAffector::_sfDistanceFadeStart field.

inline
Real32 &DistanceFadeParticleAffectorBase::editDistanceFadeStart(void)
{
    editSField(DistanceFadeStartFieldMask);

    return _sfDistanceFadeStart.getValue();
}

//! Get the value of the DistanceFadeParticleAffector::_sfDistanceFadeStart field.
inline
      Real32  DistanceFadeParticleAffectorBase::getDistanceFadeStart(void) const
{
    return _sfDistanceFadeStart.getValue();
}

//! Set the value of the DistanceFadeParticleAffector::_sfDistanceFadeStart field.
inline
void DistanceFadeParticleAffectorBase::setDistanceFadeStart(const Real32 value)
{
    editSField(DistanceFadeStartFieldMask);

    _sfDistanceFadeStart.setValue(value);
}
//! Get the value of the DistanceFadeParticleAffector::_sfDistanceFadeEnd field.

inline
Real32 &DistanceFadeParticleAffectorBase::editDistanceFadeEnd(void)
{
    editSField(DistanceFadeEndFieldMask);

    return _sfDistanceFadeEnd.getValue();
}

//! Get the value of the DistanceFadeParticleAffector::_sfDistanceFadeEnd field.
inline
      Real32  DistanceFadeParticleAffectorBase::getDistanceFadeEnd(void) const
{
    return _sfDistanceFadeEnd.getValue();
}

//! Set the value of the DistanceFadeParticleAffector::_sfDistanceFadeEnd field.
inline
void DistanceFadeParticleAffectorBase::setDistanceFadeEnd(const Real32 value)
{
    editSField(DistanceFadeEndFieldMask);

    _sfDistanceFadeEnd.setValue(value);
}
//! Get the value of the DistanceFadeParticleAffector::_sfFadeStartAlpha field.

inline
Real32 &DistanceFadeParticleAffectorBase::editFadeStartAlpha(void)
{
    editSField(FadeStartAlphaFieldMask);

    return _sfFadeStartAlpha.getValue();
}

//! Get the value of the DistanceFadeParticleAffector::_sfFadeStartAlpha field.
inline
      Real32  DistanceFadeParticleAffectorBase::getFadeStartAlpha(void) const
{
    return _sfFadeStartAlpha.getValue();
}

//! Set the value of the DistanceFadeParticleAffector::_sfFadeStartAlpha field.
inline
void DistanceFadeParticleAffectorBase::setFadeStartAlpha(const Real32 value)
{
    editSField(FadeStartAlphaFieldMask);

    _sfFadeStartAlpha.setValue(value);
}
//! Get the value of the DistanceFadeParticleAffector::_sfFadeEndAlpha field.

inline
Real32 &DistanceFadeParticleAffectorBase::editFadeEndAlpha(void)
{
    editSField(FadeEndAlphaFieldMask);

    return _sfFadeEndAlpha.getValue();
}

//! Get the value of the DistanceFadeParticleAffector::_sfFadeEndAlpha field.
inline
      Real32  DistanceFadeParticleAffectorBase::getFadeEndAlpha(void) const
{
    return _sfFadeEndAlpha.getValue();
}

//! Set the value of the DistanceFadeParticleAffector::_sfFadeEndAlpha field.
inline
void DistanceFadeParticleAffectorBase::setFadeEndAlpha(const Real32 value)
{
    editSField(FadeEndAlphaFieldMask);

    _sfFadeEndAlpha.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DistanceFadeParticleAffectorBase::execSync (      DistanceFadeParticleAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DistanceFadeStartFieldMask & whichField))
        _sfDistanceFadeStart.syncWith(pFrom->_sfDistanceFadeStart);

    if(FieldBits::NoField != (DistanceFadeEndFieldMask & whichField))
        _sfDistanceFadeEnd.syncWith(pFrom->_sfDistanceFadeEnd);

    if(FieldBits::NoField != (FadeStartAlphaFieldMask & whichField))
        _sfFadeStartAlpha.syncWith(pFrom->_sfFadeStartAlpha);

    if(FieldBits::NoField != (FadeEndAlphaFieldMask & whichField))
        _sfFadeEndAlpha.syncWith(pFrom->_sfFadeEndAlpha);
}
#endif


inline
const Char8 *DistanceFadeParticleAffectorBase::getClassname(void)
{
    return "DistanceFadeParticleAffector";
}


OSG_GEN_CONTAINERPTR(DistanceFadeParticleAffector);

OSG_END_NAMESPACE
