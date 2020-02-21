#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientStop; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsSolidColorBrush; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

class XpsRgbColor FINAL : public Aspose::Page::Xps::XpsModel::XpsColor
{
    typedef XpsRgbColor ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsColor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientStop;
    friend class Aspose::Page::Xps::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsColor;
    
private:

    enum class XpsColorSpace
    {
        sRgb,
        scRgb
    };
    
    
public:

    /// <summary>
    /// Convenience method for getting .NET native representation of RGB color.
    /// </summary>
    /// <returns><see cref="System::Drawing::Color">System.Drawing.Color</see> structure.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color ToColor();
    
protected:

    XpsRgbColor(float a, float r, float g, float b);
    XpsRgbColor(float r, float g, float b);
    XpsRgbColor(int32_t a, int32_t r, int32_t g, int32_t b);
    XpsRgbColor(int32_t r, int32_t g, int32_t b);
    XpsRgbColor(System::Drawing::Color color);
    
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsColor> Clone();
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    XpsRgbColor::XpsColorSpace _colorSpace;
    
    XpsRgbColor(XpsRgbColor::XpsColorSpace colorSpace);
    
    static System::Drawing::Color ScRGBToARGB(float a, float rc, float gc, float bc);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


