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
 **     class BevelBorder
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBEVELBORDERBASE_H_
#define _OSGBEVELBORDERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGBorder.h" // Parent

#include <OpenSG/OSGColor4fFields.h> // HighlightInner type
#include <OpenSG/OSGReal32Fields.h> // Width type
#include <OpenSG/OSGColor4fFields.h> // HighlightOuter type
#include <OpenSG/OSGColor4fFields.h> // ShadowInner type
#include <OpenSG/OSGColor4fFields.h> // ShadowOuter type
#include <OpenSG/OSGBoolFields.h> // Raised type

#include "OSGBevelBorderFields.h"

OSG_BEGIN_NAMESPACE

class BevelBorder;
class BinaryDataHandler;

//! \brief BevelBorder Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING BevelBorderBase : public Border
{
  private:

    typedef Border    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef BevelBorderPtr  Ptr;

    enum
    {
        HighlightInnerFieldId = Inherited::NextFieldId,
        WidthFieldId          = HighlightInnerFieldId + 1,
        HighlightOuterFieldId = WidthFieldId          + 1,
        ShadowInnerFieldId    = HighlightOuterFieldId + 1,
        ShadowOuterFieldId    = ShadowInnerFieldId    + 1,
        RaisedFieldId         = ShadowOuterFieldId    + 1,
        NextFieldId           = RaisedFieldId         + 1
    };

    static const OSG::BitVector HighlightInnerFieldMask;
    static const OSG::BitVector WidthFieldMask;
    static const OSG::BitVector HighlightOuterFieldMask;
    static const OSG::BitVector ShadowInnerFieldMask;
    static const OSG::BitVector ShadowOuterFieldMask;
    static const OSG::BitVector RaisedFieldMask;


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

           SFColor4f           *getSFHighlightInner (void);
           SFReal32            *getSFWidth          (void);
           SFColor4f           *getSFHighlightOuter (void);
           SFColor4f           *getSFShadowInner    (void);
           SFColor4f           *getSFShadowOuter    (void);
           SFBool              *getSFRaised         (void);

           Color4f             &getHighlightInner (void);
     const Color4f             &getHighlightInner (void) const;
           Real32              &getWidth          (void);
     const Real32              &getWidth          (void) const;
           Color4f             &getHighlightOuter (void);
     const Color4f             &getHighlightOuter (void) const;
           Color4f             &getShadowInner    (void);
     const Color4f             &getShadowInner    (void) const;
           Color4f             &getShadowOuter    (void);
     const Color4f             &getShadowOuter    (void) const;
           bool                &getRaised         (void);
     const bool                &getRaised         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setHighlightInner ( const Color4f &value );
     void setWidth          ( const Real32 &value );
     void setHighlightOuter ( const Color4f &value );
     void setShadowInner    ( const Color4f &value );
     void setShadowOuter    ( const Color4f &value );
     void setRaised         ( const bool &value );

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

    static  BevelBorderPtr      create          (void); 
    static  BevelBorderPtr      createEmpty     (void); 

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

    SFColor4f           _sfHighlightInner;
    SFReal32            _sfWidth;
    SFColor4f           _sfHighlightOuter;
    SFColor4f           _sfShadowInner;
    SFColor4f           _sfShadowOuter;
    SFBool              _sfRaised;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BevelBorderBase(void);
    BevelBorderBase(const BevelBorderBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BevelBorderBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      BevelBorderBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      BevelBorderBase *pOther,
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
    void operator =(const BevelBorderBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef BevelBorderBase *BevelBorderBaseP;

typedef osgIF<BevelBorderBase::isNodeCore,
              CoredNodePtr<BevelBorder>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet BevelBorderNodePtr;

typedef RefPtr<BevelBorderPtr> BevelBorderRefPtr;

OSG_END_NAMESPACE

#define OSGBEVELBORDERBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGBEVELBORDERBASE_H_ */
