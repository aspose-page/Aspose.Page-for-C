#pragma once

#include <system/shared_ptr.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsModel
{
class XpsContentElement;
class XpsContext;
class XpsElement;
class XpsHyperlinkTarget;
class XpsOutlineEntry;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Incapsulates common features of XPS elements that can be a hyperlink.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsHyperlinkElement : public Aspose::Page::XPS::XpsModel::XpsElement
{
    typedef XpsHyperlinkElement ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsModel::XpsContentElement;
    friend class Aspose::Page::XPS::XpsModel::XpsOutlineEntry;
    
public:

    /// <summary>
    /// Returns/sets hyperlink target object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsHyperlinkTarget> get_HyperlinkTarget() const;
    /// <summary>
    /// Returns/sets hyperlink target object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_HyperlinkTarget(System::SharedPtr<XpsHyperlinkTarget> value);
    
protected:

    XpsHyperlinkElement(System::SharedPtr<XpsContext> context);
    XpsHyperlinkElement(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsHyperlinkTarget> outlineTarget);
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true) override;
    void RegisterLinks(System::SharedPtr<XpsHyperlinkTarget> linkTarget);
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsHyperlinkElement();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<XpsHyperlinkTarget> _linkTarget;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


