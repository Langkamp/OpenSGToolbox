/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsHashSpace!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGPhysicsHashSpaceBase.h"
#include "OSGPhysicsHashSpace.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PhysicsHashSpace
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec2f           PhysicsHashSpaceBase::_sfLevels
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PhysicsHashSpace *>::_type("PhysicsHashSpacePtr", "PhysicsSpacePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PhysicsHashSpace *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PhysicsHashSpace *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PhysicsHashSpace *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PhysicsHashSpaceBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "levels",
        "",
        LevelsFieldId, LevelsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsHashSpace::editHandleLevels),
        static_cast<FieldGetMethodSig >(&PhysicsHashSpace::getHandleLevels));

    oType.addInitialDesc(pDesc);

}


PhysicsHashSpaceBase::TypeObject PhysicsHashSpaceBase::_type(
    PhysicsHashSpaceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PhysicsHashSpaceBase::createEmptyLocal),
    PhysicsHashSpace::initMethod,
    PhysicsHashSpace::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PhysicsHashSpace::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PhysicsHashSpace\"\n"
    "\tparent=\"PhysicsSpace\"\n"
    "    library=\"ContribPhysics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com),  Behboud Kalantary         \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"levels\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsHashSpaceBase::getType(void)
{
    return _type;
}

const FieldContainerType &PhysicsHashSpaceBase::getType(void) const
{
    return _type;
}

UInt32 PhysicsHashSpaceBase::getContainerSize(void) const
{
    return sizeof(PhysicsHashSpace);
}

/*------------------------- decorator get ------------------------------*/


SFVec2f *PhysicsHashSpaceBase::editSFLevels(void)
{
    editSField(LevelsFieldMask);

    return &_sfLevels;
}

const SFVec2f *PhysicsHashSpaceBase::getSFLevels(void) const
{
    return &_sfLevels;
}






/*------------------------------ access -----------------------------------*/

UInt32 PhysicsHashSpaceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LevelsFieldMask & whichField))
    {
        returnValue += _sfLevels.getBinSize();
    }

    return returnValue;
}

void PhysicsHashSpaceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LevelsFieldMask & whichField))
    {
        _sfLevels.copyToBin(pMem);
    }
}

void PhysicsHashSpaceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LevelsFieldMask & whichField))
    {
        _sfLevels.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PhysicsHashSpaceTransitPtr PhysicsHashSpaceBase::createLocal(BitVector bFlags)
{
    PhysicsHashSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PhysicsHashSpace>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PhysicsHashSpaceTransitPtr PhysicsHashSpaceBase::createDependent(BitVector bFlags)
{
    PhysicsHashSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PhysicsHashSpace>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PhysicsHashSpaceTransitPtr PhysicsHashSpaceBase::create(void)
{
    PhysicsHashSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PhysicsHashSpace>(tmpPtr);
    }

    return fc;
}

PhysicsHashSpace *PhysicsHashSpaceBase::createEmptyLocal(BitVector bFlags)
{
    PhysicsHashSpace *returnValue;

    newPtr<PhysicsHashSpace>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PhysicsHashSpace *PhysicsHashSpaceBase::createEmpty(void)
{
    PhysicsHashSpace *returnValue;

    newPtr<PhysicsHashSpace>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PhysicsHashSpaceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PhysicsHashSpace *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsHashSpace *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsHashSpaceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PhysicsHashSpace *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsHashSpace *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsHashSpaceBase::shallowCopy(void) const
{
    PhysicsHashSpace *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PhysicsHashSpace *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PhysicsHashSpaceBase::PhysicsHashSpaceBase(void) :
    Inherited(),
    _sfLevels                 ()
{
}

PhysicsHashSpaceBase::PhysicsHashSpaceBase(const PhysicsHashSpaceBase &source) :
    Inherited(source),
    _sfLevels                 (source._sfLevels                 )
{
}


/*-------------------------- destructors ----------------------------------*/

PhysicsHashSpaceBase::~PhysicsHashSpaceBase(void)
{
}


GetFieldHandlePtr PhysicsHashSpaceBase::getHandleLevels          (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfLevels,
             this->getType().getFieldDesc(LevelsFieldId),
             const_cast<PhysicsHashSpaceBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsHashSpaceBase::editHandleLevels         (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfLevels,
             this->getType().getFieldDesc(LevelsFieldId),
             this));


    editSField(LevelsFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PhysicsHashSpaceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PhysicsHashSpace *pThis = static_cast<PhysicsHashSpace *>(this);

    pThis->execSync(static_cast<PhysicsHashSpace *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PhysicsHashSpaceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PhysicsHashSpace *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PhysicsHashSpace *>(pRefAspect),
                  dynamic_cast<const PhysicsHashSpace *>(this));

    return returnValue;
}
#endif

void PhysicsHashSpaceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE