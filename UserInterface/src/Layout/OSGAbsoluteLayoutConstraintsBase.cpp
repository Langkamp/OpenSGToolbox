/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class AbsoluteLayoutConstraints!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEABSOLUTELAYOUTCONSTRAINTSINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGAbsoluteLayoutConstraintsBase.h"
#include "OSGAbsoluteLayoutConstraints.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  AbsoluteLayoutConstraintsBase::PositionFieldMask = 
    (TypeTraits<BitVector>::One << AbsoluteLayoutConstraintsBase::PositionFieldId);

const OSG::BitVector AbsoluteLayoutConstraintsBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt2f           AbsoluteLayoutConstraintsBase::_sfPosition
    
*/

//! AbsoluteLayoutConstraints description

FieldDescription *AbsoluteLayoutConstraintsBase::_desc[] = 
{
    new FieldDescription(SFPnt2f::getClassType(), 
                     "Position", 
                     PositionFieldId, PositionFieldMask,
                     false,
                     (FieldAccessMethod) &AbsoluteLayoutConstraintsBase::getSFPosition)
};


FieldContainerType AbsoluteLayoutConstraintsBase::_type(
    "AbsoluteLayoutConstraints",
    "LayoutConstraints",
    NULL,
    (PrototypeCreateF) &AbsoluteLayoutConstraintsBase::createEmpty,
    AbsoluteLayoutConstraints::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(AbsoluteLayoutConstraintsBase, AbsoluteLayoutConstraintsPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &AbsoluteLayoutConstraintsBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &AbsoluteLayoutConstraintsBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr AbsoluteLayoutConstraintsBase::shallowCopy(void) const 
{ 
    AbsoluteLayoutConstraintsPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const AbsoluteLayoutConstraints *>(this)); 

    return returnValue; 
}

UInt32 AbsoluteLayoutConstraintsBase::getContainerSize(void) const 
{ 
    return sizeof(AbsoluteLayoutConstraints); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void AbsoluteLayoutConstraintsBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((AbsoluteLayoutConstraintsBase *) &other, whichField);
}
#else
void AbsoluteLayoutConstraintsBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((AbsoluteLayoutConstraintsBase *) &other, whichField, sInfo);
}
void AbsoluteLayoutConstraintsBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void AbsoluteLayoutConstraintsBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

AbsoluteLayoutConstraintsBase::AbsoluteLayoutConstraintsBase(void) :
    _sfPosition               (Pnt2f(0,0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

AbsoluteLayoutConstraintsBase::AbsoluteLayoutConstraintsBase(const AbsoluteLayoutConstraintsBase &source) :
    _sfPosition               (source._sfPosition               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

AbsoluteLayoutConstraintsBase::~AbsoluteLayoutConstraintsBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 AbsoluteLayoutConstraintsBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }


    return returnValue;
}

void AbsoluteLayoutConstraintsBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }


}

void AbsoluteLayoutConstraintsBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void AbsoluteLayoutConstraintsBase::executeSyncImpl(      AbsoluteLayoutConstraintsBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pOther->_sfPosition);


}
#else
void AbsoluteLayoutConstraintsBase::executeSyncImpl(      AbsoluteLayoutConstraintsBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pOther->_sfPosition);



}

void AbsoluteLayoutConstraintsBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<AbsoluteLayoutConstraintsPtr>::_type("AbsoluteLayoutConstraintsPtr", "LayoutConstraintsPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(AbsoluteLayoutConstraintsPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(AbsoluteLayoutConstraintsPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGABSOLUTELAYOUTCONSTRAINTSBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGABSOLUTELAYOUTCONSTRAINTSBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGABSOLUTELAYOUTCONSTRAINTSFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

