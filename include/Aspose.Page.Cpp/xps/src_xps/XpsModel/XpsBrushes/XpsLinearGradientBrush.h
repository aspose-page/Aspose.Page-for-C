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
/// Class incapsulating LinearGradientBrush property element features.
/// This element is used to specify a linear gradient brush along a vector.
/// </summary>
class XpsLinearGradientBrush FINAL : public Aspose::Page::Xps::XpsModel::XpsGradientBrush
{
    typedef XpsLinearGradientBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsGradientBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    
public:

    /// <summary>
    /// Returns/sets the starting point of the linear gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_StartPoint();
    /// <summary>
    /// Returns/sets the starting point of the linear gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StartPoint(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets the end point of the linear gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_EndPoint();
    /// <summary>
    /// Returns/sets the end point of the linear gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_EndPoint(System::Drawing::PointF value);
    
    /// <summary>
    /// Clones this linear gradient brush.
    /// </summary>
    /// <returns>Clone of this linear gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsLinearGradientBrush> Clone();
    
protected:

    XpsLinearGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    XpsLinearGradientBrush(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    XpsLinearGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops);
    XpsLinearGradientBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void Validate();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::PointF _startPoint;
    System::Drawing::PointF _endPoint;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


