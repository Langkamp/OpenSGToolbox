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
 **     class ParticleSystemEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGParticleSystemEventBase.h"
#include "OSGParticleSystemEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ParticleSystemEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ParticleSystemEvent *>::_type("ParticleSystemEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ParticleSystemEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ParticleSystemEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ParticleSystemEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ParticleSystemEventBase::classDescInserter(TypeObject &oType)
{
}


ParticleSystemEventBase::TypeObject ParticleSystemEventBase::_type(
    ParticleSystemEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ParticleSystemEventBase::createEmptyLocal),
    ParticleSystemEvent::initMethod,
    ParticleSystemEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ParticleSystemEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ParticleSystemEvent\"\n"
    "\tparent=\"Event\"\n"
    "    library=\"ContribParticleSystem\"\n"
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

FieldContainerType &ParticleSystemEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &ParticleSystemEventBase::getType(void) const
{
    return _type;
}

UInt32 ParticleSystemEventBase::getContainerSize(void) const
{
    return sizeof(ParticleSystemEvent);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 ParticleSystemEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void ParticleSystemEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void ParticleSystemEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
ParticleSystemEventTransitPtr ParticleSystemEventBase::createLocal(BitVector bFlags)
{
    ParticleSystemEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ParticleSystemEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ParticleSystemEventTransitPtr ParticleSystemEventBase::createDependent(BitVector bFlags)
{
    ParticleSystemEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ParticleSystemEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ParticleSystemEventTransitPtr ParticleSystemEventBase::create(void)
{
    ParticleSystemEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ParticleSystemEvent>(tmpPtr);
    }

    return fc;
}

ParticleSystemEvent *ParticleSystemEventBase::createEmptyLocal(BitVector bFlags)
{
    ParticleSystemEvent *returnValue;

    newPtr<ParticleSystemEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ParticleSystemEvent *ParticleSystemEventBase::createEmpty(void)
{
    ParticleSystemEvent *returnValue;

    newPtr<ParticleSystemEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ParticleSystemEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ParticleSystemEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleSystemEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleSystemEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ParticleSystemEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleSystemEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleSystemEventBase::shallowCopy(void) const
{
    ParticleSystemEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ParticleSystemEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ParticleSystemEventBase::ParticleSystemEventBase(void) :
    Inherited()
{
}

ParticleSystemEventBase::ParticleSystemEventBase(const ParticleSystemEventBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

ParticleSystemEventBase::~ParticleSystemEventBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void ParticleSystemEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ParticleSystemEvent *pThis = static_cast<ParticleSystemEvent *>(this);

    pThis->execSync(static_cast<ParticleSystemEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ParticleSystemEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ParticleSystemEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ParticleSystemEvent *>(pRefAspect),
                  dynamic_cast<const ParticleSystemEvent *>(this));

    return returnValue;
}
#endif

void ParticleSystemEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
