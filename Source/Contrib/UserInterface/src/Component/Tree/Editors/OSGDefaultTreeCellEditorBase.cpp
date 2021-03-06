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
 **     class DefaultTreeCellEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGTextField.h"               // DefaultEditor Class

#include "OSGDefaultTreeCellEditorBase.h"
#include "OSGDefaultTreeCellEditor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DefaultTreeCellEditor
    A UI Default Tree Cell Editor.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          DefaultTreeCellEditorBase::_sfClickCountToStart
    
*/

/*! \var TextField *     DefaultTreeCellEditorBase::_sfDefaultEditor
    
*/

/*! \var TextField *     DefaultTreeCellEditorBase::_sfDefaultStringEditor
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DefaultTreeCellEditor *>::_type("DefaultTreeCellEditorPtr", "TreeCellEditorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DefaultTreeCellEditor *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DefaultTreeCellEditor *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DefaultTreeCellEditor *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DefaultTreeCellEditorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "ClickCountToStart",
        "",
        ClickCountToStartFieldId, ClickCountToStartFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DefaultTreeCellEditor::editHandleClickCountToStart),
        static_cast<FieldGetMethodSig >(&DefaultTreeCellEditor::getHandleClickCountToStart));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextFieldPtr::Description(
        SFUnrecTextFieldPtr::getClassType(),
        "DefaultEditor",
        "",
        DefaultEditorFieldId, DefaultEditorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DefaultTreeCellEditor::editHandleDefaultEditor),
        static_cast<FieldGetMethodSig >(&DefaultTreeCellEditor::getHandleDefaultEditor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextFieldPtr::Description(
        SFUnrecTextFieldPtr::getClassType(),
        "DefaultStringEditor",
        "",
        DefaultStringEditorFieldId, DefaultStringEditorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DefaultTreeCellEditor::editHandleDefaultStringEditor),
        static_cast<FieldGetMethodSig >(&DefaultTreeCellEditor::getHandleDefaultStringEditor));

    oType.addInitialDesc(pDesc);
}


DefaultTreeCellEditorBase::TypeObject DefaultTreeCellEditorBase::_type(
    DefaultTreeCellEditorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DefaultTreeCellEditorBase::createEmptyLocal),
    DefaultTreeCellEditor::initMethod,
    DefaultTreeCellEditor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DefaultTreeCellEditor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DefaultTreeCellEditor\"\n"
    "\tparent=\"TreeCellEditor\"\n"
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
    "A UI Default Tree Cell Editor.\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"ClickCountToStart\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"3\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DefaultEditor\"\n"
    "\t\ttype=\"TextField\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DefaultStringEditor\"\n"
    "\t\ttype=\"TextField\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI Default Tree Cell Editor.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefaultTreeCellEditorBase::getType(void)
{
    return _type;
}

const FieldContainerType &DefaultTreeCellEditorBase::getType(void) const
{
    return _type;
}

UInt32 DefaultTreeCellEditorBase::getContainerSize(void) const
{
    return sizeof(DefaultTreeCellEditor);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *DefaultTreeCellEditorBase::editSFClickCountToStart(void)
{
    editSField(ClickCountToStartFieldMask);

    return &_sfClickCountToStart;
}

const SFUInt32 *DefaultTreeCellEditorBase::getSFClickCountToStart(void) const
{
    return &_sfClickCountToStart;
}


//! Get the DefaultTreeCellEditor::_sfDefaultEditor field.
const SFUnrecTextFieldPtr *DefaultTreeCellEditorBase::getSFDefaultEditor(void) const
{
    return &_sfDefaultEditor;
}

SFUnrecTextFieldPtr *DefaultTreeCellEditorBase::editSFDefaultEditor  (void)
{
    editSField(DefaultEditorFieldMask);

    return &_sfDefaultEditor;
}

//! Get the DefaultTreeCellEditor::_sfDefaultStringEditor field.
const SFUnrecTextFieldPtr *DefaultTreeCellEditorBase::getSFDefaultStringEditor(void) const
{
    return &_sfDefaultStringEditor;
}

SFUnrecTextFieldPtr *DefaultTreeCellEditorBase::editSFDefaultStringEditor(void)
{
    editSField(DefaultStringEditorFieldMask);

    return &_sfDefaultStringEditor;
}





/*------------------------------ access -----------------------------------*/

UInt32 DefaultTreeCellEditorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ClickCountToStartFieldMask & whichField))
    {
        returnValue += _sfClickCountToStart.getBinSize();
    }
    if(FieldBits::NoField != (DefaultEditorFieldMask & whichField))
    {
        returnValue += _sfDefaultEditor.getBinSize();
    }
    if(FieldBits::NoField != (DefaultStringEditorFieldMask & whichField))
    {
        returnValue += _sfDefaultStringEditor.getBinSize();
    }

    return returnValue;
}

void DefaultTreeCellEditorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ClickCountToStartFieldMask & whichField))
    {
        _sfClickCountToStart.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DefaultEditorFieldMask & whichField))
    {
        _sfDefaultEditor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DefaultStringEditorFieldMask & whichField))
    {
        _sfDefaultStringEditor.copyToBin(pMem);
    }
}

void DefaultTreeCellEditorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ClickCountToStartFieldMask & whichField))
    {
        _sfClickCountToStart.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DefaultEditorFieldMask & whichField))
    {
        _sfDefaultEditor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DefaultStringEditorFieldMask & whichField))
    {
        _sfDefaultStringEditor.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DefaultTreeCellEditorTransitPtr DefaultTreeCellEditorBase::createLocal(BitVector bFlags)
{
    DefaultTreeCellEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DefaultTreeCellEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DefaultTreeCellEditorTransitPtr DefaultTreeCellEditorBase::createDependent(BitVector bFlags)
{
    DefaultTreeCellEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DefaultTreeCellEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DefaultTreeCellEditorTransitPtr DefaultTreeCellEditorBase::create(void)
{
    DefaultTreeCellEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DefaultTreeCellEditor>(tmpPtr);
    }

    return fc;
}

DefaultTreeCellEditor *DefaultTreeCellEditorBase::createEmptyLocal(BitVector bFlags)
{
    DefaultTreeCellEditor *returnValue;

    newPtr<DefaultTreeCellEditor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DefaultTreeCellEditor *DefaultTreeCellEditorBase::createEmpty(void)
{
    DefaultTreeCellEditor *returnValue;

    newPtr<DefaultTreeCellEditor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DefaultTreeCellEditorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DefaultTreeCellEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DefaultTreeCellEditor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DefaultTreeCellEditorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DefaultTreeCellEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DefaultTreeCellEditor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DefaultTreeCellEditorBase::shallowCopy(void) const
{
    DefaultTreeCellEditor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DefaultTreeCellEditor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DefaultTreeCellEditorBase::DefaultTreeCellEditorBase(void) :
    Inherited(),
    _sfClickCountToStart      (UInt32(3)),
    _sfDefaultEditor          (NULL),
    _sfDefaultStringEditor    (NULL)
{
}

DefaultTreeCellEditorBase::DefaultTreeCellEditorBase(const DefaultTreeCellEditorBase &source) :
    Inherited(source),
    _sfClickCountToStart      (source._sfClickCountToStart      ),
    _sfDefaultEditor          (NULL),
    _sfDefaultStringEditor    (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

DefaultTreeCellEditorBase::~DefaultTreeCellEditorBase(void)
{
}

void DefaultTreeCellEditorBase::onCreate(const DefaultTreeCellEditor *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DefaultTreeCellEditor *pThis = static_cast<DefaultTreeCellEditor *>(this);

        pThis->setDefaultEditor(source->getDefaultEditor());

        pThis->setDefaultStringEditor(source->getDefaultStringEditor());
    }
}

GetFieldHandlePtr DefaultTreeCellEditorBase::getHandleClickCountToStart (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfClickCountToStart,
             this->getType().getFieldDesc(ClickCountToStartFieldId),
             const_cast<DefaultTreeCellEditorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DefaultTreeCellEditorBase::editHandleClickCountToStart(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfClickCountToStart,
             this->getType().getFieldDesc(ClickCountToStartFieldId),
             this));


    editSField(ClickCountToStartFieldMask);

    return returnValue;
}

GetFieldHandlePtr DefaultTreeCellEditorBase::getHandleDefaultEditor   (void) const
{
    SFUnrecTextFieldPtr::GetHandlePtr returnValue(
        new  SFUnrecTextFieldPtr::GetHandle(
             &_sfDefaultEditor,
             this->getType().getFieldDesc(DefaultEditorFieldId),
             const_cast<DefaultTreeCellEditorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DefaultTreeCellEditorBase::editHandleDefaultEditor  (void)
{
    SFUnrecTextFieldPtr::EditHandlePtr returnValue(
        new  SFUnrecTextFieldPtr::EditHandle(
             &_sfDefaultEditor,
             this->getType().getFieldDesc(DefaultEditorFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DefaultTreeCellEditor::setDefaultEditor,
                    static_cast<DefaultTreeCellEditor *>(this), _1));

    editSField(DefaultEditorFieldMask);

    return returnValue;
}

GetFieldHandlePtr DefaultTreeCellEditorBase::getHandleDefaultStringEditor (void) const
{
    SFUnrecTextFieldPtr::GetHandlePtr returnValue(
        new  SFUnrecTextFieldPtr::GetHandle(
             &_sfDefaultStringEditor,
             this->getType().getFieldDesc(DefaultStringEditorFieldId),
             const_cast<DefaultTreeCellEditorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DefaultTreeCellEditorBase::editHandleDefaultStringEditor(void)
{
    SFUnrecTextFieldPtr::EditHandlePtr returnValue(
        new  SFUnrecTextFieldPtr::EditHandle(
             &_sfDefaultStringEditor,
             this->getType().getFieldDesc(DefaultStringEditorFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DefaultTreeCellEditor::setDefaultStringEditor,
                    static_cast<DefaultTreeCellEditor *>(this), _1));

    editSField(DefaultStringEditorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DefaultTreeCellEditorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DefaultTreeCellEditor *pThis = static_cast<DefaultTreeCellEditor *>(this);

    pThis->execSync(static_cast<DefaultTreeCellEditor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DefaultTreeCellEditorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DefaultTreeCellEditor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DefaultTreeCellEditor *>(pRefAspect),
                  dynamic_cast<const DefaultTreeCellEditor *>(this));

    return returnValue;
}
#endif

void DefaultTreeCellEditorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DefaultTreeCellEditor *>(this)->setDefaultEditor(NULL);

    static_cast<DefaultTreeCellEditor *>(this)->setDefaultStringEditor(NULL);


}


OSG_END_NAMESPACE
