/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
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
 **     class DefaultFunctionComponentIOTabComponentGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEFAULTFUNCTIONCOMPONENTIOTABCOMPONENTGENERATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultFunctionComponentIOTabComponentGeneratorBase.h"
#include "OSGDefaultFunctionComponentIOTabComponentGenerator.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::TabTextSourceFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::TabTextSourceFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::EnableTooltipFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::EnableTooltipFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::TooltipTimeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::TooltipTimeFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::TooltipTextSourceFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::TooltipTextSourceFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::DefaultTabFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::DefaultTabFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::FocusedTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::FocusedTextColorFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::RolloverTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::RolloverTextColorFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::DisabledTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::DisabledTextColorFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::TextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::TextColorFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::DragToTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::DragToTextColorFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::DragFromTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::DragFromTextColorFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::FocusedDrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::FocusedDrawObjectFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::RolloverDrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::RolloverDrawObjectFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::DisabledDrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::DisabledDrawObjectFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::DrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::DrawObjectFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::DragToDrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::DragToDrawObjectFieldId);

const OSG::BitVector  DefaultFunctionComponentIOTabComponentGeneratorBase::DragFromDrawObjectFieldMask = 
    (TypeTraits<BitVector>::One << DefaultFunctionComponentIOTabComponentGeneratorBase::DragFromDrawObjectFieldId);

const OSG::BitVector DefaultFunctionComponentIOTabComponentGeneratorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec2f           DefaultFunctionComponentIOTabComponentGeneratorBase::_sfTabTextSource
    
*/
/*! \var bool            DefaultFunctionComponentIOTabComponentGeneratorBase::_sfEnableTooltip
    
*/
/*! \var Time            DefaultFunctionComponentIOTabComponentGeneratorBase::_sfTooltipTime
    
*/
/*! \var Time            DefaultFunctionComponentIOTabComponentGeneratorBase::_sfTooltipTextSource
    
*/
/*! \var ComponentPtr    DefaultFunctionComponentIOTabComponentGeneratorBase::_sfDefaultTab
    
*/
/*! \var Color4f         DefaultFunctionComponentIOTabComponentGeneratorBase::_sfFocusedTextColor
    
*/
/*! \var Color4f         DefaultFunctionComponentIOTabComponentGeneratorBase::_sfRolloverTextColor
    
*/
/*! \var Color4f         DefaultFunctionComponentIOTabComponentGeneratorBase::_sfDisabledTextColor
    
*/
/*! \var Color4f         DefaultFunctionComponentIOTabComponentGeneratorBase::_sfTextColor
    
*/
/*! \var Color4f         DefaultFunctionComponentIOTabComponentGeneratorBase::_sfDragToTextColor
    
*/
/*! \var Color4f         DefaultFunctionComponentIOTabComponentGeneratorBase::_sfDragFromTextColor
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultFunctionComponentIOTabComponentGeneratorBase::_sfFocusedDrawObject
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultFunctionComponentIOTabComponentGeneratorBase::_sfRolloverDrawObject
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultFunctionComponentIOTabComponentGeneratorBase::_sfDisabledDrawObject
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultFunctionComponentIOTabComponentGeneratorBase::_sfDrawObject
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultFunctionComponentIOTabComponentGeneratorBase::_sfDragToDrawObject
    
*/
/*! \var UIDrawObjectCanvasPtr DefaultFunctionComponentIOTabComponentGeneratorBase::_sfDragFromDrawObject
    
*/

//! DefaultFunctionComponentIOTabComponentGenerator description

