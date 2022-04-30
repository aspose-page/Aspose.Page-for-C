#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsTransformableBrush.h"
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
class XpsPageWriter;
} // namespace Xps
} // namespace Presentation
namespace XpsModel
{
template <typename> class XpsArray;
enum class XpsColorInterpolationMode;
class XpsContext;
class XpsGradientStop;
class XpsLinearGradientBrush;
class XpsObject;
template <typename> class XpsProperty;
class XpsRadialGradientBrush;
enum class XpsSpreadMethod;
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
/// Class incapsulating common features of LinerGradientBrush and RadialGradientBrush elements.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsGradientBrush : public Aspose::Page::XPS::XpsModel::XpsTransformableBrush
{
    typedef XpsGradientBrush ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsTransformableBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsLinearGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsRadialGradientBrush;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets list of gradient stops that comprise the gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> get_GradientStops() const;
    /// <summary>
    /// Returns/sets list of gradient stops that comprise the gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_GradientStops(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> value);
    /// <summary>
    /// Returns/sets value specifying the gamma function for color interpolation. The gamma adjustment
    /// should not be applied to the alpha component, if specified.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsColorInterpolationMode get_ColorInterpolationMode() const;
    /// <summary>
    /// Returns/sets value specifying the gamma function for color interpolation. The gamma adjustment
    /// should not be applied to the alpha component, if specified.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ColorInterpolationMode(XpsColorInterpolationMode value);
    /// <summary>
    /// Returns/sets value describing how the brush should fill the content area outside of the primary,
    /// initial gradient area.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsSpreadMethod get_SpreadMethod() const;
    /// <summary>
    /// Returns/sets value describing how the brush should fill the content area outside of the primary,
    /// initial gradient area.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SpreadMethod(XpsSpreadMethod value);
    
protected:

    System::String get_MappingMode() const;
    
    XpsGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops);
    XpsGradientBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> _gradientStops;
    XpsColorInterpolationMode _colorInterpolationMode;
    XpsSpreadMethod _spreadMethod;
    System::String _mappingMode;
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> CreateGradientStops(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


