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
 **     class EmptyLayer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGEmptyLayerBase.h"
#include "OSGEmptyLayer.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::EmptyLayer
    UI Empty Background.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<EmptyLayer *>::_type("EmptyLayerPtr", "LayerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(EmptyLayer *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           EmptyLayer *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           EmptyLayer *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void EmptyLayerBase::classDescInserter(TypeObject &oType)
{
}


EmptyLayerBase::TypeObject EmptyLayerBase::_type(
    EmptyLayerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&EmptyLayerBase::createEmptyLocal),
    EmptyLayer::initMethod,
    EmptyLayer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&EmptyLayer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"EmptyLayer\"\n"
    "\tparent=\"Layer\"\n"
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
    "UI Empty Background.\n"
    "</FieldContainer>\n",
    "UI Empty Background.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &EmptyLayerBase::getType(void)
{
    return _type;
}

const FieldContainerType &EmptyLayerBase::getType(void) const
{
    return _type;
}

UInt32 EmptyLayerBase::getContainerSize(void) const
{
    return sizeof(EmptyLayer);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 EmptyLayerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void EmptyLayerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void EmptyLayerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
EmptyLayerTransitPtr EmptyLayerBase::createLocal(BitVector bFlags)
{
    EmptyLayerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<EmptyLayer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
EmptyLayerTransitPtr EmptyLayerBase::createDependent(BitVector bFlags)
{
    EmptyLayerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<EmptyLayer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
EmptyLayerTransitPtr EmptyLayerBase::create(void)
{
    EmptyLayerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<EmptyLayer>(tmpPtr);
    }

    return fc;
}

EmptyLayer *EmptyLayerBase::createEmptyLocal(BitVector bFlags)
{
    EmptyLayer *returnValue;

    newPtr<EmptyLayer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
EmptyLayer *EmptyLayerBase::createEmpty(void)
{
    EmptyLayer *returnValue;

    newPtr<EmptyLayer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr EmptyLayerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    EmptyLayer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const EmptyLayer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr EmptyLayerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    EmptyLayer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const EmptyLayer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr EmptyLayerBase::shallowCopy(void) const
{
    EmptyLayer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const EmptyLayer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

EmptyLayerBase::EmptyLayerBase(void) :
    Inherited()
{
}

EmptyLayerBase::EmptyLayerBase(const EmptyLayerBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

EmptyLayerBase::~EmptyLayerBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void EmptyLayerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    EmptyLayer *pThis = static_cast<EmptyLayer *>(this);

    pThis->execSync(static_cast<EmptyLayer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *EmptyLayerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    EmptyLayer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const EmptyLayer *>(pRefAspect),
                  dynamic_cast<const EmptyLayer *>(this));

    return returnValue;
}
#endif

void EmptyLayerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
