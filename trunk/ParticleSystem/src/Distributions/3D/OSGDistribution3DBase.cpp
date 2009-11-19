/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
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
 **     class Distribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDISTRIBUTION3DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDistribution3DBase.h"
#include "OSGDistribution3D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector Distribution3DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 




FieldContainerType Distribution3DBase::_type(
    "Distribution3D",
    "Distribution",
    NULL,
    NULL, 
    Distribution3D::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(Distribution3DBase, Distribution3DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &Distribution3DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &Distribution3DBase::getType(void) const 
{
    return _type;
} 


UInt32 Distribution3DBase::getContainerSize(void) const 
{ 
    return sizeof(Distribution3D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void Distribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<Distribution3DBase *>(&other),
                          whichField);
}
#else
void Distribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((Distribution3DBase *) &other, whichField, sInfo);
}
void Distribution3DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void Distribution3DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

Distribution3DBase::Distribution3DBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

Distribution3DBase::Distribution3DBase(const Distribution3DBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

Distribution3DBase::~Distribution3DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 Distribution3DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void Distribution3DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void Distribution3DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void Distribution3DBase::executeSyncImpl(      Distribution3DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void Distribution3DBase::executeSyncImpl(      Distribution3DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void Distribution3DBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<Distribution3DPtr>::_type("Distribution3DPtr", "DistributionPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(Distribution3DPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(Distribution3DPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

