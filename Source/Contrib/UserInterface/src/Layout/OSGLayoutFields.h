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


#ifndef _OSGLAYOUTFIELDS_H_
#define _OSGLAYOUTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Layout;

OSG_GEN_CONTAINERPTR(Layout);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<Layout *> :
    public FieldTraitsFCPtrBase<Layout *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Layout *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLayoutPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFLayoutPtr"; }
};

template<> inline
const Char8 *FieldTraits<Layout *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layout *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layout *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layout *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layout *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layout *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layout *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layout *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdLayoutPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Layout *,
                      RecordedRefCountPolicy  > SFRecLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Layout *,
                      UnrecordedRefCountPolicy> SFUnrecLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Layout *,
                      WeakRefCountPolicy      > SFWeakLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Layout *,
                      NoRefCountPolicy        > SFUncountedLayoutPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Layout *,
                      RecordedRefCountPolicy  > MFRecLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Layout *,
                      UnrecordedRefCountPolicy> MFUnrecLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Layout *,
                      WeakRefCountPolicy      > MFWeakLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Layout *,
                      NoRefCountPolicy        > MFUncountedLayoutPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecLayoutPtr : 
    public PointerSField<Layout *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecLayoutPtr : 
    public PointerSField<Layout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakLayoutPtr :
    public PointerSField<Layout *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedLayoutPtr :
    public PointerSField<Layout *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecLayoutPtr :
    public PointerMField<Layout *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecLayoutPtr :
    public PointerMField<Layout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakLayoutPtr :
    public PointerMField<Layout *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedLayoutPtr :
    public PointerMField<Layout *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLAYOUTFIELDS_H_ */
