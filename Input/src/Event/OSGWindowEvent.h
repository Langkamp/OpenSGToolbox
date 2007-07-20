/*---------------------------------------------------------------------------*\
 *                            OpenSGToolbox                                  *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   contact: dkabala@vrac.iastate.edu                                       *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 3.                               *
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
#ifndef _OSGWINDOWEVENT_H_
#define _OSGWINDOWEVENT_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGInputDef.h"

#include "Event/OSGEvent.h"

#include <OpenSG/OSGWindow.h>

OSG_BEGIN_NAMESPACE

class OSG_INPUTLIB_DLLMAPPING WindowEvent : public Event
{
    /*=========================  PUBLIC  ===============================*/
  public:
  
    WindowPtr getWindow(void) const;
    
    WindowEvent(FieldContainerPtr Source, Time TimeStamp, WindowPtr TheWindow);
  private:
    WindowPtr _Window;
    
};

OSG_END_NAMESPACE

#include "OSGWindowEvent.inl"

#endif /* _OSGWINDOWEVENT_H_ */