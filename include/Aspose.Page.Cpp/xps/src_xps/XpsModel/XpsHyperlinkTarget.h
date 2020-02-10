#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializationContext; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedDocument; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsPresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsHyperlinkTarget; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class HyperlinksTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsCanvas; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPath; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Base class for a hyperlink target.
/// </summary>
class XpsHyperlinkTarget : public System::Object
{
    typedef XpsHyperlinkTarget ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsContext;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedDocument;
    
protected:

    static System::SharedPtr<XpsHyperlinkTarget> Create(System::SharedPtr<XpsContext> context, System::String fixedDocSource, System::String basePath, System::String uri);
    virtual System::String GetUri(System::SharedPtr<XpsContext> context) = 0;
    
};

/// <summary>
/// Class incapsulating the external hyperlink target.
/// </summary>
class XpsExternalLinkTarget FINAL : public Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget
{
    typedef XpsExternalLinkTarget ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    
public:

    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="targetUri">The external target URI.</param>
    ASPOSE_PAGE_SHARED_API XpsExternalLinkTarget(System::String targetUri);
    
protected:

    System::String get_TargetUri();
    
    virtual ASPOSE_PAGE_SHARED_API System::String GetUri(System::SharedPtr<XpsContext> context);
    
private:

    System::String _targetUri;
    
};

/// <summary>
/// Class incapsulating the page hyperlink target.
/// </summary>
class XpsPageLinkTarget FINAL : public Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget
{
    typedef XpsPageLinkTarget ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::XpsModel::XpsContext;
    
public:

    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="targetPageNumber">The absolute page number within 
    /// the whole XPS document (fixed document sequence).</param>
    ASPOSE_PAGE_SHARED_API XpsPageLinkTarget(int32_t targetPageNumber);
    
protected:

    int32_t get_TargetPageNumber();
    
    virtual ASPOSE_PAGE_SHARED_API System::String GetUri(System::SharedPtr<XpsContext> context);
    
private:

    int32_t _targetPageNumber;
    
};

/// <summary>
/// Class incapsulating the relative named-address hyperlink target.
/// </summary>
class XpsElementLinkTarget FINAL : public Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget
{
    typedef XpsElementLinkTarget ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsContext;
    friend class Aspose::Page::Xps::XpsDocument;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::Xps::Tests::HyperlinksTests;
    
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

    System::SharedPtr<XpsElement> get_TargetElement();
    void set_TargetElement(System::SharedPtr<XpsElement> value);
    System::String get_TargetName();
    void set_TargetName(System::String value);
    
    XpsElementLinkTarget(System::String targetName);
    
    virtual ASPOSE_PAGE_SHARED_API System::String GetUri(System::SharedPtr<XpsContext> context);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsElement> _targetElement;
    System::String _targetName;
    
    XpsElementLinkTarget(System::SharedPtr<XpsElement> targetElement);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


