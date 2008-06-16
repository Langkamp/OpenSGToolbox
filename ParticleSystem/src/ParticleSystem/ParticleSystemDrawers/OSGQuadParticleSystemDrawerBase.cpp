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
 **     class QuadParticleSystemDrawer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEQUADPARTICLESYSTEMDRAWERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGQuadParticleSystemDrawerBase.h"
#include "OSGQuadParticleSystemDrawer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  QuadParticleSystemDrawerBase::QuadSizeScalingFieldMask = 
    (TypeTraits<BitVector>::One << QuadParticleSystemDrawerBase::QuadSizeScalingFieldId);

const OSG::BitVector  QuadParticleSystemDrawerBase::UseImageSizeRatioFieldMask = 
    (TypeTraits<BitVector>::One << QuadParticleSystemDrawerBase::UseImageSizeRatioFieldId);

const OSG::BitVector  QuadParticleSystemDrawerBase::NormalSourceFieldMask = 
    (TypeTraits<BitVector>::One << QuadParticleSystemDrawerBase::NormalSourceFieldId);

const OSG::BitVector  QuadParticleSystemDrawerBase::NormalFieldMask = 
    (TypeTraits<BitVector>::One << QuadParticleSystemDrawerBase::NormalFieldId);

const OSG::BitVector  QuadParticleSystemDrawerBase::UpSourceFieldMask = 
    (TypeTraits<BitVector>::One << QuadParticleSystemDrawerBase::UpSourceFieldId);

const OSG::BitVector  QuadParticleSystemDrawerBase::UpFieldMask = 
    (TypeTraits<BitVector>::One << QuadParticleSystemDrawerBase::UpFieldId);

const OSG::BitVector  QuadParticleSystemDrawerBase::UseNormalAsObjectSpaceRotationFieldMask = 
    (TypeTraits<BitVector>::One << QuadParticleSystemDrawerBase::UseNormalAsObjectSpaceRotationFieldId);

const OSG::BitVector QuadParticleSystemDrawerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec2f           QuadParticleSystemDrawerBase::_sfQuadSizeScaling
    This value is used to scale the size of the particle and apply that size to the quad for that particle.
*/
/*! \var bool            QuadParticleSystemDrawerBase::_sfUseImageSizeRatio
    If true the aspect ratio of the Image of the first TextureChunk is used to scale the width and length of the quads.
*/
/*! \var UInt32          QuadParticleSystemDrawerBase::_sfNormalSource
    This enum is used to determine what is used for the direction of the line.    NORMAL_POSITION_CHANGE uses the diference between Position and SecPosition.    NORMAL_VELOCITY_CHANGE uses the difference between Velocity and SecVelocity.    NORMAL_VELOCITY uses the velocity.    NORMAL_ACCELERATION uses the acceleration.    NORMAL_PARTICLE_NORMAL uses the normal of the particle.    NORMAL_VIEW_DIRECTION uses the z axis of the view space.    NORMAL_VIEW_POSITION uses the the direction from the particle to the view position.    NORMAL_STATIC uses the normal of this drawer.
*/
/*! \var Vec3f           QuadParticleSystemDrawerBase::_sfNormal
    The direction to use as Normal when aligning particles.  This is only used if the NormalSource is STATIC.
*/
/*! \var UInt32          QuadParticleSystemDrawerBase::_sfUpSource
    This enum is used to determine what is used for the direction of the line.    UP_POSITION_CHANGE uses the diference between Position and SecPosition.    UP_VELOCITY_CHANGE uses the difference between Velocity and SecVelocity.    UP_VELOCITY uses the velocity.    UP_ACCELERATION uses the acceleration.    UP_PARTICLE_NORMAL uses the normal of the particle.    UP_VIEW_DIRECTION uses the y axis of the view space.    UP_STATIC uses the normal of this drawer.
*/
/*! \var Vec3f           QuadParticleSystemDrawerBase::_sfUp
    The direction to use as Up when aligning particles.  This is only used if the UpSource is STATIC.
*/
/*! \var bool            QuadParticleSystemDrawerBase::_sfUseNormalAsObjectSpaceRotation
    
*/

//! QuadParticleSystemDrawer description

FieldDescription *QuadParticleSystemDrawerBase::_desc[] = 
{
    new FieldDescription(SFVec2f::getClassType(), 
                     "QuadSizeScaling", 
                     QuadSizeScalingFieldId, QuadSizeScalingFieldMask,
                     false,
                     (FieldAccessMethod) &QuadParticleSystemDrawerBase::getSFQuadSizeScaling),
    new FieldDescription(SFBool::getClassType(), 
                     "UseImageSizeRatio", 
                     UseImageSizeRatioFieldId, UseImageSizeRatioFieldMask,
                     false,
                     (FieldAccessMethod) &QuadParticleSystemDrawerBase::getSFUseImageSizeRatio),
    new FieldDescription(SFUInt32::getClassType(), 
                     "NormalSource", 
                     NormalSourceFieldId, NormalSourceFieldMask,
                     false,
                     (FieldAccessMethod) &QuadParticleSystemDrawerBase::getSFNormalSource),
    new FieldDescription(SFVec3f::getClassType(), 
                     "Normal", 
                     NormalFieldId, NormalFieldMask,
                     false,
                     (FieldAccessMethod) &QuadParticleSystemDrawerBase::getSFNormal),
    new FieldDescription(SFUInt32::getClassType(), 
                     "UpSource", 
                     UpSourceFieldId, UpSourceFieldMask,
                     false,
                     (FieldAccessMethod) &QuadParticleSystemDrawerBase::getSFUpSource),
    new FieldDescription(SFVec3f::getClassType(), 
                     "Up", 
                     UpFieldId, UpFieldMask,
                     false,
                     (FieldAccessMethod) &QuadParticleSystemDrawerBase::getSFUp),
    new FieldDescription(SFBool::getClassType(), 
                     "UseNormalAsObjectSpaceRotation", 
                     UseNormalAsObjectSpaceRotationFieldId, UseNormalAsObjectSpaceRotationFieldMask,
                     false,
                     (FieldAccessMethod) &QuadParticleSystemDrawerBase::getSFUseNormalAsObjectSpaceRotation)
};


