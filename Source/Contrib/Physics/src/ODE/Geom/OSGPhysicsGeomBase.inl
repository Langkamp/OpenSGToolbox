/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsGeom!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsGeomBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsGeomBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PhysicsGeomBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the PhysicsGeom::_sfBody field.
inline
PhysicsBody * PhysicsGeomBase::getBody(void) const
{
    return _sfBody.getValue();
}

//! Set the value of the PhysicsGeom::_sfBody field.
inline
void PhysicsGeomBase::setBody(PhysicsBody * const value)
{
    editSField(BodyFieldMask);

    _sfBody.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfPosition field.

inline
Vec3f &PhysicsGeomBase::editPosition(void)
{
    editSField(PositionFieldMask);

    return _sfPosition.getValue();
}

//! Get the value of the PhysicsGeom::_sfPosition field.
inline
const Vec3f &PhysicsGeomBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

//! Set the value of the PhysicsGeom::_sfPosition field.
inline
void PhysicsGeomBase::setPosition(const Vec3f &value)
{
    editSField(PositionFieldMask);

    _sfPosition.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfRotation field.

inline
Matrix &PhysicsGeomBase::editRotation(void)
{
    editSField(RotationFieldMask);

    return _sfRotation.getValue();
}

//! Get the value of the PhysicsGeom::_sfRotation field.
inline
const Matrix &PhysicsGeomBase::getRotation(void) const
{
    return _sfRotation.getValue();
}

//! Set the value of the PhysicsGeom::_sfRotation field.
inline
void PhysicsGeomBase::setRotation(const Matrix &value)
{
    editSField(RotationFieldMask);

    _sfRotation.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfQuaternion field.

inline
Quaternion &PhysicsGeomBase::editQuaternion(void)
{
    editSField(QuaternionFieldMask);

    return _sfQuaternion.getValue();
}

//! Get the value of the PhysicsGeom::_sfQuaternion field.
inline
const Quaternion &PhysicsGeomBase::getQuaternion(void) const
{
    return _sfQuaternion.getValue();
}

//! Set the value of the PhysicsGeom::_sfQuaternion field.
inline
void PhysicsGeomBase::setQuaternion(const Quaternion &value)
{
    editSField(QuaternionFieldMask);

    _sfQuaternion.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfOffsetPosition field.

inline
Vec3f &PhysicsGeomBase::editOffsetPosition(void)
{
    editSField(OffsetPositionFieldMask);

    return _sfOffsetPosition.getValue();
}

//! Get the value of the PhysicsGeom::_sfOffsetPosition field.
inline
const Vec3f &PhysicsGeomBase::getOffsetPosition(void) const
{
    return _sfOffsetPosition.getValue();
}

//! Set the value of the PhysicsGeom::_sfOffsetPosition field.
inline
void PhysicsGeomBase::setOffsetPosition(const Vec3f &value)
{
    editSField(OffsetPositionFieldMask);

    _sfOffsetPosition.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfOffsetRotation field.

inline
Matrix &PhysicsGeomBase::editOffsetRotation(void)
{
    editSField(OffsetRotationFieldMask);

    return _sfOffsetRotation.getValue();
}

//! Get the value of the PhysicsGeom::_sfOffsetRotation field.
inline
const Matrix &PhysicsGeomBase::getOffsetRotation(void) const
{
    return _sfOffsetRotation.getValue();
}

//! Set the value of the PhysicsGeom::_sfOffsetRotation field.
inline
void PhysicsGeomBase::setOffsetRotation(const Matrix &value)
{
    editSField(OffsetRotationFieldMask);

    _sfOffsetRotation.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfOffsetQuaternion field.

inline
Quaternion &PhysicsGeomBase::editOffsetQuaternion(void)
{
    editSField(OffsetQuaternionFieldMask);

    return _sfOffsetQuaternion.getValue();
}

//! Get the value of the PhysicsGeom::_sfOffsetQuaternion field.
inline
const Quaternion &PhysicsGeomBase::getOffsetQuaternion(void) const
{
    return _sfOffsetQuaternion.getValue();
}

//! Set the value of the PhysicsGeom::_sfOffsetQuaternion field.
inline
void PhysicsGeomBase::setOffsetQuaternion(const Quaternion &value)
{
    editSField(OffsetQuaternionFieldMask);

    _sfOffsetQuaternion.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfCategoryBits field.

inline
UInt64 &PhysicsGeomBase::editCategoryBits(void)
{
    editSField(CategoryBitsFieldMask);

    return _sfCategoryBits.getValue();
}

//! Get the value of the PhysicsGeom::_sfCategoryBits field.
inline
      UInt64  PhysicsGeomBase::getCategoryBits(void) const
{
    return _sfCategoryBits.getValue();
}

//! Set the value of the PhysicsGeom::_sfCategoryBits field.
inline
void PhysicsGeomBase::setCategoryBits(const UInt64 value)
{
    editSField(CategoryBitsFieldMask);

    _sfCategoryBits.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfCollideBits field.

inline
UInt64 &PhysicsGeomBase::editCollideBits(void)
{
    editSField(CollideBitsFieldMask);

    return _sfCollideBits.getValue();
}

//! Get the value of the PhysicsGeom::_sfCollideBits field.
inline
      UInt64  PhysicsGeomBase::getCollideBits(void) const
{
    return _sfCollideBits.getValue();
}

//! Set the value of the PhysicsGeom::_sfCollideBits field.
inline
void PhysicsGeomBase::setCollideBits(const UInt64 value)
{
    editSField(CollideBitsFieldMask);

    _sfCollideBits.setValue(value);
}

//! Get the value of the PhysicsGeom::_sfSpace field.
inline
PhysicsSpace * PhysicsGeomBase::getSpace(void) const
{
    return _sfSpace.getValue();
}

//! Set the value of the PhysicsGeom::_sfSpace field.
inline
void PhysicsGeomBase::setSpace(PhysicsSpace * const value)
{
    editSField(SpaceFieldMask);

    _sfSpace.setValue(value);
}
//! Get the value of the PhysicsGeom::_sfEnable field.

inline
bool &PhysicsGeomBase::editEnable(void)
{
    editSField(EnableFieldMask);

    return _sfEnable.getValue();
}

//! Get the value of the PhysicsGeom::_sfEnable field.
inline
      bool  PhysicsGeomBase::getEnable(void) const
{
    return _sfEnable.getValue();
}

//! Set the value of the PhysicsGeom::_sfEnable field.
inline
void PhysicsGeomBase::setEnable(const bool value)
{
    editSField(EnableFieldMask);

    _sfEnable.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PhysicsGeomBase::execSync (      PhysicsGeomBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (BodyFieldMask & whichField))
        _sfBody.syncWith(pFrom->_sfBody);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pFrom->_sfPosition);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
        _sfRotation.syncWith(pFrom->_sfRotation);

    if(FieldBits::NoField != (QuaternionFieldMask & whichField))
        _sfQuaternion.syncWith(pFrom->_sfQuaternion);

    if(FieldBits::NoField != (OffsetPositionFieldMask & whichField))
        _sfOffsetPosition.syncWith(pFrom->_sfOffsetPosition);

    if(FieldBits::NoField != (OffsetRotationFieldMask & whichField))
        _sfOffsetRotation.syncWith(pFrom->_sfOffsetRotation);

    if(FieldBits::NoField != (OffsetQuaternionFieldMask & whichField))
        _sfOffsetQuaternion.syncWith(pFrom->_sfOffsetQuaternion);

    if(FieldBits::NoField != (CategoryBitsFieldMask & whichField))
        _sfCategoryBits.syncWith(pFrom->_sfCategoryBits);

    if(FieldBits::NoField != (CollideBitsFieldMask & whichField))
        _sfCollideBits.syncWith(pFrom->_sfCollideBits);

    if(FieldBits::NoField != (SpaceFieldMask & whichField))
        _sfSpace.syncWith(pFrom->_sfSpace);

    if(FieldBits::NoField != (EnableFieldMask & whichField))
        _sfEnable.syncWith(pFrom->_sfEnable);
}
#endif


inline
const Char8 *PhysicsGeomBase::getClassname(void)
{
    return "PhysicsGeom";
}
OSG_GEN_CONTAINERPTR(PhysicsGeom);

OSG_END_NAMESPACE

