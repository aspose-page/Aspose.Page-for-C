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
/// Class incapsulating LinearGradientBrush property element features.
/// This element is used to specify a linear gradient brush along a vector.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsLinearGradientBrush final : public Aspose::Page::XPS::XpsModel::XpsGradientBrush
{
    typedef XpsLinearGradientBrush ThisType;
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
    /// Returns/sets the starting point of the linear gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_StartPoint() const;
    /// <summary>
    /// Returns/sets the starting point of the linear gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StartPoint(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets the end point of the linear gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_EndPoint() const;
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
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsLinearGradientBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint));
    
    XpsLinearGradientBrush(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsLinearGradientBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint));
    
    XpsLinearGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsLinearGradientBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops));
    
    XpsLinearGradientBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsLinearGradientBrush, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void Validate() override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsLinearGradientBrush();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::Drawing::PointF _startPoint;
    System::Drawing::PointF _endPoint;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


