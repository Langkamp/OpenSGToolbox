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
 **     class UndoableEditEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGUndoableEditEventBase.h"
#include "OSGUndoableEditEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::UndoableEditEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<UndoableEditEvent *>::_type("UndoableEditEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(UndoableEditEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           UndoableEditEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           UndoableEditEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void UndoableEditEventBase::classDescInserter(TypeObject &oType)
{
}


UndoableEditEventBase::TypeObject UndoableEditEventBase::_type(
    UndoableEditEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&UndoableEditEventBase::createEmptyLocal),
    UndoableEditEvent::initMethod,
    UndoableEditEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&UndoableEditEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"UndoableEditEvent\"\n"
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
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &UndoableEditEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &UndoableEditEventBase::getType(void) const
{
    return _type;
}

UInt32 UndoableEditEventBase::getContainerSize(void) const
{
    return sizeof(UndoableEditEvent);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 UndoableEditEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void UndoableEditEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void UndoableEditEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
UndoableEditEventTransitPtr UndoableEditEventBase::createLocal(BitVector bFlags)
{
    UndoableEditEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<UndoableEditEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
UndoableEditEventTransitPtr UndoableEditEventBase::createDependent(BitVector bFlags)
{
    UndoableEditEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<UndoableEditEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
UndoableEditEventTransitPtr UndoableEditEventBase::create(void)
{
    UndoableEditEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<UndoableEditEvent>(tmpPtr);
    }

    return fc;
}

UndoableEditEvent *UndoableEditEventBase::createEmptyLocal(BitVector bFlags)
{
    UndoableEditEvent *returnValue;

    newPtr<UndoableEditEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
UndoableEditEvent *UndoableEditEventBase::createEmpty(void)
{
    UndoableEditEvent *returnValue;

    newPtr<UndoableEditEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr UndoableEditEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    UndoableEditEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const UndoableEditEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr UndoableEditEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    UndoableEditEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const UndoableEditEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr UndoableEditEventBase::shallowCopy(void) const
{
    UndoableEditEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const UndoableEditEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

UndoableEditEventBase::UndoableEditEventBase(void) :
    Inherited()
{
}

UndoableEditEventBase::UndoableEditEventBase(const UndoableEditEventBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

UndoableEditEventBase::~UndoableEditEventBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void UndoableEditEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    UndoableEditEvent *pThis = static_cast<UndoableEditEvent *>(this);

    pThis->execSync(static_cast<UndoableEditEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *UndoableEditEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    UndoableEditEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const UndoableEditEvent *>(pRefAspect),
                  dynamic_cast<const UndoableEditEvent *>(this));

    return returnValue;
}
#endif

void UndoableEditEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
