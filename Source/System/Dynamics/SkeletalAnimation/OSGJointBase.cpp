/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGJoint.h"                   // ChildJoints Class
#include "OSGSkeleton.h"                // ParentSkeleton Class

#include "OSGJointBase.h"
#include "OSGJoint.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Joint
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Matrix          JointBase::_sfRelativeTransformation
    
*/

/*! \var Matrix          JointBase::_sfBindRelativeTransformation
    
*/

/*! \var Joint *         JointBase::_mfChildJoints
    
*/

/*! \var Joint *         JointBase::_sfParentJoint
    
*/

/*! \var Skeleton *      JointBase::_sfParentSkeleton
    
*/

/*! \var bool            JointBase::_sfUseParentTranslation
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Joint *>::_type("JointPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Joint *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Joint *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Joint *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void JointBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "RelativeTransformation",
        "",
        RelativeTransformationFieldId, RelativeTransformationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Joint::editHandleRelativeTransformation),
        static_cast<FieldGetMethodSig >(&Joint::getHandleRelativeTransformation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "BindRelativeTransformation",
        "",
        BindRelativeTransformationFieldId, BindRelativeTransformationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Joint::editHandleBindRelativeTransformation),
        static_cast<FieldGetMethodSig >(&Joint::getHandleBindRelativeTransformation));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecJointPtr::Description(
        MFUnrecJointPtr::getClassType(),
        "ChildJoints",
        "",
        ChildJointsFieldId, ChildJointsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Joint::editHandleChildJoints),
        static_cast<FieldGetMethodSig >(&Joint::getHandleChildJoints));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecJointPtr::Description(
        SFUnrecJointPtr::getClassType(),
        "ParentJoint",
        "",
        ParentJointFieldId, ParentJointFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Joint::editHandleParentJoint),
        static_cast<FieldGetMethodSig >(&Joint::getHandleParentJoint));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecSkeletonPtr::Description(
        SFUnrecSkeletonPtr::getClassType(),
        "ParentSkeleton",
        "",
        ParentSkeletonFieldId, ParentSkeletonFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Joint::editHandleParentSkeleton),
        static_cast<FieldGetMethodSig >(&Joint::getHandleParentSkeleton));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "UseParentTranslation",
        "",
        UseParentTranslationFieldId, UseParentTranslationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Joint::editHandleUseParentTranslation),
        static_cast<FieldGetMethodSig >(&Joint::getHandleUseParentTranslation));

    oType.addInitialDesc(pDesc);
}


JointBase::TypeObject JointBase::_type(
    JointBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&JointBase::createEmptyLocal),
    Joint::initMethod,
    Joint::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Joint::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Joint\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "    library=\"TBAnimation\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com), David Naylor               \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"RelativeTransformation\"\n"
    "\t\ttype=\"Matrix\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"BindRelativeTransformation\"\n"
    "\t\ttype=\"Matrix\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ChildJoints\"\n"
    "\t\ttype=\"Joint\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParentJoint\"\n"
    "\t\ttype=\"Joint\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParentSkeleton\"\n"
    "\t\ttype=\"Skeleton\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"UseParentTranslation\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &JointBase::getType(void)
{
    return _type;
}

const FieldContainerType &JointBase::getType(void) const
{
    return _type;
}

UInt32 JointBase::getContainerSize(void) const
{
    return sizeof(Joint);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *JointBase::editSFRelativeTransformation(void)
{
    editSField(RelativeTransformationFieldMask);

    return &_sfRelativeTransformation;
}

const SFMatrix *JointBase::getSFRelativeTransformation(void) const
{
    return &_sfRelativeTransformation;
}


SFMatrix *JointBase::editSFBindRelativeTransformation(void)
{
    editSField(BindRelativeTransformationFieldMask);

    return &_sfBindRelativeTransformation;
}

const SFMatrix *JointBase::getSFBindRelativeTransformation(void) const
{
    return &_sfBindRelativeTransformation;
}


//! Get the Joint::_mfChildJoints field.
const MFUnrecJointPtr *JointBase::getMFChildJoints(void) const
{
    return &_mfChildJoints;
}

MFUnrecJointPtr     *JointBase::editMFChildJoints    (void)
{
    editMField(ChildJointsFieldMask, _mfChildJoints);

    return &_mfChildJoints;
}

//! Get the Joint::_sfParentJoint field.
const SFUnrecJointPtr *JointBase::getSFParentJoint(void) const
{
    return &_sfParentJoint;
}

SFUnrecJointPtr     *JointBase::editSFParentJoint    (void)
{
    editSField(ParentJointFieldMask);

    return &_sfParentJoint;
}

//! Get the Joint::_sfParentSkeleton field.
const SFUnrecSkeletonPtr *JointBase::getSFParentSkeleton(void) const
{
    return &_sfParentSkeleton;
}

SFUnrecSkeletonPtr  *JointBase::editSFParentSkeleton (void)
{
    editSField(ParentSkeletonFieldMask);

    return &_sfParentSkeleton;
}

SFBool *JointBase::editSFUseParentTranslation(void)
{
    editSField(UseParentTranslationFieldMask);

    return &_sfUseParentTranslation;
}

const SFBool *JointBase::getSFUseParentTranslation(void) const
{
    return &_sfUseParentTranslation;
}




void JointBase::pushToChildJoints(Joint * const value)
{
    editMField(ChildJointsFieldMask, _mfChildJoints);

    _mfChildJoints.push_back(value);
}

void JointBase::assignChildJoints(const MFUnrecJointPtr   &value)
{
    MFUnrecJointPtr  ::const_iterator elemIt  =
        value.begin();
    MFUnrecJointPtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<Joint *>(this)->clearChildJoints();

    while(elemIt != elemEnd)
    {
        this->pushToChildJoints(*elemIt);

        ++elemIt;
    }
}

void JointBase::removeFromChildJoints(UInt32 uiIndex)
{
    if(uiIndex < _mfChildJoints.size())
    {
        editMField(ChildJointsFieldMask, _mfChildJoints);

        _mfChildJoints.erase(uiIndex);
    }
}

void JointBase::removeObjFromChildJoints(Joint * const value)
{
    Int32 iElemIdx = _mfChildJoints.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ChildJointsFieldMask, _mfChildJoints);

        _mfChildJoints.erase(iElemIdx);
    }
}
void JointBase::clearChildJoints(void)
{
    editMField(ChildJointsFieldMask, _mfChildJoints);


    _mfChildJoints.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 JointBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RelativeTransformationFieldMask & whichField))
    {
        returnValue += _sfRelativeTransformation.getBinSize();
    }
    if(FieldBits::NoField != (BindRelativeTransformationFieldMask & whichField))
    {
        returnValue += _sfBindRelativeTransformation.getBinSize();
    }
    if(FieldBits::NoField != (ChildJointsFieldMask & whichField))
    {
        returnValue += _mfChildJoints.getBinSize();
    }
    if(FieldBits::NoField != (ParentJointFieldMask & whichField))
    {
        returnValue += _sfParentJoint.getBinSize();
    }
    if(FieldBits::NoField != (ParentSkeletonFieldMask & whichField))
    {
        returnValue += _sfParentSkeleton.getBinSize();
    }
    if(FieldBits::NoField != (UseParentTranslationFieldMask & whichField))
    {
        returnValue += _sfUseParentTranslation.getBinSize();
    }

    return returnValue;
}

void JointBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RelativeTransformationFieldMask & whichField))
    {
        _sfRelativeTransformation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BindRelativeTransformationFieldMask & whichField))
    {
        _sfBindRelativeTransformation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ChildJointsFieldMask & whichField))
    {
        _mfChildJoints.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParentJointFieldMask & whichField))
    {
        _sfParentJoint.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParentSkeletonFieldMask & whichField))
    {
        _sfParentSkeleton.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UseParentTranslationFieldMask & whichField))
    {
        _sfUseParentTranslation.copyToBin(pMem);
    }
}

void JointBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RelativeTransformationFieldMask & whichField))
    {
        _sfRelativeTransformation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BindRelativeTransformationFieldMask & whichField))
    {
        _sfBindRelativeTransformation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ChildJointsFieldMask & whichField))
    {
        _mfChildJoints.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParentJointFieldMask & whichField))
    {
        _sfParentJoint.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParentSkeletonFieldMask & whichField))
    {
        _sfParentSkeleton.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UseParentTranslationFieldMask & whichField))
    {
        _sfUseParentTranslation.copyFromBin(pMem);
    }
}

//! create a new instance of the class
JointTransitPtr JointBase::createLocal(BitVector bFlags)
{
    JointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Joint>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
JointTransitPtr JointBase::createDependent(BitVector bFlags)
{
    JointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<Joint>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
JointTransitPtr JointBase::create(void)
{
    JointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Joint>(tmpPtr);
    }

    return fc;
}

Joint *JointBase::createEmptyLocal(BitVector bFlags)
{
    Joint *returnValue;

    newPtr<Joint>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Joint *JointBase::createEmpty(void)
{
    Joint *returnValue;

    newPtr<Joint>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr JointBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Joint *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Joint *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr JointBase::shallowCopyDependent(
    BitVector bFlags) const
{
    Joint *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Joint *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr JointBase::shallowCopy(void) const
{
    Joint *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const Joint *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

JointBase::JointBase(void) :
    Inherited(),
    _sfRelativeTransformation (),
    _sfBindRelativeTransformation(),
    _mfChildJoints            (),
    _sfParentJoint            (NULL),
    _sfParentSkeleton         (NULL),
    _sfUseParentTranslation   (bool(true))
{
}

JointBase::JointBase(const JointBase &source) :
    Inherited(source),
    _sfRelativeTransformation (source._sfRelativeTransformation ),
    _sfBindRelativeTransformation(source._sfBindRelativeTransformation),
    _mfChildJoints            (),
    _sfParentJoint            (NULL),
    _sfParentSkeleton         (NULL),
    _sfUseParentTranslation   (source._sfUseParentTranslation   )
{
}


/*-------------------------- destructors ----------------------------------*/

