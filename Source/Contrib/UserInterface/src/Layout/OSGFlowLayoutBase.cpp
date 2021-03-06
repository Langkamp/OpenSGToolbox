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
 **     class FlowLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGFlowLayoutBase.h"
#include "OSGFlowLayout.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FlowLayout
    A UI FlowLayout.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          FlowLayoutBase::_sfOrientation
    
*/

/*! \var Real32          FlowLayoutBase::_sfHorizontalGap
    
*/

/*! \var Real32          FlowLayoutBase::_sfVerticalGap
    
*/

/*! \var Real32          FlowLayoutBase::_sfMajorAxisAlignment
    
*/

/*! \var Real32          FlowLayoutBase::_sfMinorAxisAlignment
    
*/

/*! \var Real32          FlowLayoutBase::_sfComponentAlignment
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FlowLayout *>::_type("FlowLayoutPtr", "LayoutPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FlowLayout *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FlowLayout *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FlowLayout *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FlowLayoutBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Orientation",
        "",
        OrientationFieldId, OrientationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FlowLayout::editHandleOrientation),
        static_cast<FieldGetMethodSig >(&FlowLayout::getHandleOrientation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "HorizontalGap",
        "",
        HorizontalGapFieldId, HorizontalGapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FlowLayout::editHandleHorizontalGap),
        static_cast<FieldGetMethodSig >(&FlowLayout::getHandleHorizontalGap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "VerticalGap",
        "",
        VerticalGapFieldId, VerticalGapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FlowLayout::editHandleVerticalGap),
        static_cast<FieldGetMethodSig >(&FlowLayout::getHandleVerticalGap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "MajorAxisAlignment",
        "",
        MajorAxisAlignmentFieldId, MajorAxisAlignmentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FlowLayout::editHandleMajorAxisAlignment),
        static_cast<FieldGetMethodSig >(&FlowLayout::getHandleMajorAxisAlignment));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "MinorAxisAlignment",
        "",
        MinorAxisAlignmentFieldId, MinorAxisAlignmentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FlowLayout::editHandleMinorAxisAlignment),
        static_cast<FieldGetMethodSig >(&FlowLayout::getHandleMinorAxisAlignment));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "ComponentAlignment",
        "",
        ComponentAlignmentFieldId, ComponentAlignmentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FlowLayout::editHandleComponentAlignment),
        static_cast<FieldGetMethodSig >(&FlowLayout::getHandleComponentAlignment));

    oType.addInitialDesc(pDesc);
}


FlowLayoutBase::TypeObject FlowLayoutBase::_type(
    FlowLayoutBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FlowLayoutBase::createEmptyLocal),
    FlowLayout::initMethod,
    FlowLayout::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FlowLayout::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FlowLayout\"\n"
    "\tparent=\"Layout\"\n"
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
    "A UI FlowLayout.\n"
    "\t<Field\n"
    "\t\tname=\"Orientation\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"FlowLayout::HORIZONTAL_ORIENTATION\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"HorizontalGap\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"10\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"VerticalGap\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"10\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MajorAxisAlignment\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.5f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MinorAxisAlignment\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.5f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ComponentAlignment\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.5f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI FlowLayout.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FlowLayoutBase::getType(void)
{
    return _type;
}

const FieldContainerType &FlowLayoutBase::getType(void) const
{
    return _type;
}

UInt32 FlowLayoutBase::getContainerSize(void) const
{
    return sizeof(FlowLayout);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *FlowLayoutBase::editSFOrientation(void)
{
    editSField(OrientationFieldMask);

    return &_sfOrientation;
}

const SFUInt32 *FlowLayoutBase::getSFOrientation(void) const
{
    return &_sfOrientation;
}


SFReal32 *FlowLayoutBase::editSFHorizontalGap(void)
{
    editSField(HorizontalGapFieldMask);

    return &_sfHorizontalGap;
}

const SFReal32 *FlowLayoutBase::getSFHorizontalGap(void) const
{
    return &_sfHorizontalGap;
}


SFReal32 *FlowLayoutBase::editSFVerticalGap(void)
{
    editSField(VerticalGapFieldMask);

    return &_sfVerticalGap;
}

const SFReal32 *FlowLayoutBase::getSFVerticalGap(void) const
{
    return &_sfVerticalGap;
}


SFReal32 *FlowLayoutBase::editSFMajorAxisAlignment(void)
{
    editSField(MajorAxisAlignmentFieldMask);

    return &_sfMajorAxisAlignment;
}

const SFReal32 *FlowLayoutBase::getSFMajorAxisAlignment(void) const
{
    return &_sfMajorAxisAlignment;
}


SFReal32 *FlowLayoutBase::editSFMinorAxisAlignment(void)
{
    editSField(MinorAxisAlignmentFieldMask);

    return &_sfMinorAxisAlignment;
}

const SFReal32 *FlowLayoutBase::getSFMinorAxisAlignment(void) const
{
    return &_sfMinorAxisAlignment;
}


SFReal32 *FlowLayoutBase::editSFComponentAlignment(void)
{
    editSField(ComponentAlignmentFieldMask);

    return &_sfComponentAlignment;
}

const SFReal32 *FlowLayoutBase::getSFComponentAlignment(void) const
{
    return &_sfComponentAlignment;
}






/*------------------------------ access -----------------------------------*/

