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
 **     Do not change this file, changes should be done in the derived      **
 **     class RotatedComponent
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGROTATEDCOMPONENTBASE_H_
#define _OSGROTATEDCOMPONENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComponentContainer.h" // Parent

#include "OSGSysFields.h"               // Angle type
#include "OSGComponentFields.h"         // InternalComponent type

#include "OSGRotatedComponentFields.h"

OSG_BEGIN_NAMESPACE

class RotatedComponent;

//! \brief RotatedComponent Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING RotatedComponentBase : public ComponentContainer
{
  public:

    typedef ComponentContainer Inherited;
    typedef ComponentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(RotatedComponent);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        AngleFieldId = Inherited::NextFieldId,
        InternalComponentFieldId = AngleFieldId + 1,
        ResizePolicyFieldId = InternalComponentFieldId + 1,
        NextFieldId = ResizePolicyFieldId + 1
    };

    static const OSG::BitVector AngleFieldMask =
        (TypeTraits<BitVector>::One << AngleFieldId);
    static const OSG::BitVector InternalComponentFieldMask =
        (TypeTraits<BitVector>::One << InternalComponentFieldId);
    static const OSG::BitVector ResizePolicyFieldMask =
        (TypeTraits<BitVector>::One << ResizePolicyFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFAngleType;
    typedef SFUnrecComponentPtr SFInternalComponentType;
    typedef SFUInt32          SFResizePolicyType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFReal32            *editSFAngle          (void);
            const SFReal32            *getSFAngle           (void) const;
            const SFUnrecComponentPtr *getSFInternalComponent(void) const;
                  SFUnrecComponentPtr *editSFInternalComponent(void);

                  SFUInt32            *editSFResizePolicy   (void);
            const SFUInt32            *getSFResizePolicy    (void) const;


                  Real32              &editAngle          (void);
                  Real32               getAngle           (void) const;

                  Component * getInternalComponent(void) const;

                  UInt32              &editResizePolicy   (void);
                  UInt32               getResizePolicy    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setAngle          (const Real32 value);
            void setInternalComponent(Component * const value);
            void setResizePolicy   (const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  RotatedComponentTransitPtr  create          (void);
    static  RotatedComponent           *createEmpty     (void);

    static  RotatedComponentTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  RotatedComponent            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  RotatedComponentTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32          _sfAngle;
    SFUnrecComponentPtr _sfInternalComponent;
    SFUInt32          _sfResizePolicy;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    RotatedComponentBase(void);
    RotatedComponentBase(const RotatedComponentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~RotatedComponentBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const RotatedComponent *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleAngle           (void) const;
    EditFieldHandlePtr editHandleAngle          (void);
    GetFieldHandlePtr  getHandleInternalComponent (void) const;
    EditFieldHandlePtr editHandleInternalComponent(void);
    GetFieldHandlePtr  getHandleResizePolicy    (void) const;
    EditFieldHandlePtr editHandleResizePolicy   (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      RotatedComponentBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const RotatedComponentBase &source);
};

typedef RotatedComponentBase *RotatedComponentBaseP;

OSG_END_NAMESPACE

#endif /* _OSGROTATEDCOMPONENTBASE_H_ */
