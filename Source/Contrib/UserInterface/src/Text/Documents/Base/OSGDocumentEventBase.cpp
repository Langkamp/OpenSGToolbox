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
 **     class DocumentEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGDocument.h"                // Document Class

#include "OSGDocumentEventBase.h"
#include "OSGDocumentEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DocumentEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Document *      DocumentEventBase::_sfDocument
    
*/

/*! \var Int32           DocumentEventBase::_sfOffset
    
*/

/*! \var UInt32          DocumentEventBase::_sfLength
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DocumentEvent *>::_type("DocumentEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DocumentEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DocumentEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DocumentEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DocumentEventBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecDocumentPtr::Description(
        SFUnrecDocumentPtr::getClassType(),
        "Document",
        "",
        DocumentFieldId, DocumentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DocumentEvent::editHandleDocument),
        static_cast<FieldGetMethodSig >(&DocumentEvent::getHandleDocument));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "Offset",
        "",
        OffsetFieldId, OffsetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DocumentEvent::editHandleOffset),
        static_cast<FieldGetMethodSig >(&DocumentEvent::getHandleOffset));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Length",
        "",
        LengthFieldId, LengthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DocumentEvent::editHandleLength),
        static_cast<FieldGetMethodSig >(&DocumentEvent::getHandleLength));

    oType.addInitialDesc(pDesc);
}


DocumentEventBase::TypeObject DocumentEventBase::_type(
    DocumentEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DocumentEventBase::createEmptyLocal),
    DocumentEvent::initMethod,
    DocumentEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DocumentEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DocumentEvent\"\n"
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
    "\t\tname=\"Document\"\n"
    "\t\ttype=\"Document\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Offset\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"-1\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Length\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DocumentEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &DocumentEventBase::getType(void) const
{
    return _type;
}

UInt32 DocumentEventBase::getContainerSize(void) const
{
    return sizeof(DocumentEvent);
}

/*------------------------- decorator get ------------------------------*/


//! Get the DocumentEvent::_sfDocument field.
const SFUnrecDocumentPtr *DocumentEventBase::getSFDocument(void) const
{
    return &_sfDocument;
}

SFUnrecDocumentPtr  *DocumentEventBase::editSFDocument       (void)
{
    editSField(DocumentFieldMask);

    return &_sfDocument;
}

SFInt32 *DocumentEventBase::editSFOffset(void)
{
    editSField(OffsetFieldMask);

    return &_sfOffset;
}

const SFInt32 *DocumentEventBase::getSFOffset(void) const
{
    return &_sfOffset;
}


SFUInt32 *DocumentEventBase::editSFLength(void)
{
    editSField(LengthFieldMask);

    return &_sfLength;
}

const SFUInt32 *DocumentEventBase::getSFLength(void) const
{
    return &_sfLength;
}






/*------------------------------ access -----------------------------------*/

UInt32 DocumentEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DocumentFieldMask & whichField))
    {
        returnValue += _sfDocument.getBinSize();
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        returnValue += _sfOffset.getBinSize();
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        returnValue += _sfLength.getBinSize();
    }

    return returnValue;
}

void DocumentEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DocumentFieldMask & whichField))
    {
        _sfDocument.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        _sfLength.copyToBin(pMem);
    }
}

void DocumentEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DocumentFieldMask & whichField))
    {
        _sfDocument.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        _sfLength.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DocumentEventTransitPtr DocumentEventBase::createLocal(BitVector bFlags)
{
    DocumentEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DocumentEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DocumentEventTransitPtr DocumentEventBase::createDependent(BitVector bFlags)
{
    DocumentEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DocumentEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DocumentEventTransitPtr DocumentEventBase::create(void)
{
    DocumentEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DocumentEvent>(tmpPtr);
    }

    return fc;
}

DocumentEvent *DocumentEventBase::createEmptyLocal(BitVector bFlags)
{
    DocumentEvent *returnValue;

    newPtr<DocumentEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DocumentEvent *DocumentEventBase::createEmpty(void)
{
    DocumentEvent *returnValue;

    newPtr<DocumentEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DocumentEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DocumentEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DocumentEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DocumentEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DocumentEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DocumentEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DocumentEventBase::shallowCopy(void) const
{
    DocumentEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DocumentEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DocumentEventBase::DocumentEventBase(void) :
    Inherited(),
    _sfDocument               (NULL),
    _sfOffset                 (Int32(-1)),
    _sfLength                 (UInt32(0))
{
}

DocumentEventBase::DocumentEventBase(const DocumentEventBase &source) :
    Inherited(source),
    _sfDocument               (NULL),
    _sfOffset                 (source._sfOffset                 ),
    _sfLength                 (source._sfLength                 )
{
}


/*-------------------------- destructors ----------------------------------*/

DocumentEventBase::~DocumentEventBase(void)
{
}

void DocumentEventBase::onCreate(const DocumentEvent *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DocumentEvent *pThis = static_cast<DocumentEvent *>(this);

        pThis->setDocument(source->getDocument());
    }
}

GetFieldHandlePtr DocumentEventBase::getHandleDocument        (void) const
{
    SFUnrecDocumentPtr::GetHandlePtr returnValue(
        new  SFUnrecDocumentPtr::GetHandle(
             &_sfDocument,
             this->getType().getFieldDesc(DocumentFieldId),
             const_cast<DocumentEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DocumentEventBase::editHandleDocument       (void)
{
    SFUnrecDocumentPtr::EditHandlePtr returnValue(
        new  SFUnrecDocumentPtr::EditHandle(
             &_sfDocument,
             this->getType().getFieldDesc(DocumentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DocumentEvent::setDocument,
                    static_cast<DocumentEvent *>(this), _1));

    editSField(DocumentFieldMask);

    return returnValue;
}

GetFieldHandlePtr DocumentEventBase::getHandleOffset          (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfOffset,
             this->getType().getFieldDesc(OffsetFieldId),
             const_cast<DocumentEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DocumentEventBase::editHandleOffset         (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfOffset,
             this->getType().getFieldDesc(OffsetFieldId),
             this));


    editSField(OffsetFieldMask);

    return returnValue;
}

GetFieldHandlePtr DocumentEventBase::getHandleLength          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfLength,
             this->getType().getFieldDesc(LengthFieldId),
             const_cast<DocumentEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DocumentEventBase::editHandleLength         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfLength,
             this->getType().getFieldDesc(LengthFieldId),
             this));


    editSField(LengthFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DocumentEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DocumentEvent *pThis = static_cast<DocumentEvent *>(this);

    pThis->execSync(static_cast<DocumentEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DocumentEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DocumentEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DocumentEvent *>(pRefAspect),
                  dynamic_cast<const DocumentEvent *>(this));

    return returnValue;
}
#endif

void DocumentEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DocumentEvent *>(this)->setDocument(NULL);


}


OSG_END_NAMESPACE
