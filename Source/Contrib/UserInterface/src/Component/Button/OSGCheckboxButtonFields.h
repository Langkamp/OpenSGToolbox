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


#ifndef _OSGCHECKBOXBUTTONFIELDS_H_
#define _OSGCHECKBOXBUTTONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CheckboxButton;

OSG_GEN_CONTAINERPTR(CheckboxButton);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<CheckboxButton *> :
    public FieldTraitsFCPtrBase<CheckboxButton *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CheckboxButton *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCheckboxButtonPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCheckboxButtonPtr"; }
};

template<> inline
const Char8 *FieldTraits<CheckboxButton *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCheckboxButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckboxButton *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCheckboxButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckboxButton *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCheckboxButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckboxButton *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCheckboxButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckboxButton *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCheckboxButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckboxButton *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCheckboxButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckboxButton *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCheckboxButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckboxButton *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCheckboxButtonPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CheckboxButton *,
                      RecordedRefCountPolicy  > SFRecCheckboxButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CheckboxButton *,
                      UnrecordedRefCountPolicy> SFUnrecCheckboxButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CheckboxButton *,
                      WeakRefCountPolicy      > SFWeakCheckboxButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CheckboxButton *,
                      NoRefCountPolicy        > SFUncountedCheckboxButtonPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CheckboxButton *,
                      RecordedRefCountPolicy  > MFRecCheckboxButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CheckboxButton *,
                      UnrecordedRefCountPolicy> MFUnrecCheckboxButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CheckboxButton *,
                      WeakRefCountPolicy      > MFWeakCheckboxButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CheckboxButton *,
                      NoRefCountPolicy        > MFUncountedCheckboxButtonPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecCheckboxButtonPtr : 
    public PointerSField<CheckboxButton *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecCheckboxButtonPtr : 
    public PointerSField<CheckboxButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakCheckboxButtonPtr :
    public PointerSField<CheckboxButton *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedCheckboxButtonPtr :
    public PointerSField<CheckboxButton *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecCheckboxButtonPtr :
    public PointerMField<CheckboxButton *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecCheckboxButtonPtr :
    public PointerMField<CheckboxButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakCheckboxButtonPtr :
    public PointerMField<CheckboxButton *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedCheckboxButtonPtr :
    public PointerMField<CheckboxButton *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCHECKBOXBUTTONFIELDS_H_ */
