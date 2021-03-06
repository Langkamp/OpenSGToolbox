/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class TurbulenceParticleAffector
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTURBULENCEPARTICLEAFFECTORBASE_H_
#define _OSGTURBULENCEPARTICLEAFFECTORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGParticleAffector.h" // Parent

#include "OSGPerlinNoiseDistribution1DFields.h" // PerlinDistribution type
#include "OSGSysFields.h"               // Amplitude type
#include "OSGVecFields.h"               // Phase type
#include "OSGNodeFields.h"              // Beacon type

#include "OSGTurbulenceParticleAffectorFields.h"

OSG_BEGIN_NAMESPACE

class TurbulenceParticleAffector;

//! \brief TurbulenceParticleAffector Base Class.

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING TurbulenceParticleAffectorBase : public ParticleAffector
{
  public:

    typedef ParticleAffector Inherited;
    typedef ParticleAffector ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TurbulenceParticleAffector);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PerlinDistributionFieldId = Inherited::NextFieldId,
        AmplitudeFieldId = PerlinDistributionFieldId + 1,
        InterpolationTypeFieldId = AmplitudeFieldId + 1,
        PhaseFieldId = InterpolationTypeFieldId + 1,
        PersistanceFieldId = PhaseFieldId + 1,
        FrequencyFieldId = PersistanceFieldId + 1,
        OctavesFieldId = FrequencyFieldId + 1,
        BeaconFieldId = OctavesFieldId + 1,
        AttenuationFieldId = BeaconFieldId + 1,
        MaxDistanceFieldId = AttenuationFieldId + 1,
        NextFieldId = MaxDistanceFieldId + 1
    };

    static const OSG::BitVector PerlinDistributionFieldMask =
        (TypeTraits<BitVector>::One << PerlinDistributionFieldId);
    static const OSG::BitVector AmplitudeFieldMask =
        (TypeTraits<BitVector>::One << AmplitudeFieldId);
    static const OSG::BitVector InterpolationTypeFieldMask =
        (TypeTraits<BitVector>::One << InterpolationTypeFieldId);
    static const OSG::BitVector PhaseFieldMask =
        (TypeTraits<BitVector>::One << PhaseFieldId);
    static const OSG::BitVector PersistanceFieldMask =
        (TypeTraits<BitVector>::One << PersistanceFieldId);
    static const OSG::BitVector FrequencyFieldMask =
        (TypeTraits<BitVector>::One << FrequencyFieldId);
    static const OSG::BitVector OctavesFieldMask =
        (TypeTraits<BitVector>::One << OctavesFieldId);
    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
    static const OSG::BitVector AttenuationFieldMask =
        (TypeTraits<BitVector>::One << AttenuationFieldId);
    static const OSG::BitVector MaxDistanceFieldMask =
        (TypeTraits<BitVector>::One << MaxDistanceFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecPerlinNoiseDistribution1DPtr SFPerlinDistributionType;
    typedef SFReal32          SFAmplitudeType;
    typedef SFUInt32          SFInterpolationTypeType;
    typedef SFVec3f           SFPhaseType;
    typedef SFReal32          SFPersistanceType;
    typedef SFReal32          SFFrequencyType;
    typedef SFUInt32          SFOctavesType;
    typedef SFUnrecNodePtr    SFBeaconType;
    typedef SFReal32          SFAttenuationType;
    typedef SFReal32          SFMaxDistanceType;

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

            const SFUnrecPerlinNoiseDistribution1DPtr *getSFPerlinDistribution(void) const;
                  SFUnrecPerlinNoiseDistribution1DPtr *editSFPerlinDistribution(void);

                  SFReal32            *editSFAmplitude      (void);
            const SFReal32            *getSFAmplitude       (void) const;

                  SFUInt32            *editSFInterpolationType(void);
            const SFUInt32            *getSFInterpolationType (void) const;

                  SFVec3f             *editSFPhase          (void);
            const SFVec3f             *getSFPhase           (void) const;

                  SFReal32            *editSFPersistance    (void);
            const SFReal32            *getSFPersistance     (void) const;

                  SFReal32            *editSFFrequency      (void);
            const SFReal32            *getSFFrequency       (void) const;

                  SFUInt32            *editSFOctaves        (void);
            const SFUInt32            *getSFOctaves         (void) const;
            const SFUnrecNodePtr      *getSFBeacon         (void) const;
                  SFUnrecNodePtr      *editSFBeacon         (void);

                  SFReal32            *editSFAttenuation    (void);
            const SFReal32            *getSFAttenuation     (void) const;

                  SFReal32            *editSFMaxDistance    (void);
            const SFReal32            *getSFMaxDistance     (void) const;


                  PerlinNoiseDistribution1D * getPerlinDistribution(void) const;

                  Real32              &editAmplitude      (void);
                  Real32               getAmplitude       (void) const;

                  UInt32              &editInterpolationType(void);
                  UInt32               getInterpolationType (void) const;

                  Vec3f               &editPhase          (void);
            const Vec3f               &getPhase           (void) const;

                  Real32              &editPersistance    (void);
                  Real32               getPersistance     (void) const;

                  Real32              &editFrequency      (void);
                  Real32               getFrequency       (void) const;

                  UInt32              &editOctaves        (void);
                  UInt32               getOctaves         (void) const;

                  Node * getBeacon         (void) const;

                  Real32              &editAttenuation    (void);
                  Real32               getAttenuation     (void) const;

                  Real32              &editMaxDistance    (void);
                  Real32               getMaxDistance     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPerlinDistribution(PerlinNoiseDistribution1D * const value);
            void setAmplitude      (const Real32 value);
            void setInterpolationType(const UInt32 value);
            void setPhase          (const Vec3f &value);
            void setPersistance    (const Real32 value);
            void setFrequency      (const Real32 value);
            void setOctaves        (const UInt32 value);
            void setBeacon         (Node * const value);
            void setAttenuation    (const Real32 value);
            void setMaxDistance    (const Real32 value);

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

    static  TurbulenceParticleAffectorTransitPtr  create          (void);
    static  TurbulenceParticleAffector           *createEmpty     (void);

    static  TurbulenceParticleAffectorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TurbulenceParticleAffector            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TurbulenceParticleAffectorTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecPerlinNoiseDistribution1DPtr _sfPerlinDistribution;
    SFReal32          _sfAmplitude;
    SFUInt32          _sfInterpolationType;
    SFVec3f           _sfPhase;
    SFReal32          _sfPersistance;
    SFReal32          _sfFrequency;
    SFUInt32          _sfOctaves;
    SFUnrecNodePtr    _sfBeacon;
    SFReal32          _sfAttenuation;
    SFReal32          _sfMaxDistance;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TurbulenceParticleAffectorBase(void);
    TurbulenceParticleAffectorBase(const TurbulenceParticleAffectorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TurbulenceParticleAffectorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TurbulenceParticleAffector *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePerlinDistribution (void) const;
    EditFieldHandlePtr editHandlePerlinDistribution(void);
    GetFieldHandlePtr  getHandleAmplitude       (void) const;
    EditFieldHandlePtr editHandleAmplitude      (void);
    GetFieldHandlePtr  getHandleInterpolationType (void) const;
    EditFieldHandlePtr editHandleInterpolationType(void);
    GetFieldHandlePtr  getHandlePhase           (void) const;
    EditFieldHandlePtr editHandlePhase          (void);
    GetFieldHandlePtr  getHandlePersistance     (void) const;
    EditFieldHandlePtr editHandlePersistance    (void);
    GetFieldHandlePtr  getHandleFrequency       (void) const;
    EditFieldHandlePtr editHandleFrequency      (void);
    GetFieldHandlePtr  getHandleOctaves         (void) const;
    EditFieldHandlePtr editHandleOctaves        (void);
    GetFieldHandlePtr  getHandleBeacon          (void) const;
    EditFieldHandlePtr editHandleBeacon         (void);
    GetFieldHandlePtr  getHandleAttenuation     (void) const;
    EditFieldHandlePtr editHandleAttenuation    (void);
    GetFieldHandlePtr  getHandleMaxDistance     (void) const;
    EditFieldHandlePtr editHandleMaxDistance    (void);

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

            void execSync (      TurbulenceParticleAffectorBase *pFrom,
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
    void operator =(const TurbulenceParticleAffectorBase &source);
};

typedef TurbulenceParticleAffectorBase *TurbulenceParticleAffectorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTURBULENCEPARTICLEAFFECTORBASE_H_ */
