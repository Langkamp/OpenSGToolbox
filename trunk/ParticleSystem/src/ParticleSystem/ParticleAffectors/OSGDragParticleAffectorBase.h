/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class DragParticleAffector
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDRAGPARTICLEAFFECTORBASE_H_
#define _OSGDRAGPARTICLEAFFECTORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGParticleSystemDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGParticleAffector.h" // Parent

#include <OpenSG/OSGReal32Fields.h> // Magnitude type
#include <OpenSG/OSGBoolFields.h> // UseDirection type
#include <OpenSG/OSGVec3fFields.h> // Direction type
#include <OpenSG/OSGReal32Fields.h> // Attenuation type
#include <OpenSG/OSGReal32Fields.h> // SpeedAttenuation type
#include <OpenSG/OSGReal32Fields.h> // MaxDistance type
#include <OpenSG/OSGReal32Fields.h> // MotionAttenuation type
#include <OpenSG/OSGReal32Fields.h> // InheritVelocity type
#include <OpenSG/OSGNodeFields.h> // Beacon type

#include "OSGDragParticleAffectorFields.h"

OSG_BEGIN_NAMESPACE

class DragParticleAffector;
class BinaryDataHandler;

//! \brief DragParticleAffector Base Class.

class OSG_PARTICLESYSTEMLIB_DLLMAPPING DragParticleAffectorBase : public ParticleAffector
{
  private:

    typedef ParticleAffector    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DragParticleAffectorPtr  Ptr;

    enum
    {
        MagnitudeFieldId         = Inherited::NextFieldId,
        UseDirectionFieldId      = MagnitudeFieldId         + 1,
        DirectionFieldId         = UseDirectionFieldId      + 1,
        AttenuationFieldId       = DirectionFieldId         + 1,
        SpeedAttenuationFieldId  = AttenuationFieldId       + 1,
        MaxDistanceFieldId       = SpeedAttenuationFieldId  + 1,
        MotionAttenuationFieldId = MaxDistanceFieldId       + 1,
        InheritVelocityFieldId   = MotionAttenuationFieldId + 1,
        BeaconFieldId            = InheritVelocityFieldId   + 1,
        NextFieldId              = BeaconFieldId            + 1
    };

    static const OSG::BitVector MagnitudeFieldMask;
    static const OSG::BitVector UseDirectionFieldMask;
    static const OSG::BitVector DirectionFieldMask;
    static const OSG::BitVector AttenuationFieldMask;
    static const OSG::BitVector SpeedAttenuationFieldMask;
    static const OSG::BitVector MaxDistanceFieldMask;
    static const OSG::BitVector MotionAttenuationFieldMask;
    static const OSG::BitVector InheritVelocityFieldMask;
    static const OSG::BitVector BeaconFieldMask;


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

           SFReal32            *getSFMagnitude      (void);
           SFBool              *getSFUseDirection   (void);
           SFVec3f             *getSFDirection      (void);
           SFReal32            *getSFAttenuation    (void);
           SFReal32            *getSFSpeedAttenuation(void);
           SFReal32            *getSFMaxDistance    (void);
           SFReal32            *getSFMotionAttenuation(void);
           SFReal32            *getSFInheritVelocity(void);
           SFNodePtr           *getSFBeacon         (void);

           Real32              &getMagnitude      (void);
     const Real32              &getMagnitude      (void) const;
           bool                &getUseDirection   (void);
     const bool                &getUseDirection   (void) const;
           Vec3f               &getDirection      (void);
     const Vec3f               &getDirection      (void) const;
           Real32              &getAttenuation    (void);
     const Real32              &getAttenuation    (void) const;
           Real32              &getSpeedAttenuation(void);
     const Real32              &getSpeedAttenuation(void) const;
           Real32              &getMaxDistance    (void);
     const Real32              &getMaxDistance    (void) const;
           Real32              &getMotionAttenuation(void);
     const Real32              &getMotionAttenuation(void) const;
           Real32              &getInheritVelocity(void);
     const Real32              &getInheritVelocity(void) const;
           NodePtr             &getBeacon         (void);
     const NodePtr             &getBeacon         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMagnitude      ( const Real32 &value );
     void setUseDirection   ( const bool &value );
     void setDirection      ( const Vec3f &value );
     void setAttenuation    ( const Real32 &value );
     void setSpeedAttenuation( const Real32 &value );
     void setMaxDistance    ( const Real32 &value );
     void setMotionAttenuation( const Real32 &value );
     void setInheritVelocity( const Real32 &value );
     void setBeacon         ( const NodePtr &value );

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

    static  DragParticleAffectorPtr      create          (void); 
    static  DragParticleAffectorPtr      createEmpty     (void); 

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

    SFReal32            _sfMagnitude;
    SFBool              _sfUseDirection;
    SFVec3f             _sfDirection;
    SFReal32            _sfAttenuation;
    SFReal32            _sfSpeedAttenuation;
    SFReal32            _sfMaxDistance;
    SFReal32            _sfMotionAttenuation;
    SFReal32            _sfInheritVelocity;
    SFNodePtr           _sfBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DragParticleAffectorBase(void);
    DragParticleAffectorBase(const DragParticleAffectorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DragParticleAffectorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DragParticleAffectorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DragParticleAffectorBase *pOther,
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
    void operator =(const DragParticleAffectorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DragParticleAffectorBase *DragParticleAffectorBaseP;

typedef osgIF<DragParticleAffectorBase::isNodeCore,
              CoredNodePtr<DragParticleAffector>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DragParticleAffectorNodePtr;

typedef RefPtr<DragParticleAffectorPtr> DragParticleAffectorRefPtr;

OSG_END_NAMESPACE

#define OSGDRAGPARTICLEAFFECTORBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGDRAGPARTICLEAFFECTORBASE_H_ */
