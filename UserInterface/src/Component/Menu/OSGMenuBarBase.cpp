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
 **     class MenuBar!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMENUBARINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGMenuBarBase.h"
#include "OSGMenuBar.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  MenuBarBase::MenuDelayFieldMask = 
    (TypeTraits<BitVector>::One << MenuBarBase::MenuDelayFieldId);

const OSG::BitVector MenuBarBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          MenuBarBase::_sfMenuDelay
    
*/

//! MenuBar description

FieldDescription *MenuBarBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "MenuDelay", 
                     MenuDelayFieldId, MenuDelayFieldMask,
                     false,
                     (FieldAccessMethod) &MenuBarBase::getSFMenuDelay)
};


FieldContainerType MenuBarBase::_type(
    "MenuBar",
    "Container",
    NULL,
    (PrototypeCreateF) &MenuBarBase::createEmpty,
    MenuBar::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(MenuBarBase, MenuBarPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &MenuBarBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &MenuBarBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr MenuBarBase::shallowCopy(void) const 
{ 
    MenuBarPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const MenuBar *>(this)); 

    return returnValue; 
}

UInt32 MenuBarBase::getContainerSize(void) const 
{ 
    return sizeof(MenuBar); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void MenuBarBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((MenuBarBase *) &other, whichField);
}
#else
void MenuBarBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((MenuBarBase *) &other, whichField, sInfo);
}
void MenuBarBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MenuBarBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MenuBarBase::MenuBarBase(void) :
    _sfMenuDelay              (Real32(0.5)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MenuBarBase::MenuBarBase(const MenuBarBase &source) :
    _sfMenuDelay              (source._sfMenuDelay              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

MenuBarBase::~MenuBarBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 MenuBarBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MenuDelayFieldMask & whichField))
    {
        returnValue += _sfMenuDelay.getBinSize();
    }


    return returnValue;
}

void MenuBarBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MenuDelayFieldMask & whichField))
    {
        _sfMenuDelay.copyToBin(pMem);
    }


}

void MenuBarBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MenuDelayFieldMask & whichField))
    {
        _sfMenuDelay.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MenuBarBase::executeSyncImpl(      MenuBarBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (MenuDelayFieldMask & whichField))
        _sfMenuDelay.syncWith(pOther->_sfMenuDelay);


}
#else
void MenuBarBase::executeSyncImpl(      MenuBarBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (MenuDelayFieldMask & whichField))
        _sfMenuDelay.syncWith(pOther->_sfMenuDelay);



}

void MenuBarBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<MenuBarPtr>::_type("MenuBarPtr", "ContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MenuBarPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(MenuBarPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGMENUBARBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGMENUBARBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGMENUBARFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
