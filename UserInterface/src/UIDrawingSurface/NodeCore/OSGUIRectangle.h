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

#ifndef _OSGUIRECTANGLE_H_
#define _OSGUIRECTANGLE_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include "OSGUIRectangleBase.h"
#include <OpenSG/OSGAction.h>
#include <OpenSG/OSGDrawActionBase.h>

OSG_BEGIN_NAMESPACE

/*! \brief UIRectangle class. See \ref 
           PageUserInterfaceUIRectangle for a description.
*/

class OSG_USERINTERFACELIB_DLLMAPPING UIRectangle : public UIRectangleBase
{
  private:

    typedef UIRectangleBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    Action::ResultE drawPrimitives (DrawActionBase *action);
    Action::ResultE drawActionHandler( Action* action );
    Action::ResultE renderActionHandler( Action* action );
    Action::ResultE intersect( Action* action );
    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in UIRectangleBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    UIRectangle(void);
    UIRectangle(const UIRectangle &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~UIRectangle(void); 

    /*! \}                                                                 */
    void    adjustVolume(Volume & volume);
    
	void updateFrameBounds(void);
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class UIRectangleBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const UIRectangle &source);
};

typedef UIRectangle *UIRectangleP;

OSG_END_NAMESPACE

#include "OSGUIRectangleBase.inl"
#include "OSGUIRectangle.inl"

#define OSGUIRECTANGLE_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGUIRECTANGLE_H_ */