JointBase::~JointBase(void)
{
}

void JointBase::onCreate(const Joint *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Joint *pThis = static_cast<Joint *>(this);

        MFUnrecJointPtr::const_iterator ChildJointsIt  =
            source->_mfChildJoints.begin();
        MFUnrecJointPtr::const_iterator ChildJointsEnd =
            source->_mfChildJoints.end  ();

        while(ChildJointsIt != ChildJointsEnd)
        {
            pThis->pushToChildJoints(*ChildJointsIt);

            ++ChildJointsIt;
        }

        pThis->setParentJoint(source->getParentJoint());

        pThis->setParentSkeleton(source->getParentSkeleton());
    }
}

GetFieldHandlePtr JointBase::getHandleRelativeTransformation (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfRelativeTransformation,
             this->getType().getFieldDesc(RelativeTransformationFieldId),
             const_cast<JointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr JointBase::editHandleRelativeTransformation(void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfRelativeTransformation,
             this->getType().getFieldDesc(RelativeTransformationFieldId),
             this));


    editSField(RelativeTransformationFieldMask);

    return returnValue;
}

GetFieldHandlePtr JointBase::getHandleBindRelativeTransformation (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfBindRelativeTransformation,
             this->getType().getFieldDesc(BindRelativeTransformationFieldId),
             const_cast<JointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr JointBase::editHandleBindRelativeTransformation(void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfBindRelativeTransformation,
             this->getType().getFieldDesc(BindRelativeTransformationFieldId),
             this));


    editSField(BindRelativeTransformationFieldMask);

    return returnValue;
}

