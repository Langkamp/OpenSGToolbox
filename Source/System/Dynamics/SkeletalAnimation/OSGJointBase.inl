/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), David Naylor               *
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
 **     class Joint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &JointBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 JointBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 JointBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Joint::_sfRelativeTransformation field.

inline
Matrix &JointBase::editRelativeTransformation(void)
{
    editSField(RelativeTransformationFieldMask);

    return _sfRelativeTransformation.getValue();
}

//! Get the value of the Joint::_sfRelativeTransformation field.
inline
const Matrix &JointBase::getRelativeTransformation(void) const
{
    return _sfRelativeTransformation.getValue();
}

//! Set the value of the Joint::_sfRelativeTransformation field.
inline
void JointBase::setRelativeTransformation(const Matrix &value)
{
    editSField(RelativeTransformationFieldMask);

    _sfRelativeTransformation.setValue(value);
}
//! Get the value of the Joint::_sfBindRelativeTransformation field.

inline
Matrix &JointBase::editBindRelativeTransformation(void)
{
    editSField(BindRelativeTransformationFieldMask);

    return _sfBindRelativeTransformation.getValue();
}

//! Get the value of the Joint::_sfBindRelativeTransformation field.
inline
const Matrix &JointBase::getBindRelativeTransformation(void) const
{
    return _sfBindRelativeTransformation.getValue();
}

//! Set the value of the Joint::_sfBindRelativeTransformation field.
inline
void JointBase::setBindRelativeTransformation(const Matrix &value)
{
    editSField(BindRelativeTransformationFieldMask);

    _sfBindRelativeTransformation.setValue(value);
}

//! Get the value of the Joint::_sfParentJoint field.
inline
Joint * JointBase::getParentJoint(void) const
{
    return _sfParentJoint.getValue();
}

//! Set the value of the Joint::_sfParentJoint field.
inline
void JointBase::setParentJoint(Joint * const value)
{
    editSField(ParentJointFieldMask);

    _sfParentJoint.setValue(value);
}

//! Get the value of the Joint::_sfParentSkeleton field.
inline
Skeleton * JointBase::getParentSkeleton(void) const
{
    return _sfParentSkeleton.getValue();
}

//! Set the value of the Joint::_sfParentSkeleton field.
inline
void JointBase::setParentSkeleton(Skeleton * const value)
{
    editSField(ParentSkeletonFieldMask);

    _sfParentSkeleton.setValue(value);
}
//! Get the value of the Joint::_sfUseParentTranslation field.

inline
bool &JointBase::editUseParentTranslation(void)
{
    editSField(UseParentTranslationFieldMask);

    return _sfUseParentTranslation.getValue();
}

//! Get the value of the Joint::_sfUseParentTranslation field.
inline
      bool  JointBase::getUseParentTranslation(void) const
{
    return _sfUseParentTranslation.getValue();
}

//! Set the value of the Joint::_sfUseParentTranslation field.
inline
void JointBase::setUseParentTranslation(const bool value)
{
    editSField(UseParentTranslationFieldMask);

    _sfUseParentTranslation.setValue(value);
}

//! Get the value of the \a index element the Joint::_mfChildJoints field.
inline
Joint * JointBase::getChildJoints(const UInt32 index) const
{
    return _mfChildJoints[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void JointBase::execSync (      JointBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RelativeTransformationFieldMask & whichField))
        _sfRelativeTransformation.syncWith(pFrom->_sfRelativeTransformation);

    if(FieldBits::NoField != (BindRelativeTransformationFieldMask & whichField))
        _sfBindRelativeTransformation.syncWith(pFrom->_sfBindRelativeTransformation);

    if(FieldBits::NoField != (ChildJointsFieldMask & whichField))
        _mfChildJoints.syncWith(pFrom->_mfChildJoints,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ParentJointFieldMask & whichField))
        _sfParentJoint.syncWith(pFrom->_sfParentJoint);

    if(FieldBits::NoField != (ParentSkeletonFieldMask & whichField))
        _sfParentSkeleton.syncWith(pFrom->_sfParentSkeleton);

    if(FieldBits::NoField != (UseParentTranslationFieldMask & whichField))
        _sfUseParentTranslation.syncWith(pFrom->_sfUseParentTranslation);
}
#endif


inline
const Char8 *JointBase::getClassname(void)
{
    return "Joint";
}
OSG_GEN_CONTAINERPTR(Joint);

OSG_END_NAMESPACE

