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
 **     class SelectionEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGSelectionEventBase.h"
#include "OSGSelectionEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SelectionEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Int32           SelectionEventBase::_mfSelected
    
*/

/*! \var Int32           SelectionEventBase::_mfPreviouslySelected
    
*/

/*! \var bool            SelectionEventBase::_sfValueIsAdjusting
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SelectionEvent *>::_type("SelectionEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SelectionEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SelectionEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SelectionEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SelectionEventBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "Selected",
        "",
        SelectedFieldId, SelectedFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SelectionEvent::editHandleSelected),
        static_cast<FieldGetMethodSig >(&SelectionEvent::getHandleSelected));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "PreviouslySelected",
        "",
        PreviouslySelectedFieldId, PreviouslySelectedFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SelectionEvent::editHandlePreviouslySelected),
        static_cast<FieldGetMethodSig >(&SelectionEvent::getHandlePreviouslySelected));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ValueIsAdjusting",
        "",
        ValueIsAdjustingFieldId, ValueIsAdjustingFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SelectionEvent::editHandleValueIsAdjusting),
        static_cast<FieldGetMethodSig >(&SelectionEvent::getHandleValueIsAdjusting));

    oType.addInitialDesc(pDesc);
}


SelectionEventBase::TypeObject SelectionEventBase::_type(
    SelectionEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SelectionEventBase::createEmptyLocal),
    SelectionEvent::initMethod,
    SelectionEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SelectionEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SelectionEvent\"\n"
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
    "\t\tname=\"Selected\"\n"
    "\t\ttype=\"Int32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"PreviouslySelected\"\n"
    "\t\ttype=\"Int32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ValueIsAdjusting\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"protected\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SelectionEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &SelectionEventBase::getType(void) const
{
    return _type;
}

UInt32 SelectionEventBase::getContainerSize(void) const
{
    return sizeof(SelectionEvent);
}

/*------------------------- decorator get ------------------------------*/


MFInt32 *SelectionEventBase::editMFSelected(void)
{
    editMField(SelectedFieldMask, _mfSelected);

    return &_mfSelected;
}

const MFInt32 *SelectionEventBase::getMFSelected(void) const
{
    return &_mfSelected;
}


MFInt32 *SelectionEventBase::editMFPreviouslySelected(void)
{
    editMField(PreviouslySelectedFieldMask, _mfPreviouslySelected);

    return &_mfPreviouslySelected;
}

const MFInt32 *SelectionEventBase::getMFPreviouslySelected(void) const
{
    return &_mfPreviouslySelected;
}


SFBool *SelectionEventBase::editSFValueIsAdjusting(void)
{
    editSField(ValueIsAdjustingFieldMask);

    return &_sfValueIsAdjusting;
}

const SFBool *SelectionEventBase::getSFValueIsAdjusting(void) const
{
    return &_sfValueIsAdjusting;
}






/*------------------------------ access -----------------------------------*/

UInt32 SelectionEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        returnValue += _mfSelected.getBinSize();
    }
    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
    {
        returnValue += _mfPreviouslySelected.getBinSize();
    }
    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        returnValue += _sfValueIsAdjusting.getBinSize();
    }

    return returnValue;
}

void SelectionEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        _mfSelected.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
    {
        _mfPreviouslySelected.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        _sfValueIsAdjusting.copyToBin(pMem);
    }
}

void SelectionEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        _mfSelected.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
    {
        _mfPreviouslySelected.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        _sfValueIsAdjusting.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SelectionEventTransitPtr SelectionEventBase::createLocal(BitVector bFlags)
{
    SelectionEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SelectionEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SelectionEventTransitPtr SelectionEventBase::createDependent(BitVector bFlags)
{
    SelectionEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SelectionEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SelectionEventTransitPtr SelectionEventBase::create(void)
{
    SelectionEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SelectionEvent>(tmpPtr);
    }

    return fc;
}

SelectionEvent *SelectionEventBase::createEmptyLocal(BitVector bFlags)
{
    SelectionEvent *returnValue;

    newPtr<SelectionEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SelectionEvent *SelectionEventBase::createEmpty(void)
{
    SelectionEvent *returnValue;

    newPtr<SelectionEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SelectionEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SelectionEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SelectionEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SelectionEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SelectionEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SelectionEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SelectionEventBase::shallowCopy(void) const
{
    SelectionEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SelectionEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SelectionEventBase::SelectionEventBase(void) :
    Inherited(),
    _mfSelected               (),
    _mfPreviouslySelected     (),
    _sfValueIsAdjusting       (bool(false))
{
}

SelectionEventBase::SelectionEventBase(const SelectionEventBase &source) :
    Inherited(source),
    _mfSelected               (source._mfSelected               ),
    _mfPreviouslySelected     (source._mfPreviouslySelected     ),
    _sfValueIsAdjusting       (source._sfValueIsAdjusting       )
{
}


/*-------------------------- destructors ----------------------------------*/

SelectionEventBase::~SelectionEventBase(void)
{
}


GetFieldHandlePtr SelectionEventBase::getHandleSelected        (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfSelected,
             this->getType().getFieldDesc(SelectedFieldId),
             const_cast<SelectionEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SelectionEventBase::editHandleSelected       (void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfSelected,
             this->getType().getFieldDesc(SelectedFieldId),
             this));


    editMField(SelectedFieldMask, _mfSelected);

    return returnValue;
}

GetFieldHandlePtr SelectionEventBase::getHandlePreviouslySelected (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfPreviouslySelected,
             this->getType().getFieldDesc(PreviouslySelectedFieldId),
             const_cast<SelectionEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SelectionEventBase::editHandlePreviouslySelected(void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfPreviouslySelected,
             this->getType().getFieldDesc(PreviouslySelectedFieldId),
             this));


    editMField(PreviouslySelectedFieldMask, _mfPreviouslySelected);

    return returnValue;
}

GetFieldHandlePtr SelectionEventBase::getHandleValueIsAdjusting (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfValueIsAdjusting,
             this->getType().getFieldDesc(ValueIsAdjustingFieldId),
             const_cast<SelectionEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SelectionEventBase::editHandleValueIsAdjusting(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfValueIsAdjusting,
             this->getType().getFieldDesc(ValueIsAdjustingFieldId),
             this));


    editSField(ValueIsAdjustingFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SelectionEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SelectionEvent *pThis = static_cast<SelectionEvent *>(this);

    pThis->execSync(static_cast<SelectionEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SelectionEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SelectionEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SelectionEvent *>(pRefAspect),
                  dynamic_cast<const SelectionEvent *>(this));

    return returnValue;
}
#endif

void SelectionEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfSelected.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPreviouslySelected.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
