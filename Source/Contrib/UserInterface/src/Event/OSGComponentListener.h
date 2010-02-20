/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

#ifndef _OSGCOMPONENTLISTENER_H_
#define _OSGCOMPONENTLISTENER_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/Toolbox/OSGEventListener.h>
#include "OSGComponentEvent.h"

OSG_BEGIN_NAMESPACE

class OSG_USERINTERFACELIB_DLLMAPPING ComponentListener : public EventListener
{
   /*=========================  PUBLIC  ===============================*/
public:

   virtual void componentHidden(const ComponentEventPtr e) = 0;
   virtual void componentVisible(const ComponentEventPtr e) = 0;
   virtual void componentMoved(const ComponentEventPtr e) = 0;
   virtual void componentResized(const ComponentEventPtr e) = 0;
   virtual void componentEnabled(const ComponentEventPtr e) = 0;
   virtual void componentDisabled(const ComponentEventPtr e) = 0;
};

typedef ComponentListener* ComponentListenerPtr;

OSG_END_NAMESPACE

#endif /* _OSGCOMPONENTLISTENER_H_ */