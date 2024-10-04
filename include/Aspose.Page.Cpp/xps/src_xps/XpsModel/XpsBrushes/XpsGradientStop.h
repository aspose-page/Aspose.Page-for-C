#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsObject.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Xps
{
class XpsSerializer;
} // namespace Xps
} // namespace Presentation
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsColor;
class XpsContext;
class XpsElement;
class XpsGradientBrush;
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
/// Class incapsulating GradientStop element features.
/// This  element is used by both the LinearGradientBrush and RadialGradientBrush elements to define
/// the location and range of color progression for rendering a gradient.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsGradientStop final : public Aspose::Page::XPS::XpsModel::XpsObject
{
    typedef XpsGradientStop ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// The gradient stop color.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsColor> get_Color();
    /// <summary>
    /// Returns/sets the gradient offset. The offset indicates a point along the progression of
    /// the gradient at which a color is specified. Colors between gradient offsets in
    /// the progression are interpolated.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Offset() const;
    
    /// <summary>
    /// Clones this gradient stop.
    /// </summary>
    /// <returns>Clone of this gradient stop.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGradientStop> Clone();
    
protected:

    XpsGradientStop(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color, float offset);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsGradientStop, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color, float offset));
    
    XpsGradientStop(System::Drawing::Color color, float offset);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsGradientStop, CODEPORTING_ARGS(System::Drawing::Color color, float offset));
    
    XpsGradientStop(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsGradientStop, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsGradientStop(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsGradientStop, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsGradientStop();
    
private:

    System::SharedPtr<XpsColor> _color;
    float _offset;
    
    System::SharedPtr<XpsColor> GetColor(System::SharedPtr<XpsColor> color);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


