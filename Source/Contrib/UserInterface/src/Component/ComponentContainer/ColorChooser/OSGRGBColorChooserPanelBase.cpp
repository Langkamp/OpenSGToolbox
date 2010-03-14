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
 **     class RGBColorChooserPanel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGRGBColorChooserPanelBase.h"
#include "OSGRGBColorChooserPanel.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RGBColorChooserPanel
    A UI RGBColorChooserPanel.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            RGBColorChooserPanelBase::_sfIncludeAlpha
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RGBColorChooserPanel *>::_type("RGBColorChooserPanelPtr", "AbstractColorChooserPanelPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RGBColorChooserPanel *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RGBColorChooserPanel *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RGBColorChooserPanel *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RGBColorChooserPanelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "IncludeAlpha",
        "",
        IncludeAlphaFieldId, IncludeAlphaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RGBColorChooserPanel::editHandleIncludeAlpha),
        static_cast<FieldGetMethodSig >(&RGBColorChooserPanel::getHandleIncludeAlpha));

    oType.addInitialDesc(pDesc);

}


RGBColorChooserPanelBase::TypeObject RGBColorChooserPanelBase::_type(
    RGBColorChooserPanelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RGBColorChooserPanelBase::createEmptyLocal),
    RGBColorChooserPanel::initMethod,
    RGBColorChooserPanel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RGBColorChooserPanel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RGBColorChooserPanel\"\n"
    "\tparent=\"AbstractColorChooserPanel\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI RGBColorChooserPanel.\n"
    "\t<Field\n"
    "\t\tname=\"IncludeAlpha\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI RGBColorChooserPanel.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &RGBColorChooserPanelBase::getType(void)
{
    return _type;
}

const FieldContainerType &RGBColorChooserPanelBase::getType(void) const
{
    return _type;
}

UInt32 RGBColorChooserPanelBase::getContainerSize(void) const
{
    return sizeof(RGBColorChooserPanel);
}

/*------------------------- decorator get ------------------------------*/


SFBool *RGBColorChooserPanelBase::editSFIncludeAlpha(void)
{
    editSField(IncludeAlphaFieldMask);

    return &_sfIncludeAlpha;
}

const SFBool *RGBColorChooserPanelBase::getSFIncludeAlpha(void) const
{
    return &_sfIncludeAlpha;
}






/*------------------------------ access -----------------------------------*/

UInt32 RGBColorChooserPanelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (IncludeAlphaFieldMask & whichField))
    {
        returnValue += _sfIncludeAlpha.getBinSize();
    }

    return returnValue;
}

void RGBColorChooserPanelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (IncludeAlphaFieldMask & whichField))
    {
        _sfIncludeAlpha.copyToBin(pMem);
    }
}

void RGBColorChooserPanelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (IncludeAlphaFieldMask & whichField))
    {
        _sfIncludeAlpha.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RGBColorChooserPanelTransitPtr RGBColorChooserPanelBase::createLocal(BitVector bFlags)
{
    RGBColorChooserPanelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RGBColorChooserPanel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RGBColorChooserPanelTransitPtr RGBColorChooserPanelBase::createDependent(BitVector bFlags)
{
    RGBColorChooserPanelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RGBColorChooserPanel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RGBColorChooserPanelTransitPtr RGBColorChooserPanelBase::create(void)
{
    RGBColorChooserPanelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RGBColorChooserPanel>(tmpPtr);
    }

    return fc;
}

RGBColorChooserPanel *RGBColorChooserPanelBase::createEmptyLocal(BitVector bFlags)
{
    RGBColorChooserPanel *returnValue;

    newPtr<RGBColorChooserPanel>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RGBColorChooserPanel *RGBColorChooserPanelBase::createEmpty(void)
{
    RGBColorChooserPanel *returnValue;

    newPtr<RGBColorChooserPanel>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RGBColorChooserPanelBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RGBColorChooserPanel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RGBColorChooserPanel *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RGBColorChooserPanelBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RGBColorChooserPanel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RGBColorChooserPanel *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RGBColorChooserPanelBase::shallowCopy(void) const
{
    RGBColorChooserPanel *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RGBColorChooserPanel *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RGBColorChooserPanelBase::RGBColorChooserPanelBase(void) :
    Inherited(),
    _sfIncludeAlpha           (bool(true))
{
}

RGBColorChooserPanelBase::RGBColorChooserPanelBase(const RGBColorChooserPanelBase &source) :
    Inherited(source),
    _sfIncludeAlpha           (source._sfIncludeAlpha           )
{
}


/*-------------------------- destructors ----------------------------------*/

RGBColorChooserPanelBase::~RGBColorChooserPanelBase(void)
{
}


GetFieldHandlePtr RGBColorChooserPanelBase::getHandleIncludeAlpha    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIncludeAlpha,
             this->getType().getFieldDesc(IncludeAlphaFieldId),
             const_cast<RGBColorChooserPanelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RGBColorChooserPanelBase::editHandleIncludeAlpha   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIncludeAlpha,
             this->getType().getFieldDesc(IncludeAlphaFieldId),
             this));


    editSField(IncludeAlphaFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RGBColorChooserPanelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RGBColorChooserPanel *pThis = static_cast<RGBColorChooserPanel *>(this);

    pThis->execSync(static_cast<RGBColorChooserPanel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RGBColorChooserPanelBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RGBColorChooserPanel *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RGBColorChooserPanel *>(pRefAspect),
                  dynamic_cast<const RGBColorChooserPanel *>(this));

    return returnValue;
}
#endif

void RGBColorChooserPanelBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
