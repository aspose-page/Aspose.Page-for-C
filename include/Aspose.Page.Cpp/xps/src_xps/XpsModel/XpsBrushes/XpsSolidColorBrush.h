#pragma once

#include <drawing/color.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsColor; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating SolidColorBrush property element features.
/// This element is used to fill defined geometric regions with a solid color.
/// </summary>
class XpsSolidColorBrush FINAL : public Aspose::Page::Xps::XpsModel::XpsBrush
{
    typedef XpsSolidColorBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    
public:

    /// <summary>
    /// Returns/sets the color for filled elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsColor> get_Color();
    /// <summary>
    /// Returns/sets the color for filled elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Color(System::SharedPtr<XpsColor> value);
    
    /// <summary>
    /// Clones this solid color brush.
    /// </summary>
    /// <returns>Clone of this solid color brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsSolidColorBrush> Clone();
    
protected:

    XpsSolidColorBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color);
    XpsSolidColorBrush(System::SharedPtr<XpsContext> context, System::Drawing::Color color);
    XpsSolidColorBrush(System::SharedPtr<XpsContext> context);
    XpsSolidColorBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void Validate();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsColor> _color;
    
    System::SharedPtr<XpsColor> GetColor(System::SharedPtr<XpsColor> color);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


