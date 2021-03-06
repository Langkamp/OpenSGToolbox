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


#ifndef _OSGGRAPHICS3DEXTRUDEFIELDS_H_
#define _OSGGRAPHICS3DEXTRUDEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Graphics3DExtrude;

OSG_GEN_CONTAINERPTR(Graphics3DExtrude);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<Graphics3DExtrude *> :
    public FieldTraitsFCPtrBase<Graphics3DExtrude *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Graphics3DExtrude *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGraphics3DExtrudePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGraphics3DExtrudePtr"; }
};

template<> inline
const Char8 *FieldTraits<Graphics3DExtrude *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGraphics3DExtrudePtr"; 
}

template<> inline
const Char8 *FieldTraits<Graphics3DExtrude *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGraphics3DExtrudePtr"; 
}

template<> inline
const Char8 *FieldTraits<Graphics3DExtrude *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGraphics3DExtrudePtr"; 
}

template<> inline
const Char8 *FieldTraits<Graphics3DExtrude *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGraphics3DExtrudePtr"; 
}

template<> inline
const Char8 *FieldTraits<Graphics3DExtrude *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGraphics3DExtrudePtr"; 
}

template<> inline
const Char8 *FieldTraits<Graphics3DExtrude *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGraphics3DExtrudePtr"; 
}

template<> inline
const Char8 *FieldTraits<Graphics3DExtrude *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGraphics3DExtrudePtr"; 
}

template<> inline
const Char8 *FieldTraits<Graphics3DExtrude *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGraphics3DExtrudePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Graphics3DExtrude *,
                      RecordedRefCountPolicy  > SFRecGraphics3DExtrudePtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Graphics3DExtrude *,
                      UnrecordedRefCountPolicy> SFUnrecGraphics3DExtrudePtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Graphics3DExtrude *,
                      WeakRefCountPolicy      > SFWeakGraphics3DExtrudePtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Graphics3DExtrude *,
                      NoRefCountPolicy        > SFUncountedGraphics3DExtrudePtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Graphics3DExtrude *,
                      RecordedRefCountPolicy  > MFRecGraphics3DExtrudePtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Graphics3DExtrude *,
                      UnrecordedRefCountPolicy> MFUnrecGraphics3DExtrudePtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Graphics3DExtrude *,
                      WeakRefCountPolicy      > MFWeakGraphics3DExtrudePtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Graphics3DExtrude *,
                      NoRefCountPolicy        > MFUncountedGraphics3DExtrudePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecGraphics3DExtrudePtr : 
    public PointerSField<Graphics3DExtrude *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecGraphics3DExtrudePtr : 
    public PointerSField<Graphics3DExtrude *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakGraphics3DExtrudePtr :
    public PointerSField<Graphics3DExtrude *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedGraphics3DExtrudePtr :
    public PointerSField<Graphics3DExtrude *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecGraphics3DExtrudePtr :
    public PointerMField<Graphics3DExtrude *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecGraphics3DExtrudePtr :
    public PointerMField<Graphics3DExtrude *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakGraphics3DExtrudePtr :
    public PointerMField<Graphics3DExtrude *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedGraphics3DExtrudePtr :
    public PointerMField<Graphics3DExtrude *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGRAPHICS3DEXTRUDEFIELDS_H_ */
