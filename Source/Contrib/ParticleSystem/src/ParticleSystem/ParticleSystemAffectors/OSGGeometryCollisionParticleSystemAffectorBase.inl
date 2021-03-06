/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class GeometryCollisionParticleSystemAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeometryCollisionParticleSystemAffectorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GeometryCollisionParticleSystemAffectorBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &GeometryCollisionParticleSystemAffectorBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 GeometryCollisionParticleSystemAffectorBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 GeometryCollisionParticleSystemAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the GeometryCollisionParticleSystemAffector::_sfCollisionNode field.
inline
Node * GeometryCollisionParticleSystemAffectorBase::getCollisionNode(void) const
{
    return _sfCollisionNode.getValue();
}

//! Set the value of the GeometryCollisionParticleSystemAffector::_sfCollisionNode field.
inline
void GeometryCollisionParticleSystemAffectorBase::setCollisionNode(Node * const value)
{
    editSField(CollisionNodeFieldMask);

    _sfCollisionNode.setValue(value);
}

//! Get the value of the \a index element the GeometryCollisionParticleSystemAffector::_mfCollisionAffectors field.
inline
ParticleAffector * GeometryCollisionParticleSystemAffectorBase::getCollisionAffectors(const UInt32 index) const
{
    return _mfCollisionAffectors[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void GeometryCollisionParticleSystemAffectorBase::execSync (      GeometryCollisionParticleSystemAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CollisionAffectorsFieldMask & whichField))
        _mfCollisionAffectors.syncWith(pFrom->_mfCollisionAffectors,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (CollisionNodeFieldMask & whichField))
        _sfCollisionNode.syncWith(pFrom->_sfCollisionNode);
}
#endif


inline
const Char8 *GeometryCollisionParticleSystemAffectorBase::getClassname(void)
{
    return "GeometryCollisionParticleSystemAffector";
}

inline
EventConnection GeometryCollisionParticleSystemAffectorBase::attachActivity(ActivityRefPtr TheActivity, UInt32 ProducedEventId)
{
    return _Producer.attachActivity(TheActivity, ProducedEventId);
}

inline
bool GeometryCollisionParticleSystemAffectorBase::isActivityAttached(ActivityRefPtr TheActivity, UInt32 ProducedEventId) const
{
    return _Producer.isActivityAttached(TheActivity, ProducedEventId);
}

inline
UInt32 GeometryCollisionParticleSystemAffectorBase::getNumActivitiesAttached(UInt32 ProducedEventId) const
{
    return _Producer.getNumActivitiesAttached(ProducedEventId);
}

inline
ActivityRefPtr GeometryCollisionParticleSystemAffectorBase::getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const
{
    return _Producer.getAttachedActivity(ProducedEventId,ActivityIndex);
}

inline
void GeometryCollisionParticleSystemAffectorBase::detachActivity(ActivityRefPtr TheActivity, UInt32 ProducedEventId)
{
    _Producer.detachActivity(TheActivity, ProducedEventId);
}

inline
UInt32 GeometryCollisionParticleSystemAffectorBase::getNumProducedEvents(void) const
{
    return _Producer.getNumProducedEvents();
}

inline
const MethodDescription *GeometryCollisionParticleSystemAffectorBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return _Producer.getProducedEventDescription(ProducedEventName);
}

inline
const MethodDescription *GeometryCollisionParticleSystemAffectorBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return _Producer.getProducedEventDescription(ProducedEventId);
}

inline
UInt32 GeometryCollisionParticleSystemAffectorBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return _Producer.getProducedEventId(ProducedEventName);
}

inline
SFEventProducerPtr *GeometryCollisionParticleSystemAffectorBase::editSFEventProducer(void)
{
    return &_sfEventProducer;
}

//! Get the value of the GeometryCollisionParticleSystemAffector::_sfEventProducer field.
inline
EventProducerPtr &GeometryCollisionParticleSystemAffectorBase::editEventProducer(void)
{
    return _sfEventProducer.getValue();
}

OSG_GEN_CONTAINERPTR(GeometryCollisionParticleSystemAffector);

OSG_END_NAMESPACE

