#pragma once

#include <xml/xml_node.h>
#include <xml/xml_element.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTransformableBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImageBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTilingBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsLinearGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsRadialGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsSolidColorBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsVisualBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsResourceDictionary; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of all brush elements.
/// </summary>
class XpsBrush : public Aspose::Page::Xps::XpsModel::XpsElement
{
    typedef XpsBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsTransformableBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsImageBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsTilingBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsLinearGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsRadialGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsVisualBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsModel::XpsResourceDictionary;
    
public:

    /// <summary>
    /// Returns/sets value defining the uniform transparency of the brush fill.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Opacity();
    /// <summary>
    /// Returns/sets value defining the uniform transparency of the brush fill.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Opacity(float value);
    
protected:

    XpsBrush(System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Validate();
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    static System::SharedPtr<XpsBrush> Create(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context);
    static System::SharedPtr<XpsBrush> Create(System::SharedPtr<System::Xml::XmlElement> node, System::SharedPtr<XpsContext> context);
    
private:

    float _opacity;
    
    void ValidateOpacity(float value);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


