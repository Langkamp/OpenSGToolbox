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
 **     class Sound!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGSoundBase.h"
#include "OSGSound.h"

#include <boost/bind.hpp>

#include "OSGEvent.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Sound
    A Sound Interface.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           SoundBase::_sfPosition
    Initial position of this sound.
*/

/*! \var Vec3f           SoundBase::_sfVelocity
    Initial velocity of this sound.
*/

/*! \var Real32          SoundBase::_sfVolume
    Values from 0.0 to 1.0.  0.0 = Silent, 1.0 = Full Volume.
*/

/*! \var Real32          SoundBase::_sfPan
    Values from -1.0 to 1.0. -1.0 = Full Left, 0.0 = Full Center, 1.0 = Full Right.
*/

/*! \var Real32          SoundBase::_sfFrequency
    Default playback frequency.
*/

/*! \var Int32           SoundBase::_sfLooping
    Number of times to loop this sound. 1 = play the sound once, Values less than 0 = Inifinite loop. Values 2 greater than plays the sound that many times.
*/

/*! \var bool            SoundBase::_sfStreaming
    Whether or not this sound should be streamed.
*/

/*! \var BoostPath       SoundBase::_sfFile
    The Path to the sound file to load this sound from.
*/

/*! \var bool            SoundBase::_sfEnable3D
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Sound *>::_type("SoundPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Sound *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Sound *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Sound *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SoundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "Position",
        "Initial position of this sound.\n",
        PositionFieldId, PositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandlePosition),
        static_cast<FieldGetMethodSig >(&Sound::getHandlePosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Velocity",
        "Initial velocity of this sound.\n",
        VelocityFieldId, VelocityFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandleVelocity),
        static_cast<FieldGetMethodSig >(&Sound::getHandleVelocity));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Volume",
        "Values from 0.0 to 1.0.  0.0 = Silent, 1.0 = Full Volume.\n",
        VolumeFieldId, VolumeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandleVolume),
        static_cast<FieldGetMethodSig >(&Sound::getHandleVolume));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Pan",
        "Values from -1.0 to 1.0. -1.0 = Full Left, 0.0 = Full Center, 1.0 = Full Right.\n",
        PanFieldId, PanFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandlePan),
        static_cast<FieldGetMethodSig >(&Sound::getHandlePan));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Frequency",
        "Default playback frequency.\n",
        FrequencyFieldId, FrequencyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandleFrequency),
        static_cast<FieldGetMethodSig >(&Sound::getHandleFrequency));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "Looping",
        "Number of times to loop this sound. 1 = play the sound once, Values less than 0 = Inifinite loop. Values 2 greater than plays the sound that many times.\n",
        LoopingFieldId, LoopingFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandleLooping),
        static_cast<FieldGetMethodSig >(&Sound::getHandleLooping));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "Streaming",
        "Whether or not this sound should be streamed.\n",
        StreamingFieldId, StreamingFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandleStreaming),
        static_cast<FieldGetMethodSig >(&Sound::getHandleStreaming));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBoostPath::Description(
        SFBoostPath::getClassType(),
        "File",
        "The Path to the sound file to load this sound from.\n",
        FileFieldId, FileFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandleFile),
        static_cast<FieldGetMethodSig >(&Sound::getHandleFile));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "Enable3D",
        "",
        Enable3DFieldId, Enable3DFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Sound::editHandleEnable3D),
        static_cast<FieldGetMethodSig >(&Sound::getHandleEnable3D));

    oType.addInitialDesc(pDesc);
    pDesc = new SFEventProducerPtr::Description(
        SFEventProducerPtr::getClassType(),
        "EventProducer",
        "Event Producer",
        EventProducerFieldId,EventProducerFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&Sound::invalidEditField),
        static_cast     <FieldGetMethodSig >(&Sound::invalidGetField));

    oType.addInitialDesc(pDesc);
}


SoundBase::TypeObject SoundBase::_type(
    SoundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Sound::initMethod,
    Sound::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Sound::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Sound\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "    library=\"ContribSound\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A Sound Interface.\n"
    "\t<Field\n"
    "\t\tname=\"Position\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.0,0.0,0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "    Initial position of this sound.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Velocity\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.0,0.0,0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "    Initial velocity of this sound.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Volume\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "    Values from 0.0 to 1.0.  0.0 = Silent, 1.0 = Full Volume.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Pan\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "    Values from -1.0 to 1.0. -1.0 = Full Left, 0.0 = Full Center, 1.0 = Full Right.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Frequency\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"44100.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "    Default playback frequency.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Looping\"\n"
    "\t\ttype=\"Int32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "    Number of times to loop this sound. 1 = play the sound once, Values less than 0 = Inifinite loop. Values 2 greater than plays the sound that many times.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Streaming\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "    Whether or not this sound should be streamed.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"File\"\n"
    "\t\ttype=\"BoostPath\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "    The Path to the sound file to load this sound from.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Enable3D\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"SoundPlayed\"\n"
    "\t\ttype=\"SoundEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"SoundStopped\"\n"
    "\t\ttype=\"SoundEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"SoundPaused\"\n"
    "\t\ttype=\"SoundEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"SoundUnpaused\"\n"
    "\t\ttype=\"SoundEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"SoundLooped\"\n"
    "\t\ttype=\"SoundEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"SoundEnded\"\n"
    "\t\ttype=\"SoundEvent\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "</FieldContainer>\n",
    "A Sound Interface.\n"
    );

//! Sound Produced Methods

MethodDescription *SoundBase::_methodDesc[] =
{
    new MethodDescription("SoundPlayed", 
                    "",
                     SoundPlayedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("SoundStopped", 
                    "",
                     SoundStoppedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("SoundPaused", 
                    "",
                     SoundPausedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("SoundUnpaused", 
                    "",
                     SoundUnpausedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("SoundLooped", 
                    "",
                     SoundLoopedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("SoundEnded", 
                    "",
                     SoundEndedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType SoundBase::_producerType(
    "SoundProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &SoundBase::getType(void)
{
    return _type;
}

const FieldContainerType &SoundBase::getType(void) const
{
    return _type;
}

const EventProducerType &SoundBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 SoundBase::getContainerSize(void) const
{
    return sizeof(Sound);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *SoundBase::editSFPosition(void)
{
    editSField(PositionFieldMask);

    return &_sfPosition;
}

const SFPnt3f *SoundBase::getSFPosition(void) const
{
    return &_sfPosition;
}


SFVec3f *SoundBase::editSFVelocity(void)
{
    editSField(VelocityFieldMask);

    return &_sfVelocity;
}

const SFVec3f *SoundBase::getSFVelocity(void) const
{
    return &_sfVelocity;
}


SFReal32 *SoundBase::editSFVolume(void)
{
    editSField(VolumeFieldMask);

    return &_sfVolume;
}

const SFReal32 *SoundBase::getSFVolume(void) const
{
    return &_sfVolume;
}


SFReal32 *SoundBase::editSFPan(void)
{
    editSField(PanFieldMask);

    return &_sfPan;
}

const SFReal32 *SoundBase::getSFPan(void) const
{
    return &_sfPan;
}


SFReal32 *SoundBase::editSFFrequency(void)
{
    editSField(FrequencyFieldMask);

    return &_sfFrequency;
}

const SFReal32 *SoundBase::getSFFrequency(void) const
{
    return &_sfFrequency;
}


SFInt32 *SoundBase::editSFLooping(void)
{
    editSField(LoopingFieldMask);

    return &_sfLooping;
}

const SFInt32 *SoundBase::getSFLooping(void) const
{
    return &_sfLooping;
}


SFBool *SoundBase::editSFStreaming(void)
{
    editSField(StreamingFieldMask);

    return &_sfStreaming;
}

const SFBool *SoundBase::getSFStreaming(void) const
{
    return &_sfStreaming;
}


SFBoostPath *SoundBase::editSFFile(void)
{
    editSField(FileFieldMask);

    return &_sfFile;
}

const SFBoostPath *SoundBase::getSFFile(void) const
{
    return &_sfFile;
}


SFBool *SoundBase::editSFEnable3D(void)
{
    editSField(Enable3DFieldMask);

    return &_sfEnable3D;
}

const SFBool *SoundBase::getSFEnable3D(void) const
{
    return &_sfEnable3D;
}






/*------------------------------ access -----------------------------------*/

