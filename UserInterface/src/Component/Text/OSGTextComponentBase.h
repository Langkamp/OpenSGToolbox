/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class TextComponent
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTCOMPONENTBASE_H_
#define _OSGTEXTCOMPONENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Component/OSGComponent.h" // Parent

#include <OpenSG/OSGStringFields.h> // Text type
#include <OpenSG/OSGBoolFields.h> // Editable type
#include <OpenSG/OSGUInt32Fields.h> // CaretPosition type
#include "Text/OSGUIFont.h" // Font type
#include <OpenSG/OSGColor4fFields.h> // SelectionBoxColor type
#include <OpenSG/OSGColor4fFields.h> // SelectionTextColor type

#include "OSGTextComponentFields.h"

OSG_BEGIN_NAMESPACE

class TextComponent;
class BinaryDataHandler;

//! \brief TextComponent Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING TextComponentBase : public Component
{
  private:

    typedef Component    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TextComponentPtr  Ptr;

    enum
    {
        TextFieldId               = Inherited::NextFieldId,
        EditableFieldId           = TextFieldId               + 1,
        CaretPositionFieldId      = EditableFieldId           + 1,
        FontFieldId               = CaretPositionFieldId      + 1,
        SelectionBoxColorFieldId  = FontFieldId               + 1,
        SelectionTextColorFieldId = SelectionBoxColorFieldId  + 1,
        NextFieldId               = SelectionTextColorFieldId + 1
    };

    static const OSG::BitVector TextFieldMask;
    static const OSG::BitVector EditableFieldMask;
    static const OSG::BitVector CaretPositionFieldMask;
    static const OSG::BitVector FontFieldMask;
    static const OSG::BitVector SelectionBoxColorFieldMask;
    static const OSG::BitVector SelectionTextColorFieldMask;


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

           SFString            *getSFText           (void);
           SFBool              *getSFEditable       (void);
           SFUInt32            *getSFCaretPosition  (void);
           SFUIFontPtr         *getSFFont           (void);
           SFColor4f           *getSFSelectionBoxColor(void);
           SFColor4f           *getSFSelectionTextColor(void);

           std::string         &getText           (void);
     const std::string         &getText           (void) const;
           bool                &getEditable       (void);
     const bool                &getEditable       (void) const;
           UInt32              &getCaretPosition  (void);
     const UInt32              &getCaretPosition  (void) const;
           UIFontPtr           &getFont           (void);
     const UIFontPtr           &getFont           (void) const;
           Color4f             &getSelectionBoxColor(void);
     const Color4f             &getSelectionBoxColor(void) const;
           Color4f             &getSelectionTextColor(void);
     const Color4f             &getSelectionTextColor(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setText           ( const std::string &value );
     void setEditable       ( const bool &value );
     void setCaretPosition  ( const UInt32 &value );
     void setFont           ( const UIFontPtr &value );
     void setSelectionBoxColor( const Color4f &value );
     void setSelectionTextColor( const Color4f &value );

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
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFString            _sfText;
    SFBool              _sfEditable;
    SFUInt32            _sfCaretPosition;
    SFUIFontPtr         _sfFont;
    SFColor4f           _sfSelectionBoxColor;
    SFColor4f           _sfSelectionTextColor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextComponentBase(void);
    TextComponentBase(const TextComponentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextComponentBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TextComponentBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TextComponentBase *pOther,
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
    void operator =(const TextComponentBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TextComponentBase *TextComponentBaseP;

typedef osgIF<TextComponentBase::isNodeCore,
              CoredNodePtr<TextComponent>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TextComponentNodePtr;

typedef RefPtr<TextComponentPtr> TextComponentRefPtr;

OSG_END_NAMESPACE

#define OSGTEXTCOMPONENTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGTEXTCOMPONENTBASE_H_ */
