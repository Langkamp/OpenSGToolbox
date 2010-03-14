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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOMBOBOXSELECTIONEVENTFIELDS_H_
#define _OSGCOMBOBOXSELECTIONEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ComboBoxSelectionEvent;

OSG_GEN_CONTAINERPTR(ComboBoxSelectionEvent);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ComboBoxSelectionEvent *> :
    public FieldTraitsFCPtrBase<ComboBoxSelectionEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ComboBoxSelectionEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFComboBoxSelectionEventPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFComboBoxSelectionEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<ComboBoxSelectionEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecComboBoxSelectionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxSelectionEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecComboBoxSelectionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxSelectionEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakComboBoxSelectionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxSelectionEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdComboBoxSelectionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxSelectionEvent *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecComboBoxSelectionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxSelectionEvent *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecComboBoxSelectionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxSelectionEvent *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakComboBoxSelectionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxSelectionEvent *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdComboBoxSelectionEventPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBoxSelectionEvent *,
                      RecordedRefCountPolicy  > SFRecComboBoxSelectionEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBoxSelectionEvent *,
                      UnrecordedRefCountPolicy> SFUnrecComboBoxSelectionEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBoxSelectionEvent *,
                      WeakRefCountPolicy      > SFWeakComboBoxSelectionEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBoxSelectionEvent *,
                      NoRefCountPolicy        > SFUncountedComboBoxSelectionEventPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBoxSelectionEvent *,
                      RecordedRefCountPolicy  > MFRecComboBoxSelectionEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBoxSelectionEvent *,
                      UnrecordedRefCountPolicy> MFUnrecComboBoxSelectionEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBoxSelectionEvent *,
                      WeakRefCountPolicy      > MFWeakComboBoxSelectionEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBoxSelectionEvent *,
                      NoRefCountPolicy        > MFUncountedComboBoxSelectionEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecComboBoxSelectionEventPtr : 
    public PointerSField<ComboBoxSelectionEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecComboBoxSelectionEventPtr : 
    public PointerSField<ComboBoxSelectionEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakComboBoxSelectionEventPtr :
    public PointerSField<ComboBoxSelectionEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedComboBoxSelectionEventPtr :
    public PointerSField<ComboBoxSelectionEvent *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecComboBoxSelectionEventPtr :
    public PointerMField<ComboBoxSelectionEvent *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecComboBoxSelectionEventPtr :
    public PointerMField<ComboBoxSelectionEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakComboBoxSelectionEventPtr :
    public PointerMField<ComboBoxSelectionEvent *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedComboBoxSelectionEventPtr :
    public PointerMField<ComboBoxSelectionEvent *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOMBOBOXSELECTIONEVENTFIELDS_H_ */