FieldContainerType QuadParticleSystemDrawerBase::_type(
    "QuadParticleSystemDrawer",
    "ParticleSystemDrawer",
    NULL,
    (PrototypeCreateF) &QuadParticleSystemDrawerBase::createEmpty,
    QuadParticleSystemDrawer::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(QuadParticleSystemDrawerBase, QuadParticleSystemDrawerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &QuadParticleSystemDrawerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &QuadParticleSystemDrawerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr QuadParticleSystemDrawerBase::shallowCopy(void) const 
{ 
    QuadParticleSystemDrawerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const QuadParticleSystemDrawer *>(this)); 

    return returnValue; 
}

UInt32 QuadParticleSystemDrawerBase::getContainerSize(void) const 
{ 
    return sizeof(QuadParticleSystemDrawer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void QuadParticleSystemDrawerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((QuadParticleSystemDrawerBase *) &other, whichField);
}
#else
void QuadParticleSystemDrawerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((QuadParticleSystemDrawerBase *) &other, whichField, sInfo);
}
void QuadParticleSystemDrawerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void QuadParticleSystemDrawerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

QuadParticleSystemDrawerBase::QuadParticleSystemDrawerBase(void) :
    _sfQuadSizeScaling        (Vec2f(1.0,1.0)), 
    _sfUseImageSizeRatio      (bool(false)), 
    _sfNormalSource           (UInt32(QuadParticleSystemDrawer::NORMAL_VIEW_DIRECTION)), 
    _sfNormal                 (Vec3f(1.0,0.0,0.0)), 
    _sfUpSource               (UInt32(QuadParticleSystemDrawer::UP_VIEW_DIRECTION)), 
    _sfUp                     (Vec3f(0.0,1.0,0.0)), 
    _sfUseNormalAsObjectSpaceRotation(bool(false)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

QuadParticleSystemDrawerBase::QuadParticleSystemDrawerBase(const QuadParticleSystemDrawerBase &source) :
    _sfQuadSizeScaling        (source._sfQuadSizeScaling        ), 
    _sfUseImageSizeRatio      (source._sfUseImageSizeRatio      ), 
    _sfNormalSource           (source._sfNormalSource           ), 
    _sfNormal                 (source._sfNormal                 ), 
    _sfUpSource               (source._sfUpSource               ), 
    _sfUp                     (source._sfUp                     ), 
    _sfUseNormalAsObjectSpaceRotation(source._sfUseNormalAsObjectSpaceRotation), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

QuadParticleSystemDrawerBase::~QuadParticleSystemDrawerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 QuadParticleSystemDrawerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (QuadSizeScalingFieldMask & whichField))
    {
        returnValue += _sfQuadSizeScaling.getBinSize();
    }

    if(FieldBits::NoField != (UseImageSizeRatioFieldMask & whichField))
    {
        returnValue += _sfUseImageSizeRatio.getBinSize();
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


    return returnValue;
}

void QuadParticleSystemDrawerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (QuadSizeScalingFieldMask & whichField))
    {
        _sfQuadSizeScaling.copyToBin(pMem);
    }

    if(FieldBits::NoField != (UseImageSizeRatioFieldMask & whichField))
    {
        _sfUseImageSizeRatio.copyToBin(pMem);
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


}

void QuadParticleSystemDrawerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (QuadSizeScalingFieldMask & whichField))
    {
        _sfQuadSizeScaling.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (UseImageSizeRatioFieldMask & whichField))
    {
        _sfUseImageSizeRatio.copyFromBin(pMem);
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


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void QuadParticleSystemDrawerBase::executeSyncImpl(      QuadParticleSystemDrawerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (QuadSizeScalingFieldMask & whichField))
        _sfQuadSizeScaling.syncWith(pOther->_sfQuadSizeScaling);

    if(FieldBits::NoField != (UseImageSizeRatioFieldMask & whichField))
        _sfUseImageSizeRatio.syncWith(pOther->_sfUseImageSizeRatio);

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


}
#else
void QuadParticleSystemDrawerBase::executeSyncImpl(      QuadParticleSystemDrawerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (QuadSizeScalingFieldMask & whichField))
        _sfQuadSizeScaling.syncWith(pOther->_sfQuadSizeScaling);

    if(FieldBits::NoField != (UseImageSizeRatioFieldMask & whichField))
        _sfUseImageSizeRatio.syncWith(pOther->_sfUseImageSizeRatio);

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



}

void QuadParticleSystemDrawerBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<QuadParticleSystemDrawerPtr>::_type("QuadParticleSystemDrawerPtr", "ParticleSystemDrawerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(QuadParticleSystemDrawerPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(QuadParticleSystemDrawerPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGQUADPARTICLESYSTEMDRAWERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGQUADPARTICLESYSTEMDRAWERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGQUADPARTICLESYSTEMDRAWERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

