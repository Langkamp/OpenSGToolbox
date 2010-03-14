/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class DefaultComboBoxComponentGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DefaultComboBoxComponentGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DefaultComboBoxComponentGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DefaultComboBoxComponentGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the DefaultComboBoxComponentGenerator::_sfDrawObjectPrototype field.
inline
Component * DefaultComboBoxComponentGeneratorBase::getDrawObjectPrototype(void) const
{
    return _sfDrawObjectPrototype.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfDrawObjectPrototype field.
inline
void DefaultComboBoxComponentGeneratorBase::setDrawObjectPrototype(Component * const value)
{
    editSField(DrawObjectPrototypeFieldMask);

    _sfDrawObjectPrototype.setValue(value);
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfSelectedBackground field.
inline
Layer * DefaultComboBoxComponentGeneratorBase::getSelectedBackground(void) const
{
    return _sfSelectedBackground.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfSelectedBackground field.
inline
void DefaultComboBoxComponentGeneratorBase::setSelectedBackground(Layer * const value)
{
    editSField(SelectedBackgroundFieldMask);

    _sfSelectedBackground.setValue(value);
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedBackground field.
inline
Layer * DefaultComboBoxComponentGeneratorBase::getFocusedBackground(void) const
{
    return _sfFocusedBackground.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfFocusedBackground field.
inline
void DefaultComboBoxComponentGeneratorBase::setFocusedBackground(Layer * const value)
{
    editSField(FocusedBackgroundFieldMask);

    _sfFocusedBackground.setValue(value);
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfSelectedForeground field.
inline
Layer * DefaultComboBoxComponentGeneratorBase::getSelectedForeground(void) const
{
    return _sfSelectedForeground.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfSelectedForeground field.
inline
void DefaultComboBoxComponentGeneratorBase::setSelectedForeground(Layer * const value)
{
    editSField(SelectedForegroundFieldMask);

    _sfSelectedForeground.setValue(value);
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedForeground field.
inline
Layer * DefaultComboBoxComponentGeneratorBase::getFocusedForeground(void) const
{
    return _sfFocusedForeground.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfFocusedForeground field.
inline
void DefaultComboBoxComponentGeneratorBase::setFocusedForeground(Layer * const value)
{
    editSField(FocusedForegroundFieldMask);

    _sfFocusedForeground.setValue(value);
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfSelectedBorder field.
inline
Border * DefaultComboBoxComponentGeneratorBase::getSelectedBorder(void) const
{
    return _sfSelectedBorder.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfSelectedBorder field.
inline
void DefaultComboBoxComponentGeneratorBase::setSelectedBorder(Border * const value)
{
    editSField(SelectedBorderFieldMask);

    _sfSelectedBorder.setValue(value);
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedBorder field.
inline
Border * DefaultComboBoxComponentGeneratorBase::getFocusedBorder(void) const
{
    return _sfFocusedBorder.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfFocusedBorder field.
inline
void DefaultComboBoxComponentGeneratorBase::setFocusedBorder(Border * const value)
{
    editSField(FocusedBorderFieldMask);

    _sfFocusedBorder.setValue(value);
}
//! Get the value of the DefaultComboBoxComponentGenerator::_sfSelectedTextColor field.

inline
Color4f &DefaultComboBoxComponentGeneratorBase::editSelectedTextColor(void)
{
    editSField(SelectedTextColorFieldMask);

    return _sfSelectedTextColor.getValue();
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfSelectedTextColor field.
inline
const Color4f &DefaultComboBoxComponentGeneratorBase::getSelectedTextColor(void) const
{
    return _sfSelectedTextColor.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfSelectedTextColor field.
inline
void DefaultComboBoxComponentGeneratorBase::setSelectedTextColor(const Color4f &value)
{
    editSField(SelectedTextColorFieldMask);

    _sfSelectedTextColor.setValue(value);
}
//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedTextColor field.

inline
Color4f &DefaultComboBoxComponentGeneratorBase::editFocusedTextColor(void)
{
    editSField(FocusedTextColorFieldMask);

    return _sfFocusedTextColor.getValue();
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedTextColor field.
inline
const Color4f &DefaultComboBoxComponentGeneratorBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfFocusedTextColor field.
inline
void DefaultComboBoxComponentGeneratorBase::setFocusedTextColor(const Color4f &value)
{
    editSField(FocusedTextColorFieldMask);

    _sfFocusedTextColor.setValue(value);
}
//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedTextColorHasPriority field.

inline
bool &DefaultComboBoxComponentGeneratorBase::editFocusedTextColorHasPriority(void)
{
    editSField(FocusedTextColorHasPriorityFieldMask);

    return _sfFocusedTextColorHasPriority.getValue();
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedTextColorHasPriority field.
inline
      bool  DefaultComboBoxComponentGeneratorBase::getFocusedTextColorHasPriority(void) const
{
    return _sfFocusedTextColorHasPriority.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfFocusedTextColorHasPriority field.
inline
void DefaultComboBoxComponentGeneratorBase::setFocusedTextColorHasPriority(const bool value)
{
    editSField(FocusedTextColorHasPriorityFieldMask);

    _sfFocusedTextColorHasPriority.setValue(value);
}
//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedBorderHasPriority field.

inline
bool &DefaultComboBoxComponentGeneratorBase::editFocusedBorderHasPriority(void)
{
    editSField(FocusedBorderHasPriorityFieldMask);

    return _sfFocusedBorderHasPriority.getValue();
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedBorderHasPriority field.
inline
      bool  DefaultComboBoxComponentGeneratorBase::getFocusedBorderHasPriority(void) const
{
    return _sfFocusedBorderHasPriority.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfFocusedBorderHasPriority field.
inline
void DefaultComboBoxComponentGeneratorBase::setFocusedBorderHasPriority(const bool value)
{
    editSField(FocusedBorderHasPriorityFieldMask);

    _sfFocusedBorderHasPriority.setValue(value);
}
//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedBackgroundHasPriority field.

inline
bool &DefaultComboBoxComponentGeneratorBase::editFocusedBackgroundHasPriority(void)
{
    editSField(FocusedBackgroundHasPriorityFieldMask);

    return _sfFocusedBackgroundHasPriority.getValue();
}

//! Get the value of the DefaultComboBoxComponentGenerator::_sfFocusedBackgroundHasPriority field.
inline
      bool  DefaultComboBoxComponentGeneratorBase::getFocusedBackgroundHasPriority(void) const
{
    return _sfFocusedBackgroundHasPriority.getValue();
}

//! Set the value of the DefaultComboBoxComponentGenerator::_sfFocusedBackgroundHasPriority field.
inline
void DefaultComboBoxComponentGeneratorBase::setFocusedBackgroundHasPriority(const bool value)
{
    editSField(FocusedBackgroundHasPriorityFieldMask);

    _sfFocusedBackgroundHasPriority.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DefaultComboBoxComponentGeneratorBase::execSync (      DefaultComboBoxComponentGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DrawObjectPrototypeFieldMask & whichField))
        _sfDrawObjectPrototype.syncWith(pFrom->_sfDrawObjectPrototype);

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
        _sfSelectedBackground.syncWith(pFrom->_sfSelectedBackground);

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
        _sfFocusedBackground.syncWith(pFrom->_sfFocusedBackground);

    if(FieldBits::NoField != (SelectedForegroundFieldMask & whichField))
        _sfSelectedForeground.syncWith(pFrom->_sfSelectedForeground);

    if(FieldBits::NoField != (FocusedForegroundFieldMask & whichField))
        _sfFocusedForeground.syncWith(pFrom->_sfFocusedForeground);

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
        _sfSelectedBorder.syncWith(pFrom->_sfSelectedBorder);

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
        _sfFocusedBorder.syncWith(pFrom->_sfFocusedBorder);

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
        _sfSelectedTextColor.syncWith(pFrom->_sfSelectedTextColor);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pFrom->_sfFocusedTextColor);

    if(FieldBits::NoField != (FocusedTextColorHasPriorityFieldMask & whichField))
        _sfFocusedTextColorHasPriority.syncWith(pFrom->_sfFocusedTextColorHasPriority);

    if(FieldBits::NoField != (FocusedBorderHasPriorityFieldMask & whichField))
        _sfFocusedBorderHasPriority.syncWith(pFrom->_sfFocusedBorderHasPriority);

    if(FieldBits::NoField != (FocusedBackgroundHasPriorityFieldMask & whichField))
        _sfFocusedBackgroundHasPriority.syncWith(pFrom->_sfFocusedBackgroundHasPriority);
}
#endif


inline
const Char8 *DefaultComboBoxComponentGeneratorBase::getClassname(void)
{
    return "DefaultComboBoxComponentGenerator";
}
OSG_GEN_CONTAINERPTR(DefaultComboBoxComponentGenerator);

OSG_END_NAMESPACE

