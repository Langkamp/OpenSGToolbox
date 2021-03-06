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
 **     class PhysicsQuadTreeSpace!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGPhysicsQuadTreeSpaceBase.h"
#include "OSGPhysicsQuadTreeSpace.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PhysicsQuadTreeSpace
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           PhysicsQuadTreeSpaceBase::_sfCenter
    
*/

/*! \var Vec3f           PhysicsQuadTreeSpaceBase::_sfExtent
    
*/

/*! \var Int32           PhysicsQuadTreeSpaceBase::_sfDepth
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PhysicsQuadTreeSpace *>::_type("PhysicsQuadTreeSpacePtr", "PhysicsSpacePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PhysicsQuadTreeSpace *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PhysicsQuadTreeSpace *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PhysicsQuadTreeSpace *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PhysicsQuadTreeSpaceBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "center",
        "",
        CenterFieldId, CenterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsQuadTreeSpace::editHandleCenter),
        static_cast<FieldGetMethodSig >(&PhysicsQuadTreeSpace::getHandleCenter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "extent",
        "",
        ExtentFieldId, ExtentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsQuadTreeSpace::editHandleExtent),
        static_cast<FieldGetMethodSig >(&PhysicsQuadTreeSpace::getHandleExtent));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "depth",
        "",
        DepthFieldId, DepthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsQuadTreeSpace::editHandleDepth),
        static_cast<FieldGetMethodSig >(&PhysicsQuadTreeSpace::getHandleDepth));

    oType.addInitialDesc(pDesc);
}


PhysicsQuadTreeSpaceBase::TypeObject PhysicsQuadTreeSpaceBase::_type(
    PhysicsQuadTreeSpaceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PhysicsQuadTreeSpaceBase::createEmptyLocal),
    PhysicsQuadTreeSpace::initMethod,
    PhysicsQuadTreeSpace::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PhysicsQuadTreeSpace::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PhysicsQuadTreeSpace\"\n"
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
    "\t\tname=\"center\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"extent\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"depth\"\n"
    "\t\ttype=\"Int32\"\n"
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

FieldContainerType &PhysicsQuadTreeSpaceBase::getType(void)
{
    return _type;
}

const FieldContainerType &PhysicsQuadTreeSpaceBase::getType(void) const
{
    return _type;
}

UInt32 PhysicsQuadTreeSpaceBase::getContainerSize(void) const
{
    return sizeof(PhysicsQuadTreeSpace);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *PhysicsQuadTreeSpaceBase::editSFCenter(void)
{
    editSField(CenterFieldMask);

    return &_sfCenter;
}

const SFPnt3f *PhysicsQuadTreeSpaceBase::getSFCenter(void) const
{
    return &_sfCenter;
}


SFVec3f *PhysicsQuadTreeSpaceBase::editSFExtent(void)
{
    editSField(ExtentFieldMask);

    return &_sfExtent;
}

const SFVec3f *PhysicsQuadTreeSpaceBase::getSFExtent(void) const
{
    return &_sfExtent;
}


SFInt32 *PhysicsQuadTreeSpaceBase::editSFDepth(void)
{
    editSField(DepthFieldMask);

    return &_sfDepth;
}

const SFInt32 *PhysicsQuadTreeSpaceBase::getSFDepth(void) const
{
    return &_sfDepth;
}






/*------------------------------ access -----------------------------------*/

UInt32 PhysicsQuadTreeSpaceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        returnValue += _sfCenter.getBinSize();
    }
    if(FieldBits::NoField != (ExtentFieldMask & whichField))
    {
        returnValue += _sfExtent.getBinSize();
    }
    if(FieldBits::NoField != (DepthFieldMask & whichField))
    {
        returnValue += _sfDepth.getBinSize();
    }

    return returnValue;
}

void PhysicsQuadTreeSpaceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ExtentFieldMask & whichField))
    {
        _sfExtent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DepthFieldMask & whichField))
    {
        _sfDepth.copyToBin(pMem);
    }
}

void PhysicsQuadTreeSpaceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ExtentFieldMask & whichField))
    {
        _sfExtent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DepthFieldMask & whichField))
    {
        _sfDepth.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PhysicsQuadTreeSpaceTransitPtr PhysicsQuadTreeSpaceBase::createLocal(BitVector bFlags)
{
    PhysicsQuadTreeSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PhysicsQuadTreeSpace>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PhysicsQuadTreeSpaceTransitPtr PhysicsQuadTreeSpaceBase::createDependent(BitVector bFlags)
{
    PhysicsQuadTreeSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PhysicsQuadTreeSpace>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PhysicsQuadTreeSpaceTransitPtr PhysicsQuadTreeSpaceBase::create(void)
{
    PhysicsQuadTreeSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PhysicsQuadTreeSpace>(tmpPtr);
    }

    return fc;
}

PhysicsQuadTreeSpace *PhysicsQuadTreeSpaceBase::createEmptyLocal(BitVector bFlags)
{
    PhysicsQuadTreeSpace *returnValue;

    newPtr<PhysicsQuadTreeSpace>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PhysicsQuadTreeSpace *PhysicsQuadTreeSpaceBase::createEmpty(void)
{
    PhysicsQuadTreeSpace *returnValue;

    newPtr<PhysicsQuadTreeSpace>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PhysicsQuadTreeSpaceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PhysicsQuadTreeSpace *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsQuadTreeSpace *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsQuadTreeSpaceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PhysicsQuadTreeSpace *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsQuadTreeSpace *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsQuadTreeSpaceBase::shallowCopy(void) const
{
    PhysicsQuadTreeSpace *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PhysicsQuadTreeSpace *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PhysicsQuadTreeSpaceBase::PhysicsQuadTreeSpaceBase(void) :
    Inherited(),
    _sfCenter                 (),
    _sfExtent                 (),
    _sfDepth                  ()
{
}

PhysicsQuadTreeSpaceBase::PhysicsQuadTreeSpaceBase(const PhysicsQuadTreeSpaceBase &source) :
    Inherited(source),
    _sfCenter                 (source._sfCenter                 ),
    _sfExtent                 (source._sfExtent                 ),
    _sfDepth                  (source._sfDepth                  )
{
}


/*-------------------------- destructors ----------------------------------*/

PhysicsQuadTreeSpaceBase::~PhysicsQuadTreeSpaceBase(void)
{
}


GetFieldHandlePtr PhysicsQuadTreeSpaceBase::getHandleCenter          (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfCenter,
             this->getType().getFieldDesc(CenterFieldId),
             const_cast<PhysicsQuadTreeSpaceBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsQuadTreeSpaceBase::editHandleCenter         (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfCenter,
             this->getType().getFieldDesc(CenterFieldId),
             this));


    editSField(CenterFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsQuadTreeSpaceBase::getHandleExtent          (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfExtent,
             this->getType().getFieldDesc(ExtentFieldId),
             const_cast<PhysicsQuadTreeSpaceBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsQuadTreeSpaceBase::editHandleExtent         (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfExtent,
             this->getType().getFieldDesc(ExtentFieldId),
             this));


    editSField(ExtentFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsQuadTreeSpaceBase::getHandleDepth           (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfDepth,
             this->getType().getFieldDesc(DepthFieldId),
             const_cast<PhysicsQuadTreeSpaceBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsQuadTreeSpaceBase::editHandleDepth          (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfDepth,
             this->getType().getFieldDesc(DepthFieldId),
             this));


    editSField(DepthFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PhysicsQuadTreeSpaceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PhysicsQuadTreeSpace *pThis = static_cast<PhysicsQuadTreeSpace *>(this);

    pThis->execSync(static_cast<PhysicsQuadTreeSpace *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PhysicsQuadTreeSpaceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PhysicsQuadTreeSpace *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PhysicsQuadTreeSpace *>(pRefAspect),
                  dynamic_cast<const PhysicsQuadTreeSpace *>(this));

    return returnValue;
}
#endif

void PhysicsQuadTreeSpaceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
