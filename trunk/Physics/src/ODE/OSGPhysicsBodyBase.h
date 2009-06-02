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
 **     class PhysicsBody
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSBODYBASE_H_
#define _OSGPHYSICSBODYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGAttachment.h> // Parent

#include <OpenSG/OSGVec3fFields.h> // Position type
#include <OpenSG/OSGMatrixFields.h> // Rotation type
#include <OpenSG/OSGQuaternionFields.h> // Quaternion type
#include <OpenSG/OSGVec3fFields.h> // LinearVel type
#include <OpenSG/OSGVec3fFields.h> // AngularVel type
#include <OpenSG/OSGVec3fFields.h> // Force type
#include <OpenSG/OSGVec3fFields.h> // Torque type
#include <OpenSG/OSGBoolFields.h> // Enable type
#include <OpenSG/OSGInt32Fields.h> // AutoDisableFlag type
#include <OpenSG/OSGReal32Fields.h> // AutoDisableLinearThreshol type
#include <OpenSG/OSGReal32Fields.h> // AutoDisableAngularThreshol type
#include <OpenSG/OSGInt32Fields.h> // AutoDisableSteps type
#include <OpenSG/OSGReal32Fields.h> // AutoDisableTime type
#include <OpenSG/OSGInt32Fields.h> // FiniteRotationMode type
#include <OpenSG/OSGVec3fFields.h> // FiniteRotationAxis type
#include <OpenSG/OSGBoolFields.h> // GravityMode type
#include "OSGPhysicsWorld.h" // World type

#include "OSGPhysicsBodyFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsBody;
class BinaryDataHandler;

//! \brief PhysicsBody Base Class.

class OSG_PHYSICSLIB_DLLMAPPING PhysicsBodyBase : public Attachment
{
  private:

    typedef Attachment    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef PhysicsBodyPtr  Ptr;

    enum
    {
        PositionFieldId                   = Inherited::NextFieldId,
        RotationFieldId                   = PositionFieldId                   + 1,
        QuaternionFieldId                 = RotationFieldId                   + 1,
        LinearVelFieldId                  = QuaternionFieldId                 + 1,
        AngularVelFieldId                 = LinearVelFieldId                  + 1,
        ForceFieldId                      = AngularVelFieldId                 + 1,
        TorqueFieldId                     = ForceFieldId                      + 1,
        EnableFieldId                     = TorqueFieldId                     + 1,
        AutoDisableFlagFieldId            = EnableFieldId                     + 1,
        AutoDisableLinearThresholFieldId  = AutoDisableFlagFieldId            + 1,
        AutoDisableAngularThresholFieldId = AutoDisableLinearThresholFieldId  + 1,
        AutoDisableStepsFieldId           = AutoDisableAngularThresholFieldId + 1,
        AutoDisableTimeFieldId            = AutoDisableStepsFieldId           + 1,
        FiniteRotationModeFieldId         = AutoDisableTimeFieldId            + 1,
        FiniteRotationAxisFieldId         = FiniteRotationModeFieldId         + 1,
        GravityModeFieldId                = FiniteRotationAxisFieldId         + 1,
        WorldFieldId                      = GravityModeFieldId                + 1,
        NextFieldId                       = WorldFieldId                      + 1
    };

    static const OSG::BitVector PositionFieldMask;
    static const OSG::BitVector RotationFieldMask;
    static const OSG::BitVector QuaternionFieldMask;
    static const OSG::BitVector LinearVelFieldMask;
    static const OSG::BitVector AngularVelFieldMask;
    static const OSG::BitVector ForceFieldMask;
    static const OSG::BitVector TorqueFieldMask;
    static const OSG::BitVector EnableFieldMask;
    static const OSG::BitVector AutoDisableFlagFieldMask;
    static const OSG::BitVector AutoDisableLinearThresholFieldMask;
    static const OSG::BitVector AutoDisableAngularThresholFieldMask;
    static const OSG::BitVector AutoDisableStepsFieldMask;
    static const OSG::BitVector AutoDisableTimeFieldMask;
    static const OSG::BitVector FiniteRotationModeFieldMask;
    static const OSG::BitVector FiniteRotationAxisFieldMask;
    static const OSG::BitVector GravityModeFieldMask;
    static const OSG::BitVector WorldFieldMask;


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

           SFVec3f             *getSFPosition       (void);
           SFMatrix            *getSFRotation       (void);
           SFQuaternion        *getSFQuaternion     (void);
           SFVec3f             *getSFLinearVel      (void);
           SFVec3f             *getSFAngularVel     (void);
           SFVec3f             *getSFForce          (void);
           SFVec3f             *getSFTorque         (void);
           SFBool              *getSFEnable         (void);
           SFInt32             *getSFAutoDisableFlag(void);
           SFReal32            *getSFAutoDisableLinearThreshol(void);
           SFReal32            *getSFAutoDisableAngularThreshol(void);
           SFInt32             *getSFAutoDisableSteps(void);
           SFReal32            *getSFAutoDisableTime(void);
           SFInt32             *getSFFiniteRotationMode(void);
           SFVec3f             *getSFFiniteRotationAxis(void);
           SFBool              *getSFGravityMode    (void);
           SFPhysicsWorldPtr   *getSFWorld          (void);

