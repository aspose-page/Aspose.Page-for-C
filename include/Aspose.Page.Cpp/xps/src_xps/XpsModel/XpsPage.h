#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class XpsDocument;
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsContext;
class XpsElement;
class XpsEvent;
class XpsObject;
template <typename> class XpsProperty;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedPage;
} // namespace XpsPackageParts
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
/// Class incapsulating FixedPage element features.
/// This element contains the contents of a page and is the root element of a FixedPage part.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsPage final : public Aspose::Page::XPS::XpsModel::XpsElement
{
    typedef XpsPage ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsDocument;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    
public:

    /// <summary>
    /// Returns/sets height of the page, expressed as a real number
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Height() const;
    /// <summary>
    /// Returns/sets height of the page, expressed as a real number
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Height(float value);
    /// <summary>
    /// Returns/sets width of the page, expressed as a real number in
    /// units of the effective coordinate space. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Width() const;
    /// <summary>
    /// Returns/sets width of the page, expressed as a real number in
    /// units of the effective coordinate space. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Width(float value);
    /// <summary>
    /// Returns/sets value specifying the default language used for
    /// the current element and for any child or descendant elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_XmlLang() const;
    /// <summary>
    /// Returns/sets value specifying the default language used for
    /// the current element and for any child or descendant elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_XmlLang(System::String value);
    
    /// <summary>
    /// Clones this page.
    /// </summary>
    /// <returns>Clone of this page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPage> Clone();
    
protected:

    System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage> get_FixedPage() const;
    
    XpsPage(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context, float width, float height, System::String xmlLang = u"en-US");
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context, float width, float height, System::String xmlLang = u"en-US"));
    
    XpsPage(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPage> page);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPage> page));
    
    XpsPage(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void NotifyRoot(System::SharedPtr<XpsEvent> evt) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsPage();
    
private:

    System::WeakPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage> _fixedPage;
    float _height;
    float _width;
    System::String _xmlLang;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


