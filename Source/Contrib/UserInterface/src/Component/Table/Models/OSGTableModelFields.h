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


#ifndef _OSGTABLEMODELFIELDS_H_
#define _OSGTABLEMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TableModel;

OSG_GEN_CONTAINERPTR(TableModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<TableModel *> :
    public FieldTraitsFCPtrBase<TableModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TableModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTableModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTableModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<TableModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTableModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTableModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTableModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTableModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTableModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTableModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTableModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTableModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TableModel *,
                      RecordedRefCountPolicy  > SFRecTableModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TableModel *,
                      UnrecordedRefCountPolicy> SFUnrecTableModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TableModel *,
                      WeakRefCountPolicy      > SFWeakTableModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TableModel *,
                      NoRefCountPolicy        > SFUncountedTableModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TableModel *,
                      RecordedRefCountPolicy  > MFRecTableModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TableModel *,
                      UnrecordedRefCountPolicy> MFUnrecTableModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TableModel *,
                      WeakRefCountPolicy      > MFWeakTableModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TableModel *,
                      NoRefCountPolicy        > MFUncountedTableModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecTableModelPtr : 
    public PointerSField<TableModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecTableModelPtr : 
    public PointerSField<TableModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakTableModelPtr :
    public PointerSField<TableModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedTableModelPtr :
    public PointerSField<TableModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecTableModelPtr :
    public PointerMField<TableModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecTableModelPtr :
    public PointerMField<TableModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakTableModelPtr :
    public PointerMField<TableModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedTableModelPtr :
    public PointerMField<TableModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTABLEMODELFIELDS_H_ */