GetFieldHandlePtr JointBase::getHandleChildJoints     (void) const
{
    MFUnrecJointPtr::GetHandlePtr returnValue(
        new  MFUnrecJointPtr::GetHandle(
             &_mfChildJoints,
             this->getType().getFieldDesc(ChildJointsFieldId),
             const_cast<JointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr JointBase::editHandleChildJoints    (void)
{
    MFUnrecJointPtr::EditHandlePtr returnValue(
        new  MFUnrecJointPtr::EditHandle(
             &_mfChildJoints,
             this->getType().getFieldDesc(ChildJointsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&Joint::pushToChildJoints,
                    static_cast<Joint *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&Joint::removeFromChildJoints,
                    static_cast<Joint *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&Joint::removeObjFromChildJoints,
                    static_cast<Joint *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&Joint::clearChildJoints,
                    static_cast<Joint *>(this)));

    editMField(ChildJointsFieldMask, _mfChildJoints);

    return returnValue;
}

GetFieldHandlePtr JointBase::getHandleParentJoint     (void) const
{
    SFUnrecJointPtr::GetHandlePtr returnValue(
        new  SFUnrecJointPtr::GetHandle(
             &_sfParentJoint,
             this->getType().getFieldDesc(ParentJointFieldId),
             const_cast<JointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr JointBase::editHandleParentJoint    (void)
{
    SFUnrecJointPtr::EditHandlePtr returnValue(
        new  SFUnrecJointPtr::EditHandle(
             &_sfParentJoint,
             this->getType().getFieldDesc(ParentJointFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&Joint::setParentJoint,
                    static_cast<Joint *>(this), _1));

    editSField(ParentJointFieldMask);

    return returnValue;
}

GetFieldHandlePtr JointBase::getHandleParentSkeleton  (void) const
{
    SFUnrecSkeletonPtr::GetHandlePtr returnValue(
        new  SFUnrecSkeletonPtr::GetHandle(
             &_sfParentSkeleton,
             this->getType().getFieldDesc(ParentSkeletonFieldId),
             const_cast<JointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr JointBase::editHandleParentSkeleton (void)
{
    SFUnrecSkeletonPtr::EditHandlePtr returnValue(
        new  SFUnrecSkeletonPtr::EditHandle(
             &_sfParentSkeleton,
             this->getType().getFieldDesc(ParentSkeletonFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&Joint::setParentSkeleton,
                    static_cast<Joint *>(this), _1));

    editSField(ParentSkeletonFieldMask);

    return returnValue;
}

GetFieldHandlePtr JointBase::getHandleUseParentTranslation (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseParentTranslation,
             this->getType().getFieldDesc(UseParentTranslationFieldId),
             const_cast<JointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr JointBase::editHandleUseParentTranslation(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseParentTranslation,
             this->getType().getFieldDesc(UseParentTranslationFieldId),
             this));


    editSField(UseParentTranslationFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void JointBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Joint *pThis = static_cast<Joint *>(this);

    pThis->execSync(static_cast<Joint *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *JointBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    Joint *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Joint *>(pRefAspect),
                  dynamic_cast<const Joint *>(this));

    return returnValue;
}
#endif

void JointBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Joint *>(this)->clearChildJoints();

    static_cast<Joint *>(this)->setParentJoint(NULL);

    static_cast<Joint *>(this)->setParentSkeleton(NULL);


}


OSG_END_NAMESPACE
