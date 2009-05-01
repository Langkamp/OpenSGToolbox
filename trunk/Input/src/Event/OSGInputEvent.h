/*---------------------------------------------------------------------------*\
 *                          OpenSG Toolbox Input                             *
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
#ifndef _OSGINPUTEVENT_H_
#define _OSGINPUTEVENT_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGInputDef.h"

#include "Event/OSGEvent.h"
#include "WindowSystem/OSGWindowEventProducerFields.h"

#include <OpenSG/OSGVector.h>
#include <OpenSG/OSGViewport.h>

OSG_BEGIN_NAMESPACE

class OSG_INPUTLIB_DLLMAPPING InputEvent : public Event
{
    /*=========================  PUBLIC  ===============================*/
  public:
    
    InputEvent(FieldContainerPtr Source, Time TimeStamp, WindowEventProducerPtr Producer);
    
    virtual const EventType &getType(void) const;
    
    static const EventType &getClassType(void);

	//Consumes this event so that it will not be processed in the default manner by the source which originated it.
	void consume(void) const;

	//Returns whether or not this event has been consumed.
	bool isConsumed(void) const;
	
	WindowEventProducerPtr getEventProducer(void) const;

  protected:
	  mutable bool _Consumed;
	  WindowEventProducerPtr _EventProducer;
    
  private:
     static EventType _Type;
    
};

OSG_END_NAMESPACE

#include "OSGInputEvent.inl"

#endif /* _OSGEVENT_H_ */