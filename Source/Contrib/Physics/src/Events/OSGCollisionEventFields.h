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


#ifndef _OSGCOLLISIONEVENTFIELDS_H_
#define _OSGCOLLISIONEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CollisionEvent;

OSG_GEN_CONTAINERPTR(CollisionEvent);

/*! \ingroup GrpContribPhysicsFieldTraits
    \ingroup GrpLibOSGContribPhysics
 */
template <>
struct FieldTraits<CollisionEvent *> :
    public FieldTraitsFCPtrBase<CollisionEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CollisionEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPHYSICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCollisionEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<CollisionEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCollisionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CollisionEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCollisionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CollisionEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCollisionEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<CollisionEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCollisionEventPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<CollisionEvent *,
                      RecordedRefCountPolicy  > SFRecCollisionEventPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<CollisionEvent *,
                      UnrecordedRefCountPolicy> SFUnrecCollisionEventPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<CollisionEvent *,
                      WeakRefCountPolicy      > SFWeakCollisionEventPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<CollisionEvent *,
                      NoRefCountPolicy        > SFUncountedCollisionEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFRecCollisionEventPtr : 
    public PointerSField<CollisionEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUnrecCollisionEventPtr : 
    public PointerSField<CollisionEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFWeakCollisionEventPtr :
    public PointerSField<CollisionEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUncountedCollisionEventPtr :
    public PointerSField<CollisionEvent *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOLLISIONEVENTFIELDS_H_ */