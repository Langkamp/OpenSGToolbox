/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class BoxLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBOXLAYOUTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGBoxLayoutBase.h"
#include "OSGBoxLayout.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  BoxLayoutBase::AlignmentFieldMask = 
    (TypeTraits<BitVector>::One << BoxLayoutBase::AlignmentFieldId);

const OSG::BitVector BoxLayoutBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          BoxLayoutBase::_sfAlignment
    
*/

//! BoxLayout description

FieldDescription *BoxLayoutBase::_desc[] = 
{
    new FieldDescription(SFUInt32::getClassType(), 
                     "Alignment", 
                     AlignmentFieldId, AlignmentFieldMask,
                     false,
                     (FieldAccessMethod) &BoxLayoutBase::getSFAlignment)
};


FieldContainerType BoxLayoutBase::_type(
    "BoxLayout",
    "Layout",
    NULL,
    (PrototypeCreateF) &BoxLayoutBase::createEmpty,
    BoxLayout::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(BoxLayoutBase, BoxLayoutPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BoxLayoutBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BoxLayoutBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr BoxLayoutBase::shallowCopy(void) const 
{ 
    BoxLayoutPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const BoxLayout *>(this)); 

    return returnValue; 
}

UInt32 BoxLayoutBase::getContainerSize(void) const 
{ 
    return sizeof(BoxLayout); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BoxLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((BoxLayoutBase *) &other, whichField);
}
#else
void BoxLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BoxLayoutBase *) &other, whichField, sInfo);
}
void BoxLayoutBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BoxLayoutBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BoxLayoutBase::BoxLayoutBase(void) :
    _sfAlignment              (UInt32(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BoxLayoutBase::BoxLayoutBase(const BoxLayoutBase &source) :
    _sfAlignment              (source._sfAlignment              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BoxLayoutBase::~BoxLayoutBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BoxLayoutBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        returnValue += _sfAlignment.getBinSize();
    }


    return returnValue;
}

void BoxLayoutBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        _sfAlignment.copyToBin(pMem);
    }


}

void BoxLayoutBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        _sfAlignment.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BoxLayoutBase::executeSyncImpl(      BoxLayoutBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
        _sfAlignment.syncWith(pOther->_sfAlignment);


}
#else
void BoxLayoutBase::executeSyncImpl(      BoxLayoutBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
        _sfAlignment.syncWith(pOther->_sfAlignment);



}

void BoxLayoutBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<BoxLayoutPtr>::_type("BoxLayoutPtr", "LayoutPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(BoxLayoutPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(BoxLayoutPtr, );


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGBOXLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGBOXLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGBOXLAYOUTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