FieldDescription *DefaultFunctionComponentIOTabComponentGeneratorBase::_desc[] = 
{
    new FieldDescription(SFVec2f::getClassType(), 
                     "TabTextSource", 
                     TabTextSourceFieldId, TabTextSourceFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFTabTextSource),
    new FieldDescription(SFBool::getClassType(), 
                     "EnableTooltip", 
                     EnableTooltipFieldId, EnableTooltipFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFEnableTooltip),
    new FieldDescription(SFTime::getClassType(), 
                     "TooltipTime", 
                     TooltipTimeFieldId, TooltipTimeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFTooltipTime),
    new FieldDescription(SFTime::getClassType(), 
                     "TooltipTextSource", 
                     TooltipTextSourceFieldId, TooltipTextSourceFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFTooltipTextSource),
    new FieldDescription(SFComponentPtr::getClassType(), 
                     "DefaultTab", 
                     DefaultTabFieldId, DefaultTabFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFDefaultTab),
    new FieldDescription(SFColor4f::getClassType(), 
                     "FocusedTextColor", 
                     FocusedTextColorFieldId, FocusedTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFFocusedTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "RolloverTextColor", 
                     RolloverTextColorFieldId, RolloverTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFRolloverTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "DisabledTextColor", 
                     DisabledTextColorFieldId, DisabledTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFDisabledTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "TextColor", 
                     TextColorFieldId, TextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "DragToTextColor", 
                     DragToTextColorFieldId, DragToTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFDragToTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "DragFromTextColor", 
                     DragFromTextColorFieldId, DragFromTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFDragFromTextColor),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "FocusedDrawObject", 
                     FocusedDrawObjectFieldId, FocusedDrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFFocusedDrawObject),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "RolloverDrawObject", 
                     RolloverDrawObjectFieldId, RolloverDrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFRolloverDrawObject),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "DisabledDrawObject", 
                     DisabledDrawObjectFieldId, DisabledDrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFDisabledDrawObject),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "DrawObject", 
                     DrawObjectFieldId, DrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFDrawObject),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "DragToDrawObject", 
                     DragToDrawObjectFieldId, DragToDrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFDragToDrawObject),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "DragFromDrawObject", 
                     DragFromDrawObjectFieldId, DragFromDrawObjectFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultFunctionComponentIOTabComponentGeneratorBase::getSFDragFromDrawObject)
};


FieldContainerType DefaultFunctionComponentIOTabComponentGeneratorBase::_type(
    "DefaultFunctionComponentIOTabComponentGenerator",
    "FunctionComponentIOTabComponentGenerator",
    NULL,
    (PrototypeCreateF) &DefaultFunctionComponentIOTabComponentGeneratorBase::createEmpty,
    DefaultFunctionComponentIOTabComponentGenerator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DefaultFunctionComponentIOTabComponentGeneratorBase, DefaultFunctionComponentIOTabComponentGeneratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefaultFunctionComponentIOTabComponentGeneratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DefaultFunctionComponentIOTabComponentGeneratorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DefaultFunctionComponentIOTabComponentGeneratorBase::shallowCopy(void) const 
{ 
    DefaultFunctionComponentIOTabComponentGeneratorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DefaultFunctionComponentIOTabComponentGenerator *>(this)); 

    return returnValue; 
}

