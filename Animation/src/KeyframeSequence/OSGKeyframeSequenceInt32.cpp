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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>



#include <OpenSG/OSGConfig.h>

#include "OSGKeyframeSequenceInt32.h"
#include "Interpolation/OSGKeyframeInterpolations.h"
#include "Interpolation/OSGInterpolationFactory.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::KeyframeSequenceInt32

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void KeyframeSequenceInt32::initMethod (void)
{
   osg::InterpolationFactory::the()->registerFieldInterpFunc(osg::STEP_INTERPOLATION, osg::SFInt32::getClassType(), osg::KeyframeSequenceInt32::stepFieldInterpolation);
   osg::InterpolationFactory::the()->registerFieldInterpFunc(osg::LINEAR_INTERPOLATION, osg::SFInt32::getClassType(), osg::KeyframeSequenceInt32::linearFieldInterpolation);
   osg::InterpolationFactory::the()->registerFieldInterpFunc(osg::CUBIC_INTERPOLATION, osg::SFInt32::getClassType(), osg::KeyframeSequenceInt32::cubicFieldInterpolation);
}

bool KeyframeSequenceInt32::linearFieldInterpolation(const osg::KeyframeSequencePtr& KeyValues,
                                                             const osg::MFReal32& Keys,
                                                             const osg::UInt32& Cycling,
                                                             const osg::Real32& Time,
                                                             const osg::Real32& PrevTime,
                                                             const osg::ValueReplacementPolicy& ReplacementPolicy,
                                                             osg::Field& Result)
{
   Int32 CurValue;
   osg::lerp(osg::KeyframeSequenceInt32Ptr::dcast(KeyValues)->getValues(), Keys, Time, CurValue, Cycling != 1);
   if(ReplacementPolicy == OVERWRITE)
   {
      static_cast<osg::SFInt32&>(Result).setValue(CurValue);
   }
   else if(ReplacementPolicy == ADDITIVE_ABSOLUTE)
   {
      static_cast<osg::SFInt32&>(Result).getValue() += CurValue;
   }
   else if(ReplacementPolicy == ADDITIVE_SINCE_LAST)
   {
      Int32 PrevValue;
      osg::lerp(osg::KeyframeSequenceInt32Ptr::dcast(KeyValues)->getValues(), Keys, PrevTime, PrevValue, Cycling != 1);
      static_cast<osg::SFInt32&>(Result).getValue() += (CurValue - PrevValue);
   }
   else
   {
      SWARNING << "No policy defined for Animation value replacement policy: " << ReplacementPolicy << "." << std::endl;
   }
   return true;
}

bool KeyframeSequenceInt32::cubicFieldInterpolation(const osg::KeyframeSequencePtr& KeyValues,
                                                             const osg::MFReal32& Keys,
                                                             const osg::UInt32& Cycling,
                                                             const osg::Real32& Time,
                                                             const osg::Real32& PrevTime,
                                                             const osg::ValueReplacementPolicy& ReplacementPolicy,
                                                             osg::Field& Result)
{
   Int32 CurValue;
   osg::spline(osg::KeyframeSequenceInt32Ptr::dcast(KeyValues)->getValues(), Keys, Time, CurValue, Cycling != 1);
   if(ReplacementPolicy == OVERWRITE)
   {
      static_cast<osg::SFInt32&>(Result).setValue(CurValue);
   }
   else if(ReplacementPolicy == ADDITIVE_ABSOLUTE)
   {
      static_cast<osg::SFInt32&>(Result).getValue() += CurValue;
   }
   else if(ReplacementPolicy == ADDITIVE_SINCE_LAST)
   {
      Int32 PrevValue;
      osg::spline(osg::KeyframeSequenceInt32Ptr::dcast(KeyValues)->getValues(), Keys, PrevTime, PrevValue, Cycling != 1);
      static_cast<osg::SFInt32&>(Result).getValue() += (CurValue - PrevValue);
   }
   else
   {
      SWARNING << "No policy defined for Animation value replacement policy: " << ReplacementPolicy << "." << std::endl;
   }
   return true;
}

bool KeyframeSequenceInt32::stepFieldInterpolation(const osg::KeyframeSequencePtr& KeyValues,
                                                             const osg::MFReal32& Keys,
                                                             const osg::UInt32& Cycling,
                                                             const osg::Real32& Time,
                                                             const osg::Real32& PrevTime,
                                                             const osg::ValueReplacementPolicy& ReplacementPolicy,
                                                             osg::Field& Result)
{
   Int32 CurValue;
   bool ReturnValue = osg::step(osg::KeyframeSequenceInt32Ptr::dcast(KeyValues)->getValues(), Keys, Time, CurValue, Cycling != 1);
   if(ReplacementPolicy == OVERWRITE)
   {
      static_cast<osg::SFInt32&>(Result).setValue(CurValue);
   }
   else if(ReplacementPolicy == ADDITIVE_ABSOLUTE)
   {
      static_cast<osg::SFInt32&>(Result).getValue() += CurValue;
   }
   else if(ReplacementPolicy == ADDITIVE_SINCE_LAST)
   {
      Int32 PrevValue;
      osg::step(osg::KeyframeSequenceInt32Ptr::dcast(KeyValues)->getValues(), Keys, PrevTime, PrevValue, Cycling != 1);
      static_cast<osg::SFInt32&>(Result).getValue() += (CurValue - PrevValue);
   }
   else
   {
      SWARNING << "No policy defined for Animation value replacement policy: " << ReplacementPolicy << "." << std::endl;
   }
   return ReturnValue;
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

KeyframeSequenceInt32::KeyframeSequenceInt32(void) :
    Inherited()
{
}

KeyframeSequenceInt32::KeyframeSequenceInt32(const KeyframeSequenceInt32 &source) :
    Inherited(source)
{
}

KeyframeSequenceInt32::~KeyframeSequenceInt32(void)
{
}

/*----------------------------- class specific ----------------------------*/

void KeyframeSequenceInt32::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void KeyframeSequenceInt32::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump KeyframeSequenceInt32 NI" << std::endl;
}


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.19 2003/05/05 10:05:28 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGKEYFRAMESEQUENCEINT32BASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGKEYFRAMESEQUENCEINT32BASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGKEYFRAMESEQUENCEINT32FIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif
