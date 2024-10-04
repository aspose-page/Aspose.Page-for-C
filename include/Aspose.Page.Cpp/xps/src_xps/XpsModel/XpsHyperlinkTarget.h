#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
namespace Xps
{
class XpsSerializationContext;
} // namespace Xps
class XpsPresenter;
} // namespace Presentation
namespace Tests
{
class HyperlinksTests;
} // namespace Tests
class XpsDocument;
namespace XpsModel
{
class XpsCanvas;
class XpsContext;
class XpsElement;
class XpsGlyphs;
class XpsHyperlinkElement;
class XpsPage;
class XpsPath;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Base class for a hyperlink target.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsHyperlinkTarget : public System::Object
{
    typedef XpsHyperlinkTarget ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkElement;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    
protected:

    static System::SharedPtr<XpsHyperlinkTarget> Create(System::SharedPtr<XpsContext> context, System::String fixedDocSource, System::String basePath, System::String uri);
    virtual System::String GetUri(System::SharedPtr<XpsContext> context) = 0;
    
};

/// <summary>
/// Class incapsulating the external hyperlink target.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsExternalLinkTarget final : public Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget
{
    typedef XpsExternalLinkTarget ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the target URI.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_TargetUri() const;
    
    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="targetUri">The external target URI.</param>
    ASPOSE_PAGE_SHARED_API XpsExternalLinkTarget(System::String targetUri);
    
protected:

    ASPOSE_PAGE_SHARED_API System::String GetUri(System::SharedPtr<XpsContext> context) override;
    
private:

    System::String _targetUri;
    
};

/// <summary>
/// Class incapsulating the page hyperlink target.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsPageLinkTarget final : public Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget
{
    typedef XpsPageLinkTarget ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the page number that the parent XPS element refers to.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_TargetPageNumber() const;
    
    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="targetPageNumber">The absolute page number within 
    /// the whole XPS document (fixed document sequence).</param>
    ASPOSE_PAGE_SHARED_API XpsPageLinkTarget(int32_t targetPageNumber);
    
protected:

    ASPOSE_PAGE_SHARED_API System::String GetUri(System::SharedPtr<XpsContext> context) override;
    
private:

    int32_t _targetPageNumber;
    
};

/// <summary>
/// Class incapsulating the relative named-address hyperlink target.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsElementLinkTarget final : public Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget
{
    typedef XpsElementLinkTarget ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkElement;
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::XPS::Tests::HyperlinksTests;
    
public:

    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="targetPage">The page element within the active fixed document.</param>
    ASPOSE_PAGE_SHARED_API XpsElementLinkTarget(System::SharedPtr<XpsPage> targetPage);
    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="targetCanvas">The canvas element within the active fixed document.</param>
    ASPOSE_PAGE_SHARED_API XpsElementLinkTarget(System::SharedPtr<XpsCanvas> targetCanvas);
    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="targetPath">The path element within the active fixed document.</param>
    ASPOSE_PAGE_SHARED_API XpsElementLinkTarget(System::SharedPtr<XpsPath> targetPath);
    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="targetGlyphs">The glyphs element within the active fixed document.</param>
    ASPOSE_PAGE_SHARED_API XpsElementLinkTarget(System::SharedPtr<XpsGlyphs> targetGlyphs);
    
protected:

    System::SharedPtr<XpsElement> get_TargetElement() const;
    void set_TargetElement(System::SharedPtr<XpsElement> value);
    System::String get_TargetName() const;
    void set_TargetName(System::String value);
    
    XpsElementLinkTarget(System::String targetName);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsElementLinkTarget, CODEPORTING_ARGS(System::String targetName));
    ASPOSE_PAGE_SHARED_API System::String GetUri(System::SharedPtr<XpsContext> context) override;
    
private:

    System::SharedPtr<XpsElement> _targetElement;
    System::String _targetName;
    
    XpsElementLinkTarget(System::SharedPtr<XpsElement> targetElement);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsElementLinkTarget, CODEPORTING_ARGS(System::SharedPtr<XpsElement> targetElement));
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