UInt32 DefaultFunctionComponentIOTabComponentGeneratorBase::getContainerSize(void) const 
{ 
    return sizeof(DefaultFunctionComponentIOTabComponentGenerator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultFunctionComponentIOTabComponentGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DefaultFunctionComponentIOTabComponentGeneratorBase *) &other, whichField);
}
#else
void DefaultFunctionComponentIOTabComponentGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DefaultFunctionComponentIOTabComponentGeneratorBase *) &other, whichField, sInfo);
}
void DefaultFunctionComponentIOTabComponentGeneratorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DefaultFunctionComponentIOTabComponentGeneratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DefaultFunctionComponentIOTabComponentGeneratorBase::DefaultFunctionComponentIOTabComponentGeneratorBase(void) :
    _sfTabTextSource          (Vec2f(DefaultFunctionComponentIOTabComponentGenerator::TEXT_SOURCE_TYPE_NAME)), 
    _sfEnableTooltip          (bool(true)), 
    _sfTooltipTime            (Time(1.0f)), 
    _sfTooltipTextSource      (Time(DefaultFunctionComponentIOTabComponentGenerator::TEXT_SOURCE_TYPE_NAME)), 
    _sfDefaultTab             (ComponentPtr(NullFC)), 
    _sfFocusedTextColor       (Color4f(0.0f,0.0f,0.0f,1.0f)), 
    _sfRolloverTextColor      (Color4f(0.0f,0.0f,0.0f,1.0f)), 
    _sfDisabledTextColor      (Color4f(0.0f,0.0f,0.0f,1.0f)), 
    _sfTextColor              (Color4f(0.0f,0.0f,0.0f,1.0f)), 
    _sfDragToTextColor        (Color4f(0.0f,0.0f,0.0f,1.0f)), 
    _sfDragFromTextColor      (Color4f(0.0f,0.0f,0.0f,1.0f)), 
    _sfFocusedDrawObject      (UIDrawObjectCanvasPtr(NullFC)), 
    _sfRolloverDrawObject     (UIDrawObjectCanvasPtr(NullFC)), 
    _sfDisabledDrawObject     (UIDrawObjectCanvasPtr(NullFC)), 
    _sfDrawObject             (UIDrawObjectCanvasPtr(NullFC)), 
    _sfDragToDrawObject       (UIDrawObjectCanvasPtr(NullFC)), 
    _sfDragFromDrawObject     (UIDrawObjectCanvasPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DefaultFunctionComponentIOTabComponentGeneratorBase::DefaultFunctionComponentIOTabComponentGeneratorBase(const DefaultFunctionComponentIOTabComponentGeneratorBase &source) :
    _sfTabTextSource          (source._sfTabTextSource          ), 
    _sfEnableTooltip          (source._sfEnableTooltip          ), 
    _sfTooltipTime            (source._sfTooltipTime            ), 
    _sfTooltipTextSource      (source._sfTooltipTextSource      ), 
    _sfDefaultTab             (source._sfDefaultTab             ), 
    _sfFocusedTextColor       (source._sfFocusedTextColor       ), 
    _sfRolloverTextColor      (source._sfRolloverTextColor      ), 
    _sfDisabledTextColor      (source._sfDisabledTextColor      ), 
    _sfTextColor              (source._sfTextColor              ), 
    _sfDragToTextColor        (source._sfDragToTextColor        ), 
    _sfDragFromTextColor      (source._sfDragFromTextColor      ), 
    _sfFocusedDrawObject      (source._sfFocusedDrawObject      ), 
    _sfRolloverDrawObject     (source._sfRolloverDrawObject     ), 
    _sfDisabledDrawObject     (source._sfDisabledDrawObject     ), 
    _sfDrawObject             (source._sfDrawObject             ), 
    _sfDragToDrawObject       (source._sfDragToDrawObject       ), 
    _sfDragFromDrawObject     (source._sfDragFromDrawObject     ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DefaultFunctionComponentIOTabComponentGeneratorBase::~DefaultFunctionComponentIOTabComponentGeneratorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DefaultFunctionComponentIOTabComponentGeneratorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TabTextSourceFieldMask & whichField))
    {
        returnValue += _sfTabTextSource.getBinSize();
    }

    if(FieldBits::NoField != (EnableTooltipFieldMask & whichField))
    {
        returnValue += _sfEnableTooltip.getBinSize();
    }

    if(FieldBits::NoField != (TooltipTimeFieldMask & whichField))
    {
        returnValue += _sfTooltipTime.getBinSize();
    }

    if(FieldBits::NoField != (TooltipTextSourceFieldMask & whichField))
    {
        returnValue += _sfTooltipTextSource.getBinSize();
    }

    if(FieldBits::NoField != (DefaultTabFieldMask & whichField))
    {
        returnValue += _sfDefaultTab.getBinSize();
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        returnValue += _sfFocusedTextColor.getBinSize();
    }

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        returnValue += _sfRolloverTextColor.getBinSize();
    }

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        returnValue += _sfDisabledTextColor.getBinSize();
    }

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        returnValue += _sfTextColor.getBinSize();
    }

    if(FieldBits::NoField != (DragToTextColorFieldMask & whichField))
    {
        returnValue += _sfDragToTextColor.getBinSize();
    }

    if(FieldBits::NoField != (DragFromTextColorFieldMask & whichField))
    {
        returnValue += _sfDragFromTextColor.getBinSize();
    }

    if(FieldBits::NoField != (FocusedDrawObjectFieldMask & whichField))
    {
        returnValue += _sfFocusedDrawObject.getBinSize();
    }

    if(FieldBits::NoField != (RolloverDrawObjectFieldMask & whichField))
    {
        returnValue += _sfRolloverDrawObject.getBinSize();
    }

    if(FieldBits::NoField != (DisabledDrawObjectFieldMask & whichField))
    {
        returnValue += _sfDisabledDrawObject.getBinSize();
    }

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
    {
        returnValue += _sfDrawObject.getBinSize();
    }

    if(FieldBits::NoField != (DragToDrawObjectFieldMask & whichField))
    {
        returnValue += _sfDragToDrawObject.getBinSize();
    }

    if(FieldBits::NoField != (DragFromDrawObjectFieldMask & whichField))
    {
        returnValue += _sfDragFromDrawObject.getBinSize();
    }


    return returnValue;
}

