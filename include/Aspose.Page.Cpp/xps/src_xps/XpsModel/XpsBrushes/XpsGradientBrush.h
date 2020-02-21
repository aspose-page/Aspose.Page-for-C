#pragma once

#include <system/string.h>
#include <system/collections/list.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsTransformableBrush.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsLinearGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsRadialGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsColorInterpolationMode; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsSpreadMethod; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientStop; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of LinerGradientBrush and RadialGradientBrush elements.
/// </summary>
class XpsGradientBrush : public Aspose::Page::Xps::XpsModel::XpsTransformableBrush
{
    typedef XpsGradientBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsTransformableBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::XpsModel::XpsLinearGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsRadialGradientBrush;
    
public:

    /// <summary>
    /// Returns/sets list of gradient stops that comprise the gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> get_GradientStops();
    /// <summary>
    /// Returns/sets list of gradient stops that comprise the gradient.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_GradientStops(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> value);
    /// <summary>
    /// Returns/sets value specifying the gamma function for color interpolation. The gamma adjustment
    /// should not be applied to the alpha component, if specified.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsColorInterpolationMode get_ColorInterpolationMode();
    /// <summary>
    /// Returns/sets value specifying the gamma function for color interpolation. The gamma adjustment
    /// should not be applied to the alpha component, if specified.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ColorInterpolationMode(XpsColorInterpolationMode value);
    /// <summary>
    /// Returns/sets value describing how the brush should fill the content area outside of the primary,
    /// initial gradient area.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsSpreadMethod get_SpreadMethod();
    /// <summary>
    /// Returns/sets value describing how the brush should fill the content area outside of the primary,
    /// initial gradient area.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SpreadMethod(XpsSpreadMethod value);
    
protected:

    System::String get_MappingMode();
    
    XpsGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops);
    XpsGradientBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> _gradientStops;
    XpsColorInterpolationMode _colorInterpolationMode;
    XpsSpreadMethod _spreadMethod;
    System::String _mappingMode;
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> CreateGradientStops(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


