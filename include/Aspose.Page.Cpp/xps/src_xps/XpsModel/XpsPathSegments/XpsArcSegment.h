#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPathSegment.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTreeLoader; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsUtils; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsSweepDirection; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating ArcSegment element features.
/// This element describes an elliptical arc.
/// </summary>
class XpsArcSegment : public Aspose::Page::Xps::XpsModel::XpsPathSegment
{
    typedef XpsArcSegment ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsPathSegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsTreeLoader;
    friend class Aspose::Page::Xps::XpsUtils;
    
public:

    /// <summary>
    /// Returns/sets the endpoint of the elliptical arc.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_Point();
    /// <summary>
    /// Returns/sets the endpoint of the elliptical arc.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Point(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets the x and y radius of the elliptical arc as an x,y pair.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::SizeF get_Size();
    /// <summary>
    /// Returns/sets the x and y radius of the elliptical arc as an x,y pair.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::SizeF value);
    /// <summary>
    /// Returns/sets value indicating how the ellipse is rotated relative to the current coordinate system.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_RotationAngle();
    /// <summary>
    /// Returns/sets value indicating how the ellipse is rotated relative to the current coordinate system.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RotationAngle(float value);
    /// <summary>
    /// Returns/sets value determining whether the arc is drawn with a sweep of 180 or greater. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsLargeArc();
    /// <summary>
    /// Returns/sets value determining whether the arc is drawn with a sweep of 180 or greater. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsLargeArc(bool value);
    /// <summary>
    /// Returns/sets value specifying the direction in which the arc is drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsSweepDirection get_SweepDirection();
    /// <summary>
    /// Returns/sets value specifying the direction in which the arc is drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SweepDirection(XpsSweepDirection value);
    
    /// <summary>
    /// Clones this arc segment.
    /// </summary>
    /// <returns>Clone of this arc segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsArcSegment> Clone();
    
protected:

    XpsArcSegment(System::SharedPtr<XpsContext> context, System::Drawing::PointF point, System::Drawing::SizeF size, float rotationAngle, bool isLargeArc, XpsSweepDirection sweepDirection, bool isStroked = true);
    XpsArcSegment(System::SharedPtr<XpsContext> context);
    XpsArcSegment(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API System::String Abbreviate(System::String abbrChar, System::Drawing::PointF& endPoint);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::PointF _point;
    System::Drawing::SizeF _size;
    float _rotationAngle;
    bool _isLargeArc;
    XpsSweepDirection _sweepDirection;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