void DefaultFunctionComponentIOTabComponentGeneratorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TabTextSourceFieldMask & whichField))
    {
        _sfTabTextSource.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EnableTooltipFieldMask & whichField))
    {
        _sfEnableTooltip.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TooltipTimeFieldMask & whichField))
    {
        _sfTooltipTime.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TooltipTextSourceFieldMask & whichField))
    {
        _sfTooltipTextSource.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DefaultTabFieldMask & whichField))
    {
        _sfDefaultTab.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        _sfRolloverTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        _sfDisabledTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DragToTextColorFieldMask & whichField))
    {
        _sfDragToTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DragFromTextColorFieldMask & whichField))
    {
        _sfDragFromTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedDrawObjectFieldMask & whichField))
    {
        _sfFocusedDrawObject.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RolloverDrawObjectFieldMask & whichField))
    {
        _sfRolloverDrawObject.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DisabledDrawObjectFieldMask & whichField))
    {
        _sfDisabledDrawObject.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
    {
        _sfDrawObject.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DragToDrawObjectFieldMask & whichField))
    {
        _sfDragToDrawObject.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DragFromDrawObjectFieldMask & whichField))
    {
        _sfDragFromDrawObject.copyToBin(pMem);
    }


}

void DefaultFunctionComponentIOTabComponentGeneratorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TabTextSourceFieldMask & whichField))
    {
        _sfTabTextSource.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EnableTooltipFieldMask & whichField))
    {
        _sfEnableTooltip.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TooltipTimeFieldMask & whichField))
    {
        _sfTooltipTime.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TooltipTextSourceFieldMask & whichField))
    {
        _sfTooltipTextSource.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DefaultTabFieldMask & whichField))
    {
        _sfDefaultTab.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        _sfRolloverTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        _sfDisabledTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DragToTextColorFieldMask & whichField))
    {
        _sfDragToTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DragFromTextColorFieldMask & whichField))
    {
        _sfDragFromTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedDrawObjectFieldMask & whichField))
    {
        _sfFocusedDrawObject.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RolloverDrawObjectFieldMask & whichField))
    {
        _sfRolloverDrawObject.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DisabledDrawObjectFieldMask & whichField))
    {
        _sfDisabledDrawObject.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
    {
        _sfDrawObject.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DragToDrawObjectFieldMask & whichField))
    {
        _sfDragToDrawObject.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DragFromDrawObjectFieldMask & whichField))
    {
        _sfDragFromDrawObject.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultFunctionComponentIOTabComponentGeneratorBase::executeSyncImpl(      DefaultFunctionComponentIOTabComponentGeneratorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (TabTextSourceFieldMask & whichField))
        _sfTabTextSource.syncWith(pOther->_sfTabTextSource);

    if(FieldBits::NoField != (EnableTooltipFieldMask & whichField))
        _sfEnableTooltip.syncWith(pOther->_sfEnableTooltip);

    if(FieldBits::NoField != (TooltipTimeFieldMask & whichField))
        _sfTooltipTime.syncWith(pOther->_sfTooltipTime);

    if(FieldBits::NoField != (TooltipTextSourceFieldMask & whichField))
        _sfTooltipTextSource.syncWith(pOther->_sfTooltipTextSource);

    if(FieldBits::NoField != (DefaultTabFieldMask & whichField))
        _sfDefaultTab.syncWith(pOther->_sfDefaultTab);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pOther->_sfFocusedTextColor);

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
        _sfRolloverTextColor.syncWith(pOther->_sfRolloverTextColor);

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
        _sfDisabledTextColor.syncWith(pOther->_sfDisabledTextColor);

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
        _sfTextColor.syncWith(pOther->_sfTextColor);

    if(FieldBits::NoField != (DragToTextColorFieldMask & whichField))
        _sfDragToTextColor.syncWith(pOther->_sfDragToTextColor);

    if(FieldBits::NoField != (DragFromTextColorFieldMask & whichField))
        _sfDragFromTextColor.syncWith(pOther->_sfDragFromTextColor);

    if(FieldBits::NoField != (FocusedDrawObjectFieldMask & whichField))
        _sfFocusedDrawObject.syncWith(pOther->_sfFocusedDrawObject);

    if(FieldBits::NoField != (RolloverDrawObjectFieldMask & whichField))
        _sfRolloverDrawObject.syncWith(pOther->_sfRolloverDrawObject);

    if(FieldBits::NoField != (DisabledDrawObjectFieldMask & whichField))
        _sfDisabledDrawObject.syncWith(pOther->_sfDisabledDrawObject);

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
        _sfDrawObject.syncWith(pOther->_sfDrawObject);

    if(FieldBits::NoField != (DragToDrawObjectFieldMask & whichField))
        _sfDragToDrawObject.syncWith(pOther->_sfDragToDrawObject);

    if(FieldBits::NoField != (DragFromDrawObjectFieldMask & whichField))
        _sfDragFromDrawObject.syncWith(pOther->_sfDragFromDrawObject);


}
#else
void DefaultFunctionComponentIOTabComponentGeneratorBase::executeSyncImpl(      DefaultFunctionComponentIOTabComponentGeneratorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (TabTextSourceFieldMask & whichField))
        _sfTabTextSource.syncWith(pOther->_sfTabTextSource);

    if(FieldBits::NoField != (EnableTooltipFieldMask & whichField))
        _sfEnableTooltip.syncWith(pOther->_sfEnableTooltip);

    if(FieldBits::NoField != (TooltipTimeFieldMask & whichField))
        _sfTooltipTime.syncWith(pOther->_sfTooltipTime);

    if(FieldBits::NoField != (TooltipTextSourceFieldMask & whichField))
        _sfTooltipTextSource.syncWith(pOther->_sfTooltipTextSource);

    if(FieldBits::NoField != (DefaultTabFieldMask & whichField))
        _sfDefaultTab.syncWith(pOther->_sfDefaultTab);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pOther->_sfFocusedTextColor);

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
        _sfRolloverTextColor.syncWith(pOther->_sfRolloverTextColor);

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
        _sfDisabledTextColor.syncWith(pOther->_sfDisabledTextColor);

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
        _sfTextColor.syncWith(pOther->_sfTextColor);

    if(FieldBits::NoField != (DragToTextColorFieldMask & whichField))
        _sfDragToTextColor.syncWith(pOther->_sfDragToTextColor);

    if(FieldBits::NoField != (DragFromTextColorFieldMask & whichField))
        _sfDragFromTextColor.syncWith(pOther->_sfDragFromTextColor);

    if(FieldBits::NoField != (FocusedDrawObjectFieldMask & whichField))
        _sfFocusedDrawObject.syncWith(pOther->_sfFocusedDrawObject);

    if(FieldBits::NoField != (RolloverDrawObjectFieldMask & whichField))
        _sfRolloverDrawObject.syncWith(pOther->_sfRolloverDrawObject);

    if(FieldBits::NoField != (DisabledDrawObjectFieldMask & whichField))
        _sfDisabledDrawObject.syncWith(pOther->_sfDisabledDrawObject);

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
        _sfDrawObject.syncWith(pOther->_sfDrawObject);

    if(FieldBits::NoField != (DragToDrawObjectFieldMask & whichField))
        _sfDragToDrawObject.syncWith(pOther->_sfDragToDrawObject);

    if(FieldBits::NoField != (DragFromDrawObjectFieldMask & whichField))
        _sfDragFromDrawObject.syncWith(pOther->_sfDragFromDrawObject);



}

void DefaultFunctionComponentIOTabComponentGeneratorBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DefaultFunctionComponentIOTabComponentGeneratorPtr>::_type("DefaultFunctionComponentIOTabComponentGeneratorPtr", "FunctionComponentIOTabComponentGeneratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DefaultFunctionComponentIOTabComponentGeneratorPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DefaultFunctionComponentIOTabComponentGeneratorPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGDEFAULTFUNCTIONCOMPONENTIOTABCOMPONENTGENERATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDEFAULTFUNCTIONCOMPONENTIOTABCOMPONENTGENERATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDEFAULTFUNCTIONCOMPONENTIOTABCOMPONENTGENERATORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

