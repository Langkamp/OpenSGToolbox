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
 **     class LineParticleSystemDrawer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELINEPARTICLESYSTEMDRAWERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGLineParticleSystemDrawerBase.h"
#include "OSGLineParticleSystemDrawer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  LineParticleSystemDrawerBase::LineWidthScalingFieldMask = 
    (TypeTraits<BitVector>::One << LineParticleSystemDrawerBase::LineWidthScalingFieldId);

const OSG::BitVector  LineParticleSystemDrawerBase::LineLengthElpsScalingFieldMask = 
    (TypeTraits<BitVector>::One << LineParticleSystemDrawerBase::LineLengthElpsScalingFieldId);

const OSG::BitVector  LineParticleSystemDrawerBase::LineDirectionSourceFieldMask = 
    (TypeTraits<BitVector>::One << LineParticleSystemDrawerBase::LineDirectionSourceFieldId);

const OSG::BitVector  LineParticleSystemDrawerBase::LineDirectionFieldMask = 
    (TypeTraits<BitVector>::One << LineParticleSystemDrawerBase::LineDirectionFieldId);

const OSG::BitVector  LineParticleSystemDrawerBase::LineLengthSourceFieldMask = 
    (TypeTraits<BitVector>::One << LineParticleSystemDrawerBase::LineLengthSourceFieldId);

const OSG::BitVector  LineParticleSystemDrawerBase::LineLengthFieldMask = 
    (TypeTraits<BitVector>::One << LineParticleSystemDrawerBase::LineLengthFieldId);

const OSG::BitVector  LineParticleSystemDrawerBase::EndPointFadingFieldMask = 
    (TypeTraits<BitVector>::One << LineParticleSystemDrawerBase::EndPointFadingFieldId);

const OSG::BitVector LineParticleSystemDrawerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          LineParticleSystemDrawerBase::_sfLineWidthScaling
    This value is used to scale the size of the particle and apply that size as the OpenGL line width.
*/
/*! \var Real32          LineParticleSystemDrawerBase::_sfLineLengthElpsScaling
    This value is used to scale the line length denoted by LineLengthSource and the elapsed time, then apply that value as the length of the line.
*/
/*! \var UInt32          LineParticleSystemDrawerBase::_sfLineDirectionSource
    This enum is used to determine what is used for the direction of the line.    DIRECTION_POSITION_CHANGE uses the diference between Position and SecPosition.    DIRECTION_VELOCITY_CHANGE uses the difference between Velocity and SecVelocity.    DIRECTION_VELOCITY uses the velocity.    DIRECTION_ACCELERATION uses the acceleration.    DIRECTION_NORMAL uses the particle normal.    DIRECTION_STATIC uses the static direction defined in the LineDirection field.
*/
/*! \var Vec3f           LineParticleSystemDrawerBase::_sfLineDirection
    The direction to draw the line in.  This is only used when LineDirectionSource is DIRECTION_STATIC.
*/
/*! \var UInt32          LineParticleSystemDrawerBase::_sfLineLengthSource
    This enum is used to determine what is used for the direction of the line.    LENGTH_SIZE_X uses the x value of the particles size for the line length.    LENGTH_SIZE_Y uses the y value of the particles size for the line length.    LENGTH_SIZE_Z uses the a value of the particles size for the line length.        LENGTH_STATIC uses the static legth defined in the LineLength field.
*/
/*! \var Real32          LineParticleSystemDrawerBase::_sfLineLength
    The length to draw the line.  This is only used when LineLengthSource is LENGTH_STATIC.
*/
/*! \var Vec2f           LineParticleSystemDrawerBase::_sfEndPointFading
    The x value is multiplied to the alpha portion of the particles color and applied to the orgin vertex.     The y value is multiplied to the alpha portion of the particles color and applied to the destination vertex.
*/

//! LineParticleSystemDrawer description

FieldDescription *LineParticleSystemDrawerBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "LineWidthScaling", 
                     LineWidthScalingFieldId, LineWidthScalingFieldMask,
                     false,
                     (FieldAccessMethod) &LineParticleSystemDrawerBase::getSFLineWidthScaling),
    new FieldDescription(SFReal32::getClassType(), 
                     "LineLengthElpsScaling", 
                     LineLengthElpsScalingFieldId, LineLengthElpsScalingFieldMask,
                     false,
                     (FieldAccessMethod) &LineParticleSystemDrawerBase::getSFLineLengthElpsScaling),
    new FieldDescription(SFUInt32::getClassType(), 
                     "LineDirectionSource", 
                     LineDirectionSourceFieldId, LineDirectionSourceFieldMask,
                     false,
                     (FieldAccessMethod) &LineParticleSystemDrawerBase::getSFLineDirectionSource),
    new FieldDescription(SFVec3f::getClassType(), 
                     "LineDirection", 
                     LineDirectionFieldId, LineDirectionFieldMask,
                     false,
                     (FieldAccessMethod) &LineParticleSystemDrawerBase::getSFLineDirection),
    new FieldDescription(SFUInt32::getClassType(), 
                     "LineLengthSource", 
                     LineLengthSourceFieldId, LineLengthSourceFieldMask,
                     false,
                     (FieldAccessMethod) &LineParticleSystemDrawerBase::getSFLineLengthSource),
    new FieldDescription(SFReal32::getClassType(), 
                     "LineLength", 
                     LineLengthFieldId, LineLengthFieldMask,
                     false,
                     (FieldAccessMethod) &LineParticleSystemDrawerBase::getSFLineLength),
    new FieldDescription(SFVec2f::getClassType(), 
                     "EndPointFading", 
                     EndPointFadingFieldId, EndPointFadingFieldMask,
                     false,
                     (FieldAccessMethod) &LineParticleSystemDrawerBase::getSFEndPointFading)
};


FieldContainerType LineParticleSystemDrawerBase::_type(
    "LineParticleSystemDrawer",
    "ParticleSystemDrawer",
    NULL,
    (PrototypeCreateF) &LineParticleSystemDrawerBase::createEmpty,
    LineParticleSystemDrawer::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(LineParticleSystemDrawerBase, LineParticleSystemDrawerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &LineParticleSystemDrawerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &LineParticleSystemDrawerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr LineParticleSystemDrawerBase::shallowCopy(void) const 
{ 
    LineParticleSystemDrawerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const LineParticleSystemDrawer *>(this)); 

    return returnValue; 
}

UInt32 LineParticleSystemDrawerBase::getContainerSize(void) const 
{ 
    return sizeof(LineParticleSystemDrawer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void LineParticleSystemDrawerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((LineParticleSystemDrawerBase *) &other, whichField);
}
#else
void LineParticleSystemDrawerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((LineParticleSystemDrawerBase *) &other, whichField, sInfo);
}
void LineParticleSystemDrawerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void LineParticleSystemDrawerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

LineParticleSystemDrawerBase::LineParticleSystemDrawerBase(void) :
    _sfLineWidthScaling       (Real32(1.0)), 
    _sfLineLengthElpsScaling  (Real32(1.0)), 
    _sfLineDirectionSource    (UInt32(LineParticleSystemDrawer::DIRECTION_POSITION_CHANGE)), 
    _sfLineDirection          (Vec3f(0.0,1.0,0.0)), 
    _sfLineLengthSource       (UInt32(LineParticleSystemDrawer::LENGTH_SIZE_X)), 
    _sfLineLength             (Real32(1.0)), 
    _sfEndPointFading         (Vec2f(1.0,1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

LineParticleSystemDrawerBase::LineParticleSystemDrawerBase(const LineParticleSystemDrawerBase &source) :
    _sfLineWidthScaling       (source._sfLineWidthScaling       ), 
    _sfLineLengthElpsScaling  (source._sfLineLengthElpsScaling  ), 
    _sfLineDirectionSource    (source._sfLineDirectionSource    ), 
    _sfLineDirection          (source._sfLineDirection          ), 
    _sfLineLengthSource       (source._sfLineLengthSource       ), 
    _sfLineLength             (source._sfLineLength             ), 
    _sfEndPointFading         (source._sfEndPointFading         ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

LineParticleSystemDrawerBase::~LineParticleSystemDrawerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 LineParticleSystemDrawerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LineWidthScalingFieldMask & whichField))
    {
        returnValue += _sfLineWidthScaling.getBinSize();
    }

    if(FieldBits::NoField != (LineLengthElpsScalingFieldMask & whichField))
    {
        returnValue += _sfLineLengthElpsScaling.getBinSize();
    }

    if(FieldBits::NoField != (LineDirectionSourceFieldMask & whichField))
    {
        returnValue += _sfLineDirectionSource.getBinSize();
    }

    if(FieldBits::NoField != (LineDirectionFieldMask & whichField))
    {
        returnValue += _sfLineDirection.getBinSize();
    }

    if(FieldBits::NoField != (LineLengthSourceFieldMask & whichField))
    {
        returnValue += _sfLineLengthSource.getBinSize();
    }

    if(FieldBits::NoField != (LineLengthFieldMask & whichField))
    {
        returnValue += _sfLineLength.getBinSize();
    }

    if(FieldBits::NoField != (EndPointFadingFieldMask & whichField))
    {
        returnValue += _sfEndPointFading.getBinSize();
    }


    return returnValue;
}

void LineParticleSystemDrawerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LineWidthScalingFieldMask & whichField))
    {
        _sfLineWidthScaling.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LineLengthElpsScalingFieldMask & whichField))
    {
        _sfLineLengthElpsScaling.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LineDirectionSourceFieldMask & whichField))
    {
        _sfLineDirectionSource.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LineDirectionFieldMask & whichField))
    {
        _sfLineDirection.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LineLengthSourceFieldMask & whichField))
    {
        _sfLineLengthSource.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LineLengthFieldMask & whichField))
    {
        _sfLineLength.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EndPointFadingFieldMask & whichField))
    {
        _sfEndPointFading.copyToBin(pMem);
    }


}

void LineParticleSystemDrawerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LineWidthScalingFieldMask & whichField))
    {
        _sfLineWidthScaling.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LineLengthElpsScalingFieldMask & whichField))
    {
        _sfLineLengthElpsScaling.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LineDirectionSourceFieldMask & whichField))
    {
        _sfLineDirectionSource.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LineDirectionFieldMask & whichField))
    {
        _sfLineDirection.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LineLengthSourceFieldMask & whichField))
    {
        _sfLineLengthSource.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LineLengthFieldMask & whichField))
    {
        _sfLineLength.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EndPointFadingFieldMask & whichField))
    {
        _sfEndPointFading.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LineParticleSystemDrawerBase::executeSyncImpl(      LineParticleSystemDrawerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (LineWidthScalingFieldMask & whichField))
        _sfLineWidthScaling.syncWith(pOther->_sfLineWidthScaling);

    if(FieldBits::NoField != (LineLengthElpsScalingFieldMask & whichField))
        _sfLineLengthElpsScaling.syncWith(pOther->_sfLineLengthElpsScaling);

    if(FieldBits::NoField != (LineDirectionSourceFieldMask & whichField))
        _sfLineDirectionSource.syncWith(pOther->_sfLineDirectionSource);

    if(FieldBits::NoField != (LineDirectionFieldMask & whichField))
        _sfLineDirection.syncWith(pOther->_sfLineDirection);

    if(FieldBits::NoField != (LineLengthSourceFieldMask & whichField))
        _sfLineLengthSource.syncWith(pOther->_sfLineLengthSource);

    if(FieldBits::NoField != (LineLengthFieldMask & whichField))
        _sfLineLength.syncWith(pOther->_sfLineLength);

    if(FieldBits::NoField != (EndPointFadingFieldMask & whichField))
        _sfEndPointFading.syncWith(pOther->_sfEndPointFading);


}
#else
void LineParticleSystemDrawerBase::executeSyncImpl(      LineParticleSystemDrawerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (LineWidthScalingFieldMask & whichField))
        _sfLineWidthScaling.syncWith(pOther->_sfLineWidthScaling);

    if(FieldBits::NoField != (LineLengthElpsScalingFieldMask & whichField))
        _sfLineLengthElpsScaling.syncWith(pOther->_sfLineLengthElpsScaling);

    if(FieldBits::NoField != (LineDirectionSourceFieldMask & whichField))
        _sfLineDirectionSource.syncWith(pOther->_sfLineDirectionSource);

    if(FieldBits::NoField != (LineDirectionFieldMask & whichField))
        _sfLineDirection.syncWith(pOther->_sfLineDirection);

    if(FieldBits::NoField != (LineLengthSourceFieldMask & whichField))
        _sfLineLengthSource.syncWith(pOther->_sfLineLengthSource);

    if(FieldBits::NoField != (LineLengthFieldMask & whichField))
        _sfLineLength.syncWith(pOther->_sfLineLength);

    if(FieldBits::NoField != (EndPointFadingFieldMask & whichField))
        _sfEndPointFading.syncWith(pOther->_sfEndPointFading);



}

void LineParticleSystemDrawerBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<LineParticleSystemDrawerPtr>::_type("LineParticleSystemDrawerPtr", "ParticleSystemDrawerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(LineParticleSystemDrawerPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(LineParticleSystemDrawerPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGLINEPARTICLESYSTEMDRAWERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLINEPARTICLESYSTEMDRAWERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLINEPARTICLESYSTEMDRAWERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

