#pragma once

#include <system/text/regularexpressions/regex.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientStop; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsSolidColorBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsRgbColor; } } } }
namespace System { class ObjectExt; }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// The base class incapsulating common color features.
/// </summary>
class XpsColor : public System::Object
{
    typedef XpsColor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::XpsModel::XpsBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientStop;
    friend class Aspose::Page::Xps::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsRgbColor;
    friend class System::ObjectExt;
    
public:

    /// <summary>
    /// Convenience method for getting .NET native representation of any color/
    /// </summary>
    /// <returns><see cref="System::Drawing::Color"/> structure</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color ToColor() = 0;
    
protected:

    System::ArrayPtr<float> _components;
    
    XpsColor();
    
    virtual System::String ToString() = 0;
    static System::SharedPtr<XpsColor> CreateColor(System::SharedPtr<XpsContext> context, System::String colorStr);
    static int32_t To255(double val);
    virtual System::SharedPtr<XpsColor> Clone() = 0;
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static const System::String OpacityPattern;
    static const System::String ColorComponentPattern;
    static System::SharedPtr<System::Text::RegularExpressions::Regex> RgbColor;
    static System::SharedPtr<System::Text::RegularExpressions::Regex> SrgbColor;
    static System::SharedPtr<System::Text::RegularExpressions::Regex> IccBasedColor;
    
    static bool TryGetRgbColor(System::String colorStr, System::SharedPtr<XpsColor>& color);
    static bool TryGetSrgbColor(System::String colorStr, System::SharedPtr<XpsColor>& color);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


