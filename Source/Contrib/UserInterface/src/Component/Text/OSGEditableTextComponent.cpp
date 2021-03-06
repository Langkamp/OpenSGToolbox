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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGEditableTextComponent.h"
#include "OSGUIDrawingSurface.h"
#include "OSGInternalWindow.h"
#include "OSGWindowEventProducer.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGEditableTextComponentBase.cpp file.
// To modify it, please change the .fcd file (OSGEditableTextComponent.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void EditableTextComponent::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void EditableTextComponent::keyPressed(const KeyEventUnrecPtr e)
{
	Inherited::keyPressed(e);
}

void EditableTextComponent::keyReleased(const KeyEventUnrecPtr e)
{
	Inherited::keyReleased(e);
}

void EditableTextComponent::keyTyped(const KeyEventUnrecPtr e)
{
	
    if(getEnabled() && getEditable() && !(e->getModifiers() &( KeyEvent::KEY_MODIFIER_ALT | KeyEvent::KEY_MODIFIER_CONTROL | KeyEvent::KEY_MODIFIER_META )))
	{
		if(e->getKeyChar()>31 && e->getKeyChar() < 127)
		{
			if(hasSelection())
			{
                deleteSelectedText();
				setCaretPosition(_TextSelectionStart);
			}
            insert(std::string( 1,e->getKeyChar() ), _TextSelectionStart);
			_TextSelectionStart = getCaretPosition();
			_TextSelectionEnd = _TextSelectionStart;
		}
		if(e->getKey()== e->KEY_BACK_SPACE)
		{
			if(hasSelection())
			{
                deleteSelectedText();
			}
			else
			{	
                //erase at the current caret position
                Int32 DeleteIndex(getCaretPosition());
                moveCaret(-1);
                deleteRange(DeleteIndex-1, DeleteIndex);
			}
		}
		if(e->getKey()== e->KEY_DELETE)
		{
			if(hasSelection())
			{
                deleteSelectedText();
			}
			else if(getText().size()>0)
			{
				//erase at the current caret position
                deleteRange(getCaretPosition(), getCaretPosition()+1);
				_TextSelectionStart = getCaretPosition();
				_TextSelectionEnd = _TextSelectionStart;
			}
		}
	}
	
    switch(e->getKey())
    {
    case KeyEvent::KEY_RIGHT:
    case KeyEvent::KEY_KEYPAD_RIGHT:
        moveCaret(1);
        break;
    case KeyEvent::KEY_LEFT:
    case KeyEvent::KEY_KEYPAD_LEFT:
        moveCaret(-1);
        break;
    case KeyEvent::KEY_V:
        if(e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
        {
            paste();
        }
        break;
    case KeyEvent::KEY_C:
        if(e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
        {
            copy();
        }
        break;
    case KeyEvent::KEY_X:
        if(e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
        {
            cut();
        }
        break;
    case KeyEvent::KEY_A:
        if(e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
        {
            selectAll();
        }
        break;
    }

	Inherited::keyTyped(e);
}

LayerRefPtr EditableTextComponent::getDrawnBackground(void) const
{
	if(getEditable())
	{
		return Inherited::getDrawnBackground();
	}
	else
	{
		return getDisabledBackground();
	}
}

LayerRefPtr EditableTextComponent::getDrawnForeground(void) const
{
	if(getEditable())
	{
		return Inherited::getDrawnForeground();
	}
	else
	{
		return getDisabledForeground();
	}
}

BorderRefPtr EditableTextComponent::getDrawnBorder(void) const
{
    return Inherited::getDrawnBorder();
}

void EditableTextComponent::setupCursor(void)
{
    UInt32 Cursor;
    if(getEnabled() && getEditable())
    {
        Cursor = WindowEventProducer::CURSOR_I_BEAM;
    }
    else
    {
        Cursor = WindowEventProducer::CURSOR_POINTER;
    }
    if(Cursor != getCursor())
    {
        setCursor(Cursor);
    }
}

void EditableTextComponent::overwriteSelection(const std::string& Text)
{
    //Delete selected text
    deleteSelectedText();

    //Write to Caret position
    insert(Text, getCaretPosition());
}

void EditableTextComponent::cut(void)
{
    copy();
    deleteSelectedText();
}

void EditableTextComponent::paste(void)
{
    if(getParentWindow() != NULL && 
        getParentWindow()->getDrawingSurface() != NULL &&
        getParentWindow()->getDrawingSurface()->getEventProducer() != NULL)
    {
        write(getParentWindow()->getDrawingSurface()->getEventProducer()->getClipboard());
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

EditableTextComponent::EditableTextComponent(void) :
    Inherited()
{
    setupCursor();
}

EditableTextComponent::EditableTextComponent(const EditableTextComponent &source) :
    Inherited(source)
{
    setupCursor();
}

EditableTextComponent::~EditableTextComponent(void)
{
}

/*----------------------------- class specific ----------------------------*/

void EditableTextComponent::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    if((whichField & EnabledFieldMask) || (whichField & EditableFieldMask))
    {
        setupCursor();
    }
}

void EditableTextComponent::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump EditableTextComponent NI" << std::endl;
}

OSG_END_NAMESPACE
