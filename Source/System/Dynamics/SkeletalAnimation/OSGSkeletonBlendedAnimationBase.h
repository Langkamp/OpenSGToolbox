/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), David Naylor               *
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
 **     class SkeletonBlendedAnimation
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKELETONBLENDEDANIMATIONBASE_H_
#define _OSGSKELETONBLENDEDANIMATIONBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAnimation.h" // Parent

#include "OSGSkeletonAnimationFields.h" // SkeletonAnimations type
#include "OSGSysFields.h"               // BlendAmounts type

#include "OSGSkeletonBlendedAnimationFields.h"

OSG_BEGIN_NAMESPACE

class SkeletonBlendedAnimation;

//! \brief SkeletonBlendedAnimation Base Class.

class OSG_DYNAMICS_DLLMAPPING SkeletonBlendedAnimationBase : public Animation
{
  public:

    typedef Animation Inherited;
    typedef Animation ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SkeletonBlendedAnimation);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SkeletonAnimationsFieldId = Inherited::NextFieldId,
        BlendAmountsFieldId = SkeletonAnimationsFieldId + 1,
        OverrideStatusesFieldId = BlendAmountsFieldId + 1,
        NextFieldId = OverrideStatusesFieldId + 1
    };

    static const OSG::BitVector SkeletonAnimationsFieldMask =
        (TypeTraits<BitVector>::One << SkeletonAnimationsFieldId);
    static const OSG::BitVector BlendAmountsFieldMask =
        (TypeTraits<BitVector>::One << BlendAmountsFieldId);
    static const OSG::BitVector OverrideStatusesFieldMask =
        (TypeTraits<BitVector>::One << OverrideStatusesFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecSkeletonAnimationPtr MFSkeletonAnimationsType;
    typedef MFReal32          MFBlendAmountsType;
    typedef MFUInt8           MFOverrideStatusesType;

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

    static  SkeletonBlendedAnimationTransitPtr  create          (void);
    static  SkeletonBlendedAnimation           *createEmpty     (void);

    static  SkeletonBlendedAnimationTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SkeletonBlendedAnimation            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SkeletonBlendedAnimationTransitPtr  createDependent  (BitVector bFlags);

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

    MFUnrecSkeletonAnimationPtr _mfSkeletonAnimations;
    MFReal32          _mfBlendAmounts;
    MFUInt8           _mfOverrideStatuses;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkeletonBlendedAnimationBase(void);
    SkeletonBlendedAnimationBase(const SkeletonBlendedAnimationBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkeletonBlendedAnimationBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SkeletonBlendedAnimation *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleSkeletonAnimations (void) const;
    EditFieldHandlePtr editHandleSkeletonAnimations(void);
    GetFieldHandlePtr  getHandleBlendAmounts    (void) const;
    EditFieldHandlePtr editHandleBlendAmounts   (void);
    GetFieldHandlePtr  getHandleOverrideStatuses (void) const;
    EditFieldHandlePtr editHandleOverrideStatuses(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const MFUnrecSkeletonAnimationPtr *getMFSkeletonAnimations (void) const;
                  MFUnrecSkeletonAnimationPtr *editMFSkeletonAnimations(void);

                  MFReal32            *editMFBlendAmounts   (void);
            const MFReal32            *getMFBlendAmounts    (void) const;

                  MFUInt8             *editMFOverrideStatuses(void);
            const MFUInt8             *getMFOverrideStatuses (void) const;


                  SkeletonAnimation * getSkeletonAnimations(const UInt32 index) const;

                  Real32              &editBlendAmounts   (const UInt32 index);
                  Real32               getBlendAmounts    (const UInt32 index) const;

                  UInt8               &editOverrideStatuses(const UInt32 index);
                  UInt8                getOverrideStatuses (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToSkeletonAnimations           (SkeletonAnimation * const value   );
    void assignSkeletonAnimations           (const MFUnrecSkeletonAnimationPtr &value);
    void removeFromSkeletonAnimations (UInt32                uiIndex );
    void removeObjFromSkeletonAnimations(SkeletonAnimation * const value   );
    void clearSkeletonAnimations            (void                          );

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

            void execSync (      SkeletonBlendedAnimationBase *pFrom,
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
    void operator =(const SkeletonBlendedAnimationBase &source);
};

typedef SkeletonBlendedAnimationBase *SkeletonBlendedAnimationBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSKELETONBLENDEDANIMATIONBASE_H_ */