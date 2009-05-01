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
 **     class TableColumn
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTABLECOLUMNBASE_H_
#define _OSGTABLECOLUMNBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGFieldContainer.h> // Parent

#include <OpenSG/OSGUInt32Fields.h> // MaxWidth type
#include <OpenSG/OSGUInt32Fields.h> // MinWidth type
#include <OpenSG/OSGUInt32Fields.h> // ModelIndex type
#include <OpenSG/OSGUInt32Fields.h> // PreferredWidth type
#include <OpenSG/OSGUInt32Fields.h> // Width type
#include <OpenSG/OSGBoolFields.h> // Resizable type
#include "Component/Table/Editors/OSGTableCellEditorFields.h" // CellEditor type

#include "OSGTableColumnFields.h"

OSG_BEGIN_NAMESPACE

class TableColumn;
class BinaryDataHandler;

//! \brief TableColumn Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING TableColumnBase : public FieldContainer
{
  private:

    typedef FieldContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TableColumnPtr  Ptr;

    enum
    {
        MaxWidthFieldId       = Inherited::NextFieldId,
        MinWidthFieldId       = MaxWidthFieldId       + 1,
        ModelIndexFieldId     = MinWidthFieldId       + 1,
        PreferredWidthFieldId = ModelIndexFieldId     + 1,
        WidthFieldId          = PreferredWidthFieldId + 1,
        ResizableFieldId      = WidthFieldId          + 1,
        CellEditorFieldId     = ResizableFieldId      + 1,
        NextFieldId           = CellEditorFieldId     + 1
    };

    static const OSG::BitVector MaxWidthFieldMask;
    static const OSG::BitVector MinWidthFieldMask;
    static const OSG::BitVector ModelIndexFieldMask;
    static const OSG::BitVector PreferredWidthFieldMask;
    static const OSG::BitVector WidthFieldMask;
    static const OSG::BitVector ResizableFieldMask;
    static const OSG::BitVector CellEditorFieldMask;


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

           SFUInt32            *getSFMaxWidth       (void);
           SFUInt32            *getSFMinWidth       (void);
           SFUInt32            *getSFModelIndex     (void);
           SFUInt32            *getSFPreferredWidth (void);
           SFUInt32            *getSFWidth          (void);
           SFBool              *getSFResizable      (void);
           SFTableCellEditorPtr *getSFCellEditor     (void);

           UInt32              &getMaxWidth       (void);
     const UInt32              &getMaxWidth       (void) const;
           UInt32              &getMinWidth       (void);
     const UInt32              &getMinWidth       (void) const;
           UInt32              &getModelIndex     (void);
     const UInt32              &getModelIndex     (void) const;
           UInt32              &getPreferredWidth (void);
     const UInt32              &getPreferredWidth (void) const;
           UInt32              &getWidth          (void);
     const UInt32              &getWidth          (void) const;
           bool                &getResizable      (void);
     const bool                &getResizable      (void) const;
           TableCellEditorPtr  &getCellEditor     (void);
     const TableCellEditorPtr  &getCellEditor     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMaxWidth       ( const UInt32 &value );
     void setMinWidth       ( const UInt32 &value );
     void setModelIndex     ( const UInt32 &value );
     void setPreferredWidth ( const UInt32 &value );
     void setWidth          ( const UInt32 &value );
     void setResizable      ( const bool &value );
     void setCellEditor     ( const TableCellEditorPtr &value );

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

    static  TableColumnPtr      create          (void); 
    static  TableColumnPtr      createEmpty     (void); 

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

    SFUInt32            _sfMaxWidth;
    SFUInt32            _sfMinWidth;
    SFUInt32            _sfModelIndex;
    SFUInt32            _sfPreferredWidth;
    SFUInt32            _sfWidth;
    SFBool              _sfResizable;
    SFTableCellEditorPtr   _sfCellEditor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TableColumnBase(void);
    TableColumnBase(const TableColumnBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TableColumnBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TableColumnBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TableColumnBase *pOther,
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
    void operator =(const TableColumnBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TableColumnBase *TableColumnBaseP;

typedef osgIF<TableColumnBase::isNodeCore,
              CoredNodePtr<TableColumn>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TableColumnNodePtr;

typedef RefPtr<TableColumnPtr> TableColumnRefPtr;

OSG_END_NAMESPACE

#define OSGTABLECOLUMNBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGTABLECOLUMNBASE_H_ */