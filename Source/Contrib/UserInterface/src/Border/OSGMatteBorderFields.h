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


#ifndef _OSGMATTEBORDERFIELDS_H_
#define _OSGMATTEBORDERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class MatteBorder;

OSG_GEN_CONTAINERPTR(MatteBorder);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<MatteBorder *> :
    public FieldTraitsFCPtrBase<MatteBorder *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<MatteBorder *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMatteBorderPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMatteBorderPtr"; }
};

template<> inline
const Char8 *FieldTraits<MatteBorder *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatteBorder *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatteBorder *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatteBorder *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatteBorder *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatteBorder *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatteBorder *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatteBorder *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMatteBorderPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MatteBorder *,
                      RecordedRefCountPolicy  > SFRecMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MatteBorder *,
                      UnrecordedRefCountPolicy> SFUnrecMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MatteBorder *,
                      WeakRefCountPolicy      > SFWeakMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MatteBorder *,
                      NoRefCountPolicy        > SFUncountedMatteBorderPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MatteBorder *,
                      RecordedRefCountPolicy  > MFRecMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MatteBorder *,
                      UnrecordedRefCountPolicy> MFUnrecMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MatteBorder *,
                      WeakRefCountPolicy      > MFWeakMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MatteBorder *,
                      NoRefCountPolicy        > MFUncountedMatteBorderPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecMatteBorderPtr : 
    public PointerSField<MatteBorder *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecMatteBorderPtr : 
    public PointerSField<MatteBorder *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakMatteBorderPtr :
    public PointerSField<MatteBorder *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedMatteBorderPtr :
    public PointerSField<MatteBorder *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecMatteBorderPtr :
    public PointerMField<MatteBorder *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecMatteBorderPtr :
    public PointerMField<MatteBorder *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakMatteBorderPtr :
    public PointerMField<MatteBorder *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedMatteBorderPtr :
    public PointerMField<MatteBorder *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMATTEBORDERFIELDS_H_ */
