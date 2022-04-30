#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsColor;
class XpsContext;
class XpsElement;
class XpsObject;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
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
/// Class incapsulating SolidColorBrush property element features.
/// This element is used to fill defined geometric regions with a solid color.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsSolidColorBrush final : public Aspose::Page::XPS::XpsModel::XpsBrush
{
    typedef XpsSolidColorBrush ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets the color for filled elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsColor> get_Color();
    /// <summary>
    /// Returns/sets the color for filled elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Color(System::SharedPtr<XpsColor> value);
    
    /// <summary>
    /// Clones this solid color brush.
    /// </summary>
    /// <returns>Clone of this solid color brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsSolidColorBrush> Clone();
    
protected:

    XpsSolidColorBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsSolidColorBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color));
    
    XpsSolidColorBrush(System::SharedPtr<XpsContext> context, System::Drawing::Color color);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsSolidColorBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::Drawing::Color color));
    
    XpsSolidColorBrush(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsSolidColorBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsSolidColorBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsSolidColorBrush, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void Validate() override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsSolidColorBrush();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<XpsColor> _color;
    
    System::SharedPtr<XpsColor> GetColor(System::SharedPtr<XpsColor> color);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


