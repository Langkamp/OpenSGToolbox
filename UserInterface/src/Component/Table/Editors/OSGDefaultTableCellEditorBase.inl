/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class DefaultTableCellEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DefaultTableCellEditorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DefaultTableCellEditorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
DefaultTableCellEditorPtr DefaultTableCellEditorBase::create(void) 
{
    DefaultTableCellEditorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = DefaultTableCellEditorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
DefaultTableCellEditorPtr DefaultTableCellEditorBase::createEmpty(void) 
{ 
    DefaultTableCellEditorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the DefaultTableCellEditor::_sfClickCountToStart field.
inline
SFUInt32 *DefaultTableCellEditorBase::getSFClickCountToStart(void)
{
    return &_sfClickCountToStart;
}

//! Get the DefaultTableCellEditor::_sfDefaultEditor field.
inline
SFTextFieldPtr *DefaultTableCellEditorBase::getSFDefaultEditor(void)
{
    return &_sfDefaultEditor;
}

//! Get the DefaultTableCellEditor::_sfDefaultStringEditor field.
inline
SFTextFieldPtr *DefaultTableCellEditorBase::getSFDefaultStringEditor(void)
{
    return &_sfDefaultStringEditor;
}

//! Get the DefaultTableCellEditor::_sfDefaultNumberEditor field.
inline
SFSpinnerPtr *DefaultTableCellEditorBase::getSFDefaultNumberEditor(void)
{
    return &_sfDefaultNumberEditor;
}

//! Get the DefaultTableCellEditor::_sfDefaultGLenumEditor field.
inline
SFComboBoxPtr *DefaultTableCellEditorBase::getSFDefaultGLenumEditor(void)
{
    return &_sfDefaultGLenumEditor;
}

//! Get the DefaultTableCellEditor::_sfDefaultBoolEditor field.
inline
SFCheckboxButtonPtr *DefaultTableCellEditorBase::getSFDefaultBoolEditor(void)
{
    return &_sfDefaultBoolEditor;
}


//! Get the value of the DefaultTableCellEditor::_sfClickCountToStart field.
inline
UInt32 &DefaultTableCellEditorBase::getClickCountToStart(void)
{
    return _sfClickCountToStart.getValue();
}

//! Get the value of the DefaultTableCellEditor::_sfClickCountToStart field.
inline
const UInt32 &DefaultTableCellEditorBase::getClickCountToStart(void) const
{
    return _sfClickCountToStart.getValue();
}

//! Set the value of the DefaultTableCellEditor::_sfClickCountToStart field.
inline
void DefaultTableCellEditorBase::setClickCountToStart(const UInt32 &value)
{
    _sfClickCountToStart.setValue(value);
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultEditor field.
inline
TextFieldPtr &DefaultTableCellEditorBase::getDefaultEditor(void)
{
    return _sfDefaultEditor.getValue();
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultEditor field.
inline
const TextFieldPtr &DefaultTableCellEditorBase::getDefaultEditor(void) const
{
    return _sfDefaultEditor.getValue();
}

//! Set the value of the DefaultTableCellEditor::_sfDefaultEditor field.
inline
void DefaultTableCellEditorBase::setDefaultEditor(const TextFieldPtr &value)
{
    _sfDefaultEditor.setValue(value);
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultStringEditor field.
inline
TextFieldPtr &DefaultTableCellEditorBase::getDefaultStringEditor(void)
{
    return _sfDefaultStringEditor.getValue();
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultStringEditor field.
inline
const TextFieldPtr &DefaultTableCellEditorBase::getDefaultStringEditor(void) const
{
    return _sfDefaultStringEditor.getValue();
}

//! Set the value of the DefaultTableCellEditor::_sfDefaultStringEditor field.
inline
void DefaultTableCellEditorBase::setDefaultStringEditor(const TextFieldPtr &value)
{
    _sfDefaultStringEditor.setValue(value);
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultNumberEditor field.
inline
SpinnerPtr &DefaultTableCellEditorBase::getDefaultNumberEditor(void)
{
    return _sfDefaultNumberEditor.getValue();
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultNumberEditor field.
inline
const SpinnerPtr &DefaultTableCellEditorBase::getDefaultNumberEditor(void) const
{
    return _sfDefaultNumberEditor.getValue();
}

//! Set the value of the DefaultTableCellEditor::_sfDefaultNumberEditor field.
inline
void DefaultTableCellEditorBase::setDefaultNumberEditor(const SpinnerPtr &value)
{
    _sfDefaultNumberEditor.setValue(value);
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultGLenumEditor field.
inline
ComboBoxPtr &DefaultTableCellEditorBase::getDefaultGLenumEditor(void)
{
    return _sfDefaultGLenumEditor.getValue();
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultGLenumEditor field.
inline
const ComboBoxPtr &DefaultTableCellEditorBase::getDefaultGLenumEditor(void) const
{
    return _sfDefaultGLenumEditor.getValue();
}

//! Set the value of the DefaultTableCellEditor::_sfDefaultGLenumEditor field.
inline
void DefaultTableCellEditorBase::setDefaultGLenumEditor(const ComboBoxPtr &value)
{
    _sfDefaultGLenumEditor.setValue(value);
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultBoolEditor field.
inline
CheckboxButtonPtr &DefaultTableCellEditorBase::getDefaultBoolEditor(void)
{
    return _sfDefaultBoolEditor.getValue();
}

//! Get the value of the DefaultTableCellEditor::_sfDefaultBoolEditor field.
inline
const CheckboxButtonPtr &DefaultTableCellEditorBase::getDefaultBoolEditor(void) const
{
    return _sfDefaultBoolEditor.getValue();
}

//! Set the value of the DefaultTableCellEditor::_sfDefaultBoolEditor field.
inline
void DefaultTableCellEditorBase::setDefaultBoolEditor(const CheckboxButtonPtr &value)
{
    _sfDefaultBoolEditor.setValue(value);
}


OSG_END_NAMESPACE

#define OSGDEFAULTTABLECELLEDITORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
