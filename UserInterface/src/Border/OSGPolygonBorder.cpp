/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>

#include "OSGPolygonBorder.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::PolygonBorder
UI Polygon Border. 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/
ColorMaskChunkPtr PolygonBorder::_ColorMask = NullFC;
StencilChunkPtr PolygonBorder::_StenciledAreaSetup = NullFC;
StencilChunkPtr PolygonBorder::_StenciledAreaCleanup = NullFC;
StencilChunkPtr PolygonBorder::_StenciledAreaTest = NullFC;

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void PolygonBorder::initMethod (void)
{
}
ColorMaskChunkPtr PolygonBorder::getColorMask(void)
{
    if(_ColorMask == NullFC)
    {
        _ColorMask = ColorMaskChunk::create();
        beginEditCP(_ColorMask, ColorMaskChunk::MaskRFieldMask | ColorMaskChunk::MaskGFieldMask | ColorMaskChunk::MaskBFieldMask | ColorMaskChunk::MaskAFieldMask);
            _ColorMask->setMask(false, false, false,false);
        endEditCP(_ColorMask, ColorMaskChunk::MaskRFieldMask | ColorMaskChunk::MaskGFieldMask | ColorMaskChunk::MaskBFieldMask | ColorMaskChunk::MaskAFieldMask);
    }
    return _ColorMask;
}

StencilChunkPtr PolygonBorder::getStenciledAreaSetup(void)
{
    if(_StenciledAreaSetup == NullFC)
    {
        _StenciledAreaSetup = StencilChunk::create();
        beginEditCP(_StenciledAreaSetup, StencilChunk::StencilFuncFieldMask | StencilChunk::StencilValueFieldMask | StencilChunk::StencilOpFailFieldMask | StencilChunk::StencilOpZFailFieldMask| StencilChunk::StencilOpZPassFieldMask| StencilChunk::StencilMaskFieldMask);
            _StenciledAreaSetup->setStencilFunc(GL_ALWAYS);
            _StenciledAreaSetup->setStencilValue(1);
            _StenciledAreaSetup->setStencilMask(UInt32(0xFFFFFFFF));
            _StenciledAreaSetup->setStencilOpFail(GL_REPLACE);
            _StenciledAreaSetup->setStencilOpZFail(GL_REPLACE);
            _StenciledAreaSetup->setStencilOpZPass(GL_REPLACE);
        endEditCP(_StenciledAreaSetup, StencilChunk::StencilFuncFieldMask | StencilChunk::StencilValueFieldMask | StencilChunk::StencilOpFailFieldMask | StencilChunk::StencilOpZFailFieldMask| StencilChunk::StencilOpZPassFieldMask| StencilChunk::StencilMaskFieldMask);
    }
    return _StenciledAreaSetup;
}

StencilChunkPtr PolygonBorder::getStenciledAreaCleanup(void)
{
    if(_StenciledAreaCleanup == NullFC)
    {
        _StenciledAreaCleanup = StencilChunk::create();
        beginEditCP(_StenciledAreaCleanup, StencilChunk::StencilFuncFieldMask | StencilChunk::StencilValueFieldMask | StencilChunk::StencilOpFailFieldMask | StencilChunk::StencilOpZFailFieldMask| StencilChunk::StencilOpZPassFieldMask| StencilChunk::StencilMaskFieldMask);
            _StenciledAreaCleanup->setStencilFunc(GL_ALWAYS);
            _StenciledAreaCleanup->setStencilValue(0);
            _StenciledAreaCleanup->setStencilMask(UInt32(0xFFFFFFFF));
            _StenciledAreaCleanup->setStencilOpFail(GL_ZERO);
            _StenciledAreaCleanup->setStencilOpZFail(GL_ZERO);
            _StenciledAreaCleanup->setStencilOpZPass(GL_ZERO);
        endEditCP(_StenciledAreaCleanup, StencilChunk::StencilFuncFieldMask | StencilChunk::StencilValueFieldMask | StencilChunk::StencilOpFailFieldMask | StencilChunk::StencilOpZFailFieldMask| StencilChunk::StencilOpZPassFieldMask| StencilChunk::StencilMaskFieldMask);
    }
    return _StenciledAreaCleanup;
}

