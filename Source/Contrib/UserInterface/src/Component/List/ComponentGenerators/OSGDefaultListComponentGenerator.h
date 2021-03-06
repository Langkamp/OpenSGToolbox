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

#ifndef _OSGDEFAULTLISTCOMPONENTGENERATOR_H_
#define _OSGDEFAULTLISTCOMPONENTGENERATOR_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGDefaultListComponentGeneratorBase.h"
#include "OSGTextComponent.h"
#include "OSGLayer.h"
#include "OSGBorder.h"

OSG_BEGIN_NAMESPACE

/*! \brief DefaultListComponentGenerator class. See \ref
           PageContribUserInterfaceDefaultListComponentGenerator for a description.
*/

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING DefaultListComponentGenerator : public DefaultListComponentGeneratorBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef DefaultListComponentGeneratorBase Inherited;
    typedef DefaultListComponentGenerator     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
	
	virtual ComponentRefPtr getListComponent(ListRefPtr Parent, const boost::any& Value, UInt32 Index, bool IsSelected, bool HasFocus);

	virtual ComponentRefPtr getListComponentFromString(ListRefPtr Parent, const std::string& Value, UInt32 Index, bool IsSelected, bool HasFocus);

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in DefaultListComponentGeneratorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DefaultListComponentGenerator(void);
    DefaultListComponentGenerator(const DefaultListComponentGenerator &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultListComponentGenerator(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */

	virtual void applyBordersAndBackground(ComponentRefPtr TheComponent, ListRefPtr Parent, const std::string& Value, UInt32 Index, bool IsSelected, bool HasFocus) const;
	virtual void applyTextColor(TextComponentRefPtr TheComponent, ListRefPtr Parent, const std::string& Value, UInt32 Index, bool IsSelected, bool HasFocus) const;
    virtual std::string getText(ListRefPtr Parent, const boost::any& Value, UInt32 Index, bool IsSelected, bool HasFocus) const;

    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class DefaultListComponentGeneratorBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DefaultListComponentGenerator &source);
};

typedef DefaultListComponentGenerator *DefaultListComponentGeneratorP;

OSG_END_NAMESPACE

#include "OSGDefaultListComponentGeneratorBase.inl"
#include "OSGDefaultListComponentGenerator.inl"

#endif /* _OSGDEFAULTLISTCOMPONENTGENERATOR_H_ */
