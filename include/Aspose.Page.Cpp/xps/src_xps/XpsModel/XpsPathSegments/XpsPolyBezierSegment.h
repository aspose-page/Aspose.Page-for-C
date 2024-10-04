#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPathPolySegment.h"
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
class XpsContext;
class XpsElement;
class XpsObject;
class XpsPathFigure;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
} // namespace XpsModel
class XpsUtils;
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
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
/// Class incapsulating PolyBezierSegment element features.
/// This element describes a set of cubic Bézier curves.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsPolyBezierSegment : public Aspose::Page::XPS::XpsModel::XpsPathPolySegment
{
    typedef XpsPolyBezierSegment ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsPathPolySegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsPathFigure;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::XpsUtils;
    
public:

    /// <summary>
    /// Clones this set of cubic Bézier curves.
    /// </summary>
    /// <returns>Clone of this set of cubic Bézier curves.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPolyBezierSegment> Clone();
    
protected:

    ASPOSE_PAGE_SHARED_API int32_t get_NumberOfPoints() override;
    
    XpsPolyBezierSegment(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPolyBezierSegment, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true));
    
    XpsPolyBezierSegment(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPolyBezierSegment, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsPolyBezierSegment(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsPathFigure> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPolyBezierSegment, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsPathFigure> parent));
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsPolyBezierSegment();
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


