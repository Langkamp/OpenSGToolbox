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

#ifndef _OSG_UI_TREE_SELECTION_MODEL_H_
#define _OSG_UI_TREE_SELECTION_MODEL_H_

#ifdef __sgi
#pragma once
#endif
 
#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"
#include <OpenSG/Toolbox/OSGSharedFieldPtr.h>

#include "OSGTreePath.h"

OSG_BEGIN_NAMESPACE
	 
class OSG_USERINTERFACELIB_DLLMAPPING TreeSelectionModel
{
private:
protected:
public:
   enum TreeSelectionMode {CONTIGUOUS_TREE_SELECTION, DISCONTIGUOUS_TREE_SELECTION, SINGLE_TREE_SELECTION};

	//Adds a PropertyChangeListener to the listener list.
	virtual void addPropertyChangeListener(PropertyChangeListenerPtr listener) = 0;

	//Adds path to the current selection.
	virtual void addSelectionPath(TreePath path) = 0;

	//Adds paths to the current selection.
	virtual void addSelectionPaths(std::vector<TreePath> paths) = 0;

	//Adds x to the list of listeners that are notified each time the set of selected TreePaths changes.
	virtual void addTreeSelectionListener(TreeSelectionListenerPtr x) = 0;

	//Empties the current selection.
	virtual void clearSelection(void) = 0;

	//Returns the last path that was added.
	virtual TreePath getLeadSelectionPath(void) const = 0;

	//Returns the lead selection index.
	virtual UInt32 getLeadSelectionRow(void) const = 0;

	//Returns the largest value obtained from the RowMapper for the current set of selected TreePaths.
	virtual UInt32 getMaxSelectionRow(void) const = 0;

	//Returns the smallest value obtained from the RowMapper for the current set of selected TreePaths.
	virtual UInt32 getMinSelectionRow(void) const = 0;

	//Returns the RowMapper instance that is able to map a TreePath to a row.
	virtual RowMapper getRowMapper(void) const = 0;

	//Returns the number of paths that are selected.
	virtual UInt32 getSelectionCount(void) const = 0;

	//Returns the current selection mode, one of SINGLE_TREE_SELECTION, CONTIGUOUS_TREE_SELECTION or DISCONTIGUOUS_TREE_SELECTION.
	virtual UInt32 getSelectionMode(void) const = 0;

	//Returns the first path in the selection.
	virtual TreePath getSelectionPath(void) const = 0;

	//Returns the paths in the selection.
	virtual std::vector<TreePath> getSelectionPaths(void) const = 0;

	//Returns all of the currently selected rows.
	virtual std::vector<UInt32> getSelectionRows(void) const = 0;

	//Returns true if the path, path, is in the current selection.
	virtual bool isPathSelected(TreePath path) const = 0;

	//Returns true if the row identified by row is selected.
	virtual bool isRowSelected(const UInt32& row) const = 0;

	//Returns true if the selection is currently empty.
	virtual bool isSelectionEmpty(void) const = 0;

	//Removes a PropertyChangeListener from the listener list.
	virtual void removePropertyChangeListener(PropertyChangeListener listener) = 0;

	//Removes path from the selection.
	virtual void removeSelectionPath(TreePath path) = 0;

	//Removes paths from the selection.
	virtual void removeSelectionPaths(std::vector<TreePath> paths) = 0;

	//Removes x from the list of listeners that are notified each time the set of selected TreePaths changes.
	virtual void removeTreeSelectionListener(TreeSelectionListenerPtr x) = 0;

	//Updates this object's mapping from TreePaths to rows.
	virtual void resetRowSelection(void) = 0;

	//Sets the RowMapper instance.
	virtual void setRowMapper(RowMapper newMapper) = 0;

	//Sets the selection model, which must be one of SINGLE_TREE_SELECTION, CONTIGUOUS_TREE_SELECTION or DISCONTIGUOUS_TREE_SELECTION.
	virtual void setSelectionMode(const UInt32& mode) = 0;

	//Sets the selection to path.
	virtual void setSelectionPath(TreePath path) = 0;

	//Sets the selection to path.
	virtual void setSelectionPaths(std::vector<TreePath> paths) = 0;
};

typedef TreeSelectionModel* TreeSelectionModelPtr;

OSG_END_NAMESPACE

#endif /* _OSG_UI_TREE_SELECTION_MODEL_H_ */
