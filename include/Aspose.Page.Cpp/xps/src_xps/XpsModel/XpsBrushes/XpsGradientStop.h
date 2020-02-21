#pragma once

#include <xml/xml_element.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/color.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class NativeConverter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializer; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsColor; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating GradientStop element features.
/// This  element is used by both the LinearGradientBrush and RadialGradientBrush elements to define
/// the location and range of color progression for rendering a gradient.
/// </summary>
class XpsGradientStop FINAL : public Aspose::Page::Xps::XpsModel::XpsElement
{
    typedef XpsGradientStop ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::NativeConverter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    
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
    ASPOSE_PAGE_SHARED_API float get_Offset();
    
    /// <summary>
    /// Clones this gradient stop.
    /// </summary>
    /// <returns>Clone of this gradient stop.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGradientStop> Clone();
    
protected:

    /// <summary>
    /// The gradient stop color.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Color(System::SharedPtr<XpsColor> value);
    /// <summary>
    /// Returns/sets the gradient offset. The offset indicates a point along the progression of
    /// the gradient at which a color is specified. Colors between gradient offsets in
    /// the progression are interpolated.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Offset(float value);
    
    XpsGradientStop(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color, float offset);
    XpsGradientStop(System::SharedPtr<XpsContext> context, System::Drawing::Color color, float offset);
    XpsGradientStop(System::SharedPtr<XpsContext> context);
    XpsGradientStop(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsColor> _color;
    float _offset;
    
    void Validate();
    void ValidateOffset(float value);
    System::SharedPtr<XpsColor> GetColor(System::SharedPtr<XpsColor> color);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


