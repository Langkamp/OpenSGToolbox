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


#ifndef _OSGRECTUIDRAWOBJECTFIELDS_H_
#define _OSGRECTUIDRAWOBJECTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class RectUIDrawObject;

OSG_GEN_CONTAINERPTR(RectUIDrawObject);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<RectUIDrawObject *> :
    public FieldTraitsFCPtrBase<RectUIDrawObject *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RectUIDrawObject *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFRectUIDrawObjectPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFRectUIDrawObjectPtr"; }
};

template<> inline
const Char8 *FieldTraits<RectUIDrawObject *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRectUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<RectUIDrawObject *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRectUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<RectUIDrawObject *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRectUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<RectUIDrawObject *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRectUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<RectUIDrawObject *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRectUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<RectUIDrawObject *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRectUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<RectUIDrawObject *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRectUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<RectUIDrawObject *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRectUIDrawObjectPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RectUIDrawObject *,
                      RecordedRefCountPolicy  > SFRecRectUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RectUIDrawObject *,
                      UnrecordedRefCountPolicy> SFUnrecRectUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RectUIDrawObject *,
                      WeakRefCountPolicy      > SFWeakRectUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RectUIDrawObject *,
                      NoRefCountPolicy        > SFUncountedRectUIDrawObjectPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RectUIDrawObject *,
                      RecordedRefCountPolicy  > MFRecRectUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RectUIDrawObject *,
                      UnrecordedRefCountPolicy> MFUnrecRectUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RectUIDrawObject *,
                      WeakRefCountPolicy      > MFWeakRectUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RectUIDrawObject *,
                      NoRefCountPolicy        > MFUncountedRectUIDrawObjectPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecRectUIDrawObjectPtr : 
    public PointerSField<RectUIDrawObject *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecRectUIDrawObjectPtr : 
    public PointerSField<RectUIDrawObject *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakRectUIDrawObjectPtr :
    public PointerSField<RectUIDrawObject *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedRectUIDrawObjectPtr :
    public PointerSField<RectUIDrawObject *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecRectUIDrawObjectPtr :
    public PointerMField<RectUIDrawObject *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecRectUIDrawObjectPtr :
    public PointerMField<RectUIDrawObject *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakRectUIDrawObjectPtr :
    public PointerMField<RectUIDrawObject *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedRectUIDrawObjectPtr :
    public PointerMField<RectUIDrawObject *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGRECTUIDRAWOBJECTFIELDS_H_ */
