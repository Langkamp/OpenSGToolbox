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


#ifndef _OSGABSTRACTLEAFELEMENTFIELDS_H_
#define _OSGABSTRACTLEAFELEMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbstractLeafElement;

OSG_GEN_CONTAINERPTR(AbstractLeafElement);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbstractLeafElement *> :
    public FieldTraitsFCPtrBase<AbstractLeafElement *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbstractLeafElement *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbstractLeafElementPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbstractLeafElementPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbstractLeafElement *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbstractLeafElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractLeafElement *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbstractLeafElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractLeafElement *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbstractLeafElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractLeafElement *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbstractLeafElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractLeafElement *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbstractLeafElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractLeafElement *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbstractLeafElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractLeafElement *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbstractLeafElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractLeafElement *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbstractLeafElementPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractLeafElement *,
                      RecordedRefCountPolicy  > SFRecAbstractLeafElementPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractLeafElement *,
                      UnrecordedRefCountPolicy> SFUnrecAbstractLeafElementPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractLeafElement *,
                      WeakRefCountPolicy      > SFWeakAbstractLeafElementPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractLeafElement *,
                      NoRefCountPolicy        > SFUncountedAbstractLeafElementPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractLeafElement *,
                      RecordedRefCountPolicy  > MFRecAbstractLeafElementPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractLeafElement *,
                      UnrecordedRefCountPolicy> MFUnrecAbstractLeafElementPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractLeafElement *,
                      WeakRefCountPolicy      > MFWeakAbstractLeafElementPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractLeafElement *,
                      NoRefCountPolicy        > MFUncountedAbstractLeafElementPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbstractLeafElementPtr : 
    public PointerSField<AbstractLeafElement *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbstractLeafElementPtr : 
    public PointerSField<AbstractLeafElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbstractLeafElementPtr :
    public PointerSField<AbstractLeafElement *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbstractLeafElementPtr :
    public PointerSField<AbstractLeafElement *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbstractLeafElementPtr :
    public PointerMField<AbstractLeafElement *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbstractLeafElementPtr :
    public PointerMField<AbstractLeafElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbstractLeafElementPtr :
    public PointerMField<AbstractLeafElement *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbstractLeafElementPtr :
    public PointerMField<AbstractLeafElement *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTLEAFELEMENTFIELDS_H_ */
