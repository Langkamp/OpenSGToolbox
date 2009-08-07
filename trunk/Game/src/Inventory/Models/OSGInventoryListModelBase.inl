/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
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
 **     class InventoryListModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &InventoryListModelBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 InventoryListModelBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
InventoryListModelPtr InventoryListModelBase::create(void) 
{
    InventoryListModelPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = InventoryListModelPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
InventoryListModelPtr InventoryListModelBase::createEmpty(void) 
{ 
    InventoryListModelPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the InventoryListModel::_sfComparitor field.
inline
const SFInventoryListComparitorPtr *InventoryListModelBase::getSFComparitor(void) const
{
    return &_sfComparitor;
}

//! Get the InventoryListModel::_sfComparitor field.
inline
SFInventoryListComparitorPtr *InventoryListModelBase::editSFComparitor(void)
{
    return &_sfComparitor;
}

#ifndef OSG_2_PREP
//! Get the InventoryListModel::_sfComparitor field.
inline
SFInventoryListComparitorPtr *InventoryListModelBase::getSFComparitor(void)
{
    return &_sfComparitor;
}
#endif

//! Get the InventoryListModel::_sfCurrentInventory field.
inline
const SFInventoryPtr *InventoryListModelBase::getSFCurrentInventory(void) const
{
    return &_sfCurrentInventory;
}

//! Get the InventoryListModel::_sfCurrentInventory field.
inline
SFInventoryPtr *InventoryListModelBase::editSFCurrentInventory(void)
{
    return &_sfCurrentInventory;
}

#ifndef OSG_2_PREP
//! Get the InventoryListModel::_sfCurrentInventory field.
inline
SFInventoryPtr *InventoryListModelBase::getSFCurrentInventory(void)
{
    return &_sfCurrentInventory;
}
#endif

//! Get the InventoryListModel::_sfCurrentSubset field.
inline
const SFInventorySubsetPtr *InventoryListModelBase::getSFCurrentSubset(void) const
{
    return &_sfCurrentSubset;
}

//! Get the InventoryListModel::_sfCurrentSubset field.
inline
SFInventorySubsetPtr *InventoryListModelBase::editSFCurrentSubset(void)
{
    return &_sfCurrentSubset;
}

#ifndef OSG_2_PREP
//! Get the InventoryListModel::_sfCurrentSubset field.
inline
SFInventorySubsetPtr *InventoryListModelBase::getSFCurrentSubset(void)
{
    return &_sfCurrentSubset;
}
#endif


//! Get the value of the InventoryListModel::_sfComparitor field.
inline
InventoryListComparitorPtr &InventoryListModelBase::editComparitor(void)
{
    return _sfComparitor.getValue();
}

//! Get the value of the InventoryListModel::_sfComparitor field.
inline
const InventoryListComparitorPtr &InventoryListModelBase::getComparitor(void) const
{
    return _sfComparitor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the InventoryListModel::_sfComparitor field.
inline
InventoryListComparitorPtr &InventoryListModelBase::getComparitor(void)
{
    return _sfComparitor.getValue();
}
#endif

//! Set the value of the InventoryListModel::_sfComparitor field.
inline
void InventoryListModelBase::setComparitor(const InventoryListComparitorPtr &value)
{
    _sfComparitor.setValue(value);
}

//! Get the value of the InventoryListModel::_sfCurrentInventory field.
inline
InventoryPtr &InventoryListModelBase::editCurrentInventory(void)
{
    return _sfCurrentInventory.getValue();
}

//! Get the value of the InventoryListModel::_sfCurrentInventory field.
inline
const InventoryPtr &InventoryListModelBase::getCurrentInventory(void) const
{
    return _sfCurrentInventory.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the InventoryListModel::_sfCurrentInventory field.
inline
InventoryPtr &InventoryListModelBase::getCurrentInventory(void)
{
    return _sfCurrentInventory.getValue();
}
#endif

//! Set the value of the InventoryListModel::_sfCurrentInventory field.
inline
void InventoryListModelBase::setCurrentInventory(const InventoryPtr &value)
{
    _sfCurrentInventory.setValue(value);
}

//! Get the value of the InventoryListModel::_sfCurrentSubset field.
inline
InventorySubsetPtr &InventoryListModelBase::editCurrentSubset(void)
{
    return _sfCurrentSubset.getValue();
}

//! Get the value of the InventoryListModel::_sfCurrentSubset field.
inline
const InventorySubsetPtr &InventoryListModelBase::getCurrentSubset(void) const
{
    return _sfCurrentSubset.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the InventoryListModel::_sfCurrentSubset field.
inline
InventorySubsetPtr &InventoryListModelBase::getCurrentSubset(void)
{
    return _sfCurrentSubset.getValue();
}
#endif

//! Set the value of the InventoryListModel::_sfCurrentSubset field.
inline
void InventoryListModelBase::setCurrentSubset(const InventorySubsetPtr &value)
{
    _sfCurrentSubset.setValue(value);
}


OSG_END_NAMESPACE

