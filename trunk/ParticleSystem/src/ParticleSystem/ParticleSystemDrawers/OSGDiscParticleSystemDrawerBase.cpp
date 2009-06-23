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
 **     class DiscParticleSystemDrawer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDISCPARTICLESYSTEMDRAWERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDiscParticleSystemDrawerBase.h"
#include "OSGDiscParticleSystemDrawer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DiscParticleSystemDrawerBase::RadiusFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::RadiusFieldId);

const OSG::BitVector  DiscParticleSystemDrawerBase::SegmentsFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::SegmentsFieldId);

const OSG::BitVector  DiscParticleSystemDrawerBase::NormalSourceFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::NormalSourceFieldId);

const OSG::BitVector  DiscParticleSystemDrawerBase::NormalFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::NormalFieldId);

const OSG::BitVector  DiscParticleSystemDrawerBase::UpSourceFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::UpSourceFieldId);

const OSG::BitVector  DiscParticleSystemDrawerBase::UpFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::UpFieldId);

const OSG::BitVector  DiscParticleSystemDrawerBase::UseNormalAsObjectSpaceRotationFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::UseNormalAsObjectSpaceRotationFieldId);

const OSG::BitVector  DiscParticleSystemDrawerBase::CenterAlphaFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::CenterAlphaFieldId);

const OSG::BitVector  DiscParticleSystemDrawerBase::EdgeAlphaFieldMask = 
    (TypeTraits<BitVector>::One << DiscParticleSystemDrawerBase::EdgeAlphaFieldId);

const OSG::BitVector DiscParticleSystemDrawerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          DiscParticleSystemDrawerBase::_sfRadius
    This value is used to scale the size of the particle and apply that size to the radius for that disc.
*/
/*! \var UInt32          DiscParticleSystemDrawerBase::_sfSegments
    The number of segments to use to render the disc.
*/
/*! \var UInt32          DiscParticleSystemDrawerBase::_sfNormalSource
    This enum is used to determine what is used for the direction of the line.    NORMAL_POSITION_CHANGE uses the diference between Position and SecPosition.    NORMAL_VELOCITY_CHANGE uses the difference between Velocity and SecVelocity.    NORMAL_VELOCITY uses the velocity.    NORMAL_ACCELERATION uses the acceleration.    NORMAL_PARTICLE_NORMAL uses the normal of the particle.    NORMAL_VIEW_DIRECTION uses the z axis of the view space.    NORMAL_VIEW_POSITION uses the the direction from the particle to the view position.    NORMAL_STATIC uses the normal of this drawer.
*/
/*! \var Vec3f           DiscParticleSystemDrawerBase::_sfNormal
    The direction to use as Normal when aligning particles.  This is only used if the NormalSource is STATIC.
*/
/*! \var UInt32          DiscParticleSystemDrawerBase::_sfUpSource
    This enum is used to determine what is used for the direction of the line.    UP_POSITION_CHANGE uses the diference between Position and SecPosition.    UP_VELOCITY_CHANGE uses the difference between Velocity and SecVelocity.    UP_VELOCITY uses the velocity.    UP_ACCELERATION uses the acceleration.    UP_PARTICLE_NORMAL uses the normal of the particle.    UP_VIEW_DIRECTION uses the y axis of the view space.    UP_STATIC uses the normal of this drawer.
*/
/*! \var Vec3f           DiscParticleSystemDrawerBase::_sfUp
    The direction to use as Up when aligning particles.  This is only used if the UpSource is STATIC.
*/
/*! \var bool            DiscParticleSystemDrawerBase::_sfUseNormalAsObjectSpaceRotation
    
*/
/*! \var Real32          DiscParticleSystemDrawerBase::_sfCenterAlpha
    
*/
/*! \var Real32          DiscParticleSystemDrawerBase::_sfEdgeAlpha
    
*/

//! DiscParticleSystemDrawer description

FieldDescription *DiscParticleSystemDrawerBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "Radius", 
                     RadiusFieldId, RadiusFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFRadius),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Segments", 
                     SegmentsFieldId, SegmentsFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFSegments),
    new FieldDescription(SFUInt32::getClassType(), 
                     "NormalSource", 
                     NormalSourceFieldId, NormalSourceFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFNormalSource),
    new FieldDescription(SFVec3f::getClassType(), 
                     "Normal", 
                     NormalFieldId, NormalFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFNormal),
    new FieldDescription(SFUInt32::getClassType(), 
                     "UpSource", 
                     UpSourceFieldId, UpSourceFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFUpSource),
    new FieldDescription(SFVec3f::getClassType(), 
                     "Up", 
                     UpFieldId, UpFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFUp),
    new FieldDescription(SFBool::getClassType(), 
                     "UseNormalAsObjectSpaceRotation", 
                     UseNormalAsObjectSpaceRotationFieldId, UseNormalAsObjectSpaceRotationFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFUseNormalAsObjectSpaceRotation),
    new FieldDescription(SFReal32::getClassType(), 
                     "CenterAlpha", 
                     CenterAlphaFieldId, CenterAlphaFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFCenterAlpha),
    new FieldDescription(SFReal32::getClassType(), 
                     "EdgeAlpha", 
                     EdgeAlphaFieldId, EdgeAlphaFieldMask,
                     false,
                     (FieldAccessMethod) &DiscParticleSystemDrawerBase::getSFEdgeAlpha)
};


FieldContainerType DiscParticleSystemDrawerBase::_type(
    "DiscParticleSystemDrawer",
    "ParticleSystemDrawer",
    NULL,
    (PrototypeCreateF) &DiscParticleSystemDrawerBase::createEmpty,
    DiscParticleSystemDrawer::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DiscParticleSystemDrawerBase, DiscParticleSystemDrawerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DiscParticleSystemDrawerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DiscParticleSystemDrawerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DiscParticleSystemDrawerBase::shallowCopy(void) const 
{ 
    DiscParticleSystemDrawerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DiscParticleSystemDrawer *>(this)); 

    return returnValue; 
}

UInt32 DiscParticleSystemDrawerBase::getContainerSize(void) const 
{ 
    return sizeof(DiscParticleSystemDrawer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DiscParticleSystemDrawerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DiscParticleSystemDrawerBase *) &other, whichField);
}
#else
void DiscParticleSystemDrawerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DiscParticleSystemDrawerBase *) &other, whichField, sInfo);
}
void DiscParticleSystemDrawerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DiscParticleSystemDrawerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DiscParticleSystemDrawerBase::DiscParticleSystemDrawerBase(void) :
    _sfRadius                 (Real32(0.5)), 
    _sfSegments               (UInt32(12)), 
    _sfNormalSource           (UInt32(DiscParticleSystemDrawer::NORMAL_VIEW_DIRECTION)), 
    _sfNormal                 (Vec3f(1.0,0.0,0.0)), 
    _sfUpSource               (UInt32(DiscParticleSystemDrawer::UP_VIEW_DIRECTION)), 
    _sfUp                     (Vec3f(0.0,1.0,0.0)), 
    _sfUseNormalAsObjectSpaceRotation(bool(false)), 
    _sfCenterAlpha            (Real32(1.0)), 
    _sfEdgeAlpha              (Real32(1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DiscParticleSystemDrawerBase::DiscParticleSystemDrawerBase(const DiscParticleSystemDrawerBase &source) :
    _sfRadius                 (source._sfRadius                 ), 
    _sfSegments               (source._sfSegments               ), 
    _sfNormalSource           (source._sfNormalSource           ), 
    _sfNormal                 (source._sfNormal                 ), 
    _sfUpSource               (source._sfUpSource               ), 
    _sfUp                     (source._sfUp                     ), 
    _sfUseNormalAsObjectSpaceRotation(source._sfUseNormalAsObjectSpaceRotation), 
    _sfCenterAlpha            (source._sfCenterAlpha            ), 
    _sfEdgeAlpha              (source._sfEdgeAlpha              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DiscParticleSystemDrawerBase::~DiscParticleSystemDrawerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DiscParticleSystemDrawerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        returnValue += _sfRadius.getBinSize();
    }

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
    {
        returnValue += _sfSegments.getBinSize();
    }

    if(FieldBits::NoField != (NormalSourceFieldMask & whichField))
    {
        returnValue += _sfNormalSource.getBinSize();
    }

    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        returnValue += _sfNormal.getBinSize();
    }

    if(FieldBits::NoField != (UpSourceFieldMask & whichField))
    {
        returnValue += _sfUpSource.getBinSize();
    }

    if(FieldBits::NoField != (UpFieldMask & whichField))
    {
        returnValue += _sfUp.getBinSize();
    }

    if(FieldBits::NoField != (UseNormalAsObjectSpaceRotationFieldMask & whichField))
    {
        returnValue += _sfUseNormalAsObjectSpaceRotation.getBinSize();
    }

    if(FieldBits::NoField != (CenterAlphaFieldMask & whichField))
    {
        returnValue += _sfCenterAlpha.getBinSize();
    }

    if(FieldBits::NoField != (EdgeAlphaFieldMask & whichField))
    {
        returnValue += _sfEdgeAlpha.getBinSize();
    }


    return returnValue;
}

void DiscParticleSystemDrawerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        _sfRadius.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
    {
        _sfSegments.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NormalSourceFieldMask & whichField))
    {
        _sfNormalSource.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyToBin(pMem);
    }

    if(FieldBits::NoField != (UpSourceFieldMask & whichField))
    {
        _sfUpSource.copyToBin(pMem);
    }

    if(FieldBits::NoField != (UpFieldMask & whichField))
    {
        _sfUp.copyToBin(pMem);
    }

    if(FieldBits::NoField != (UseNormalAsObjectSpaceRotationFieldMask & whichField))
    {
        _sfUseNormalAsObjectSpaceRotation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CenterAlphaFieldMask & whichField))
    {
        _sfCenterAlpha.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EdgeAlphaFieldMask & whichField))
    {
        _sfEdgeAlpha.copyToBin(pMem);
    }


}

void DiscParticleSystemDrawerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        _sfRadius.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
    {
        _sfSegments.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NormalSourceFieldMask & whichField))
    {
        _sfNormalSource.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (UpSourceFieldMask & whichField))
    {
        _sfUpSource.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (UpFieldMask & whichField))
    {
        _sfUp.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (UseNormalAsObjectSpaceRotationFieldMask & whichField))
    {
        _sfUseNormalAsObjectSpaceRotation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CenterAlphaFieldMask & whichField))
    {
        _sfCenterAlpha.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EdgeAlphaFieldMask & whichField))
    {
        _sfEdgeAlpha.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DiscParticleSystemDrawerBase::executeSyncImpl(      DiscParticleSystemDrawerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
        _sfRadius.syncWith(pOther->_sfRadius);

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
        _sfSegments.syncWith(pOther->_sfSegments);

    if(FieldBits::NoField != (NormalSourceFieldMask & whichField))
        _sfNormalSource.syncWith(pOther->_sfNormalSource);

    if(FieldBits::NoField != (NormalFieldMask & whichField))
        _sfNormal.syncWith(pOther->_sfNormal);

    if(FieldBits::NoField != (UpSourceFieldMask & whichField))
        _sfUpSource.syncWith(pOther->_sfUpSource);

    if(FieldBits::NoField != (UpFieldMask & whichField))
        _sfUp.syncWith(pOther->_sfUp);

    if(FieldBits::NoField != (UseNormalAsObjectSpaceRotationFieldMask & whichField))
        _sfUseNormalAsObjectSpaceRotation.syncWith(pOther->_sfUseNormalAsObjectSpaceRotation);

    if(FieldBits::NoField != (CenterAlphaFieldMask & whichField))
        _sfCenterAlpha.syncWith(pOther->_sfCenterAlpha);

    if(FieldBits::NoField != (EdgeAlphaFieldMask & whichField))
        _sfEdgeAlpha.syncWith(pOther->_sfEdgeAlpha);


}
#else
void DiscParticleSystemDrawerBase::executeSyncImpl(      DiscParticleSystemDrawerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
        _sfRadius.syncWith(pOther->_sfRadius);

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
        _sfSegments.syncWith(pOther->_sfSegments);

    if(FieldBits::NoField != (NormalSourceFieldMask & whichField))
        _sfNormalSource.syncWith(pOther->_sfNormalSource);

    if(FieldBits::NoField != (NormalFieldMask & whichField))
        _sfNormal.syncWith(pOther->_sfNormal);

    if(FieldBits::NoField != (UpSourceFieldMask & whichField))
        _sfUpSource.syncWith(pOther->_sfUpSource);

    if(FieldBits::NoField != (UpFieldMask & whichField))
        _sfUp.syncWith(pOther->_sfUp);

    if(FieldBits::NoField != (UseNormalAsObjectSpaceRotationFieldMask & whichField))
        _sfUseNormalAsObjectSpaceRotation.syncWith(pOther->_sfUseNormalAsObjectSpaceRotation);

    if(FieldBits::NoField != (CenterAlphaFieldMask & whichField))
        _sfCenterAlpha.syncWith(pOther->_sfCenterAlpha);

    if(FieldBits::NoField != (EdgeAlphaFieldMask & whichField))
        _sfEdgeAlpha.syncWith(pOther->_sfEdgeAlpha);



}

void DiscParticleSystemDrawerBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DiscParticleSystemDrawerPtr>::_type("DiscParticleSystemDrawerPtr", "ParticleSystemDrawerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DiscParticleSystemDrawerPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DiscParticleSystemDrawerPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGDISCPARTICLESYSTEMDRAWERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDISCPARTICLESYSTEMDRAWERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDISCPARTICLESYSTEMDRAWERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

