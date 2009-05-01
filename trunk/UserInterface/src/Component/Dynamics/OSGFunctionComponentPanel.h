/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
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

#ifndef _OSGFUNCTIONCOMPONENTPANEL_H_
#define _OSGFUNCTIONCOMPONENTPANEL_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include "OSGFunctionComponentPanelBase.h"
#include <OpenSG/Input/OSGMouseAdapter.h>
#include <OpenSG/Input/OSGMouseMotionAdapter.h>
#include <OpenSG/Input/OSGKeyAdapter.h>

OSG_BEGIN_NAMESPACE

/*! \brief FunctionComponentPanel class. See \ref 
           PageDynamicsFunctionComponentPanel for a description.
*/

class OSG_USERINTERFACELIB_DLLMAPPING FunctionComponentPanel : public FunctionComponentPanelBase
{
  private:

    typedef FunctionComponentPanelBase Inherited;

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
    virtual void mousePressed(const MouseEvent& e);
	
	virtual void mouseMoved(const MouseEvent& e);
	virtual void mouseDragged(const MouseEvent& e);
	virtual void keyReleased(const KeyEvent& e);
	
	virtual void mouseWheelMoved(const MouseWheelEvent& e);

    virtual Pnt2f getParentToLocal(const Pnt2f& Location);
    virtual       Vec2f               &getPreferredSize  (void);
    virtual const Vec2f               &getPreferredSize  (void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in FunctionComponentPanelBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    FunctionComponentPanel(void);
    FunctionComponentPanel(const FunctionComponentPanel &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FunctionComponentPanel(void); 

    /*! \}                                                                 */
    virtual void updateLayout(void);
    
	class ComponentPanelMoveListener : public MouseAdapter,public KeyAdapter,public MouseMotionAdapter
	{
	public :
		ComponentPanelMoveListener(FunctionComponentPanelPtr TheFunctionComponentPanel);
		
		virtual void mousePressed(const MouseEvent& e);
		virtual void mouseMoved(const MouseEvent& e);
		virtual void mouseDragged(const MouseEvent& e);
		
		//void setResizableComponent(ComponentPtr Component);
		//void setResizableComponentBounds(Pnt2f TopLeft, Pnt2f BottomRight);
	protected :
		FunctionComponentPanelPtr _FunctionComponentPanel;
	};
	
	class ComponentMoveListener : public MouseAdapter,public KeyAdapter,public MouseMotionAdapter
	{
	public :
		ComponentMoveListener(FunctionComponentPanelPtr TheFunctionComponentPanel);
		
		virtual void mouseReleased(const MouseEvent& e);
		virtual void mouseDragged(const MouseEvent& e);
        virtual void keyPressed(const KeyEvent& e);
		
		void setActiveComponent(UInt32 Index);
		void setInitialPosition(Pnt2f InitialPosition);
	protected :
		FunctionComponentPanelPtr _FunctionComponentPanel;
		UInt32 _ActiveComponent;
		Pnt2f _InitialPosition;
		Pnt2f _InitialComponentPosition;
		
		void detach(void);
	};
	
	enum ResizeTab { TAB_NONE=0, TAB_TOP_LEFT, TAB_TOP, TAB_TOP_RIGHT, TAB_RIGHT, TAB_BOTTOM_RIGHT, TAB_BOTTOM, TAB_BOTTOM_LEFT, TAB_LEFT };
	class ComponentResizeListener : public MouseAdapter,public KeyAdapter,public MouseMotionAdapter
	{
	public :
		ComponentResizeListener(FunctionComponentPanelPtr TheFunctionComponentPanel);
		
		virtual void mouseReleased(const MouseEvent& e);
		virtual void mouseDragged(const MouseEvent& e);
		virtual void keyPressed(const KeyEvent& e);
		
		void setActiveComponent(UInt32 Index);
		void setInitialPosition(Pnt2f InitialPosition);
		void setResizeTab(ResizeTab Tab);
	protected :
		FunctionComponentPanelPtr _FunctionComponentPanel;
		UInt32 _ActiveResizeComponent;
		Pnt2f _InitialPosition;
		Pnt2f _InitialResizeComponentPosition;
		Vec2f _InitialResizeComponentSize;
		ResizeTab _ResizeTab;

		
		void detach(void);
	};

	friend class ComponentMoveListener;

	ComponentMoveListener _ComponentMoveListener;
	ComponentPanelMoveListener _ComponentPanelMoveListener;
	ComponentResizeListener _ComponentResizeListener;
	//MouseWheelListenerPtr _MouseWheelListener;
	virtual void drawInternal(const GraphicsPtr Graphics) const;
	void drawMiniMap(const GraphicsPtr Graphics, const Pnt3f& TopLeft, const Pnt3f BottomRight) const;
    
	virtual UInt32 queryCursor(const Pnt2f& CursorLoc) const;
	
	ResizeTab getTabOverLocation(const Pnt2f& Location) const;
	ComponentPtr getActiveComponent(const Pnt2f& Location) const;

	bool shouldDrawResizeTabs(void) const;
	
	
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class FunctionComponentPanelBase;

    static void initMethod(void);
	
	bool _overResizeSquare;
	ComponentPtr _ResizableComponent;
	ResizeTab _ActiveResizeTab;

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const FunctionComponentPanel &source);
};

typedef FunctionComponentPanel *FunctionComponentPanelP;

OSG_END_NAMESPACE

#include "OSGFunctionComponentPanelBase.inl"
#include "OSGFunctionComponentPanel.inl"

#define OSGFUNCTIONCOMPONENTPANEL_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGFUNCTIONCOMPONENTPANEL_H_ */