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
 **     class DefaultTableCellEditor
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDEFAULTTABLECELLEDITORBASE_H_
#define _OSGDEFAULTTABLECELLEDITORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGTableCellEditor.h" // Parent

#include <OpenSG/OSGUInt32Fields.h> // ClickCountToStart type
#include "Component/Text/OSGTextFieldFields.h" // DefaultEditor type
#include "Component/Text/OSGTextFieldFields.h" // DefaultStringEditor type
#include "Component/Spinner/OSGSpinnerFields.h" // DefaultNumberEditor type
#include "Component/ComboBox/OSGComboBoxFields.h" // DefaultGLenumEditor type
#include "Component/Button/OSGCheckboxButtonFields.h" // DefaultBoolEditor type

#include "OSGDefaultTableCellEditorFields.h"

OSG_BEGIN_NAMESPACE

class DefaultTableCellEditor;
class BinaryDataHandler;

//! \brief DefaultTableCellEditor Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING DefaultTableCellEditorBase : public TableCellEditor
{
  private:

    typedef TableCellEditor    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DefaultTableCellEditorPtr  Ptr;

    enum
    {
        ClickCountToStartFieldId   = Inherited::NextFieldId,
        DefaultEditorFieldId       = ClickCountToStartFieldId   + 1,
        DefaultStringEditorFieldId = DefaultEditorFieldId       + 1,
        DefaultNumberEditorFieldId = DefaultStringEditorFieldId + 1,
        DefaultGLenumEditorFieldId = DefaultNumberEditorFieldId + 1,
        DefaultBoolEditorFieldId   = DefaultGLenumEditorFieldId + 1,
        NextFieldId                = DefaultBoolEditorFieldId   + 1
    };

    static const OSG::BitVector ClickCountToStartFieldMask;
    static const OSG::BitVector DefaultEditorFieldMask;
    static const OSG::BitVector DefaultStringEditorFieldMask;
    static const OSG::BitVector DefaultNumberEditorFieldMask;
    static const OSG::BitVector DefaultGLenumEditorFieldMask;
    static const OSG::BitVector DefaultBoolEditorFieldMask;


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

           SFUInt32            *getSFClickCountToStart(void);
           SFTextFieldPtr      *getSFDefaultEditor  (void);
           SFTextFieldPtr      *getSFDefaultStringEditor(void);
           SFSpinnerPtr        *getSFDefaultNumberEditor(void);
           SFComboBoxPtr       *getSFDefaultGLenumEditor(void);
           SFCheckboxButtonPtr *getSFDefaultBoolEditor(void);

           UInt32              &getClickCountToStart(void);
     const UInt32              &getClickCountToStart(void) const;
           TextFieldPtr        &getDefaultEditor  (void);
     const TextFieldPtr        &getDefaultEditor  (void) const;
           TextFieldPtr        &getDefaultStringEditor(void);
     const TextFieldPtr        &getDefaultStringEditor(void) const;
           SpinnerPtr          &getDefaultNumberEditor(void);
     const SpinnerPtr          &getDefaultNumberEditor(void) const;
           ComboBoxPtr         &getDefaultGLenumEditor(void);
     const ComboBoxPtr         &getDefaultGLenumEditor(void) const;
           CheckboxButtonPtr   &getDefaultBoolEditor(void);
     const CheckboxButtonPtr   &getDefaultBoolEditor(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setClickCountToStart( const UInt32 &value );
     void setDefaultEditor  ( const TextFieldPtr &value );
     void setDefaultStringEditor( const TextFieldPtr &value );
     void setDefaultNumberEditor( const SpinnerPtr &value );
     void setDefaultGLenumEditor( const ComboBoxPtr &value );
     void setDefaultBoolEditor( const CheckboxButtonPtr &value );

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

    static  DefaultTableCellEditorPtr      create          (void); 
    static  DefaultTableCellEditorPtr      createEmpty     (void); 

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

    SFUInt32            _sfClickCountToStart;
    SFTextFieldPtr      _sfDefaultEditor;
    SFTextFieldPtr      _sfDefaultStringEditor;
    SFSpinnerPtr        _sfDefaultNumberEditor;
    SFComboBoxPtr       _sfDefaultGLenumEditor;
    SFCheckboxButtonPtr   _sfDefaultBoolEditor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DefaultTableCellEditorBase(void);
    DefaultTableCellEditorBase(const DefaultTableCellEditorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultTableCellEditorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DefaultTableCellEditorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DefaultTableCellEditorBase *pOther,
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
    void operator =(const DefaultTableCellEditorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DefaultTableCellEditorBase *DefaultTableCellEditorBaseP;

typedef osgIF<DefaultTableCellEditorBase::isNodeCore,
              CoredNodePtr<DefaultTableCellEditor>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DefaultTableCellEditorNodePtr;

typedef RefPtr<DefaultTableCellEditorPtr> DefaultTableCellEditorRefPtr;

OSG_END_NAMESPACE

#define OSGDEFAULTTABLECELLEDITORBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGDEFAULTTABLECELLEDITORBASE_H_ */
