/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
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

// Source file for new Field type

// This define is only set in this source file. It switches the
// Windows-specific declarations in the header for compiling the Field, 
// not for using it.
#define OSG_COMPILEPATHTYPEINST

// You need this in every OpenSG file
#include <OpenSG/OSGConfig.h>
#include "OSGToolboxDef.h"

// Some basic system headers
#include <OpenSG/OSGBaseTypes.h>

// The new field type include
#include "OSGPathType.h"

// Needed to instantiate some template functions on Windows
#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>
#include <boost/filesystem/operations.hpp>

OSG_BEGIN_NAMESPACE

// This is where the DataType for the new Fieldtype is defined.
// The parameters are the name of the type and the name of the parent type
DataType FieldDataTraits<Path>::_type("Path", "BaseType");

// These macros instantiate the necessary template methods for the fields
OSG_DLLEXPORT_SFIELD_DEF1(Path, OSG_TOOLBOXLIB_DLLTMPLMAPPING );

OSG_DLLEXPORT_MFIELD_DEF1(Path, OSG_TOOLBOXLIB_DLLTMPLMAPPING );


Path makeRelative(const Path& Root, const Path& ToPath)
{
    Path RootComplete;
    if(!Root.has_root_path())
    {
        RootComplete = boost::filesystem::system_complete(Root);
    }
    else
    {
        RootComplete = Root;
    }
    
    Path ToPathComplete;
    if(!ToPath.has_root_path())
    {
        ToPathComplete = boost::filesystem::system_complete(ToPath);
    }
    else
    {
        ToPathComplete = ToPath;
    }

	Path Result;
	boost::filesystem::path::iterator RootIter = RootComplete.begin();
	boost::filesystem::path::iterator ToPathIter = ToPathComplete.begin();

	while(RootIter != RootComplete.end() &&
		  ToPathIter != ToPathComplete.end() &&
		  RootIter->compare(*ToPathIter) == 0)
	{
		++RootIter;
		++ToPathIter;
	}
	
	while(ToPathIter != ToPathComplete.end())
	{
		Result = Result / *ToPathIter;
		++ToPathIter;
	}

	++RootIter;
	while(RootIter != RootComplete.end())
	{
		Result = Path("..") / Result;
		++RootIter;
	}

	return Result;
}

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

OSG_USING_NAMESPACE

namespace
{
    static Char8 cvsid_cpp[] = "@(#)$Id: $";
    static Char8 cvsid_hpp[] = OSG_TOOLBOX_PATH_TYPE_HEADER_CVSID;
}

