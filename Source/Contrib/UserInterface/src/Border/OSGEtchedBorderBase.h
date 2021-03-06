/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class EtchedBorder
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGETCHEDBORDERBASE_H_
#define _OSGETCHEDBORDERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGBorder.h" // Parent

#include "OSGBaseFields.h"              // Highlight type
#include "OSGSysFields.h"               // Raised type

#include "OSGEtchedBorderFields.h"

OSG_BEGIN_NAMESPACE

class EtchedBorder;

//! \brief EtchedBorder Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING EtchedBorderBase : public Border
{
  public:

    typedef Border Inherited;
    typedef Border ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(EtchedBorder);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        HighlightFieldId = Inherited::NextFieldId,
        ShadowFieldId = HighlightFieldId + 1,
        RaisedFieldId = ShadowFieldId + 1,
        WidthFieldId = RaisedFieldId + 1,
        NextFieldId = WidthFieldId + 1
    };

    static const OSG::BitVector HighlightFieldMask =
        (TypeTraits<BitVector>::One << HighlightFieldId);
    static const OSG::BitVector ShadowFieldMask =
        (TypeTraits<BitVector>::One << ShadowFieldId);
    static const OSG::BitVector RaisedFieldMask =
        (TypeTraits<BitVector>::One << RaisedFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFColor4f         SFHighlightType;
    typedef SFColor4f         SFShadowType;
    typedef SFBool            SFRaisedType;
    typedef SFReal32          SFWidthType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFColor4f           *editSFHighlight      (void);
            const SFColor4f           *getSFHighlight       (void) const;

                  SFColor4f           *editSFShadow         (void);
            const SFColor4f           *getSFShadow          (void) const;

                  SFBool              *editSFRaised         (void);
            const SFBool              *getSFRaised          (void) const;

                  SFReal32            *editSFWidth          (void);
            const SFReal32            *getSFWidth           (void) const;


                  Color4f             &editHighlight      (void);
            const Color4f             &getHighlight       (void) const;

                  Color4f             &editShadow         (void);
            const Color4f             &getShadow          (void) const;

                  bool                &editRaised         (void);
                  bool                 getRaised          (void) const;

                  Real32              &editWidth          (void);
                  Real32               getWidth           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setHighlight      (const Color4f &value);
            void setShadow         (const Color4f &value);
            void setRaised         (const bool value);
            void setWidth          (const Real32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  EtchedBorderTransitPtr  create          (void);
    static  EtchedBorder           *createEmpty     (void);

    static  EtchedBorderTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  EtchedBorder            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  EtchedBorderTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFColor4f         _sfHighlight;
    SFColor4f         _sfShadow;
    SFBool            _sfRaised;
    SFReal32          _sfWidth;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    EtchedBorderBase(void);
    EtchedBorderBase(const EtchedBorderBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~EtchedBorderBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleHighlight       (void) const;
    EditFieldHandlePtr editHandleHighlight      (void);
    GetFieldHandlePtr  getHandleShadow          (void) const;
    EditFieldHandlePtr editHandleShadow         (void);
    GetFieldHandlePtr  getHandleRaised          (void) const;
    EditFieldHandlePtr editHandleRaised         (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      EtchedBorderBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const EtchedBorderBase &source);
};

typedef EtchedBorderBase *EtchedBorderBaseP;

OSG_END_NAMESPACE

#endif /* _OSGETCHEDBORDERBASE_H_ */