UInt32 SoundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }
    if(FieldBits::NoField != (VelocityFieldMask & whichField))
    {
        returnValue += _sfVelocity.getBinSize();
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        returnValue += _sfVolume.getBinSize();
    }
    if(FieldBits::NoField != (PanFieldMask & whichField))
    {
        returnValue += _sfPan.getBinSize();
    }
    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        returnValue += _sfFrequency.getBinSize();
    }
    if(FieldBits::NoField != (LoopingFieldMask & whichField))
    {
        returnValue += _sfLooping.getBinSize();
    }
    if(FieldBits::NoField != (StreamingFieldMask & whichField))
    {
        returnValue += _sfStreaming.getBinSize();
    }
    if(FieldBits::NoField != (FileFieldMask & whichField))
    {
        returnValue += _sfFile.getBinSize();
    }
    if(FieldBits::NoField != (Enable3DFieldMask & whichField))
    {
        returnValue += _sfEnable3D.getBinSize();
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }

    return returnValue;
}

void SoundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VelocityFieldMask & whichField))
    {
        _sfVelocity.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        _sfVolume.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PanFieldMask & whichField))
    {
        _sfPan.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LoopingFieldMask & whichField))
    {
        _sfLooping.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StreamingFieldMask & whichField))
    {
        _sfStreaming.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FileFieldMask & whichField))
    {
        _sfFile.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Enable3DFieldMask & whichField))
    {
        _sfEnable3D.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }
}

void SoundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VelocityFieldMask & whichField))
    {
        _sfVelocity.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        _sfVolume.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PanFieldMask & whichField))
    {
        _sfPan.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LoopingFieldMask & whichField))
    {
        _sfLooping.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StreamingFieldMask & whichField))
    {
        _sfStreaming.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FileFieldMask & whichField))
    {
        _sfFile.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Enable3DFieldMask & whichField))
    {
        _sfEnable3D.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

SoundBase::SoundBase(void) :
    _Producer(&getProducerType()),
    Inherited(),
    _sfPosition               (Pnt3f(0.0,0.0,0.0)),
    _sfVelocity               (Vec3f(0.0,0.0,0.0)),
    _sfVolume                 (Real32(1.0)),
    _sfPan                    (Real32(0.0)),
    _sfFrequency              (Real32(44100.0)),
    _sfLooping                (Int32(1)),
    _sfStreaming              (bool(false)),
    _sfFile                   (),
    _sfEnable3D               (bool(false))
    ,_sfEventProducer(&_Producer)
{
}

SoundBase::SoundBase(const SoundBase &source) :
    _Producer(&source.getProducerType()),
    Inherited(source),
    _sfPosition               (source._sfPosition               ),
    _sfVelocity               (source._sfVelocity               ),
    _sfVolume                 (source._sfVolume                 ),
    _sfPan                    (source._sfPan                    ),
    _sfFrequency              (source._sfFrequency              ),
    _sfLooping                (source._sfLooping                ),
    _sfStreaming              (source._sfStreaming              ),
    _sfFile                   (source._sfFile                   ),
    _sfEnable3D               (source._sfEnable3D               )
    ,_sfEventProducer(&_Producer)
{
}


/*-------------------------- destructors ----------------------------------*/

SoundBase::~SoundBase(void)
{
}


GetFieldHandlePtr SoundBase::getHandlePosition        (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandlePosition       (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             this));


    editSField(PositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr SoundBase::getHandleVelocity        (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfVelocity,
             this->getType().getFieldDesc(VelocityFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandleVelocity       (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfVelocity,
             this->getType().getFieldDesc(VelocityFieldId),
             this));


    editSField(VelocityFieldMask);

    return returnValue;
}

GetFieldHandlePtr SoundBase::getHandleVolume          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfVolume,
             this->getType().getFieldDesc(VolumeFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandleVolume         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfVolume,
             this->getType().getFieldDesc(VolumeFieldId),
             this));


    editSField(VolumeFieldMask);

    return returnValue;
}

GetFieldHandlePtr SoundBase::getHandlePan             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfPan,
             this->getType().getFieldDesc(PanFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandlePan            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfPan,
             this->getType().getFieldDesc(PanFieldId),
             this));


    editSField(PanFieldMask);

    return returnValue;
}

GetFieldHandlePtr SoundBase::getHandleFrequency       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFrequency,
             this->getType().getFieldDesc(FrequencyFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandleFrequency      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFrequency,
             this->getType().getFieldDesc(FrequencyFieldId),
             this));


    editSField(FrequencyFieldMask);

    return returnValue;
}

GetFieldHandlePtr SoundBase::getHandleLooping         (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfLooping,
             this->getType().getFieldDesc(LoopingFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandleLooping        (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfLooping,
             this->getType().getFieldDesc(LoopingFieldId),
             this));


    editSField(LoopingFieldMask);

    return returnValue;
}

GetFieldHandlePtr SoundBase::getHandleStreaming       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfStreaming,
             this->getType().getFieldDesc(StreamingFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandleStreaming      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfStreaming,
             this->getType().getFieldDesc(StreamingFieldId),
             this));


    editSField(StreamingFieldMask);

    return returnValue;
}

GetFieldHandlePtr SoundBase::getHandleFile            (void) const
{
    SFBoostPath::GetHandlePtr returnValue(
        new  SFBoostPath::GetHandle(
             &_sfFile,
             this->getType().getFieldDesc(FileFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandleFile           (void)
{
    SFBoostPath::EditHandlePtr returnValue(
        new  SFBoostPath::EditHandle(
             &_sfFile,
             this->getType().getFieldDesc(FileFieldId),
             this));


    editSField(FileFieldMask);

    return returnValue;
}

GetFieldHandlePtr SoundBase::getHandleEnable3D        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnable3D,
             this->getType().getFieldDesc(Enable3DFieldId),
             const_cast<SoundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SoundBase::editHandleEnable3D       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnable3D,
             this->getType().getFieldDesc(Enable3DFieldId),
             this));


    editSField(Enable3DFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SoundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Sound *pThis = static_cast<Sound *>(this);

    pThis->execSync(static_cast<Sound *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void SoundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