UInt32 FlowLayoutBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        returnValue += _sfOrientation.getBinSize();
    }
    if(FieldBits::NoField != (HorizontalGapFieldMask & whichField))
    {
        returnValue += _sfHorizontalGap.getBinSize();
    }
    if(FieldBits::NoField != (VerticalGapFieldMask & whichField))
    {
        returnValue += _sfVerticalGap.getBinSize();
    }
    if(FieldBits::NoField != (MajorAxisAlignmentFieldMask & whichField))
    {
        returnValue += _sfMajorAxisAlignment.getBinSize();
    }
    if(FieldBits::NoField != (MinorAxisAlignmentFieldMask & whichField))
    {
        returnValue += _sfMinorAxisAlignment.getBinSize();
    }
    if(FieldBits::NoField != (ComponentAlignmentFieldMask & whichField))
    {
        returnValue += _sfComponentAlignment.getBinSize();
    }

    return returnValue;
}

void FlowLayoutBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        _sfOrientation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HorizontalGapFieldMask & whichField))
    {
        _sfHorizontalGap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VerticalGapFieldMask & whichField))
    {
        _sfVerticalGap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MajorAxisAlignmentFieldMask & whichField))
    {
        _sfMajorAxisAlignment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinorAxisAlignmentFieldMask & whichField))
    {
        _sfMinorAxisAlignment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ComponentAlignmentFieldMask & whichField))
    {
        _sfComponentAlignment.copyToBin(pMem);
    }
}

void FlowLayoutBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        _sfOrientation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HorizontalGapFieldMask & whichField))
    {
        _sfHorizontalGap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VerticalGapFieldMask & whichField))
    {
        _sfVerticalGap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MajorAxisAlignmentFieldMask & whichField))
    {
        _sfMajorAxisAlignment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinorAxisAlignmentFieldMask & whichField))
    {
        _sfMinorAxisAlignment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ComponentAlignmentFieldMask & whichField))
    {
        _sfComponentAlignment.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FlowLayoutTransitPtr FlowLayoutBase::createLocal(BitVector bFlags)
{
    FlowLayoutTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FlowLayout>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FlowLayoutTransitPtr FlowLayoutBase::createDependent(BitVector bFlags)
{
    FlowLayoutTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FlowLayout>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FlowLayoutTransitPtr FlowLayoutBase::create(void)
{
    FlowLayoutTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FlowLayout>(tmpPtr);
    }

    return fc;
}

FlowLayout *FlowLayoutBase::createEmptyLocal(BitVector bFlags)
{
    FlowLayout *returnValue;

    newPtr<FlowLayout>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FlowLayout *FlowLayoutBase::createEmpty(void)
{
    FlowLayout *returnValue;

    newPtr<FlowLayout>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FlowLayoutBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FlowLayout *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FlowLayout *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FlowLayoutBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FlowLayout *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FlowLayout *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FlowLayoutBase::shallowCopy(void) const
{
    FlowLayout *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FlowLayout *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FlowLayoutBase::FlowLayoutBase(void) :
    Inherited(),
    _sfOrientation            (UInt32(FlowLayout::HORIZONTAL_ORIENTATION)),
    _sfHorizontalGap          (Real32(10)),
    _sfVerticalGap            (Real32(10)),
    _sfMajorAxisAlignment     (Real32(0.5f)),
    _sfMinorAxisAlignment     (Real32(0.5f)),
    _sfComponentAlignment     (Real32(0.5f))
{
}

FlowLayoutBase::FlowLayoutBase(const FlowLayoutBase &source) :
    Inherited(source),
    _sfOrientation            (source._sfOrientation            ),
    _sfHorizontalGap          (source._sfHorizontalGap          ),
    _sfVerticalGap            (source._sfVerticalGap            ),
    _sfMajorAxisAlignment     (source._sfMajorAxisAlignment     ),
    _sfMinorAxisAlignment     (source._sfMinorAxisAlignment     ),
    _sfComponentAlignment     (source._sfComponentAlignment     )
{
}


/*-------------------------- destructors ----------------------------------*/

FlowLayoutBase::~FlowLayoutBase(void)
{
}


GetFieldHandlePtr FlowLayoutBase::getHandleOrientation     (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfOrientation,
             this->getType().getFieldDesc(OrientationFieldId),
             const_cast<FlowLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FlowLayoutBase::editHandleOrientation    (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfOrientation,
             this->getType().getFieldDesc(OrientationFieldId),
             this));


    editSField(OrientationFieldMask);

    return returnValue;
}

GetFieldHandlePtr FlowLayoutBase::getHandleHorizontalGap   (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfHorizontalGap,
             this->getType().getFieldDesc(HorizontalGapFieldId),
             const_cast<FlowLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FlowLayoutBase::editHandleHorizontalGap  (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfHorizontalGap,
             this->getType().getFieldDesc(HorizontalGapFieldId),
             this));


    editSField(HorizontalGapFieldMask);

    return returnValue;
}

GetFieldHandlePtr FlowLayoutBase::getHandleVerticalGap     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfVerticalGap,
             this->getType().getFieldDesc(VerticalGapFieldId),
             const_cast<FlowLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FlowLayoutBase::editHandleVerticalGap    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfVerticalGap,
             this->getType().getFieldDesc(VerticalGapFieldId),
             this));


    editSField(VerticalGapFieldMask);

    return returnValue;
}

GetFieldHandlePtr FlowLayoutBase::getHandleMajorAxisAlignment (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMajorAxisAlignment,
             this->getType().getFieldDesc(MajorAxisAlignmentFieldId),
             const_cast<FlowLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FlowLayoutBase::editHandleMajorAxisAlignment(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMajorAxisAlignment,
             this->getType().getFieldDesc(MajorAxisAlignmentFieldId),
             this));


    editSField(MajorAxisAlignmentFieldMask);

    return returnValue;
}

GetFieldHandlePtr FlowLayoutBase::getHandleMinorAxisAlignment (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMinorAxisAlignment,
             this->getType().getFieldDesc(MinorAxisAlignmentFieldId),
             const_cast<FlowLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FlowLayoutBase::editHandleMinorAxisAlignment(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMinorAxisAlignment,
             this->getType().getFieldDesc(MinorAxisAlignmentFieldId),
             this));


    editSField(MinorAxisAlignmentFieldMask);

    return returnValue;
}

GetFieldHandlePtr FlowLayoutBase::getHandleComponentAlignment (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfComponentAlignment,
             this->getType().getFieldDesc(ComponentAlignmentFieldId),
             const_cast<FlowLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FlowLayoutBase::editHandleComponentAlignment(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfComponentAlignment,
             this->getType().getFieldDesc(ComponentAlignmentFieldId),
             this));


    editSField(ComponentAlignmentFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FlowLayoutBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FlowLayout *pThis = static_cast<FlowLayout *>(this);

    pThis->execSync(static_cast<FlowLayout *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FlowLayoutBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FlowLayout *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FlowLayout *>(pRefAspect),
                  dynamic_cast<const FlowLayout *>(this));

    return returnValue;
}
#endif

void FlowLayoutBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