StencilChunkPtr PolygonBorder::getStenciledAreaTest(void)
{
    if(_StenciledAreaTest == NullFC)
    {
        _StenciledAreaTest = StencilChunk::create();
        beginEditCP(_StenciledAreaTest, StencilChunk::StencilFuncFieldMask | StencilChunk::StencilValueFieldMask | StencilChunk::StencilOpFailFieldMask | StencilChunk::StencilOpZFailFieldMask| StencilChunk::StencilOpZPassFieldMask| StencilChunk::StencilMaskFieldMask);
            _StenciledAreaTest->setStencilFunc(GL_EQUAL);
            _StenciledAreaTest->setStencilValue(1);
            _StenciledAreaTest->setStencilMask(UInt32(0xFFFFFFFF));
            _StenciledAreaTest->setStencilOpFail(GL_KEEP);
            _StenciledAreaTest->setStencilOpZFail(GL_KEEP);
            _StenciledAreaTest->setStencilOpZPass(GL_KEEP);
        endEditCP(_StenciledAreaTest, StencilChunk::StencilFuncFieldMask | StencilChunk::StencilValueFieldMask | StencilChunk::StencilOpFailFieldMask | StencilChunk::StencilOpZFailFieldMask| StencilChunk::StencilOpZPassFieldMask| StencilChunk::StencilMaskFieldMask);
    }
    return _StenciledAreaTest;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
void PolygonBorder::draw(const GraphicsPtr g, const Real32 x, const Real32 y , const Real32 Width, const Real32 Height, const Real32 Opacity) const
{
	/*Pnt2f p1,
		p2;
	UInt32 NumVertices(getVertices().size());
		for(UInt32 i(0) ; i<2*NumVertices ; i=i+2)
		{
			g->drawQuad(getDrawnQuads()[i],getDrawnQuads()[i+1], getDrawnQuads()[i+2],getDrawnQuads()[i+3],
				getColor(),
				getColor(),
				getColor(),
				getColor(),
				Opacity);
		}*/
	//****************
	Int32 NumVertices(getVertices().size());
	Pnt2f p1,
		p2,
		p3,
		p4;
	Vec2f Scale(Width,Height);
	Vec2f QuadEdge, PrevEdge, NextEdge, BeginQuadDir,EndQuadDir, EdgeNormal;
	glBegin(GL_QUADS);
		for(Int32 i(0) ; i<NumVertices ; ++i)
		{
			//Quad i
			QuadEdge=getVertices()[(i+1)%NumVertices]-getVertices()[i];
			PrevEdge=getVertices()[i]-getVertices()[(i+NumVertices-1)%NumVertices];
			NextEdge=getVertices()[(i+2)%NumVertices]-getVertices()[(i+1)%NumVertices];

			scaleUp(QuadEdge, Scale);
			scaleUp(PrevEdge, Scale);
			scaleUp(NextEdge, Scale);
			//Calculate the direction for the begining of the quad
			BeginQuadDir = QuadEdge - PrevEdge;
			BeginQuadDir.normalize();
			//Calculate the direction for the end of the quad
			EndQuadDir = NextEdge - QuadEdge;
			EndQuadDir.normalize();
			p1 = getVertices()[i];
			p4 = getVertices()[(i+1)%NumVertices];
			scaleUp(p1, Scale);
			scaleUp(p4, Scale);
			EdgeNormal.setValues(-QuadEdge.y(), QuadEdge.x());
			EdgeNormal.normalize();
			EdgeNormal *= getWidth();
			
			p2 = p1 + BeginQuadDir*specialProject(BeginQuadDir, QuadEdge, EdgeNormal);
			p3 = p4+ EndQuadDir*specialProject(EndQuadDir, QuadEdge, EdgeNormal);

			//if(i==0)
			//{
				glVertex2fv(p1.getValues());
				//glVertex2fv((p1 + BeginQuadDir*specialProject(BeginQuadDir, QuadEdge, EdgeNormal)).getValues());
			//}
			//glVertex2fv((p2+ EndQuadDir*specialProject(EndQuadDir, QuadEdge, EdgeNormal)).getValues());
			glVertex2fv(p2.getValues());
			glVertex2fv(p3.getValues());
			glVertex2fv(p4.getValues());
		}
		
	glEnd();
}

void PolygonBorder::scaleUp(Pnt2f& TheVector, const Vec2f& Scale) const
{
	TheVector[0] = TheVector[0] *Scale[0];
	TheVector[1] = TheVector[1] *Scale[1];
}
void PolygonBorder::scaleUp(Vec2f& TheVector, const Vec2f& Scale) const
{
	TheVector[0] = TheVector[0] *Scale[0];
	TheVector[1] = TheVector[1] *Scale[1];
}

Real32 PolygonBorder::specialProject(const Vec2f& a, const Vec2f& b, const Vec2f& c) const
{
	return c.length()/osgcos(1.5707963f - osgacos(a*b/(a.length()*b.length())));
}

void PolygonBorder::getInsets(Real32& Left, Real32& Right,Real32& Top,Real32& Bottom) const
{
	//TODO:Implement
	Left=Right=Top=Bottom = getWidth(); //wrong, but what else are you supposed to do?
}

void PolygonBorder::activateInternalDrawConstraints(const GraphicsPtr g, const Real32& x, const Real32& y , const Real32& Width, const Real32& Height) const
{
	GLenum DepthTextEnabled = glIsEnabled(GL_DEPTH_TEST);
	glDisable(GL_DEPTH_TEST);
    //Mask the RGBA channels
    getColorMask()->activate(g->getDrawAction());

    //Setup to draw to the stencil buffer
    getStenciledAreaSetup()->activate(g->getDrawAction());

    glBegin(GL_POLYGON);
		UInt32 NumVertices(getVertices().size());
		for(UInt32 i(0) ; i<NumVertices ; ++i)
		{
			glVertex2f(getVertices()[i].x()*Width, getVertices()[i].y()*Height);
			glVertex2f(getVertices()[(i+1)%NumVertices].x()*Width, getVertices()[(i+1)%NumVertices].y()*Height);
		}
    glEnd();

    //Unset drawing to the stencil buffer
    getStenciledAreaSetup()->deactivate(g->getDrawAction());

    //Unset Color Mask
    getColorMask()->deactivate(g->getDrawAction());
    
    //Setup testing against the stencil stencil buffer
    //getStenciledAreaTest()->activate(g->getDrawAction());

	if(DepthTextEnabled) {glEnable(GL_DEPTH_TEST);}
}

void PolygonBorder::deactivateInternalDrawConstraints(const GraphicsPtr g, const Real32& x, const Real32& y , const Real32& Width, const Real32& Height) const
{
    //Unset testing against the stencil stencil buffer
    getStenciledAreaTest()->deactivate(g->getDrawAction());
    
    //Mask the RGBA channels
    getColorMask()->activate(g->getDrawAction());

    //Setup to draw to the stencil buffer
    getStenciledAreaCleanup()->activate(g->getDrawAction());

    glBegin(GL_QUADS);
       glVertex2s(x-2,y-2);
       glVertex2s(x+Width+2,y-2);
       glVertex2s(x+Width+2,y+Height+2);
       glVertex2s(x-2,y+Height+2);
    glEnd();

    //Unset drawing to the stencil buffer
    getStenciledAreaCleanup()->deactivate(g->getDrawAction());

    //Unmask the RGBA channels
    getColorMask()->deactivate(g->getDrawAction());
}

bool PolygonBorder::isContained(const Pnt2f& p, const Real32& x, const Real32& y , const Real32& Width, const Real32& Height) const
{
	UInt32 NumVertices(getVertices().size());
	Vec3f Edge,
		  PointEdge;

	for(UInt32 i(0) ; i<NumVertices ; ++i)
	{
		Edge.setValues((getVertices()[(i+1)%NumVertices].x()-getVertices()[i].x())*Width, (getVertices()[(i+1)%NumVertices].y()-getVertices()[i].y())*Height, 0.0f);
		PointEdge.setValues(p.x()-getVertices()[i].x()*Width, p.y()-getVertices()[i].y()*Height, 0.0f);

		if(Edge.cross(PointEdge).z() < 0.0)
		{
			return false;
		}
	}
	return true;
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

PolygonBorder::PolygonBorder(void) :
    Inherited()
{
}

PolygonBorder::PolygonBorder(const PolygonBorder &source) :
    Inherited(source)
{
}

PolygonBorder::~PolygonBorder(void)
{
}

/*----------------------------- class specific ----------------------------*/

void PolygonBorder::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);

	if(whichField & VerticesFieldMask)
	{
		Int32 NumVertices(getVertices().size());
		Vec2f QuadEdge, PrevEdge, NextEdge, BeginQuadDir,EndQuadDir;
		beginEditCP(PolygonBorderPtr(this), DrawnQuadsFieldMask);
			getDrawnQuads().clear();
			for(Int32 i(0) ; i<NumVertices ; ++i)
			{
				//Quad i
				QuadEdge=getVertices()[(i+1)%NumVertices]-getVertices()[i];
				PrevEdge=getVertices()[i]-getVertices()[(i+NumVertices-1)%NumVertices];
				NextEdge=getVertices()[(i+1)%NumVertices]-getVertices()[(i+2)%NumVertices];

				//Calculate the direction for the begining of the quad
				BeginQuadDir = QuadEdge - PrevEdge;
				BeginQuadDir.normalize();
				//Calculate the direction for the end of the quad
				EndQuadDir = NextEdge - QuadEdge;
				EndQuadDir.normalize();

				getDrawnQuads().push_back(getVertices()[i] + BeginQuadDir);
				getDrawnQuads().push_back(getVertices()[i]);
				if(i==0)
				{
					getDrawnQuads().push_back(getVertices()[(i+1)%NumVertices]);
					getDrawnQuads().push_back(getVertices()[(i+1)%NumVertices]+ EndQuadDir);
				}
			}
		endEditCP(PolygonBorderPtr(this), DrawnQuadsFieldMask);
	}
}

void PolygonBorder::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump PolygonBorder NI" << std::endl;
}


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGPOLYGONBORDERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPOLYGONBORDERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPOLYGONBORDERFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

