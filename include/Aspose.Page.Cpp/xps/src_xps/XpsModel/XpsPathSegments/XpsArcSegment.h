#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>
#include <drawing/point_f.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPathSegment.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class DocumentUtils;
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsContext;
class XpsElement;
class XpsObject;
class XpsPathFigure;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
enum class XpsSweepDirection;
} // namespace XpsModel
class XpsUtils;
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
class String;
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
/// Class incapsulating ArcSegment element features.
/// This element describes an elliptical arc.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsArcSegment : public Aspose::Page::XPS::XpsModel::XpsPathSegment
{
    typedef XpsArcSegment ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsPathSegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::DocumentUtils;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsPathFigure;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::XpsUtils;
    
public:

    /// <summary>
    /// Returns/sets the endpoint of the elliptical arc.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_Point() const;
    /// <summary>
    /// Returns/sets the endpoint of the elliptical arc.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Point(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets the x and y radius of the elliptical arc as an x,y pair.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::SizeF get_Size() const;
    /// <summary>
    /// Returns/sets the x and y radius of the elliptical arc as an x,y pair.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::SizeF value);
    /// <summary>
    /// Returns/sets value indicating how the ellipse is rotated relative to the current coordinate system.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_RotationAngle() const;
    /// <summary>
    /// Returns/sets value indicating how the ellipse is rotated relative to the current coordinate system.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RotationAngle(float value);
    /// <summary>
    /// Returns/sets value determining whether the arc is drawn with a sweep of 180 or greater. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsLargeArc() const;
    /// <summary>
    /// Returns/sets value determining whether the arc is drawn with a sweep of 180 or greater. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsLargeArc(bool value);
    /// <summary>
    /// Returns/sets value specifying the direction in which the arc is drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsSweepDirection get_SweepDirection() const;
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
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsArcSegment, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::Drawing::PointF point, System::Drawing::SizeF size, float rotationAngle, bool isLargeArc, XpsSweepDirection sweepDirection, bool isStroked = true));
    
    XpsArcSegment(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsArcSegment, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsArcSegment(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsPathFigure> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsArcSegment, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsPathFigure> parent));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API System::String Abbreviate(System::String abbrChar, System::Drawing::PointF& endPoint) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsArcSegment();
    
private:

    System::Drawing::PointF _point;
    System::Drawing::SizeF _size;
    float _rotationAngle;
    bool _isLargeArc;
    XpsSweepDirection _sweepDirection;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


