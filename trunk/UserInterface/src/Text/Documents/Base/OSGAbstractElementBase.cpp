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
 **     class AbstractElement!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEABSTRACTELEMENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGAbstractElementBase.h"
#include "OSGAbstractElement.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  AbstractElementBase::ParentDocumentFieldMask = 
    (TypeTraits<BitVector>::One << AbstractElementBase::ParentDocumentFieldId);

const OSG::BitVector AbstractElementBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var DocumentPtr     AbstractElementBase::_sfParentDocument
    
*/

//! AbstractElement description

FieldDescription *AbstractElementBase::_desc[] = 
{
    new FieldDescription(SFDocumentPtr::getClassType(), 
                     "ParentDocument", 
                     ParentDocumentFieldId, ParentDocumentFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractElementBase::editSFParentDocument))
};


FieldContainerType AbstractElementBase::_type(
    "AbstractElement",
    "Element",
    NULL,
    NULL, 
    AbstractElement::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(AbstractElementBase, AbstractElementPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &AbstractElementBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &AbstractElementBase::getType(void) const 
{
    return _type;
} 


UInt32 AbstractElementBase::getContainerSize(void) const 
{ 
    return sizeof(AbstractElement); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void AbstractElementBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<AbstractElementBase *>(&other),
                          whichField);
}
#else
void AbstractElementBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((AbstractElementBase *) &other, whichField, sInfo);
}
void AbstractElementBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void AbstractElementBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

AbstractElementBase::AbstractElementBase(void) :
    _sfParentDocument         (DocumentPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

AbstractElementBase::AbstractElementBase(const AbstractElementBase &source) :
    _sfParentDocument         (source._sfParentDocument         ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

AbstractElementBase::~AbstractElementBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 AbstractElementBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentDocumentFieldMask & whichField))
    {
        returnValue += _sfParentDocument.getBinSize();
    }


    return returnValue;
}

void AbstractElementBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentDocumentFieldMask & whichField))
    {
        _sfParentDocument.copyToBin(pMem);
    }


}

void AbstractElementBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentDocumentFieldMask & whichField))
    {
        _sfParentDocument.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void AbstractElementBase::executeSyncImpl(      AbstractElementBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ParentDocumentFieldMask & whichField))
        _sfParentDocument.syncWith(pOther->_sfParentDocument);


}
#else
void AbstractElementBase::executeSyncImpl(      AbstractElementBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ParentDocumentFieldMask & whichField))
        _sfParentDocument.syncWith(pOther->_sfParentDocument);



}

void AbstractElementBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<AbstractElementPtr>::_type("AbstractElementPtr", "ElementPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(AbstractElementPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(AbstractElementPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

