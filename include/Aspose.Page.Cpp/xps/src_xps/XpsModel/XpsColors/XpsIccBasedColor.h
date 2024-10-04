#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h"
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
class XpsSerializer;
} // namespace Xps
} // namespace Presentation
namespace XpsModel
{
class XpsElement;
class XpsGradientBrush;
class XpsGradientStop;
class XpsIccProfile;
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
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Incapsulates ICC based color.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsIccBasedColor final : public Aspose::Page::XPS::XpsModel::XpsColor
{
    typedef XpsIccBasedColor ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsColor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientStop;
    friend class Aspose::Page::XPS::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsColor;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    
public:

    /// <summary>
    /// Returns ICC profile resource the color based on.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsIccProfile> get_IccProfile();
    
    /// <summary>
    /// Convenience method for getting .NET native representation of ICC based color.
    /// </summary>
    /// <returns><see cref="System::Drawing::Color">System.Drawing.Color</see> structure.</returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::Color ToColor() override;
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    System::String get_IccProfileReference();
    float get_Alpha() const;
    
    XpsIccBasedColor(System::SharedPtr<XpsIccProfile> iccProfile, float alpha, const System::ArrayPtr<float>& components);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsIccBasedColor, CODEPORTING_ARGS(System::SharedPtr<XpsIccProfile> iccProfile, float alpha, const System::ArrayPtr<float>& components));
    
    XpsIccBasedColor(System::SharedPtr<XpsIccProfile> iccProfile, const System::ArrayPtr<float>& components);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsIccBasedColor, CODEPORTING_ARGS(System::SharedPtr<XpsIccProfile> iccProfile, const System::ArrayPtr<float>& components));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsColor> Clone() override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
private:

    static System::SharedPtr<System::IO::Stream> Lab2RGBProfileStream;
    System::SharedPtr<XpsIccProfile> _iccProfile;
    float _alpha;
    
    System::String ToString_NonConst();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


