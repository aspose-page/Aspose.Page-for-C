#pragma once

#include <system/io/stream.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializer; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientStop; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsSolidColorBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsIccProfile; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Incapsulates ICC based color.
/// </summary>
class XpsIccBasedColor FINAL : public Aspose::Page::Xps::XpsModel::XpsColor
{
    typedef XpsIccBasedColor ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsColor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientStop;
    friend class Aspose::Page::Xps::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsColor;
    
public:

    /// <summary>
    /// Returns ICC profile resource the color based on.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsIccProfile> get_IccProfile();
    
    /// <summary>
    /// Convenience method for getting .NET native representation of ICC based color.
    /// </summary>
    /// <returns><see cref="System::Drawing::Color">System.Drawing.Color</see> structure.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color ToColor();
    
protected:

    System::String get_IccProfileReference();
    float get_Alpha();
    
    XpsIccBasedColor(System::SharedPtr<XpsIccProfile> iccProfile, float alpha, const System::ArrayPtr<float>& components);
    XpsIccBasedColor(System::SharedPtr<XpsIccProfile> iccProfile, const System::ArrayPtr<float>& components);
    
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsColor> Clone();
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static System::SharedPtr<System::IO::Stream> Lab2RGBProfileStream;
    System::SharedPtr<XpsIccProfile> _iccProfile;
    float _alpha;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


