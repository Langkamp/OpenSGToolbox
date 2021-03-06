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


#ifndef _OSGDISTRIBUTION3DFIELDS_H_
#define _OSGDISTRIBUTION3DFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Distribution3D;

OSG_GEN_CONTAINERPTR(Distribution3D);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<Distribution3D *> :
    public FieldTraitsFCPtrBase<Distribution3D *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Distribution3D *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDistribution3DPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDistribution3DPtr"; }
};

template<> inline
const Char8 *FieldTraits<Distribution3D *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<Distribution3D *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<Distribution3D *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<Distribution3D *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<Distribution3D *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<Distribution3D *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<Distribution3D *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<Distribution3D *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDistribution3DPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<Distribution3D *,
                      RecordedRefCountPolicy  > SFRecDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<Distribution3D *,
                      UnrecordedRefCountPolicy> SFUnrecDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<Distribution3D *,
                      WeakRefCountPolicy      > SFWeakDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<Distribution3D *,
                      NoRefCountPolicy        > SFUncountedDistribution3DPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<Distribution3D *,
                      RecordedRefCountPolicy  > MFRecDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<Distribution3D *,
                      UnrecordedRefCountPolicy> MFUnrecDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<Distribution3D *,
                      WeakRefCountPolicy      > MFWeakDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<Distribution3D *,
                      NoRefCountPolicy        > MFUncountedDistribution3DPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecDistribution3DPtr : 
    public PointerSField<Distribution3D *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecDistribution3DPtr : 
    public PointerSField<Distribution3D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakDistribution3DPtr :
    public PointerSField<Distribution3D *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedDistribution3DPtr :
    public PointerSField<Distribution3D *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecDistribution3DPtr :
    public PointerMField<Distribution3D *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecDistribution3DPtr :
    public PointerMField<Distribution3D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakDistribution3DPtr :
    public PointerMField<Distribution3D *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedDistribution3DPtr :
    public PointerMField<Distribution3D *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDISTRIBUTION3DFIELDS_H_ */
