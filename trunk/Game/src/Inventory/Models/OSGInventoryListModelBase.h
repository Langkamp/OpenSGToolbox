/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
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
 **     class InventoryListModel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGINVENTORYLISTMODELBASE_H_
#define _OSGINVENTORYLISTMODELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGGameDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/UserInterface/OSGAbstractListModel.h> // Parent

#include "Inventory/Models/Comparitors/OSGInventoryListComparitorFields.h" // Comparitor type
#include "Inventory/OSGInventoryFields.h" // CurrentInventory type
#include "Inventory/Models/InventorySubsets/OSGInventorySubsetFields.h" // CurrentSubset type

#include "OSGInventoryListModelFields.h"

OSG_BEGIN_NAMESPACE

class InventoryListModel;
class BinaryDataHandler;

//! \brief InventoryListModel Base Class.

class OSG_GAMELIB_DLLMAPPING InventoryListModelBase : public AbstractListModel
{
  private:

    typedef AbstractListModel    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef InventoryListModelPtr  Ptr;

    enum
    {
        ComparitorFieldId       = Inherited::NextFieldId,
        CurrentInventoryFieldId = ComparitorFieldId       + 1,
        CurrentSubsetFieldId    = CurrentInventoryFieldId + 1,
        NextFieldId             = CurrentSubsetFieldId    + 1
    };

    static const OSG::BitVector ComparitorFieldMask;
    static const OSG::BitVector CurrentInventoryFieldMask;
    static const OSG::BitVector CurrentSubsetFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFInventoryListComparitorPtr *editSFComparitor     (void);
     const SFInventoryListComparitorPtr *getSFComparitor     (void) const;
#ifndef OSG_2_PREP
           SFInventoryListComparitorPtr *getSFComparitor     (void);
#endif

           SFInventoryPtr      *editSFCurrentInventory(void);
     const SFInventoryPtr      *getSFCurrentInventory(void) const;
#ifndef OSG_2_PREP
           SFInventoryPtr      *getSFCurrentInventory(void);
#endif

           SFInventorySubsetPtr *editSFCurrentSubset  (void);
     const SFInventorySubsetPtr *getSFCurrentSubset  (void) const;
#ifndef OSG_2_PREP
           SFInventorySubsetPtr *getSFCurrentSubset  (void);
#endif


           InventoryListComparitorPtr &editComparitor     (void);
     const InventoryListComparitorPtr &getComparitor     (void) const;
#ifndef OSG_2_PREP
           InventoryListComparitorPtr &getComparitor     (void);
#endif

           InventoryPtr        &editCurrentInventory(void);
     const InventoryPtr        &getCurrentInventory(void) const;
#ifndef OSG_2_PREP
           InventoryPtr        &getCurrentInventory(void);
#endif

           InventorySubsetPtr  &editCurrentSubset  (void);
     const InventorySubsetPtr  &getCurrentSubset  (void) const;
#ifndef OSG_2_PREP
           InventorySubsetPtr  &getCurrentSubset  (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setComparitor     ( const InventoryListComparitorPtr &value );
     void setCurrentInventory( const InventoryPtr &value );
     void setCurrentSubset  ( const InventorySubsetPtr &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  InventoryListModelPtr      create          (void); 
    static  InventoryListModelPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFInventoryListComparitorPtr   _sfComparitor;
    SFInventoryPtr      _sfCurrentInventory;
    SFInventorySubsetPtr   _sfCurrentSubset;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    InventoryListModelBase(void);
    InventoryListModelBase(const InventoryListModelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~InventoryListModelBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      InventoryListModelBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      InventoryListModelBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const InventoryListModelBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef InventoryListModelBase *InventoryListModelBaseP;

typedef osgIF<InventoryListModelBase::isNodeCore,
              CoredNodePtr<InventoryListModel>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet InventoryListModelNodePtr;

typedef RefPtr<InventoryListModelPtr> InventoryListModelRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGINVENTORYLISTMODELBASE_H_ */
