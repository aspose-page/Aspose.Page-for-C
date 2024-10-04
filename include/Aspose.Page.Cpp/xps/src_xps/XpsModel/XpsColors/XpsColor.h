#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

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
class XpsBrush;
class XpsContext;
class XpsGradientBrush;
class XpsGradientStop;
class XpsIccBasedColor;
class XpsRgbColor;
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
class ObjectExt;
namespace Text
{
namespace RegularExpressions
{
class Regex;
} // namespace RegularExpressions
} // namespace Text
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// The base class incapsulating common color features.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsColor : public System::Object
{
    typedef XpsColor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::XPS::XpsModel::XpsBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientStop;
    friend class Aspose::Page::XPS::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsIccBasedColor;
    friend class Aspose::Page::XPS::XpsModel::XpsRgbColor;
    friend class System::ObjectExt;
    
public:

    /// <summary>
    /// Convenience method for getting .NET native representation of any color/
    /// </summary>
    /// <returns><see cref="System::Drawing::Color"></see> structure</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color ToColor() = 0;
    System::String ToString() const override = 0;
    
protected:

    System::ArrayPtr<float> _components;
    
    XpsColor();
    
    static System::SharedPtr<XpsColor> CreateColor(System::SharedPtr<XpsContext> context, System::String colorStr);
    static int32_t To255(double val);
    virtual System::SharedPtr<XpsColor> Clone() = 0;
    void Assert();
    virtual ASPOSE_PAGE_SHARED_API void Dispose();
    
private:

    static const System::String OpacityPattern;
    static const System::String ColorComponentPattern;
    static System::SharedPtr<System::Text::RegularExpressions::Regex> RgbColor;
    static System::SharedPtr<System::Text::RegularExpressions::Regex> SrgbColor;
    static System::SharedPtr<System::Text::RegularExpressions::Regex> IccBasedColor;
    bool _isDisposed;
    
    static bool TryGetRgbColor(System::String colorStr, System::SharedPtr<XpsColor>& color);
    static bool TryGetSrgbColor(System::String colorStr, System::SharedPtr<XpsColor>& color);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


