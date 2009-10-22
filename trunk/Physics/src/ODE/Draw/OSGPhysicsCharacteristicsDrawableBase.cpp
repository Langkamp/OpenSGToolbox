/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          www.vrac.iastate.edu                             *
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
 **     class PhysicsCharacteristicsDrawable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSCHARACTERISTICSDRAWABLEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGPhysicsCharacteristicsDrawableBase.h"
#include "OSGPhysicsCharacteristicsDrawable.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::RootFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::RootFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::DrawGeomsFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::DrawGeomsFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::GeomColorFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::GeomColorFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::DrawJointsFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::DrawJointsFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::JointColorFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::JointColorFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::DrawBodiesFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::DrawBodiesFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::BodyColorFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::BodyColorFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::DrawSpacesFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::DrawSpacesFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::SpaceColorFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::SpaceColorFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::DrawWorldsFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::DrawWorldsFieldId);

const OSG::BitVector  PhysicsCharacteristicsDrawableBase::WorldColorFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsCharacteristicsDrawableBase::WorldColorFieldId);

const OSG::BitVector PhysicsCharacteristicsDrawableBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var NodePtr         PhysicsCharacteristicsDrawableBase::_sfRoot
    
*/
/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawGeoms
    
*/
/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfGeomColor
    
*/
/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawJoints
    
*/
/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfJointColor
    
*/
/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawBodies
    
*/
/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfBodyColor
    
*/
/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawSpaces
    
*/
/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfSpaceColor
    
*/
/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawWorlds
    
*/
/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfWorldColor
    
*/

//! PhysicsCharacteristicsDrawable description

FieldDescription *PhysicsCharacteristicsDrawableBase::_desc[] = 
{
    new FieldDescription(SFNodePtr::getClassType(), 
                     "Root", 
                     RootFieldId, RootFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFRoot)),
    new FieldDescription(SFBool::getClassType(), 
                     "DrawGeoms", 
                     DrawGeomsFieldId, DrawGeomsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFDrawGeoms)),
    new FieldDescription(SFColor4f::getClassType(), 
                     "GeomColor", 
                     GeomColorFieldId, GeomColorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFGeomColor)),
    new FieldDescription(SFBool::getClassType(), 
                     "DrawJoints", 
                     DrawJointsFieldId, DrawJointsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFDrawJoints)),
    new FieldDescription(SFColor4f::getClassType(), 
                     "JointColor", 
                     JointColorFieldId, JointColorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFJointColor)),
    new FieldDescription(SFBool::getClassType(), 
                     "DrawBodies", 
                     DrawBodiesFieldId, DrawBodiesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFDrawBodies)),
    new FieldDescription(SFColor4f::getClassType(), 
                     "BodyColor", 
                     BodyColorFieldId, BodyColorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFBodyColor)),
    new FieldDescription(SFBool::getClassType(), 
                     "DrawSpaces", 
                     DrawSpacesFieldId, DrawSpacesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFDrawSpaces)),
    new FieldDescription(SFColor4f::getClassType(), 
                     "SpaceColor", 
                     SpaceColorFieldId, SpaceColorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFSpaceColor)),
    new FieldDescription(SFBool::getClassType(), 
                     "DrawWorlds", 
                     DrawWorldsFieldId, DrawWorldsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFDrawWorlds)),
    new FieldDescription(SFColor4f::getClassType(), 
                     "WorldColor", 
                     WorldColorFieldId, WorldColorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsCharacteristicsDrawableBase::editSFWorldColor))
};


FieldContainerType PhysicsCharacteristicsDrawableBase::_type(
    "PhysicsCharacteristicsDrawable",
    "Drawable",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PhysicsCharacteristicsDrawableBase::createEmpty),
    PhysicsCharacteristicsDrawable::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsCharacteristicsDrawableBase, PhysicsCharacteristicsDrawablePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsCharacteristicsDrawableBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsCharacteristicsDrawableBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsCharacteristicsDrawableBase::shallowCopy(void) const 
{ 
    PhysicsCharacteristicsDrawablePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsCharacteristicsDrawable *>(this)); 

    return returnValue; 
}

UInt32 PhysicsCharacteristicsDrawableBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsCharacteristicsDrawable); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsCharacteristicsDrawableBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PhysicsCharacteristicsDrawableBase *>(&other),
                          whichField);
}
#else
void PhysicsCharacteristicsDrawableBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsCharacteristicsDrawableBase *) &other, whichField, sInfo);
}
void PhysicsCharacteristicsDrawableBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsCharacteristicsDrawableBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsCharacteristicsDrawableBase::PhysicsCharacteristicsDrawableBase(void) :
    _sfRoot                   (NodePtr(NullFC)), 
    _sfDrawGeoms              (bool(true)), 
    _sfGeomColor              (Color4f(1.0,1.0,1.0,0.5)), 
    _sfDrawJoints             (bool(true)), 
    _sfJointColor             (Color4f(1.0,1.0,1.0,1.0)), 
    _sfDrawBodies             (bool(true)), 
    _sfBodyColor              (Color4f(1.0,1.0,1.0,1.0)), 
    _sfDrawSpaces             (bool(true)), 
    _sfSpaceColor             (Color4f(1.0,1.0,1.0,0.5)), 
    _sfDrawWorlds             (bool(true)), 
    _sfWorldColor             (Color4f(1.0,1.0,1.0,0.5)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsCharacteristicsDrawableBase::PhysicsCharacteristicsDrawableBase(const PhysicsCharacteristicsDrawableBase &source) :
    _sfRoot                   (source._sfRoot                   ), 
    _sfDrawGeoms              (source._sfDrawGeoms              ), 
    _sfGeomColor              (source._sfGeomColor              ), 
    _sfDrawJoints             (source._sfDrawJoints             ), 
    _sfJointColor             (source._sfJointColor             ), 
    _sfDrawBodies             (source._sfDrawBodies             ), 
    _sfBodyColor              (source._sfBodyColor              ), 
    _sfDrawSpaces             (source._sfDrawSpaces             ), 
    _sfSpaceColor             (source._sfSpaceColor             ), 
    _sfDrawWorlds             (source._sfDrawWorlds             ), 
    _sfWorldColor             (source._sfWorldColor             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsCharacteristicsDrawableBase::~PhysicsCharacteristicsDrawableBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsCharacteristicsDrawableBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }

    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
    {
        returnValue += _sfDrawGeoms.getBinSize();
    }

    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
    {
        returnValue += _sfGeomColor.getBinSize();
    }

    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
    {
        returnValue += _sfDrawJoints.getBinSize();
    }

    if(FieldBits::NoField != (JointColorFieldMask & whichField))
    {
        returnValue += _sfJointColor.getBinSize();
    }

    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
    {
        returnValue += _sfDrawBodies.getBinSize();
    }

    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
    {
        returnValue += _sfBodyColor.getBinSize();
    }

    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
    {
        returnValue += _sfDrawSpaces.getBinSize();
    }

    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
    {
        returnValue += _sfSpaceColor.getBinSize();
    }

    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
    {
        returnValue += _sfDrawWorlds.getBinSize();
    }

    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
    {
        returnValue += _sfWorldColor.getBinSize();
    }


    return returnValue;
}

void PhysicsCharacteristicsDrawableBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
    {
        _sfDrawGeoms.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
    {
        _sfGeomColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
    {
        _sfDrawJoints.copyToBin(pMem);
    }

    if(FieldBits::NoField != (JointColorFieldMask & whichField))
    {
        _sfJointColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
    {
        _sfDrawBodies.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
    {
        _sfBodyColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
    {
        _sfDrawSpaces.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
    {
        _sfSpaceColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
    {
        _sfDrawWorlds.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
    {
        _sfWorldColor.copyToBin(pMem);
    }


}

void PhysicsCharacteristicsDrawableBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
    {
        _sfDrawGeoms.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
    {
        _sfGeomColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
    {
        _sfDrawJoints.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (JointColorFieldMask & whichField))
    {
        _sfJointColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
    {
        _sfDrawBodies.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
    {
        _sfBodyColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
    {
        _sfDrawSpaces.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
    {
        _sfSpaceColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
    {
        _sfDrawWorlds.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
    {
        _sfWorldColor.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsCharacteristicsDrawableBase::executeSyncImpl(      PhysicsCharacteristicsDrawableBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pOther->_sfRoot);

    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
        _sfDrawGeoms.syncWith(pOther->_sfDrawGeoms);

    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
        _sfGeomColor.syncWith(pOther->_sfGeomColor);

    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
        _sfDrawJoints.syncWith(pOther->_sfDrawJoints);

    if(FieldBits::NoField != (JointColorFieldMask & whichField))
        _sfJointColor.syncWith(pOther->_sfJointColor);

    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
        _sfDrawBodies.syncWith(pOther->_sfDrawBodies);

    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
        _sfBodyColor.syncWith(pOther->_sfBodyColor);

    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
        _sfDrawSpaces.syncWith(pOther->_sfDrawSpaces);

    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
        _sfSpaceColor.syncWith(pOther->_sfSpaceColor);

    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
        _sfDrawWorlds.syncWith(pOther->_sfDrawWorlds);

    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
        _sfWorldColor.syncWith(pOther->_sfWorldColor);


}
#else
void PhysicsCharacteristicsDrawableBase::executeSyncImpl(      PhysicsCharacteristicsDrawableBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pOther->_sfRoot);

    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
        _sfDrawGeoms.syncWith(pOther->_sfDrawGeoms);

    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
        _sfGeomColor.syncWith(pOther->_sfGeomColor);

    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
        _sfDrawJoints.syncWith(pOther->_sfDrawJoints);

    if(FieldBits::NoField != (JointColorFieldMask & whichField))
        _sfJointColor.syncWith(pOther->_sfJointColor);

    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
        _sfDrawBodies.syncWith(pOther->_sfDrawBodies);

    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
        _sfBodyColor.syncWith(pOther->_sfBodyColor);

    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
        _sfDrawSpaces.syncWith(pOther->_sfDrawSpaces);

    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
        _sfSpaceColor.syncWith(pOther->_sfSpaceColor);

    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
        _sfDrawWorlds.syncWith(pOther->_sfDrawWorlds);

    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
        _sfWorldColor.syncWith(pOther->_sfWorldColor);



}

void PhysicsCharacteristicsDrawableBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PhysicsCharacteristicsDrawablePtr>::_type("PhysicsCharacteristicsDrawablePtr", "DrawablePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsCharacteristicsDrawablePtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsCharacteristicsDrawablePtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

