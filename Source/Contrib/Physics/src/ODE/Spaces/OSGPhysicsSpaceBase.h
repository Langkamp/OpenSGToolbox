/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsSpace
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSSPACEBASE_H_
#define _OSGPHYSICSSPACEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGPhysicsGeom.h" // Parent

#include "OSGSysFields.h"               // Cleanup type
#include "OSGPhysicsHandlerFields.h"    // InternalParentHandler type
#include "OSGCollisionContactParametersFields.h" // DefaultCollisionParameters type

#include "OSGPhysicsSpaceFields.h"

//Event Producer Headers
#include "OSGEventProducer.h"
#include "OSGEventProducerType.h"
#include "OSGMethodDescription.h"
#include "OSGEventProducerPtrType.h"

OSG_BEGIN_NAMESPACE

class PhysicsSpace;

//! \brief PhysicsSpace Base Class.

class OSG_CONTRIBPHYSICS_DLLMAPPING PhysicsSpaceBase : public PhysicsGeom
{
  public:

    typedef PhysicsGeom Inherited;
    typedef PhysicsGeom ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PhysicsSpace);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CleanupFieldId = Inherited::NextFieldId,
        SublevelFieldId = CleanupFieldId + 1,
        InternalParentHandlerFieldId = SublevelFieldId + 1,
        DefaultCollisionParametersFieldId = InternalParentHandlerFieldId + 1,
        Category1FieldId = DefaultCollisionParametersFieldId + 1,
        Category2FieldId = Category1FieldId + 1,
        CategoryCollisionParametersFieldId = Category2FieldId + 1,
        EventProducerFieldId = CategoryCollisionParametersFieldId + 1,
        NextFieldId = EventProducerFieldId + 1
    };

    static const OSG::BitVector CleanupFieldMask =
        (TypeTraits<BitVector>::One << CleanupFieldId);
    static const OSG::BitVector SublevelFieldMask =
        (TypeTraits<BitVector>::One << SublevelFieldId);
    static const OSG::BitVector InternalParentHandlerFieldMask =
        (TypeTraits<BitVector>::One << InternalParentHandlerFieldId);
    static const OSG::BitVector DefaultCollisionParametersFieldMask =
        (TypeTraits<BitVector>::One << DefaultCollisionParametersFieldId);
    static const OSG::BitVector Category1FieldMask =
        (TypeTraits<BitVector>::One << Category1FieldId);
    static const OSG::BitVector Category2FieldMask =
        (TypeTraits<BitVector>::One << Category2FieldId);
    static const OSG::BitVector CategoryCollisionParametersFieldMask =
        (TypeTraits<BitVector>::One << CategoryCollisionParametersFieldId);
    static const OSG::BitVector EventProducerFieldMask =
        (TypeTraits<BitVector>::One << EventProducerFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFBool            SFCleanupType;
    typedef SFInt32           SFSublevelType;
    typedef SFUnrecPhysicsHandlerPtr SFInternalParentHandlerType;
    typedef SFUnrecCollisionContactParametersPtr SFDefaultCollisionParametersType;
    typedef MFUInt64          MFCategory1Type;
    typedef MFUInt64          MFCategory2Type;
    typedef MFUnrecCollisionContactParametersPtr MFCategoryCollisionParametersType;
    typedef SFEventProducerPtr          SFEventProducerType;

    enum
    {
        CollisionMethodId = 1,
        NextProducedMethodId = CollisionMethodId + 1
    };

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

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


                  SFBool              *editSFCleanup        (void);
            const SFBool              *getSFCleanup         (void) const;

                  SFInt32             *editSFSublevel       (void);
            const SFInt32             *getSFSublevel        (void) const;
            const SFUnrecCollisionContactParametersPtr *getSFDefaultCollisionParameters(void) const;
                  SFUnrecCollisionContactParametersPtr *editSFDefaultCollisionParameters(void);


                  bool                &editCleanup        (void);
                  bool                 getCleanup         (void) const;

                  Int32               &editSublevel       (void);
                  Int32                getSublevel        (void) const;

                  CollisionContactParameters * getDefaultCollisionParameters(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCleanup        (const bool value);
            void setSublevel       (const Int32 value);
            void setDefaultCollisionParameters(CollisionContactParameters * const value);

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
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 

    EventConnection          attachActivity             (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId);
    bool                     isActivityAttached         (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId) const;
    UInt32                   getNumActivitiesAttached   (UInt32 ProducedEventId) const;
    ActivityRefPtr           getAttachedActivity        (UInt32 ProducedEventId,
                                                         UInt32 ActivityIndex) const;
    void                     detachActivity             (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId);
    UInt32                   getNumProducedEvents       (void) const;
    const MethodDescription *getProducedEventDescription(const std::string &ProducedEventName) const;
    const MethodDescription *getProducedEventDescription(UInt32 ProducedEventId) const;
    UInt32                   getProducedEventId         (const std::string &ProducedEventName) const;

    SFEventProducerPtr *editSFEventProducer(void);
    EventProducerPtr   &editEventProducer  (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  PhysicsSpaceTransitPtr  create          (void);
    static  PhysicsSpace           *createEmpty     (void);

    static  PhysicsSpaceTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PhysicsSpace            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PhysicsSpaceTransitPtr  createDependent  (BitVector bFlags);

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
    /*---------------------------------------------------------------------*/
    /*! \name                    Event Producer                            */
    /*! \{                                                                 */
    EventProducer _Producer;

    /*! \}                                                                 */

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFBool            _sfCleanup;
    SFInt32           _sfSublevel;
    SFUnrecPhysicsHandlerPtr _sfInternalParentHandler;
    SFUnrecCollisionContactParametersPtr _sfDefaultCollisionParameters;
    MFUInt64          _mfCategory1;
    MFUInt64          _mfCategory2;
    MFUnrecCollisionContactParametersPtr _mfCategoryCollisionParameters;
    SFEventProducerPtr _sfEventProducer;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsSpaceBase(void);
    PhysicsSpaceBase(const PhysicsSpaceBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsSpaceBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const PhysicsSpace *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleCleanup         (void) const;
    EditFieldHandlePtr editHandleCleanup        (void);
    GetFieldHandlePtr  getHandleSublevel        (void) const;
    EditFieldHandlePtr editHandleSublevel       (void);
    GetFieldHandlePtr  getHandleInternalParentHandler (void) const;
    EditFieldHandlePtr editHandleInternalParentHandler(void);
    GetFieldHandlePtr  getHandleDefaultCollisionParameters (void) const;
    EditFieldHandlePtr editHandleDefaultCollisionParameters(void);
    GetFieldHandlePtr  getHandleCategory1       (void) const;
    EditFieldHandlePtr editHandleCategory1      (void);
    GetFieldHandlePtr  getHandleCategory2       (void) const;
    EditFieldHandlePtr editHandleCategory2      (void);
    GetFieldHandlePtr  getHandleCategoryCollisionParameters (void) const;
    EditFieldHandlePtr editHandleCategoryCollisionParameters(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecPhysicsHandlerPtr *getSFInternalParentHandler (void) const;
                  SFUnrecPhysicsHandlerPtr *editSFInternalParentHandler(void);

                  MFUInt64            *editMFCategory1      (void);
            const MFUInt64            *getMFCategory1       (void) const;

                  MFUInt64            *editMFCategory2      (void);
            const MFUInt64            *getMFCategory2       (void) const;
            const MFUnrecCollisionContactParametersPtr *getMFCategoryCollisionParameters (void) const;
                  MFUnrecCollisionContactParametersPtr *editMFCategoryCollisionParameters(void);


                  PhysicsHandler * getInternalParentHandler(void) const;

                  UInt64              &editCategory1      (const UInt32 index);
                  UInt64               getCategory1       (const UInt32 index) const;

                  UInt64              &editCategory2      (const UInt32 index);
                  UInt64               getCategory2       (const UInt32 index) const;

                  CollisionContactParameters * getCategoryCollisionParameters(const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInternalParentHandler(PhysicsHandler * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToCategoryCollisionParameters           (CollisionContactParameters * const value   );
    void assignCategoryCollisionParameters           (const MFUnrecCollisionContactParametersPtr &value);
    void removeFromCategoryCollisionParameters (UInt32                uiIndex );
    void removeObjFromCategoryCollisionParameters(CollisionContactParameters * const value   );
    void clearCategoryCollisionParameters            (void                          );

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

            void execSync (      PhysicsSpaceBase *pFrom,
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
    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PhysicsSpaceBase &source);
};

typedef PhysicsSpaceBase *PhysicsSpaceBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSSPACEBASE_H_ */
