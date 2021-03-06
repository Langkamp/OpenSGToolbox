/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class PolygonBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PolygonBorderBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PolygonBorderBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PolygonBorderBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PolygonBorder::_sfWidth field.

inline
Real32 &PolygonBorderBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the PolygonBorder::_sfWidth field.
inline
      Real32  PolygonBorderBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the PolygonBorder::_sfWidth field.
inline
void PolygonBorderBase::setWidth(const Real32 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the PolygonBorder::_sfColor field.

inline
Color4f &PolygonBorderBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the PolygonBorder::_sfColor field.
inline
const Color4f &PolygonBorderBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the PolygonBorder::_sfColor field.
inline
void PolygonBorderBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}

//! Get the value of the \a index element the PolygonBorder::_mfVertices field.
inline
const Pnt2f &PolygonBorderBase::getVertices(const UInt32 index) const
{
    return _mfVertices[index];
}

inline
Pnt2f &PolygonBorderBase::editVertices(const UInt32 index)
{
    editMField(VerticesFieldMask, _mfVertices);

    return _mfVertices[index];
}


//! Get the value of the \a index element the PolygonBorder::_mfDrawnQuads field.
inline
const Pnt2f &PolygonBorderBase::getDrawnQuads(const UInt32 index) const
{
    return _mfDrawnQuads[index];
}

inline
Pnt2f &PolygonBorderBase::editDrawnQuads(const UInt32 index)
{
    editMField(DrawnQuadsFieldMask, _mfDrawnQuads);

    return _mfDrawnQuads[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void PolygonBorderBase::execSync (      PolygonBorderBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (VerticesFieldMask & whichField))
        _mfVertices.syncWith(pFrom->_mfVertices,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DrawnQuadsFieldMask & whichField))
        _mfDrawnQuads.syncWith(pFrom->_mfDrawnQuads,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *PolygonBorderBase::getClassname(void)
{
    return "PolygonBorder";
}
OSG_GEN_CONTAINERPTR(PolygonBorder);

OSG_END_NAMESPACE

