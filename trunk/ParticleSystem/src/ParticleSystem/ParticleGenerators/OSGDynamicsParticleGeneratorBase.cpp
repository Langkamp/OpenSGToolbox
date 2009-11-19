/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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
 **     class DynamicsParticleGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDYNAMICSPARTICLEGENERATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDynamicsParticleGeneratorBase.h"
#include "OSGDynamicsParticleGenerator.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DynamicsParticleGeneratorBase::PositionDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::PositionDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::SecPositionDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::SecPositionDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::NormalDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::NormalDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::ColorDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::ColorDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::TransparencyDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::TransparencyDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::SizeDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::SizeDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::LifespanDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::LifespanDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::AgeDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::AgeDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::VelocityDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::VelocityDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::SecVelocityDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::SecVelocityDistributionFieldId);

const OSG::BitVector  DynamicsParticleGeneratorBase::AccelerationDistributionFieldMask = 
    (TypeTraits<BitVector>::One << DynamicsParticleGeneratorBase::AccelerationDistributionFieldId);

const OSG::BitVector DynamicsParticleGeneratorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Distribution3DPtr DynamicsParticleGeneratorBase::_sfPositionDistribution
    
*/
/*! \var Distribution3DPtr DynamicsParticleGeneratorBase::_sfSecPositionDistribution
    
*/
/*! \var Distribution3DPtr DynamicsParticleGeneratorBase::_sfNormalDistribution
    
*/
/*! \var Distribution3DPtr DynamicsParticleGeneratorBase::_sfColorDistribution
    
*/
/*! \var Distribution1DPtr DynamicsParticleGeneratorBase::_sfTransparencyDistribution
    
*/
/*! \var Distribution3DPtr DynamicsParticleGeneratorBase::_sfSizeDistribution
    
*/
/*! \var Distribution1DPtr DynamicsParticleGeneratorBase::_sfLifespanDistribution
    
*/
/*! \var Distribution1DPtr DynamicsParticleGeneratorBase::_sfAgeDistribution
    
*/
/*! \var Distribution3DPtr DynamicsParticleGeneratorBase::_sfVelocityDistribution
    
*/
/*! \var Distribution3DPtr DynamicsParticleGeneratorBase::_sfSecVelocityDistribution
    
*/
/*! \var Distribution3DPtr DynamicsParticleGeneratorBase::_sfAccelerationDistribution
    
*/

//! DynamicsParticleGenerator description

FieldDescription *DynamicsParticleGeneratorBase::_desc[] = 
{
    new FieldDescription(SFDistribution3DPtr::getClassType(), 
                     "PositionDistribution", 
                     PositionDistributionFieldId, PositionDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFPositionDistribution)),
    new FieldDescription(SFDistribution3DPtr::getClassType(), 
                     "SecPositionDistribution", 
                     SecPositionDistributionFieldId, SecPositionDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFSecPositionDistribution)),
    new FieldDescription(SFDistribution3DPtr::getClassType(), 
                     "NormalDistribution", 
                     NormalDistributionFieldId, NormalDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFNormalDistribution)),
    new FieldDescription(SFDistribution3DPtr::getClassType(), 
                     "ColorDistribution", 
                     ColorDistributionFieldId, ColorDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFColorDistribution)),
    new FieldDescription(SFDistribution1DPtr::getClassType(), 
                     "TransparencyDistribution", 
                     TransparencyDistributionFieldId, TransparencyDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFTransparencyDistribution)),
    new FieldDescription(SFDistribution3DPtr::getClassType(), 
                     "SizeDistribution", 
                     SizeDistributionFieldId, SizeDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFSizeDistribution)),
    new FieldDescription(SFDistribution1DPtr::getClassType(), 
                     "LifespanDistribution", 
                     LifespanDistributionFieldId, LifespanDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFLifespanDistribution)),
    new FieldDescription(SFDistribution1DPtr::getClassType(), 
                     "AgeDistribution", 
                     AgeDistributionFieldId, AgeDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFAgeDistribution)),
    new FieldDescription(SFDistribution3DPtr::getClassType(), 
                     "VelocityDistribution", 
                     VelocityDistributionFieldId, VelocityDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFVelocityDistribution)),
    new FieldDescription(SFDistribution3DPtr::getClassType(), 
                     "SecVelocityDistribution", 
                     SecVelocityDistributionFieldId, SecVelocityDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFSecVelocityDistribution)),
    new FieldDescription(SFDistribution3DPtr::getClassType(), 
                     "AccelerationDistribution", 
                     AccelerationDistributionFieldId, AccelerationDistributionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DynamicsParticleGeneratorBase::editSFAccelerationDistribution))
};


