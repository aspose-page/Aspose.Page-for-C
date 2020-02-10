#pragma once

#include <drawing/point_f.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsGradientBrush.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientStop; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating RadialGradientBrush property element features.
/// This element is used to specify a radial gradient brush.
/// </summary>
class XpsRadialGradientBrush FINAL : public Aspose::Page::Xps::XpsModel::XpsGradientBrush
{
    typedef XpsRadialGradientBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsGradientBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    
public:

    /// <summary>
    /// Returns/sets the center point of the radial
    /// gradient (that is, the center of the ellipse).
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_Center();
    /// <summary>
    /// Returns/sets the center point of the radial
    /// gradient (that is, the center of the ellipse).
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Center(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets the origin point of the radial gradient. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_GradientOrigin();
    /// <summary>
    /// Returns/sets the origin point of the radial gradient. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_GradientOrigin(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets the radius in the x dimension of the ellipse which defines the radial gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_RadiusX();
    /// <summary>
    /// Returns/sets the radius in the x dimension of the ellipse which defines the radial gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RadiusX(float value);
    /// <summary>
    /// Returns/sets the radius in the y dimension of the ellipse which defines the radial gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_RadiusY();
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
    XpsRadialGradientBrush(System::SharedPtr<XpsContext> context, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    XpsRadialGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops);
    XpsRadialGradientBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void Validate();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::PointF _center;
    System::Drawing::PointF _gradientOrigin;
    float _radiusX;
    float _radiusY;
    
    void ValidateRadiusX(float value);
    void ValidateRadiusY(float value);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


