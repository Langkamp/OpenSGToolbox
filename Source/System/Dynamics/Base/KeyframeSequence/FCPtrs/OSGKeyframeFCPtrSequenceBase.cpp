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
 **     class KeyframeFCPtrSequence!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGKeyframeFCPtrSequenceBase.h"
#include "OSGKeyframeFCPtrSequence.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::KeyframeFCPtrSequence
    KeyframeSequence is the base class of all Point Keyframe Sequences.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<KeyframeFCPtrSequence *>::_type("KeyframeFCPtrSequencePtr", "KeyframeSequencePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(KeyframeFCPtrSequence *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           KeyframeFCPtrSequence *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           KeyframeFCPtrSequence *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void KeyframeFCPtrSequenceBase::classDescInserter(TypeObject &oType)
{
}


KeyframeFCPtrSequenceBase::TypeObject KeyframeFCPtrSequenceBase::_type(
    KeyframeFCPtrSequenceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    KeyframeFCPtrSequence::initMethod,
    KeyframeFCPtrSequence::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&KeyframeFCPtrSequence::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"KeyframeFCPtrSequence\"\n"
    "\tparent=\"KeyframeSequence\"\n"
    "    library=\"TBAnimation\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "KeyframeSequence is the base class of all Point Keyframe Sequences.\n"
    "</FieldContainer>\n",
    "KeyframeSequence is the base class of all Point Keyframe Sequences.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeFCPtrSequenceBase::getType(void)
{
    return _type;
}

const FieldContainerType &KeyframeFCPtrSequenceBase::getType(void) const
{
    return _type;
}

UInt32 KeyframeFCPtrSequenceBase::getContainerSize(void) const
{
    return sizeof(KeyframeFCPtrSequence);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 KeyframeFCPtrSequenceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void KeyframeFCPtrSequenceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void KeyframeFCPtrSequenceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

KeyframeFCPtrSequenceBase::KeyframeFCPtrSequenceBase(void) :
    Inherited()
{
}

KeyframeFCPtrSequenceBase::KeyframeFCPtrSequenceBase(const KeyframeFCPtrSequenceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

KeyframeFCPtrSequenceBase::~KeyframeFCPtrSequenceBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void KeyframeFCPtrSequenceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    KeyframeFCPtrSequence *pThis = static_cast<KeyframeFCPtrSequence *>(this);

    pThis->execSync(static_cast<KeyframeFCPtrSequence *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void KeyframeFCPtrSequenceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