           Vec3f               &getPosition       (void);
     const Vec3f               &getPosition       (void) const;
           Matrix              &getRotation       (void);
     const Matrix              &getRotation       (void) const;
           Quaternion          &getQuaternion     (void);
     const Quaternion          &getQuaternion     (void) const;
           Vec3f               &getLinearVel      (void);
     const Vec3f               &getLinearVel      (void) const;
           Vec3f               &getAngularVel     (void);
     const Vec3f               &getAngularVel     (void) const;
           Vec3f               &getForce          (void);
     const Vec3f               &getForce          (void) const;
           Vec3f               &getTorque         (void);
     const Vec3f               &getTorque         (void) const;
           bool                &getEnable         (void);
     const bool                &getEnable         (void) const;
           Int32               &getAutoDisableFlag(void);
     const Int32               &getAutoDisableFlag(void) const;
           Real32              &getAutoDisableLinearThreshol(void);
     const Real32              &getAutoDisableLinearThreshol(void) const;
           Real32              &getAutoDisableAngularThreshol(void);
     const Real32              &getAutoDisableAngularThreshol(void) const;
           Int32               &getAutoDisableSteps(void);
     const Int32               &getAutoDisableSteps(void) const;
           Real32              &getAutoDisableTime(void);
     const Real32              &getAutoDisableTime(void) const;
           Int32               &getFiniteRotationMode(void);
     const Int32               &getFiniteRotationMode(void) const;
           Vec3f               &getFiniteRotationAxis(void);
     const Vec3f               &getFiniteRotationAxis(void) const;
           bool                &getGravityMode    (void);
     const bool                &getGravityMode    (void) const;
           PhysicsWorldPtr     &getWorld          (void);
     const PhysicsWorldPtr     &getWorld          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setPosition       ( const Vec3f &value );
     void setRotation       ( const Matrix &value );
     void setQuaternion     ( const Quaternion &value );
     void setLinearVel      ( const Vec3f &value );
     void setAngularVel     ( const Vec3f &value );
     void setForce          ( const Vec3f &value );
     void setTorque         ( const Vec3f &value );
     void setEnable         ( const bool &value );
     void setAutoDisableFlag( const Int32 &value );
     void setAutoDisableLinearThreshol( const Real32 &value );
     void setAutoDisableAngularThreshol( const Real32 &value );
     void setAutoDisableSteps( const Int32 &value );
     void setAutoDisableTime( const Real32 &value );
     void setFiniteRotationMode( const Int32 &value );
     void setFiniteRotationAxis( const Vec3f &value );
     void setGravityMode    ( const bool &value );
     void setWorld          ( const PhysicsWorldPtr &value );

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

    static  PhysicsBodyPtr      create          (void); 
    static  PhysicsBodyPtr      createEmpty     (void); 

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

    SFVec3f             _sfPosition;
    SFMatrix            _sfRotation;
    SFQuaternion        _sfQuaternion;
    SFVec3f             _sfLinearVel;
    SFVec3f             _sfAngularVel;
    SFVec3f             _sfForce;
    SFVec3f             _sfTorque;
    SFBool              _sfEnable;
    SFInt32             _sfAutoDisableFlag;
    SFReal32            _sfAutoDisableLinearThreshol;
    SFReal32            _sfAutoDisableAngularThreshol;
    SFInt32             _sfAutoDisableSteps;
    SFReal32            _sfAutoDisableTime;
    SFInt32             _sfFiniteRotationMode;
    SFVec3f             _sfFiniteRotationAxis;
    SFBool              _sfGravityMode;
    SFPhysicsWorldPtr   _sfWorld;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsBodyBase(void);
    PhysicsBodyBase(const PhysicsBodyBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsBodyBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      PhysicsBodyBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      PhysicsBodyBase *pOther,
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
    void operator =(const PhysicsBodyBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef PhysicsBodyBase *PhysicsBodyBaseP;

typedef osgIF<PhysicsBodyBase::isNodeCore,
              CoredNodePtr<PhysicsBody>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet PhysicsBodyNodePtr;

typedef RefPtr<PhysicsBodyPtr> PhysicsBodyRefPtr;

OSG_END_NAMESPACE

#define OSGPHYSICSBODYBASE_HEADER_CVSID "@(#)$Id: OSGPhysicsBodyBase.h,v 1.2 2006/02/20 17:04:20 dirk Exp $"

#endif /* _OSGPHYSICSBODYBASE_H_ */
