/* This is a template file for fcdEdit.
 * To create it from sample source,  cut'n'paste the source and apply the following
 * substitutions:
 * s|\|\\|g 
 * s|"|\"|g 
 * s|^|"| 
 * s|$|",|
 */

const char *FCBaseTemplate_inl[]={
"/*---------------------------------------------------------------------------*\\",
" *                                OpenSG                                     *",
" *                                                                           *",
" *                                                                           *",
" *               Copyright (C) 2000-2002 by the OpenSG Forum                 *",
" *                                                                           *",
" *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"/*---------------------------------------------------------------------------*\\",
" *                                License                                    *",
" *                                                                           *",
" * This library is free software; you can redistribute it and/or modify it   *",
" * under the terms of the GNU Library General Public License as published    *",
" * by the Free Software Foundation, version 2.                               *",
" *                                                                           *",
" * This library is distributed in the hope that it will be useful, but       *",
" * WITHOUT ANY WARRANTY; without even the implied warranty of                *",
" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *",
" * Library General Public License for more details.                          *",
" *                                                                           *",
" * You should have received a copy of the GNU Library General Public         *",
" * License along with this library; if not, write to the Free Software       *",
" * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"/*---------------------------------------------------------------------------*\\",
" *                                Changes                                    *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"",
"/*****************************************************************************\\",
" *****************************************************************************",
" **                                                                         **",
" **                  This file is automatically generated.                  **",
" **                                                                         **",
" **          Any changes made to this file WILL be lost when it is          **",
" **           regenerated, which can become necessary at any time.          **",
" **                                                                         **",
" **     Do not change this file, changes should be done in the derived      **",
" **     class @!Classname!@!",
" **                                                                         **",
" *****************************************************************************",
"\\*****************************************************************************/",
"",
"#include <@!HeaderPrefix!@OSGConfig.h>",
"",
"OSG_BEGIN_NAMESPACE",
"",
"",
"//! access the type of the class",
"inline",
"OSG::FieldContainerType &@!Classname!@Base::getClassType(void)",
"{",
"    return _type; ",
"} ",
"",
"//! access the numerical type of the class",
"inline",
"OSG::UInt32 @!Classname!@Base::getClassTypeId(void) ",
"{",
"    return _type.getId(); ",
"} ",
"",
"@@if hasProducedMethods", 
"//! access the producer type of the class",
"inline",
"const EventProducerType &@!Classname!@Base::getProducerClassType(void)",
"{",
"    return _producerType;",
"}",
"",
"//! access the producer type id of the class",
"inline",
"UInt32 @!Classname!@Base::getProducerClassTypeId(void)",
"{",
"    return _producerType.getId();",
"}",
"",
"@@endif", 
"@@if !Abstract",
"//! create a new instance of the class",
"inline",
"@!Classname!@Ptr @!Classname!@Base::create(void) ",
"{",
"    @!Classname!@Ptr fc; ",
"",
"    if(getClassType().getPrototype() != OSG::NullFC) ",
"    {",
//"        fc = OSG::dcast<@!Classname!@Ptr>(",
//"            getClassType().getPrototype()-> shallowCopy()); ",
"        fc = @!Classname!@Ptr::dcast(",
"            getClassType().getPrototype()-> shallowCopy()); ",
"    }",
"    ",
"    return fc; ",
"}",
"",
"//! create an empty new instance of the class, do not copy the prototype",
"inline",
"@!Classname!@Ptr @!Classname!@Base::createEmpty(void) ",
"{ ",
"    @!Classname!@Ptr returnValue; ",
"    ",
"    newPtr(returnValue); ",
"",
"    return returnValue; ",
"}",
"",
"@@endif",
"",
"@@if !Decorator",
"@@if !isDecoratable",
"/*------------------------------ get -----------------------------------*/",
"", 
"@@BeginFieldLoop@@",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"inline",
"const @!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get"
"@!CARDINALITY!@@!Fieldname!@(void) const",
"{",
"    return &_@!fieldname!@;",
"}",
"",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"inline",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::edit"
"@!CARDINALITY!@@!Fieldname!@(void)",
"{",
"    return &_@!fieldname!@;",
"}",
"",
"@@EndFieldLoop@@",


"",
"@@BeginSFFieldLoop@@",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"inline",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(void)",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"inline",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"",
"//! Set the value of the @!Classname!@::_@!fieldname!@ field.",
"inline",
"void @!Classname!@Base::set@!Fieldname!@(const @!Fieldtype!@ &value)",
"{",
"    _@!fieldname!@.setValue(value);",
"}",
"",
"@@EndSFFieldLoop@@",


"",
"@@BeginMFFieldLoop@@",
"//! Get the value of the \\a index element the @!Classname!@::_@!fieldname!@ field.",
"inline",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(const UInt32 index)",
"{",
"    return _@!fieldname!@[index];",
"}",
"",
"//! Get the value of the \\a index element the @!Classname!@::_@!fieldname!@ field.",
"inline",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(const UInt32 index) const",
"{",
"    return _@!fieldname!@[index];",
"}",
"",
"#ifndef OSG_2_PREP",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"inline",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void)",
"{",
"    return _@!fieldname!@;",
"}",
"",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"inline",
"const @!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return _@!fieldname!@;",
"}",
"",
"#endif",

