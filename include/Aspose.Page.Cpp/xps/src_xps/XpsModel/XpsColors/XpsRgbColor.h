#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsModel
{
class XpsElement;
class XpsGradientStop;
class XpsSolidColorBrush;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Incapsulates RGB color of any color space (sRGB or scRGB).
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsRgbColor final : public Aspose::Page::XPS::XpsModel::XpsColor
{
    typedef XpsRgbColor ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsColor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsModel::XpsGradientStop;
    friend class Aspose::Page::XPS::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsColor;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    
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
    ASPOSE_PAGE_SHARED_API System::Drawing::Color ToColor() override;
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    XpsRgbColor(float a, float r, float g, float b);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRgbColor, CODEPORTING_ARGS(float a, float r, float g, float b));
    
    XpsRgbColor(float r, float g, float b);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRgbColor, CODEPORTING_ARGS(float r, float g, float b));
    
    XpsRgbColor(int32_t a, int32_t r, int32_t g, int32_t b);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRgbColor, CODEPORTING_ARGS(int32_t a, int32_t r, int32_t g, int32_t b));
    
    XpsRgbColor(int32_t r, int32_t g, int32_t b);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRgbColor, CODEPORTING_ARGS(int32_t r, int32_t g, int32_t b));
    
    XpsRgbColor(System::Drawing::Color color);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRgbColor, CODEPORTING_ARGS(System::Drawing::Color color));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsColor> Clone() override;
    
private:

    XpsRgbColor::XpsColorSpace _colorSpace;
    
    XpsRgbColor(XpsRgbColor::XpsColorSpace colorSpace);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsRgbColor, CODEPORTING_ARGS(XpsRgbColor::XpsColorSpace colorSpace));
    System::String ToString_NonConst();
    static System::Drawing::Color ScRGBToARGB(float a, float rc, float gc, float bc);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


