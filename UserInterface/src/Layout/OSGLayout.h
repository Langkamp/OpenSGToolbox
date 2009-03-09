/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGLAYOUT_H_
#define _OSGLAYOUT_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include "OSGLayoutBase.h"
#include "Graphics/OSGGraphics.h"
#include "Component/OSGComponent.h"

OSG_BEGIN_NAMESPACE

class OSG_USERINTERFACELIB_DLLMAPPING Layout : public LayoutBase
{
  private:

    typedef LayoutBase Inherited;

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

    /*! \}                                                                 */
	virtual void updateLayout(const MFComponentPtr Components,const ComponentPtr ParentComponent) const = 0;
	
    virtual Vec2f minimumLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;
	virtual Vec2f requestedLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;
	virtual Vec2f preferredLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;
	virtual Vec2f maximumLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const;

    virtual Vec2f minimumContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const = 0;
	virtual Vec2f requestedContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const = 0;
	virtual Vec2f preferredContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const = 0;
	virtual Vec2f maximumContentsLayoutSize(const MFComponentPtr Components,const ComponentPtr ParentComponent) const = 0;
    /*=========================  PROTECTED  ===============================*/
  protected:

      enum SizeType {MIN_SIZE, MAX_SIZE, REQUESTED_SIZE, PREFERRED_SIZE};

    // Variables should all be in LayoutBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    Layout(void);
    Layout(const Layout &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~Layout(void); 

    /*! \}                                                                 */

    static Vec2f getComponentSize(ComponentPtr TheComponent, SizeType TheSizeType);
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class LayoutBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const Layout &source);
};

typedef Layout *LayoutP;

OSG_END_NAMESPACE

#include "OSGLayoutBase.inl"
#include "OSGLayout.inl"

#define OSGLAYOUT_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGLAYOUT_H_ */
