/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
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
#define OSG_COMPILEKEYFRAMEFCPTRSEQUENCEINST

#include "OSGKeyframeFCPtrsSequence.h"

OSG_USING_NAMESPACE

//Texture Chunk Replace
template<>
bool osg::replacement<osg::SFTextureChunkPtr>(RawInterpFuncion& InterpFunc,
                              const osg::Real32& time,
                              const osg::Real32& prevtime,
                              const osg::ValueReplacementPolicy& ReplacePolicy,
                              bool isCyclic,
                              osg::Field& Result,
                              UInt32 Index, 
                              Real32 Blend)
{
    SFTextureChunkPtr Value(static_cast<osg::SFTextureChunkPtr&>(Result).getValue());
    bool ReturnValue = InterpFunc(time, Value,isCyclic);

    if(Result.getCardinality() == osg::FieldType::SINGLE_FIELD)
    {
        switch(ReplacePolicy)
        {
        case OVERWRITE:
            static_cast<osg::SFTextureChunkPtr&>(Result).setValue(Value.getValue());
            break;
        default:
            SWARNING << "No policy defined for Animation value replacement policy: " << ReplacePolicy << "." << std::endl;
            break;
        }
    }
    else
    {
        switch(ReplacePolicy)
        {
        case OVERWRITE:
            static_cast<osg::MFTextureChunkPtr&>(Result)[Index] = Value.getValue();
            break;
        default:
            SWARNING << "No policy defined for Animation value replacement policy: " << ReplacePolicy << "." << std::endl;
            break;
        }
    }
   return ReturnValue;
}

FieldDescription *KeyframeFCPtrsSequenceTextureChunkDesc::_desc[] =
{
    new FieldDescription(
        StoredFieldType::getClassType(), 
        getFieldName(), 
        OSG_FC_FIELD_IDM_DESC(KeyframeSequenceTmpl<
                                KeyframeFCPtrsSequenceTextureChunkDesc>::KeyframePropDataField),
        false,
#ifdef OSG_MICROSOFT_COMPILER_HACKS
        KeyframeSequenceTmpl<KeyframeFCPtrsSequenceTextureChunkDesc>::getFPtrAccessMethod())
#else
        (FieldAccessMethod) &KeyframeSequenceTmpl<
                                KeyframeFCPtrsSequenceTextureChunkDesc>::getFieldPtr)
#endif
};


//State Chunk Replace
template<>
bool osg::replacement<osg::SFStateChunkPtr>(RawInterpFuncion& InterpFunc,
                              const osg::Real32& time,
                              const osg::Real32& prevtime,
                              const osg::ValueReplacementPolicy& ReplacePolicy,
                              bool isCyclic,
                              osg::Field& Result,
                              UInt32 Index, 
                              Real32 Blend)
{
    SFStateChunkPtr Value(static_cast<osg::SFStateChunkPtr&>(Result).getValue());
    bool ReturnValue = InterpFunc(time, Value,isCyclic);

    if(Result.getCardinality() == osg::FieldType::SINGLE_FIELD)
    {
        switch(ReplacePolicy)
        {
        case OVERWRITE:
            static_cast<osg::SFStateChunkPtr&>(Result).setValue(Value.getValue());
            break;
        default:
            SWARNING << "No policy defined for Animation value replacement policy: " << ReplacePolicy << "." << std::endl;
            break;
        }
    }
    else
    {
        switch(ReplacePolicy)
        {
        case OVERWRITE:
            static_cast<osg::MFStateChunkPtr&>(Result)[Index] = Value.getValue();
            break;
        default:
            SWARNING << "No policy defined for Animation value replacement policy: " << ReplacePolicy << "." << std::endl;
            break;
        }
    }
   return ReturnValue;
}

FieldDescription *KeyframeFCPtrsSequenceStateChunkDesc::_desc[] =
{
    new FieldDescription(
        StoredFieldType::getClassType(), 
        getFieldName(), 
        OSG_FC_FIELD_IDM_DESC(KeyframeSequenceTmpl<
                                KeyframeFCPtrsSequenceStateChunkDesc>::KeyframePropDataField),
        false,
#ifdef OSG_MICROSOFT_COMPILER_HACKS
        KeyframeSequenceTmpl<KeyframeFCPtrsSequenceStateChunkDesc>::getFPtrAccessMethod())
#else
        (FieldAccessMethod) &KeyframeSequenceTmpl<
                                KeyframeFCPtrsSequenceStateChunkDesc>::getFieldPtr)
#endif
};

//Image Replace
template<>
bool osg::replacement<osg::SFImagePtr>(RawInterpFuncion& InterpFunc,
                              const osg::Real32& time,
                              const osg::Real32& prevtime,
                              const osg::ValueReplacementPolicy& ReplacePolicy,
                              bool isCyclic,
                              osg::Field& Result,
                              UInt32 Index, 
                              Real32 Blend)
{
    SFImagePtr Value(static_cast<osg::SFImagePtr&>(Result).getValue());
    bool ReturnValue = InterpFunc(time, Value,isCyclic);

    if(Result.getCardinality() == osg::FieldType::SINGLE_FIELD)
    {
        switch(ReplacePolicy)
        {
        case OVERWRITE:
            static_cast<osg::SFImagePtr&>(Result).setValue(Value.getValue());
            break;
        default:
            SWARNING << "No policy defined for Animation value replacement policy: " << ReplacePolicy << "." << std::endl;
            break;
        }
    }
    else
    {
        switch(ReplacePolicy)
        {
        case OVERWRITE:
            static_cast<osg::MFImagePtr&>(Result)[Index] = Value.getValue();
            break;
        default:
            SWARNING << "No policy defined for Animation value replacement policy: " << ReplacePolicy << "." << std::endl;
            break;
        }
    }
   return ReturnValue;
}

FieldDescription *KeyframeFCPtrsSequenceImageDesc::_desc[] =
{
    new FieldDescription(
        StoredFieldType::getClassType(), 
        getFieldName(), 
        OSG_FC_FIELD_IDM_DESC(KeyframeSequenceTmpl<
                                KeyframeFCPtrsSequenceImageDesc>::KeyframePropDataField),
        false,
#ifdef OSG_MICROSOFT_COMPILER_HACKS
        KeyframeSequenceTmpl<KeyframeFCPtrsSequenceImageDesc>::getFPtrAccessMethod())
#else
        (FieldAccessMethod) &KeyframeSequenceTmpl<
                                KeyframeFCPtrsSequenceImageDesc>::getFieldPtr)
#endif
};

OSG_GEO_PROP_TYPE_TMPL_DEF(KeyframeSequenceTmpl, KeyframeSequenceDesc, PtrType)

//Deal with Exporting symbols
OSG_BEGIN_NAMESPACE

OSG_KEYFRAMEPROP_DLLEXPORT_DEF (KeyframeSequenceTmpl        , 
                           KeyframeFCPtrsSequenceTextureChunkDesc, 
                           OSG_ANIMATIONLIB_DLLMAPPING);

OSG_KEYFRAMEPROP_DLLEXPORT_DEF (KeyframeSequenceTmpl        , 
                           KeyframeFCPtrsSequenceStateChunkDesc, 
                           OSG_ANIMATIONLIB_DLLMAPPING);

OSG_KEYFRAMEPROP_DLLEXPORT_DEF (KeyframeSequenceTmpl        , 
                           KeyframeFCPtrsSequenceImageDesc, 
                           OSG_ANIMATIONLIB_DLLMAPPING);
OSG_END_NAMESPACE

