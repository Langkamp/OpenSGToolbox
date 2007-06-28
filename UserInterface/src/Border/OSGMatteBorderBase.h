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
 **     class MatteBorder
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMATTEBORDERBASE_H_
#define _OSGMATTEBORDERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGUserInterfaceConfig.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGBorder.h" // Parent

#include <OpenSG/OSGUInt32Fields.h> // LeftWidth type
#include <OpenSG/OSGUInt32Fields.h> // RightWidth type
#include <OpenSG/OSGUInt32Fields.h> // TopWidth type
#include <OpenSG/OSGUInt32Fields.h> // BottomWidth type
#include <OpenSG/OSGColor4fFields.h> // Color type
#include <OpenSG/OSGMaterialFields.h> // Material type

#include "OSGMatteBorderFields.h"

OSG_BEGIN_NAMESPACE

class MatteBorder;
class BinaryDataHandler;

//! \brief MatteBorder Base Class.

class OSG_USER_INTERFACE_CLASS_API MatteBorderBase : public Border
{
  private:

    typedef Border    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef MatteBorderPtr  Ptr;

    enum
    {
        LeftWidthFieldId   = Inherited::NextFieldId,
        RightWidthFieldId  = LeftWidthFieldId   + 1,
        TopWidthFieldId    = RightWidthFieldId  + 1,
        BottomWidthFieldId = TopWidthFieldId    + 1,
        ColorFieldId       = BottomWidthFieldId + 1,
        MaterialFieldId    = ColorFieldId       + 1,
        NextFieldId        = MaterialFieldId    + 1
    };

    static const OSG::BitVector LeftWidthFieldMask;
    static const OSG::BitVector RightWidthFieldMask;
    static const OSG::BitVector TopWidthFieldMask;
    static const OSG::BitVector BottomWidthFieldMask;
    static const OSG::BitVector ColorFieldMask;
    static const OSG::BitVector MaterialFieldMask;


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

           SFUInt32            *getSFLeftWidth      (void);
           SFUInt32            *getSFRightWidth     (void);
           SFUInt32            *getSFTopWidth       (void);
           SFUInt32            *getSFBottomWidth    (void);
           SFColor4f           *getSFColor          (void);
           SFMaterialPtr       *getSFMaterial       (void);

           UInt32              &getLeftWidth      (void);
     const UInt32              &getLeftWidth      (void) const;
           UInt32              &getRightWidth     (void);
     const UInt32              &getRightWidth     (void) const;
           UInt32              &getTopWidth       (void);
     const UInt32              &getTopWidth       (void) const;
           UInt32              &getBottomWidth    (void);
     const UInt32              &getBottomWidth    (void) const;
           Color4f             &getColor          (void);
     const Color4f             &getColor          (void) const;
           MaterialPtr         &getMaterial       (void);
     const MaterialPtr         &getMaterial       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setLeftWidth      ( const UInt32 &value );
     void setRightWidth     ( const UInt32 &value );
     void setTopWidth       ( const UInt32 &value );
     void setBottomWidth    ( const UInt32 &value );
     void setColor          ( const Color4f &value );
     void setMaterial       ( const MaterialPtr &value );

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

    static  MatteBorderPtr      create          (void); 
    static  MatteBorderPtr      createEmpty     (void); 

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

    SFUInt32            _sfLeftWidth;
    SFUInt32            _sfRightWidth;
    SFUInt32            _sfTopWidth;
    SFUInt32            _sfBottomWidth;
    SFColor4f           _sfColor;
    SFMaterialPtr       _sfMaterial;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MatteBorderBase(void);
    MatteBorderBase(const MatteBorderBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MatteBorderBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      MatteBorderBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      MatteBorderBase *pOther,
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
    void operator =(const MatteBorderBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef MatteBorderBase *MatteBorderBaseP;

typedef osgIF<MatteBorderBase::isNodeCore,
              CoredNodePtr<MatteBorder>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet MatteBorderNodePtr;

typedef RefPtr<MatteBorderPtr> MatteBorderRefPtr;

OSG_END_NAMESPACE

#define OSGMATTEBORDERBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGMATTEBORDERBASE_H_ */