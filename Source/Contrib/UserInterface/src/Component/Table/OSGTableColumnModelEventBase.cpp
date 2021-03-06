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
 **     class TableColumnModelEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGTableColumnModelEventBase.h"
#include "OSGTableColumnModelEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TableColumnModelEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          TableColumnModelEventBase::_sfFromIndex
    
*/

/*! \var UInt32          TableColumnModelEventBase::_sfToIndex
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TableColumnModelEvent *>::_type("TableColumnModelEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TableColumnModelEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TableColumnModelEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TableColumnModelEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TableColumnModelEventBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "FromIndex",
        "",
        FromIndexFieldId, FromIndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumnModelEvent::editHandleFromIndex),
        static_cast<FieldGetMethodSig >(&TableColumnModelEvent::getHandleFromIndex));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "ToIndex",
        "",
        ToIndexFieldId, ToIndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumnModelEvent::editHandleToIndex),
        static_cast<FieldGetMethodSig >(&TableColumnModelEvent::getHandleToIndex));

    oType.addInitialDesc(pDesc);
}


TableColumnModelEventBase::TypeObject TableColumnModelEventBase::_type(
    TableColumnModelEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TableColumnModelEventBase::createEmptyLocal),
    TableColumnModelEvent::initMethod,
    TableColumnModelEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TableColumnModelEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TableColumnModelEvent\"\n"
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
    "\t\tname=\"FromIndex\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ToIndex\"\n"
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

FieldContainerType &TableColumnModelEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &TableColumnModelEventBase::getType(void) const
{
    return _type;
}

UInt32 TableColumnModelEventBase::getContainerSize(void) const
{
    return sizeof(TableColumnModelEvent);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *TableColumnModelEventBase::editSFFromIndex(void)
{
    editSField(FromIndexFieldMask);

    return &_sfFromIndex;
}

const SFUInt32 *TableColumnModelEventBase::getSFFromIndex(void) const
{
    return &_sfFromIndex;
}


SFUInt32 *TableColumnModelEventBase::editSFToIndex(void)
{
    editSField(ToIndexFieldMask);

    return &_sfToIndex;
}

const SFUInt32 *TableColumnModelEventBase::getSFToIndex(void) const
{
    return &_sfToIndex;
}






/*------------------------------ access -----------------------------------*/

UInt32 TableColumnModelEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FromIndexFieldMask & whichField))
    {
        returnValue += _sfFromIndex.getBinSize();
    }
    if(FieldBits::NoField != (ToIndexFieldMask & whichField))
    {
        returnValue += _sfToIndex.getBinSize();
    }

    return returnValue;
}

void TableColumnModelEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FromIndexFieldMask & whichField))
    {
        _sfFromIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ToIndexFieldMask & whichField))
    {
        _sfToIndex.copyToBin(pMem);
    }
}

void TableColumnModelEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FromIndexFieldMask & whichField))
    {
        _sfFromIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ToIndexFieldMask & whichField))
    {
        _sfToIndex.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TableColumnModelEventTransitPtr TableColumnModelEventBase::createLocal(BitVector bFlags)
{
    TableColumnModelEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TableColumnModelEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TableColumnModelEventTransitPtr TableColumnModelEventBase::createDependent(BitVector bFlags)
{
    TableColumnModelEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TableColumnModelEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TableColumnModelEventTransitPtr TableColumnModelEventBase::create(void)
{
    TableColumnModelEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TableColumnModelEvent>(tmpPtr);
    }

    return fc;
}

TableColumnModelEvent *TableColumnModelEventBase::createEmptyLocal(BitVector bFlags)
{
    TableColumnModelEvent *returnValue;

    newPtr<TableColumnModelEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TableColumnModelEvent *TableColumnModelEventBase::createEmpty(void)
{
    TableColumnModelEvent *returnValue;

    newPtr<TableColumnModelEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TableColumnModelEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TableColumnModelEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableColumnModelEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableColumnModelEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TableColumnModelEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableColumnModelEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableColumnModelEventBase::shallowCopy(void) const
{
    TableColumnModelEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TableColumnModelEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TableColumnModelEventBase::TableColumnModelEventBase(void) :
    Inherited(),
    _sfFromIndex              (UInt32(0)),
    _sfToIndex                (UInt32(0))
{
}

TableColumnModelEventBase::TableColumnModelEventBase(const TableColumnModelEventBase &source) :
    Inherited(source),
    _sfFromIndex              (source._sfFromIndex              ),
    _sfToIndex                (source._sfToIndex                )
{
}


/*-------------------------- destructors ----------------------------------*/

TableColumnModelEventBase::~TableColumnModelEventBase(void)
{
}


GetFieldHandlePtr TableColumnModelEventBase::getHandleFromIndex       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFromIndex,
             this->getType().getFieldDesc(FromIndexFieldId),
             const_cast<TableColumnModelEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnModelEventBase::editHandleFromIndex      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFromIndex,
             this->getType().getFieldDesc(FromIndexFieldId),
             this));


    editSField(FromIndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableColumnModelEventBase::getHandleToIndex         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfToIndex,
             this->getType().getFieldDesc(ToIndexFieldId),
             const_cast<TableColumnModelEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnModelEventBase::editHandleToIndex        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfToIndex,
             this->getType().getFieldDesc(ToIndexFieldId),
             this));


    editSField(ToIndexFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TableColumnModelEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TableColumnModelEvent *pThis = static_cast<TableColumnModelEvent *>(this);

    pThis->execSync(static_cast<TableColumnModelEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TableColumnModelEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TableColumnModelEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TableColumnModelEvent *>(pRefAspect),
                  dynamic_cast<const TableColumnModelEvent *>(this));

    return returnValue;
}
#endif

void TableColumnModelEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
