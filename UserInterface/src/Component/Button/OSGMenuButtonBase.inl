/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class MenuButton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MenuButtonBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 MenuButtonBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
MenuButtonPtr MenuButtonBase::create(void) 
{
    MenuButtonPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = MenuButtonPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
MenuButtonPtr MenuButtonBase::createEmpty(void) 
{ 
    MenuButtonPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the MenuButton::_sfModel field.
inline
SFListModelPtr *MenuButtonBase::getSFModel(void)
{
    return &_sfModel;
}

//! Get the MenuButton::_sfCellGenerator field.
inline
SFComponentGeneratorPtr *MenuButtonBase::getSFCellGenerator(void)
{
    return &_sfCellGenerator;
}

//! Get the MenuButton::_sfMenuButtonPopupMenu field.
inline
SFListGeneratedPopupMenuPtr *MenuButtonBase::getSFMenuButtonPopupMenu(void)
{
    return &_sfMenuButtonPopupMenu;
}


//! Get the value of the MenuButton::_sfModel field.
inline
ListModelPtr &MenuButtonBase::getModel(void)
{
    return _sfModel.getValue();
}

//! Get the value of the MenuButton::_sfModel field.
inline
const ListModelPtr &MenuButtonBase::getModel(void) const
{
    return _sfModel.getValue();
}

//! Set the value of the MenuButton::_sfModel field.
inline
void MenuButtonBase::setModel(const ListModelPtr &value)
{
    _sfModel.setValue(value);
}

//! Get the value of the MenuButton::_sfCellGenerator field.
inline
ComponentGeneratorPtr &MenuButtonBase::getCellGenerator(void)
{
    return _sfCellGenerator.getValue();
}

//! Get the value of the MenuButton::_sfCellGenerator field.
inline
const ComponentGeneratorPtr &MenuButtonBase::getCellGenerator(void) const
{
    return _sfCellGenerator.getValue();
}

//! Set the value of the MenuButton::_sfCellGenerator field.
inline
void MenuButtonBase::setCellGenerator(const ComponentGeneratorPtr &value)
{
    _sfCellGenerator.setValue(value);
}

//! Get the value of the MenuButton::_sfMenuButtonPopupMenu field.
inline
ListGeneratedPopupMenuPtr &MenuButtonBase::getMenuButtonPopupMenu(void)
{
    return _sfMenuButtonPopupMenu.getValue();
}

//! Get the value of the MenuButton::_sfMenuButtonPopupMenu field.
inline
const ListGeneratedPopupMenuPtr &MenuButtonBase::getMenuButtonPopupMenu(void) const
{
    return _sfMenuButtonPopupMenu.getValue();
}

//! Set the value of the MenuButton::_sfMenuButtonPopupMenu field.
inline
void MenuButtonBase::setMenuButtonPopupMenu(const ListGeneratedPopupMenuPtr &value)
{
    _sfMenuButtonPopupMenu.setValue(value);
}


OSG_END_NAMESPACE

#define OSGMENUBUTTONBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

