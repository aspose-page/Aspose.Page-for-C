#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsFileResources/XpsFileResource.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class DocumentUtils;
namespace Presentation
{
class NativeConverter;
} // namespace Presentation
namespace XpsModel
{
class XpsContext;
class XpsElement;
class XpsImageBrush;
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
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating an image resource.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsImage final : public Aspose::Page::XPS::XpsModel::XpsFileResource
{
    typedef XpsImage ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsFileResource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::NativeConverter;
    friend class Aspose::Page::XPS::DocumentUtils;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsFileResource;
    
protected:

    ASPOSE_PAGE_SHARED_API System::String get_DefaultNamePrefix() override;
    ASPOSE_PAGE_SHARED_API System::String get_Extension() override;
    
    static System::SharedPtr<XpsImage> Create(System::SharedPtr<XpsContext> context, System::String source);
    static System::SharedPtr<XpsImage> Create(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, System::String extension, bool isExternal = false);
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsFileResource> Clone(System::SharedPtr<XpsContext> context) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsImage();
    
private:

    System::String _extension;
    
    XpsImage(System::SharedPtr<XpsContext> context, System::String source);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsImage, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::String source));
    
    XpsImage(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, System::String extension, bool isExternal = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsImage, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, System::String extension, bool isExternal = false));
    
    XpsImage(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsImage> image);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsImage, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsImage> image));
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


