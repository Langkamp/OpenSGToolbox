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
 **     class Skeleton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGJoint.h"                   // RootJoints Class

#include "OSGSkeletonBase.h"
#include "OSGSkeleton.h"

#include <boost/bind.hpp>

#include "OSGEvent.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Skeleton
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Joint *         SkeletonBase::_mfRootJoints
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Skeleton *>::_type("SkeletonPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Skeleton *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Skeleton *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Skeleton *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SkeletonBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecJointPtr::Description(
        MFUnrecJointPtr::getClassType(),
        "RootJoints",
        "",
        RootJointsFieldId, RootJointsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Skeleton::editHandleRootJoints),
        static_cast<FieldGetMethodSig >(&Skeleton::getHandleRootJoints));

    oType.addInitialDesc(pDesc);
    pDesc = new SFEventProducerPtr::Description(
        SFEventProducerPtr::getClassType(),
        "EventProducer",
        "Event Producer",
        EventProducerFieldId,EventProducerFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&Skeleton::invalidEditField),
        static_cast     <FieldGetMethodSig >(&Skeleton::invalidGetField));

    oType.addInitialDesc(pDesc);
}


SkeletonBase::TypeObject SkeletonBase::_type(
    SkeletonBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SkeletonBase::createEmptyLocal),
    Skeleton::initMethod,
    Skeleton::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Skeleton::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Skeleton\"\n"
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
    "\t\tname=\"RootJoints\"\n"
    "\t\ttype=\"Joint\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"SkeletonChanged\"\n"
    "\t\ttype=\"SkeletonEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "</FieldContainer>\n",
    ""
    );

//! Skeleton Produced Methods

MethodDescription *SkeletonBase::_methodDesc[] =
{
    new MethodDescription("SkeletonChanged", 
                    "",
                     SkeletonChangedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType SkeletonBase::_producerType(
    "SkeletonProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonBase::getType(void)
{
    return _type;
}

const FieldContainerType &SkeletonBase::getType(void) const
{
    return _type;
}

const EventProducerType &SkeletonBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 SkeletonBase::getContainerSize(void) const
{
    return sizeof(Skeleton);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Skeleton::_mfRootJoints field.
const MFUnrecJointPtr *SkeletonBase::getMFRootJoints(void) const
{
    return &_mfRootJoints;
}

MFUnrecJointPtr     *SkeletonBase::editMFRootJoints     (void)
{
    editMField(RootJointsFieldMask, _mfRootJoints);

    return &_mfRootJoints;
}



void SkeletonBase::pushToRootJoints(Joint * const value)
{
    editMField(RootJointsFieldMask, _mfRootJoints);

    _mfRootJoints.push_back(value);
}

void SkeletonBase::assignRootJoints(const MFUnrecJointPtr   &value)
{
    MFUnrecJointPtr  ::const_iterator elemIt  =
        value.begin();
    MFUnrecJointPtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<Skeleton *>(this)->clearRootJoints();

    while(elemIt != elemEnd)
    {
        this->pushToRootJoints(*elemIt);

        ++elemIt;
    }
}

void SkeletonBase::removeFromRootJoints(UInt32 uiIndex)
{
    if(uiIndex < _mfRootJoints.size())
    {
        editMField(RootJointsFieldMask, _mfRootJoints);

        _mfRootJoints.erase(uiIndex);
    }
}

void SkeletonBase::removeObjFromRootJoints(Joint * const value)
{
    Int32 iElemIdx = _mfRootJoints.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(RootJointsFieldMask, _mfRootJoints);

        _mfRootJoints.erase(iElemIdx);
    }
}
void SkeletonBase::clearRootJoints(void)
{
    editMField(RootJointsFieldMask, _mfRootJoints);


    _mfRootJoints.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 SkeletonBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
    {
        returnValue += _mfRootJoints.getBinSize();
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }

    return returnValue;
}

void SkeletonBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
    {
        _mfRootJoints.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }
}

void SkeletonBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootJointsFieldMask & whichField))
    {
        _mfRootJoints.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SkeletonTransitPtr SkeletonBase::createLocal(BitVector bFlags)
{
    SkeletonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Skeleton>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SkeletonTransitPtr SkeletonBase::createDependent(BitVector bFlags)
{
    SkeletonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<Skeleton>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SkeletonTransitPtr SkeletonBase::create(void)
{
    SkeletonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Skeleton>(tmpPtr);
    }

    return fc;
}

Skeleton *SkeletonBase::createEmptyLocal(BitVector bFlags)
{
    Skeleton *returnValue;

    newPtr<Skeleton>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Skeleton *SkeletonBase::createEmpty(void)
{
    Skeleton *returnValue;

    newPtr<Skeleton>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SkeletonBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Skeleton *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Skeleton *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonBase::shallowCopyDependent(
    BitVector bFlags) const
{
    Skeleton *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Skeleton *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonBase::shallowCopy(void) const
{
    Skeleton *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const Skeleton *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SkeletonBase::SkeletonBase(void) :
    _Producer(&getProducerType()),
    Inherited(),
    _mfRootJoints             ()
    ,_sfEventProducer(&_Producer)
{
}

SkeletonBase::SkeletonBase(const SkeletonBase &source) :
    _Producer(&source.getProducerType()),
    Inherited(source),
    _mfRootJoints             ()
    ,_sfEventProducer(&_Producer)
{
}


/*-------------------------- destructors ----------------------------------*/

SkeletonBase::~SkeletonBase(void)
{
}

void SkeletonBase::onCreate(const Skeleton *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Skeleton *pThis = static_cast<Skeleton *>(this);

        MFUnrecJointPtr::const_iterator RootJointsIt  =
            source->_mfRootJoints.begin();
        MFUnrecJointPtr::const_iterator RootJointsEnd =
            source->_mfRootJoints.end  ();

        while(RootJointsIt != RootJointsEnd)
        {
            pThis->pushToRootJoints(*RootJointsIt);

            ++RootJointsIt;
        }
    }
}

GetFieldHandlePtr SkeletonBase::getHandleRootJoints      (void) const
{
    MFUnrecJointPtr::GetHandlePtr returnValue(
        new  MFUnrecJointPtr::GetHandle(
             &_mfRootJoints,
             this->getType().getFieldDesc(RootJointsFieldId),
             const_cast<SkeletonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonBase::editHandleRootJoints     (void)
{
    MFUnrecJointPtr::EditHandlePtr returnValue(
        new  MFUnrecJointPtr::EditHandle(
             &_mfRootJoints,
             this->getType().getFieldDesc(RootJointsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&Skeleton::pushToRootJoints,
                    static_cast<Skeleton *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&Skeleton::removeFromRootJoints,
                    static_cast<Skeleton *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&Skeleton::removeObjFromRootJoints,
                    static_cast<Skeleton *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&Skeleton::clearRootJoints,
                    static_cast<Skeleton *>(this)));

    editMField(RootJointsFieldMask, _mfRootJoints);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SkeletonBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Skeleton *pThis = static_cast<Skeleton *>(this);

    pThis->execSync(static_cast<Skeleton *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SkeletonBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    Skeleton *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Skeleton *>(pRefAspect),
                  dynamic_cast<const Skeleton *>(this));

    return returnValue;
}
#endif

void SkeletonBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Skeleton *>(this)->clearRootJoints();


}


OSG_END_NAMESPACE