FieldContainerType DynamicsParticleGeneratorBase::_type(
    "DynamicsParticleGenerator",
    "ParticleGenerator",
    NULL,
    NULL, 
    DynamicsParticleGenerator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DynamicsParticleGeneratorBase, DynamicsParticleGeneratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DynamicsParticleGeneratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DynamicsParticleGeneratorBase::getType(void) const 
{
    return _type;
} 


UInt32 DynamicsParticleGeneratorBase::getContainerSize(void) const 
{ 
    return sizeof(DynamicsParticleGenerator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DynamicsParticleGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<DynamicsParticleGeneratorBase *>(&other),
                          whichField);
}
#else
void DynamicsParticleGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DynamicsParticleGeneratorBase *) &other, whichField, sInfo);
}
void DynamicsParticleGeneratorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DynamicsParticleGeneratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DynamicsParticleGeneratorBase::DynamicsParticleGeneratorBase(void) :
    _sfPositionDistribution   (Distribution3DPtr(NullFC)), 
    _sfSecPositionDistribution(Distribution3DPtr(NullFC)), 
    _sfNormalDistribution     (Distribution3DPtr(NullFC)), 
    _sfColorDistribution      (Distribution3DPtr(NullFC)), 
    _sfTransparencyDistribution(Distribution1DPtr(NullFC)), 
    _sfSizeDistribution       (Distribution3DPtr(NullFC)), 
    _sfLifespanDistribution   (Distribution1DPtr(NullFC)), 
    _sfAgeDistribution        (Distribution1DPtr(NullFC)), 
    _sfVelocityDistribution   (Distribution3DPtr(NullFC)), 
    _sfSecVelocityDistribution(Distribution3DPtr(NullFC)), 
    _sfAccelerationDistribution(Distribution3DPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DynamicsParticleGeneratorBase::DynamicsParticleGeneratorBase(const DynamicsParticleGeneratorBase &source) :
    _sfPositionDistribution   (source._sfPositionDistribution   ), 
    _sfSecPositionDistribution(source._sfSecPositionDistribution), 
    _sfNormalDistribution     (source._sfNormalDistribution     ), 
    _sfColorDistribution      (source._sfColorDistribution      ), 
    _sfTransparencyDistribution(source._sfTransparencyDistribution), 
    _sfSizeDistribution       (source._sfSizeDistribution       ), 
    _sfLifespanDistribution   (source._sfLifespanDistribution   ), 
    _sfAgeDistribution        (source._sfAgeDistribution        ), 
    _sfVelocityDistribution   (source._sfVelocityDistribution   ), 
    _sfSecVelocityDistribution(source._sfSecVelocityDistribution), 
    _sfAccelerationDistribution(source._sfAccelerationDistribution), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DynamicsParticleGeneratorBase::~DynamicsParticleGeneratorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DynamicsParticleGeneratorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionDistributionFieldMask & whichField))
    {
        returnValue += _sfPositionDistribution.getBinSize();
    }

    if(FieldBits::NoField != (SecPositionDistributionFieldMask & whichField))
    {
        returnValue += _sfSecPositionDistribution.getBinSize();
    }

    if(FieldBits::NoField != (NormalDistributionFieldMask & whichField))
    {
        returnValue += _sfNormalDistribution.getBinSize();
    }

    if(FieldBits::NoField != (ColorDistributionFieldMask & whichField))
    {
        returnValue += _sfColorDistribution.getBinSize();
    }

    if(FieldBits::NoField != (TransparencyDistributionFieldMask & whichField))
    {
        returnValue += _sfTransparencyDistribution.getBinSize();
    }

    if(FieldBits::NoField != (SizeDistributionFieldMask & whichField))
    {
        returnValue += _sfSizeDistribution.getBinSize();
    }

    if(FieldBits::NoField != (LifespanDistributionFieldMask & whichField))
    {
        returnValue += _sfLifespanDistribution.getBinSize();
    }

    if(FieldBits::NoField != (AgeDistributionFieldMask & whichField))
    {
        returnValue += _sfAgeDistribution.getBinSize();
    }

    if(FieldBits::NoField != (VelocityDistributionFieldMask & whichField))
    {
        returnValue += _sfVelocityDistribution.getBinSize();
    }

    if(FieldBits::NoField != (SecVelocityDistributionFieldMask & whichField))
    {
        returnValue += _sfSecVelocityDistribution.getBinSize();
    }

    if(FieldBits::NoField != (AccelerationDistributionFieldMask & whichField))
    {
        returnValue += _sfAccelerationDistribution.getBinSize();
    }


    return returnValue;
}

void DynamicsParticleGeneratorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionDistributionFieldMask & whichField))
    {
        _sfPositionDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SecPositionDistributionFieldMask & whichField))
    {
        _sfSecPositionDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NormalDistributionFieldMask & whichField))
    {
        _sfNormalDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColorDistributionFieldMask & whichField))
    {
        _sfColorDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TransparencyDistributionFieldMask & whichField))
    {
        _sfTransparencyDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SizeDistributionFieldMask & whichField))
    {
        _sfSizeDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LifespanDistributionFieldMask & whichField))
    {
        _sfLifespanDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AgeDistributionFieldMask & whichField))
    {
        _sfAgeDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VelocityDistributionFieldMask & whichField))
    {
        _sfVelocityDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SecVelocityDistributionFieldMask & whichField))
    {
        _sfSecVelocityDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AccelerationDistributionFieldMask & whichField))
    {
        _sfAccelerationDistribution.copyToBin(pMem);
    }


}

void DynamicsParticleGeneratorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionDistributionFieldMask & whichField))
    {
        _sfPositionDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SecPositionDistributionFieldMask & whichField))
    {
        _sfSecPositionDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NormalDistributionFieldMask & whichField))
    {
        _sfNormalDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColorDistributionFieldMask & whichField))
    {
        _sfColorDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TransparencyDistributionFieldMask & whichField))
    {
        _sfTransparencyDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SizeDistributionFieldMask & whichField))
    {
        _sfSizeDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LifespanDistributionFieldMask & whichField))
    {
        _sfLifespanDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AgeDistributionFieldMask & whichField))
    {
        _sfAgeDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VelocityDistributionFieldMask & whichField))
    {
        _sfVelocityDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SecVelocityDistributionFieldMask & whichField))
    {
        _sfSecVelocityDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AccelerationDistributionFieldMask & whichField))
    {
        _sfAccelerationDistribution.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DynamicsParticleGeneratorBase::executeSyncImpl(      DynamicsParticleGeneratorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PositionDistributionFieldMask & whichField))
        _sfPositionDistribution.syncWith(pOther->_sfPositionDistribution);

    if(FieldBits::NoField != (SecPositionDistributionFieldMask & whichField))
        _sfSecPositionDistribution.syncWith(pOther->_sfSecPositionDistribution);

    if(FieldBits::NoField != (NormalDistributionFieldMask & whichField))
        _sfNormalDistribution.syncWith(pOther->_sfNormalDistribution);

    if(FieldBits::NoField != (ColorDistributionFieldMask & whichField))
        _sfColorDistribution.syncWith(pOther->_sfColorDistribution);

    if(FieldBits::NoField != (TransparencyDistributionFieldMask & whichField))
        _sfTransparencyDistribution.syncWith(pOther->_sfTransparencyDistribution);

    if(FieldBits::NoField != (SizeDistributionFieldMask & whichField))
        _sfSizeDistribution.syncWith(pOther->_sfSizeDistribution);

    if(FieldBits::NoField != (LifespanDistributionFieldMask & whichField))
        _sfLifespanDistribution.syncWith(pOther->_sfLifespanDistribution);

    if(FieldBits::NoField != (AgeDistributionFieldMask & whichField))
        _sfAgeDistribution.syncWith(pOther->_sfAgeDistribution);

    if(FieldBits::NoField != (VelocityDistributionFieldMask & whichField))
        _sfVelocityDistribution.syncWith(pOther->_sfVelocityDistribution);

    if(FieldBits::NoField != (SecVelocityDistributionFieldMask & whichField))
        _sfSecVelocityDistribution.syncWith(pOther->_sfSecVelocityDistribution);

    if(FieldBits::NoField != (AccelerationDistributionFieldMask & whichField))
        _sfAccelerationDistribution.syncWith(pOther->_sfAccelerationDistribution);


}
#else
void DynamicsParticleGeneratorBase::executeSyncImpl(      DynamicsParticleGeneratorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PositionDistributionFieldMask & whichField))
        _sfPositionDistribution.syncWith(pOther->_sfPositionDistribution);

    if(FieldBits::NoField != (SecPositionDistributionFieldMask & whichField))
        _sfSecPositionDistribution.syncWith(pOther->_sfSecPositionDistribution);

    if(FieldBits::NoField != (NormalDistributionFieldMask & whichField))
        _sfNormalDistribution.syncWith(pOther->_sfNormalDistribution);

    if(FieldBits::NoField != (ColorDistributionFieldMask & whichField))
        _sfColorDistribution.syncWith(pOther->_sfColorDistribution);

    if(FieldBits::NoField != (TransparencyDistributionFieldMask & whichField))
        _sfTransparencyDistribution.syncWith(pOther->_sfTransparencyDistribution);

    if(FieldBits::NoField != (SizeDistributionFieldMask & whichField))
        _sfSizeDistribution.syncWith(pOther->_sfSizeDistribution);

    if(FieldBits::NoField != (LifespanDistributionFieldMask & whichField))
        _sfLifespanDistribution.syncWith(pOther->_sfLifespanDistribution);

    if(FieldBits::NoField != (AgeDistributionFieldMask & whichField))
        _sfAgeDistribution.syncWith(pOther->_sfAgeDistribution);

    if(FieldBits::NoField != (VelocityDistributionFieldMask & whichField))
        _sfVelocityDistribution.syncWith(pOther->_sfVelocityDistribution);

    if(FieldBits::NoField != (SecVelocityDistributionFieldMask & whichField))
        _sfSecVelocityDistribution.syncWith(pOther->_sfSecVelocityDistribution);

    if(FieldBits::NoField != (AccelerationDistributionFieldMask & whichField))
        _sfAccelerationDistribution.syncWith(pOther->_sfAccelerationDistribution);



}

void DynamicsParticleGeneratorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DynamicsParticleGeneratorPtr>::_type("DynamicsParticleGeneratorPtr", "ParticleGeneratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DynamicsParticleGeneratorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DynamicsParticleGeneratorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

