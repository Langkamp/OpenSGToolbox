/*---------------------------------------------------------------------------*\
 *                            OpenSGToolbox                                  *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala                                                   *
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

#ifndef _OSGEVENT_H_
#define _OSGEVENT_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGToolboxDef.h"

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGBaseTypes.h>
#include "OSGEventType.h"

OSG_BEGIN_NAMESPACE

class OSG_TOOLBOXLIB_DLLMAPPING Event
{
    /*=========================  PUBLIC  ===============================*/
  public:
    FieldContainerPtr getSource(void) const;
    Time getTimeStamp(void) const;
    
    virtual const EventType &getType(void) const = 0;
    
  protected:
    Event(FieldContainerPtr Source, Time TimeStamp);
  
    FieldContainerPtr _Source;
    Time _TimeStamp;
};

typedef Event* EventPtr;

OSG_END_NAMESPACE

#include "OSGEvent.inl"

#endif /* _OSGEVENT_H_ */


