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
 **     class LineBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELINEBORDERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGLineBorderBase.h"
#include "OSGLineBorder.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  LineBorderBase::WidthFieldMask = 
    (TypeTraits<BitVector>::One << LineBorderBase::WidthFieldId);

const OSG::BitVector  LineBorderBase::ColorFieldMask = 
    (TypeTraits<BitVector>::One << LineBorderBase::ColorFieldId);

const OSG::BitVector  LineBorderBase::MaterialFieldMask = 
    (TypeTraits<BitVector>::One << LineBorderBase::MaterialFieldId);

const OSG::BitVector LineBorderBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          LineBorderBase::_sfWidth
    
*/
/*! \var Color4f         LineBorderBase::_sfColor
    
*/
/*! \var MaterialPtr     LineBorderBase::_sfMaterial
    
*/

//! LineBorder description

FieldDescription *LineBorderBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "Width", 
                     WidthFieldId, WidthFieldMask,
                     false,
                     (FieldAccessMethod) &LineBorderBase::getSFWidth),
    new FieldDescription(SFColor4f::getClassType(), 
                     "Color", 
                     ColorFieldId, ColorFieldMask,
                     false,
                     (FieldAccessMethod) &LineBorderBase::getSFColor),
    new FieldDescription(SFMaterialPtr::getClassType(), 
                     "Material", 
                     MaterialFieldId, MaterialFieldMask,
                     false,
                     (FieldAccessMethod) &LineBorderBase::getSFMaterial)
};


FieldContainerType LineBorderBase::_type(
    "LineBorder",
    "Border",
    NULL,
    (PrototypeCreateF) &LineBorderBase::createEmpty,
    LineBorder::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(LineBorderBase, LineBorderPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &LineBorderBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &LineBorderBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr LineBorderBase::shallowCopy(void) const 
{ 
    LineBorderPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const LineBorder *>(this)); 

    return returnValue; 
}

UInt32 LineBorderBase::getContainerSize(void) const 
{ 
    return sizeof(LineBorder); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void LineBorderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((LineBorderBase *) &other, whichField);
}
#else
void LineBorderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((LineBorderBase *) &other, whichField, sInfo);
}
void LineBorderBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void LineBorderBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

LineBorderBase::LineBorderBase(void) :
    _sfWidth                  (Real32(1)), 
    _sfColor                  (Color4f(0.0,0.0,0.0,1.0)), 
    _sfMaterial               (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

LineBorderBase::LineBorderBase(const LineBorderBase &source) :
    _sfWidth                  (source._sfWidth                  ), 
    _sfColor                  (source._sfColor                  ), 
    _sfMaterial               (source._sfMaterial               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

LineBorderBase::~LineBorderBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 LineBorderBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }


    return returnValue;
}

void LineBorderBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }


}

void LineBorderBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LineBorderBase::executeSyncImpl(      LineBorderBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
        _sfMaterial.syncWith(pOther->_sfMaterial);


}
#else
void LineBorderBase::executeSyncImpl(      LineBorderBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
        _sfMaterial.syncWith(pOther->_sfMaterial);



}

void LineBorderBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<LineBorderPtr>::_type("LineBorderPtr", "BorderPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(LineBorderPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(LineBorderPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGLINEBORDERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLINEBORDERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLINEBORDERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

