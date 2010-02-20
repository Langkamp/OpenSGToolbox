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
 **     class ParticleDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGParticleSystem.h"          // System Class

#include "OSGParticleDistribution3DBase.h"
#include "OSGParticleDistribution3D.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ParticleDistribution3D
    An BoxDistribution3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ParticleSystem * ParticleDistribution3DBase::_sfSystem
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ParticleDistribution3D *>::_type("ParticleDistribution3DPtr", "Distribution3DPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ParticleDistribution3D *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ParticleDistribution3D *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ParticleDistribution3D *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ParticleDistribution3DBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecParticleSystemPtr::Description(
        SFUnrecParticleSystemPtr::getClassType(),
        "System",
        "",
        SystemFieldId, SystemFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleDistribution3D::editHandleSystem),
        static_cast<FieldGetMethodSig >(&ParticleDistribution3D::getHandleSystem));

    oType.addInitialDesc(pDesc);

}


ParticleDistribution3DBase::TypeObject ParticleDistribution3DBase::_type(
    ParticleDistribution3DBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ParticleDistribution3DBase::createEmptyLocal),
    ParticleDistribution3D::initMethod,
    ParticleDistribution3D::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ParticleDistribution3D::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ParticleDistribution3D\"\n"
    "\tparent=\"Distribution3D\"\n"
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
    "An BoxDistribution3D.\n"
    "\t<Field\n"
    "\t\tname=\"System\"\n"
    "\t\ttype=\"ParticleSystem\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "An BoxDistribution3D.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &ParticleDistribution3DBase::getType(void)
{
    return _type;
}

const FieldContainerType &ParticleDistribution3DBase::getType(void) const
{
    return _type;
}

UInt32 ParticleDistribution3DBase::getContainerSize(void) const
{
    return sizeof(ParticleDistribution3D);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ParticleDistribution3D::_sfSystem field.
const SFUnrecParticleSystemPtr *ParticleDistribution3DBase::getSFSystem(void) const
{
    return &_sfSystem;
}

SFUnrecParticleSystemPtr *ParticleDistribution3DBase::editSFSystem         (void)
{
    editSField(SystemFieldMask);

    return &_sfSystem;
}





/*------------------------------ access -----------------------------------*/

UInt32 ParticleDistribution3DBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SystemFieldMask & whichField))
    {
        returnValue += _sfSystem.getBinSize();
    }

    return returnValue;
}

void ParticleDistribution3DBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SystemFieldMask & whichField))
    {
        _sfSystem.copyToBin(pMem);
    }
}

void ParticleDistribution3DBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SystemFieldMask & whichField))
    {
        _sfSystem.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ParticleDistribution3DTransitPtr ParticleDistribution3DBase::createLocal(BitVector bFlags)
{
    ParticleDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ParticleDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ParticleDistribution3DTransitPtr ParticleDistribution3DBase::createDependent(BitVector bFlags)
{
    ParticleDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ParticleDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ParticleDistribution3DTransitPtr ParticleDistribution3DBase::create(void)
{
    ParticleDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ParticleDistribution3D>(tmpPtr);
    }

    return fc;
}

ParticleDistribution3D *ParticleDistribution3DBase::createEmptyLocal(BitVector bFlags)
{
    ParticleDistribution3D *returnValue;

    newPtr<ParticleDistribution3D>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ParticleDistribution3D *ParticleDistribution3DBase::createEmpty(void)
{
    ParticleDistribution3D *returnValue;

    newPtr<ParticleDistribution3D>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ParticleDistribution3DBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ParticleDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleDistribution3D *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleDistribution3DBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ParticleDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleDistribution3D *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleDistribution3DBase::shallowCopy(void) const
{
    ParticleDistribution3D *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ParticleDistribution3D *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ParticleDistribution3DBase::ParticleDistribution3DBase(void) :
    Inherited(),
    _sfSystem                 (NULL)
{
}

ParticleDistribution3DBase::ParticleDistribution3DBase(const ParticleDistribution3DBase &source) :
    Inherited(source),
    _sfSystem                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

ParticleDistribution3DBase::~ParticleDistribution3DBase(void)
{
}

void ParticleDistribution3DBase::onCreate(const ParticleDistribution3D *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ParticleDistribution3D *pThis = static_cast<ParticleDistribution3D *>(this);

        pThis->setSystem(source->getSystem());
    }
}

GetFieldHandlePtr ParticleDistribution3DBase::getHandleSystem          (void) const
{
    SFUnrecParticleSystemPtr::GetHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::GetHandle(
             &_sfSystem,
             this->getType().getFieldDesc(SystemFieldId),
             const_cast<ParticleDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleDistribution3DBase::editHandleSystem         (void)
{
    SFUnrecParticleSystemPtr::EditHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::EditHandle(
             &_sfSystem,
             this->getType().getFieldDesc(SystemFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ParticleDistribution3D::setSystem,
                    static_cast<ParticleDistribution3D *>(this), _1));

    editSField(SystemFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ParticleDistribution3DBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ParticleDistribution3D *pThis = static_cast<ParticleDistribution3D *>(this);

    pThis->execSync(static_cast<ParticleDistribution3D *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ParticleDistribution3DBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ParticleDistribution3D *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ParticleDistribution3D *>(pRefAspect),
                  dynamic_cast<const ParticleDistribution3D *>(this));

    return returnValue;
}
#endif

void ParticleDistribution3DBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ParticleDistribution3D *>(this)->setSystem(NULL);


}


OSG_END_NAMESPACE