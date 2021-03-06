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

#ifndef _OSGKEYFRAMESEQUENCES_H_
#define _OSGKEYFRAMESEQUENCES_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

/*! \file OSGKeyframeSequence.h

    Helper header to include all properties in one go.    
*/

#include "OSGKeyframePositionSequence.h"
#include "OSGKeyframePositionSequenceTmpl.h"
#include "OSGKeyframeVectorSequence.h"
#include "OSGKeyframeVectorSequenceTmpl.h"
#include "OSGKeyframeRotationSequence.h"
#include "OSGKeyframeRotationSequenceTmpl.h"
#include "OSGKeyframeColorSequence.h"
#include "OSGKeyframeColorSequenceTmpl.h"
#include "OSGKeyframeTransformationSequence.h"
#include "OSGKeyframeTransformationSequenceTmpl.h"
#include "OSGKeyframeNumberSequence.h"
#include "OSGKeyframeNumberSequenceTmpl.h"
#include "OSGKeyframeBasicSequence.h"
#include "OSGKeyframeBasicSequenceTmpl.h"
#include "OSGKeyframeFCPtrSequence.h"
#include "OSGKeyframeFCPtrSequenceTmpl.h"

#endif /* _OSGKEYFRAMESEQUENCES_H_ */