"@@EndMFFieldLoop@@",
"@@endif",
"@@else",
"/*------------------------- decorator get ------------------------------*/",
"", 
"@@if Decorator",
"inline",
"const SF@!Parent!@Ptr *@!Classname!@Base::getSFDecoratee(void) const",
"{",
"    return &_sfDecoratee;",
"}",
"",
"inline",
"SF@!Parent!@Ptr *@!Classname!@Base::editSFDecoratee(void)",
"{",
"    return &_sfDecoratee;",
"}",
"",
"inline",
"const @!Parent!@Ptr &@!Classname!@Base::getDecoratee(void) const",
"{",
"    return _sfDecoratee.getValue();",
"}",
"",
"inline",
"void @!Classname!@Base::setDecoratee(const @!Parent!@Ptr &value)",
"{",
"    _sfDecoratee.setValue(value);",
"}",
"@@endif",
"",
"@@BeginFieldLoop@@",
"inline",
"const @!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get"
"@!CARDINALITY!@@!Fieldname!@(void) const",
"{",
"    return getDecoratee()->get@!CARDINALITY!@@!Fieldname!@();",
"}",
"",
"inline",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::edit"
"@!CARDINALITY!@@!Fieldname!@(void)",
"{",
"    return getDecoratee()->edit@!CARDINALITY!@@!Fieldname!@();",
"}",
"",
"@@EndFieldLoop@@",
"",
"@@BeginSFFieldLoop@@",
"inline",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(void)",
"{",
"    return getDecoratee()->edit@!Fieldname!@();",
"}",
"",
"inline",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return getDecoratee()->get@!Fieldname!@();",
"}",
"",
"inline",
"void @!Classname!@Base::set@!Fieldname!@(const @!Fieldtype!@ &value)",
"{",
"    beginEditCP(getDecoratee(), @!Fieldname!@FieldMask);",
"    getDecoratee()->set@!Fieldname!@(value);",
"    endEditCP  (getDecoratee(), @!Fieldname!@FieldMask);",
"}",
"",
"@@EndSFFieldLoop@@",
"",
"@@BeginMFFieldLoop@@",
"inline",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(UInt32 index)",
"{",
"    return getDecoratee()->get@!Fieldname!@(index);",
"}",
"",
"inline",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(UInt32 index) const",
"{",
"    return getDecoratee()->get@!Fieldname!@(index);",
"}",
"",
"inline",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void)",
"{",
"    return getDecoratee()->get@!Fieldname!@();",
"}",
"#endif",
"@@EndMFFieldLoop@@",
"@@endif",

"@@if isRootProducer", 
"",
"inline",
"EventConnection @!Classname!@Base::attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)",
"{",
"    return _Producer.attachActivity(TheActivity, ProducedEventId);",
"}",
"",
"inline",
"bool @!Classname!@Base::isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const",
"{",
"    return _Producer.isActivityAttached(TheActivity, ProducedEventId);",
"}",
"",
"inline",
"UInt32 @!Classname!@Base::getNumActivitiesAttached(UInt32 ProducedEventId) const",
"{",
"    return _Producer.getNumActivitiesAttached(ProducedEventId);",
"}",
"",
"inline",
"ActivityPtr @!Classname!@Base::getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const",
"{",
"    return _Producer.getAttachedActivity(ProducedEventId,ActivityIndex);",
"}",
"",
"inline",
"void @!Classname!@Base::detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)",
"{",
"    _Producer.detachActivity(TheActivity, ProducedEventId);",
"}",
"",
"inline",
"UInt32 @!Classname!@Base::getNumProducedEvents(void) const",
"{",
"    return _Producer.getNumProducedEvents();",
"}",
"",
"inline",
"const MethodDescription *@!Classname!@Base::getProducedEventDescription(const Char8 *ProducedEventName) const",
"{",
"    return _Producer.getProducedEventDescription(ProducedEventName);",
"}",
"",
"inline",
"const MethodDescription *@!Classname!@Base::getProducedEventDescription(UInt32 ProducedEventId) const",
"{",
"    return _Producer.getProducedEventDescription(ProducedEventId);",
"}",
"",
"inline",
"UInt32 @!Classname!@Base::getProducedEventId(const Char8 *ProducedEventName) const",
"{",
"    return _Producer.getProducedEventId(ProducedEventName);",
"}",
"",
"inline",
"SFEventProducerPtr *@!Classname!@Base::editSFEventProducer(void)",
"{",
"    return &_sfEventProducer;",
"}",
"",
"//! Get the value of the @!Classname!@::_sfEventProducer field.",
"inline",
"EventProducerPtr &@!Classname!@Base::editEventProducer(void)",
"{",
"    return _sfEventProducer.getValue();",
"}",
"",
"@@endif", 

"OSG_END_NAMESPACE",
NULL};
