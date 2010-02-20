/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class SelectionEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESELECTIONEVENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSelectionEventBase.h"
#include "OSGSelectionEvent.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SelectionEventBase::SelectedFieldMask = 
    (TypeTraits<BitVector>::One << SelectionEventBase::SelectedFieldId);

const OSG::BitVector  SelectionEventBase::PreviouslySelectedFieldMask = 
    (TypeTraits<BitVector>::One << SelectionEventBase::PreviouslySelectedFieldId);

const OSG::BitVector  SelectionEventBase::ValueIsAdjustingFieldMask = 
    (TypeTraits<BitVector>::One << SelectionEventBase::ValueIsAdjustingFieldId);

const OSG::BitVector SelectionEventBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Int32           SelectionEventBase::_mfSelected
    
*/
/*! \var Int32           SelectionEventBase::_mfPreviouslySelected
    
*/
/*! \var bool            SelectionEventBase::_sfValueIsAdjusting
    
*/

//! SelectionEvent description

FieldDescription *SelectionEventBase::_desc[] = 
{
    new FieldDescription(MFInt32::getClassType(), 
                     "Selected", 
                     SelectedFieldId, SelectedFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&SelectionEventBase::editMFSelected)),
    new FieldDescription(MFInt32::getClassType(), 
                     "PreviouslySelected", 
                     PreviouslySelectedFieldId, PreviouslySelectedFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&SelectionEventBase::editMFPreviouslySelected)),
    new FieldDescription(SFBool::getClassType(), 
                     "ValueIsAdjusting", 
                     ValueIsAdjustingFieldId, ValueIsAdjustingFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&SelectionEventBase::editSFValueIsAdjusting))
};


FieldContainerType SelectionEventBase::_type(
    "SelectionEvent",
    "Event",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&SelectionEventBase::createEmpty),
    SelectionEvent::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SelectionEventBase, SelectionEventPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SelectionEventBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SelectionEventBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SelectionEventBase::shallowCopy(void) const 
{ 
    SelectionEventPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SelectionEvent *>(this)); 

    return returnValue; 
}

UInt32 SelectionEventBase::getContainerSize(void) const 
{ 
    return sizeof(SelectionEvent); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SelectionEventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<SelectionEventBase *>(&other),
                          whichField);
}
#else
void SelectionEventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SelectionEventBase *) &other, whichField, sInfo);
}
void SelectionEventBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SelectionEventBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfSelected.terminateShare(uiAspect, this->getContainerSize());
    _mfPreviouslySelected.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SelectionEventBase::SelectionEventBase(void) :
    _mfSelected               (), 
    _mfPreviouslySelected     (), 
    _sfValueIsAdjusting       (bool(false)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SelectionEventBase::SelectionEventBase(const SelectionEventBase &source) :
    _mfSelected               (source._mfSelected               ), 
    _mfPreviouslySelected     (source._mfPreviouslySelected     ), 
    _sfValueIsAdjusting       (source._sfValueIsAdjusting       ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SelectionEventBase::~SelectionEventBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SelectionEventBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        returnValue += _mfSelected.getBinSize();
    }

    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
    {
        returnValue += _mfPreviouslySelected.getBinSize();
    }

    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        returnValue += _sfValueIsAdjusting.getBinSize();
    }


    return returnValue;
}

void SelectionEventBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        _mfSelected.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
    {
        _mfPreviouslySelected.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        _sfValueIsAdjusting.copyToBin(pMem);
    }


}

void SelectionEventBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        _mfSelected.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
    {
        _mfPreviouslySelected.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        _sfValueIsAdjusting.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SelectionEventBase::executeSyncImpl(      SelectionEventBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
        _mfSelected.syncWith(pOther->_mfSelected);

    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
        _mfPreviouslySelected.syncWith(pOther->_mfPreviouslySelected);

    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
        _sfValueIsAdjusting.syncWith(pOther->_sfValueIsAdjusting);


}
#else
void SelectionEventBase::executeSyncImpl(      SelectionEventBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
        _sfValueIsAdjusting.syncWith(pOther->_sfValueIsAdjusting);


    if(FieldBits::NoField != (SelectedFieldMask & whichField))
        _mfSelected.syncWith(pOther->_mfSelected, sInfo);

    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
        _mfPreviouslySelected.syncWith(pOther->_mfPreviouslySelected, sInfo);


}

void SelectionEventBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
        _mfSelected.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (PreviouslySelectedFieldMask & whichField))
        _mfPreviouslySelected.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SelectionEventPtr>::_type("SelectionEventPtr", "EventPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SelectionEventPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE
