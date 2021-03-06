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


#ifndef _OSGEDITABLETEXTCOMPONENTFIELDS_H_
#define _OSGEDITABLETEXTCOMPONENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class EditableTextComponent;

OSG_GEN_CONTAINERPTR(EditableTextComponent);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<EditableTextComponent *> :
    public FieldTraitsFCPtrBase<EditableTextComponent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<EditableTextComponent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFEditableTextComponentPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFEditableTextComponentPtr"; }
};

template<> inline
const Char8 *FieldTraits<EditableTextComponent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecEditableTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<EditableTextComponent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecEditableTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<EditableTextComponent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakEditableTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<EditableTextComponent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdEditableTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<EditableTextComponent *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecEditableTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<EditableTextComponent *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecEditableTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<EditableTextComponent *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakEditableTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<EditableTextComponent *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdEditableTextComponentPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<EditableTextComponent *,
                      RecordedRefCountPolicy  > SFRecEditableTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<EditableTextComponent *,
                      UnrecordedRefCountPolicy> SFUnrecEditableTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<EditableTextComponent *,
                      WeakRefCountPolicy      > SFWeakEditableTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<EditableTextComponent *,
                      NoRefCountPolicy        > SFUncountedEditableTextComponentPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<EditableTextComponent *,
                      RecordedRefCountPolicy  > MFRecEditableTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<EditableTextComponent *,
                      UnrecordedRefCountPolicy> MFUnrecEditableTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<EditableTextComponent *,
                      WeakRefCountPolicy      > MFWeakEditableTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<EditableTextComponent *,
                      NoRefCountPolicy        > MFUncountedEditableTextComponentPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecEditableTextComponentPtr : 
    public PointerSField<EditableTextComponent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecEditableTextComponentPtr : 
    public PointerSField<EditableTextComponent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakEditableTextComponentPtr :
    public PointerSField<EditableTextComponent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedEditableTextComponentPtr :
    public PointerSField<EditableTextComponent *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecEditableTextComponentPtr :
    public PointerMField<EditableTextComponent *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecEditableTextComponentPtr :
    public PointerMField<EditableTextComponent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakEditableTextComponentPtr :
    public PointerMField<EditableTextComponent *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedEditableTextComponentPtr :
    public PointerMField<EditableTextComponent *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGEDITABLETEXTCOMPONENTFIELDS_H_ */
