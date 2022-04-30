#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsFileResources/XpsFileResource.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsModel
{
class XpsColor;
class XpsContext;
class XpsElement;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating an ICC profile resource.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsIccProfile final : public Aspose::Page::XPS::XpsModel::XpsFileResource
{
    typedef XpsIccProfile ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsFileResource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsModel::XpsColor;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsFileResource;
    
protected:

    ASPOSE_PAGE_SHARED_API System::String get_DefaultNamePrefix() override;
    ASPOSE_PAGE_SHARED_API System::String get_Extension() override;
    
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::IO::Stream> CreateStream() override;
    static System::SharedPtr<XpsIccProfile> Create(System::SharedPtr<XpsContext> context, System::String source);
    static System::SharedPtr<XpsIccProfile> Create(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false);
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsFileResource> Clone(System::SharedPtr<XpsContext> context) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsIccProfile();
    
private:

    XpsIccProfile(System::SharedPtr<XpsContext> context, System::String source);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsIccProfile, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::String source));
    
    XpsIccProfile(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsIccProfile, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false));
    
    XpsIccProfile(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsIccProfile> profile);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsIccProfile, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsIccProfile> profile));
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


