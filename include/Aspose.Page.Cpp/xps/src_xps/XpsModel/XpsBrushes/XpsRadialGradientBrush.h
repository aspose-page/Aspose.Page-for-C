#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/point_f.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsGradientBrush.h"
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
class XpsBrush;
class XpsContext;
class XpsElement;
class XpsGradientStop;
class XpsObject;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
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
/// Class incapsulating RadialGradientBrush property element features.
/// This element is used to specify a radial gradient brush.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsRadialGradientBrush final : public Aspose::Page::XPS::XpsModel::XpsGradientBrush
{
    typedef XpsRadialGradientBrush ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsGradientBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets the center point of the radial
    /// gradient (that is, the center of the ellipse).
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_Center() const;
    /// <summary>
    /// Returns/sets the center point of the radial
    /// gradient (that is, the center of the ellipse).
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Center(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets the origin point of the radial gradient. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_GradientOrigin() const;
    /// <summary>
    /// Returns/sets the origin point of the radial gradient. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_GradientOrigin(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets the radius in the x dimension of the ellipse which defines the radial gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_RadiusX() const;
    /// <summary>
    /// Returns/sets the radius in the x dimension of the ellipse which defines the radial gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RadiusX(float value);
    /// <summary>
    /// Returns/sets the radius in the y dimension of the ellipse which defines the radial gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_RadiusY() const;
    /// <summary>
    /// Returns/sets the radius in the y dimension of the ellipse which defines the radial gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RadiusY(float value);
    
    /// <summary>
    /// Clones this radial graduent brush.
    /// </summary>
    /// <returns>Clone of this radial graduent brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsRadialGradientBrush> Clone();
    
protected:

    XpsRadialGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRadialGradientBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY));
    
    XpsRadialGradientBrush(System::SharedPtr<XpsContext> context, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRadialGradientBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY));
    
    XpsRadialGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRadialGradientBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops));
    
    XpsRadialGradientBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRadialGradientBrush, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void Validate() override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsRadialGradientBrush();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::Drawing::PointF _center;
    System::Drawing::PointF _gradientOrigin;
    float _radiusX;
    float _radiusY;
    
    void ValidateRadiusX(float value);
    void ValidateRadiusY(float value);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


