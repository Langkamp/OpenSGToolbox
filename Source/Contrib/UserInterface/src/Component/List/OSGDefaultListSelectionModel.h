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

#ifndef _OSGDEFAULTLISTSELECTIONMODEL_H_
#define _OSGDEFAULTLISTSELECTIONMODEL_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGListSelectionModel.h"
#include <set>
#include <list>

#include "OSGEventConnection.h"

OSG_BEGIN_NAMESPACE

/*! \brief DefaultListSelectionModel class. See \ref 
           PageUserInterfaceDefaultListSelectionModel for a description.
*/

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING DefaultListSelectionModel : public ListSelectionModel
{
    /*==========================  PUBLIC  =================================*/
  public:
   enum SelectionMode {SINGLE_SELECTION, SINGLE_INTERVAL_SELECTION, MULTIPLE_INTERVAL_SELECTION};

    virtual EventConnection 	addListSelectionListener(ListSelectionListenerPtr Listener);
	virtual bool isListSelectionListenerAttached(ListSelectionListenerPtr Listener) const;

   virtual void 	addSelectionInterval(UInt32 index0, UInt32 index1);
   
   virtual void 	clearSelection(void);
   
   virtual Int32 	getAnchorSelectionIndex(void) const;
   
   virtual Int32 	getLeadSelectionIndex(void) const;
   
   virtual Int32 	getMaxSelectionIndex(void) const;
   
   virtual Int32 	getMinSelectionIndex(void) const;
   
   virtual UInt32 	getSelectionMode(void) const;
   
   virtual bool 	getValueIsAdjusting(void) const;
   
   virtual void 	insertIndexInterval(UInt32 index, UInt32 length, bool before);
   
   virtual bool 	isSelectedIndex(UInt32 index) const;
   
   virtual bool 	isSelectionEmpty(void) const;
   
   virtual void 	removeIndexInterval(UInt32 index0, UInt32 index1);
   
   virtual void 	removeListSelectionListener(ListSelectionListenerPtr x);
   
   virtual void 	removeSelectionInterval(UInt32 index0, UInt32 index1);
   
   virtual void 	setAnchorSelectionIndex(UInt32 index);
   
   virtual void 	setLeadSelectionIndex(UInt32 index);
   
   virtual void 	setSelectionInterval(UInt32 index0, UInt32 index1);
   
   virtual void 	setSelectionMode(UInt32 selectionMode);
   
   virtual void 	setValueIsAdjusting(bool valueIsAdjusting);

   virtual void incrementValuesAboveIndex(const UInt32& index, const UInt32& NumberToIncrement);

   virtual void decrementValuesAboveIndex(const UInt32& index, const UInt32& NumberToDecrement);
   
    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DefaultListSelectionModel(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultListSelectionModel(void); 

    /*! \}                                                                 */

    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in DefaultListSelectionModelBase.

	typedef std::set<ListSelectionListenerPtr> ListSelectionListenerSet;
    typedef ListSelectionListenerSet::iterator ListSelectionListenerSetItor;
    typedef ListSelectionListenerSet::const_iterator ListSelectionListenerSetConstItor;
	
    ListSelectionListenerSet       _ListSelectionListeners;
	
    virtual void produceSelectionChanged(const ListSelectionEventUnrecPtr e);

	struct IndexRange{  //Inclusive
		IndexRange(UInt32 start, UInt32 end)
		{
            if(start > end)
            {
			    StartIndex = end;
			    EndIndex = start;
            }
            else
            {
			    StartIndex = start;
			    EndIndex = end;
            }
		}
		bool operator== (const IndexRange& right) const
		{
			return StartIndex == right.StartIndex && EndIndex == right.EndIndex;
		}
		bool operator!= (const IndexRange& right) const
		{
			return StartIndex != right.StartIndex || EndIndex != right.EndIndex;
		}
		UInt32 StartIndex;
		UInt32 EndIndex;
	};

	IndexRange getMinMaxSelection(const IndexRange& range);
	static IndexRange getMinMaxSelection(const IndexRange& range1, const IndexRange& range2);
	void updateMinMax(void);

	typedef std::list<IndexRange> RangeSelectionList;
	typedef RangeSelectionList::iterator RangeSelectionListItor;
	typedef RangeSelectionList::const_iterator RangeSelectionListConstItor;

	RangeSelectionList _RangeSelectionList;

	// These are used to help with setting the Selection Intervals

   SelectionMode _SelectionMode;
   Int32 	_AnchorSelectionIndex;
   Int32 	_LeadSelectionIndex;
   Int32 	_MaxSelectionIndex;
   Int32 	_MinSelectionIndex;
   bool 	_ValueIsAdjusting;
    
    /*==========================  PRIVATE  ================================*/
  private:
};

typedef DefaultListSelectionModel *DefaultListSelectionModelP;

OSG_END_NAMESPACE

#include "OSGDefaultListSelectionModel.inl"

#endif /* _OSGDEFAULTLISTSELECTIONMODEL_H_ */
