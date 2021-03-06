/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class FocusEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGComponent.h"               // OppositeComponent Class

#include "OSGFocusEventBase.h"
#include "OSGFocusEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FocusEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            FocusEventBase::_sfIsTemporary
    
*/

/*! \var Component *     FocusEventBase::_sfOppositeComponent
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FocusEvent *>::_type("FocusEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FocusEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FocusEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FocusEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FocusEventBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "IsTemporary",
        "",
        IsTemporaryFieldId, IsTemporaryFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FocusEvent::editHandleIsTemporary),
        static_cast<FieldGetMethodSig >(&FocusEvent::getHandleIsTemporary));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecComponentPtr::Description(
        SFUnrecComponentPtr::getClassType(),
        "OppositeComponent",
        "",
        OppositeComponentFieldId, OppositeComponentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FocusEvent::editHandleOppositeComponent),
        static_cast<FieldGetMethodSig >(&FocusEvent::getHandleOppositeComponent));

    oType.addInitialDesc(pDesc);
}


FocusEventBase::TypeObject FocusEventBase::_type(
    FocusEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FocusEventBase::createEmptyLocal),
    FocusEvent::initMethod,
    FocusEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FocusEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FocusEvent\"\n"
    "\tparent=\"Event\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"IsTemporary\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"OppositeComponent\"\n"
    "\t\ttype=\"Component\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FocusEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &FocusEventBase::getType(void) const
{
    return _type;
}

UInt32 FocusEventBase::getContainerSize(void) const
{
    return sizeof(FocusEvent);
}

/*------------------------- decorator get ------------------------------*/


SFBool *FocusEventBase::editSFIsTemporary(void)
{
    editSField(IsTemporaryFieldMask);

    return &_sfIsTemporary;
}

const SFBool *FocusEventBase::getSFIsTemporary(void) const
{
    return &_sfIsTemporary;
}


//! Get the FocusEvent::_sfOppositeComponent field.
const SFUnrecComponentPtr *FocusEventBase::getSFOppositeComponent(void) const
{
    return &_sfOppositeComponent;
}

SFUnrecComponentPtr *FocusEventBase::editSFOppositeComponent(void)
{
    editSField(OppositeComponentFieldMask);

    return &_sfOppositeComponent;
}





/*------------------------------ access -----------------------------------*/

UInt32 FocusEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (IsTemporaryFieldMask & whichField))
    {
        returnValue += _sfIsTemporary.getBinSize();
    }
    if(FieldBits::NoField != (OppositeComponentFieldMask & whichField))
    {
        returnValue += _sfOppositeComponent.getBinSize();
    }

    return returnValue;
}

void FocusEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (IsTemporaryFieldMask & whichField))
    {
        _sfIsTemporary.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OppositeComponentFieldMask & whichField))
    {
        _sfOppositeComponent.copyToBin(pMem);
    }
}

void FocusEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (IsTemporaryFieldMask & whichField))
    {
        _sfIsTemporary.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OppositeComponentFieldMask & whichField))
    {
        _sfOppositeComponent.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FocusEventTransitPtr FocusEventBase::createLocal(BitVector bFlags)
{
    FocusEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FocusEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FocusEventTransitPtr FocusEventBase::createDependent(BitVector bFlags)
{
    FocusEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FocusEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FocusEventTransitPtr FocusEventBase::create(void)
{
    FocusEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FocusEvent>(tmpPtr);
    }

    return fc;
}

FocusEvent *FocusEventBase::createEmptyLocal(BitVector bFlags)
{
    FocusEvent *returnValue;

    newPtr<FocusEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FocusEvent *FocusEventBase::createEmpty(void)
{
    FocusEvent *returnValue;

    newPtr<FocusEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FocusEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FocusEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FocusEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FocusEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FocusEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FocusEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FocusEventBase::shallowCopy(void) const
{
    FocusEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FocusEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FocusEventBase::FocusEventBase(void) :
    Inherited(),
    _sfIsTemporary            (bool(false)),
    _sfOppositeComponent      (NULL)
{
}

FocusEventBase::FocusEventBase(const FocusEventBase &source) :
    Inherited(source),
    _sfIsTemporary            (source._sfIsTemporary            ),
    _sfOppositeComponent      (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

FocusEventBase::~FocusEventBase(void)
{
}

void FocusEventBase::onCreate(const FocusEvent *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        FocusEvent *pThis = static_cast<FocusEvent *>(this);

        pThis->setOppositeComponent(source->getOppositeComponent());
    }
}

GetFieldHandlePtr FocusEventBase::getHandleIsTemporary     (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIsTemporary,
             this->getType().getFieldDesc(IsTemporaryFieldId),
             const_cast<FocusEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FocusEventBase::editHandleIsTemporary    (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIsTemporary,
             this->getType().getFieldDesc(IsTemporaryFieldId),
             this));


    editSField(IsTemporaryFieldMask);

    return returnValue;
}

GetFieldHandlePtr FocusEventBase::getHandleOppositeComponent (void) const
{
    SFUnrecComponentPtr::GetHandlePtr returnValue(
        new  SFUnrecComponentPtr::GetHandle(
             &_sfOppositeComponent,
             this->getType().getFieldDesc(OppositeComponentFieldId),
             const_cast<FocusEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FocusEventBase::editHandleOppositeComponent(void)
{
    SFUnrecComponentPtr::EditHandlePtr returnValue(
        new  SFUnrecComponentPtr::EditHandle(
             &_sfOppositeComponent,
             this->getType().getFieldDesc(OppositeComponentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FocusEvent::setOppositeComponent,
                    static_cast<FocusEvent *>(this), _1));

    editSField(OppositeComponentFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FocusEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FocusEvent *pThis = static_cast<FocusEvent *>(this);

    pThis->execSync(static_cast<FocusEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FocusEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FocusEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FocusEvent *>(pRefAspect),
                  dynamic_cast<const FocusEvent *>(this));

    return returnValue;
}
#endif

void FocusEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FocusEvent *>(this)->setOppositeComponent(NULL);


}


OSG_END_NAMESPACE
