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
 **     class MouseWheelEvent
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMOUSEWHEELEVENTBASE_H_
#define _OSGMOUSEWHEELEVENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGInputEvent.h" // Parent

#include "OSGSysFields.h"               // ScrollType type
#include "OSGVecFields.h"               // Location type
#include "OSGViewportFields.h"          // Viewport type

#include "OSGMouseWheelEventFields.h"


OSG_BEGIN_NAMESPACE

class MouseWheelEvent;

//! \brief MouseWheelEvent Base Class.

class OSG_SYSTEM_DLLMAPPING MouseWheelEventBase : public InputEvent
{
  public:

    typedef InputEvent Inherited;
    typedef InputEvent ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(MouseWheelEvent);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ScrollTypeFieldId = Inherited::NextFieldId,
        ScrollOrientationFieldId = ScrollTypeFieldId + 1,
        WheelRotationFieldId = ScrollOrientationFieldId + 1,
        LocationFieldId = WheelRotationFieldId + 1,
        ViewportFieldId = LocationFieldId + 1,
        NextFieldId = ViewportFieldId + 1
    };

    static const OSG::BitVector ScrollTypeFieldMask =
        (TypeTraits<BitVector>::One << ScrollTypeFieldId);
    static const OSG::BitVector ScrollOrientationFieldMask =
        (TypeTraits<BitVector>::One << ScrollOrientationFieldId);
    static const OSG::BitVector WheelRotationFieldMask =
        (TypeTraits<BitVector>::One << WheelRotationFieldId);
    static const OSG::BitVector LocationFieldMask =
        (TypeTraits<BitVector>::One << LocationFieldId);
    static const OSG::BitVector ViewportFieldMask =
        (TypeTraits<BitVector>::One << ViewportFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt8           SFScrollTypeType;
    typedef SFUInt8           SFScrollOrientationType;
    typedef SFInt32           SFWheelRotationType;
    typedef SFPnt2f           SFLocationType;
    typedef SFUnrecViewportPtr SFViewportType;


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


            const SFUInt8             *getSFScrollType      (void) const;

            const SFUInt8             *getSFScrollOrientation (void) const;

            const SFInt32             *getSFWheelRotation   (void) const;

            const SFPnt2f             *getSFLocation        (void) const;
            const SFUnrecViewportPtr  *getSFViewport       (void) const;


                  UInt8                getScrollType      (void) const;

                  UInt8                getScrollOrientation (void) const;

                  Int32                getWheelRotation   (void) const;

            const Pnt2f               &getLocation        (void) const;

                  Viewport * getViewport       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  MouseWheelEventTransitPtr  create          (void);
    static  MouseWheelEvent           *createEmpty     (void);

    static  MouseWheelEventTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  MouseWheelEvent            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  MouseWheelEventTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt8           _sfScrollType;
    SFUInt8           _sfScrollOrientation;
    SFInt32           _sfWheelRotation;
    SFPnt2f           _sfLocation;
    SFUnrecViewportPtr _sfViewport;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MouseWheelEventBase(void);
    MouseWheelEventBase(const MouseWheelEventBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MouseWheelEventBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const MouseWheelEvent *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleScrollType      (void) const;
    EditFieldHandlePtr editHandleScrollType     (void);
    GetFieldHandlePtr  getHandleScrollOrientation (void) const;
    EditFieldHandlePtr editHandleScrollOrientation(void);
    GetFieldHandlePtr  getHandleWheelRotation   (void) const;
    EditFieldHandlePtr editHandleWheelRotation  (void);
    GetFieldHandlePtr  getHandleLocation        (void) const;
    EditFieldHandlePtr editHandleLocation       (void);
    GetFieldHandlePtr  getHandleViewport        (void) const;
    EditFieldHandlePtr editHandleViewport       (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt8             *editSFScrollType     (void);

                  SFUInt8             *editSFScrollOrientation(void);

                  SFInt32             *editSFWheelRotation  (void);

                  SFPnt2f             *editSFLocation       (void);
                  SFUnrecViewportPtr  *editSFViewport       (void);


                  UInt8               &editScrollType     (void);

                  UInt8               &editScrollOrientation(void);

                  Int32               &editWheelRotation  (void);

                  Pnt2f               &editLocation       (void);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setScrollType     (const UInt8 value);
            void setScrollOrientation(const UInt8 value);
            void setWheelRotation  (const Int32 value);
            void setLocation       (const Pnt2f &value);
            void setViewport       (Viewport * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      MouseWheelEventBase *pFrom,
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
    void operator =(const MouseWheelEventBase &source);
};

typedef MouseWheelEventBase *MouseWheelEventBaseP;

OSG_END_NAMESPACE

#endif /* _OSGMOUSEWHEELEVENTBASE_H_ */
