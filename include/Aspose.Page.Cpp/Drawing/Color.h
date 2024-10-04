#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/color.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace Drawing {

/// <summary>Represents an ARGB (alpha, red, green, blue) color.</summary>
class ASPOSE_PAGE_SHARED_CLASS Color : public System::Object, public System::Details::BoxableObjectBase
{
    typedef Color ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend ASPOSE_PAGE_SHARED_API bool operator ==(const Color& left, const Color& right);
    friend ASPOSE_PAGE_SHARED_API bool operator !=(const Color& left, const Color& right);
    
public:

    /// <summary>Represents a color that is null.</summary>
    static ASPOSE_PAGE_SHARED_API Color Empty;
    
    /// <summary>Gets a system-defined color.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Transparent();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF0F8FF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_AliceBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFAEBD7.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_AntiqueWhite();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF00FFFF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Aqua();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF7FFFD4.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Aquamarine();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF0FFFF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Azure();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF5F5DC.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Beige();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFE4C4.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Bisque();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF000000.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Black();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFEBCD.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_BlanchedAlmond();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF0000FF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Blue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF8A2BE2.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_BlueViolet();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFA52A2A.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Brown();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFDEB887.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_BurlyWood();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF5F9EA0.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_CadetBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF7FFF00.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Chartreuse();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFD2691E.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Chocolate();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF7F50.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Coral();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF6495ED.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_CornflowerBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFF8DC.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Cornsilk();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFDC143C.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Crimson();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF00FFFF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Cyan();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF00008B.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF008B8B.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkCyan();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFB8860B.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkGoldenrod();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFA9A9A9.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkGray();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF006400.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFBDB76B.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkKhaki();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF8B008B.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkMagenta();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF556B2F.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkOliveGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF8C00.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkOrange();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF9932CC.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkOrchid();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF8B0000.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkRed();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFE9967A.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkSalmon();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF8FBC8F.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkSeaGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF483D8B.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkSlateBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF2F4F4F.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkSlateGray();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF00CED1.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkTurquoise();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF9400D3.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DarkViolet();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF1493.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DeepPink();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF00BFFF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DeepSkyBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF696969.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DimGray();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF1E90FF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_DodgerBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFB22222.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Firebrick();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFFAF0.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_FloralWhite();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF228B22.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_ForestGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF00FF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Fuchsia();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFDCDCDC.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Gainsboro();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF8F8FF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_GhostWhite();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFD700.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Gold();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFDAA520.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Goldenrod();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF808080.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> strcture representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Gray();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF008000.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Green();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFADFF2F.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_GreenYellow();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF0FFF0.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Honeydew();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF69B4.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_HotPink();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFCD5C5C.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_IndianRed();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF4B0082.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Indigo();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFFFF0.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Ivory();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF0E68C.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Khaki();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFE6E6FA.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Lavender();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFF0F5.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LavenderBlush();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF7CFC00.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LawnGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFFACD.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LemonChiffon();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFADD8E6.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF08080.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightCoral();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFE0FFFF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightCyan();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFAFAD2.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightGoldenrodYellow();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF90EE90.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFD3D3D3.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightGray();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFB6C1.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightPink();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFA07A.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightSalmon();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF20B2AA.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightSeaGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF87CEFA.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightSkyBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF778899.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightSlateGray();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFB0C4DE.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightSteelBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFFFE0.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LightYellow();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF00FF00.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Lime();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF32CD32.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_LimeGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFAF0E6.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Linen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF00FF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Magenta();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF800000.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Maroon();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF66CDAA.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumAquamarine();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF0000CD.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFBA55D3.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumOrchid();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF9370DB.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumPurple();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF3CB371.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumSeaGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF7B68EE.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumSlateBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF00FA9A.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumSpringGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF48D1CC.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumTurquoise();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFC71585.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MediumVioletRed();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF191970.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MidnightBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF5FFFA.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MintCream();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFE4E1.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_MistyRose();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFE4B5.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Moccasin();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFDEAD.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_NavajoWhite();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF000080.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Navy();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFDF5E6.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_OldLace();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF808000.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Olive();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF6B8E23.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_OliveDrab();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFA500.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Orange();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF4500.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_OrangeRed();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFDA70D6.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Orchid();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFEEE8AA.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_PaleGoldenrod();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF98FB98.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_PaleGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFAFEEEE.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_PaleTurquoise();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFDB7093.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_PaleVioletRed();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFEFD5.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_PapayaWhip();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFDAB9.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_PeachPuff();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFCD853F.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Peru();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFC0CB.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Pink();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFDDA0DD.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Plum();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFB0E0E6.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_PowderBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF800080.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Purple();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF0000.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Red();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFBC8F8F.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_RosyBrown();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF4169E1.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_RoyalBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF8B4513.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SaddleBrown();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFA8072.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Salmon();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF4A460.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SandyBrown();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF2E8B57.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SeaGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFF5EE.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SeaShell();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFA0522D.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Sienna();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFC0C0C0.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Silver();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF87CEEB.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SkyBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF6A5ACD.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SlateBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF708090.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SlateGray();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFFAFA.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Snow();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF00FF7F.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SpringGreen();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF4682B4.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_SteelBlue();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFD2B48C.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Tan();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF008080.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Teal();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFD8BFD8.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Thistle();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFF6347.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Tomato();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF40E0D0.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Turquoise();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFEE82EE.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Violet();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF5DEB3.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Wheat();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFFFFF.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_White();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFF5F5F5.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_WhiteSmoke();
    /// <summary>Gets a system-defined color that has an ARGB value of #FFFFFF00.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_Yellow();
    /// <summary>Gets a system-defined color that has an ARGB value of #FF9ACD32.</summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Color"></see> representing a system-defined color.</returns>
    static ASPOSE_PAGE_SHARED_API Color get_YellowGreen();
    /// <summary>Gets the red component value of this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>The red component value of this <see cref="T:Aspose::Page::Drawing::Color"></see>.</returns>
    ASPOSE_PAGE_SHARED_API uint8_t get_R();
    /// <summary>Gets the green component value of this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>The green component value of this <see cref="T:Aspose::Page::Drawing::Color"></see>.</returns>
    ASPOSE_PAGE_SHARED_API uint8_t get_G();
    /// <summary>Gets the blue component value of this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>The blue component value of this <see cref="T:Aspose::Page::Drawing::Color"></see>.</returns>
    ASPOSE_PAGE_SHARED_API uint8_t get_B();
    /// <summary>Gets the alpha component value of this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>The alpha component value of this <see cref="T:Aspose::Page::Drawing::Color"></see>.</returns>
    ASPOSE_PAGE_SHARED_API uint8_t get_A();
    /// <summary>Specifies whether this <see cref="T:Aspose::Page::Drawing::Color"></see> structure is uninitialized.</summary>
    /// <returns>This property returns true if this color is uninitialized; otherwise, false.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsEmpty();
    /// <summary>Gets a value indicating whether this <see cref="T:Aspose::Page::Drawing::Color"></see> structure is a named color or a member of the <see cref="T:System::Drawing::KnownColor"></see> enumeration.</summary>
    /// <returns>true if this <see cref="T:Aspose::Page::Drawing::Color"></see> was created by using either the <see cref="M:Aspose::Page::Drawing::Color::FromName(System::String)"></see> method; otherwise, false.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsNamedColor();
    /// <summary>Gets the name of this <see cref="T:Aspose::Page::Drawing::Color"></see>.</summary>
    /// <returns>The name of this <see cref="T:Aspose::Page::Drawing::Color"></see>.</returns>
    ASPOSE_PAGE_SHARED_API System::String get_Name();
    
    /// <summary>Creates a <see cref="T:Aspose::Page::Drawing::Color"></see> structure from a 32-bit ARGB value.</summary>
    /// <returns>The <see cref="T:Aspose::Page::Drawing::Color"></see> structure that this method creates.</returns>
    /// <param name="argb">A value specifying the 32-bit ARGB value. </param>
    static ASPOSE_PAGE_SHARED_API Color FromArgb(int32_t argb);
    /// <summary>Creates a <see cref="T:Aspose::Page::Drawing::Color"></see> structure from the four ARGB component (alpha, red, green, and blue) values. Although this method allows a 32-bit value to be passed for each component, the value of each component is limited to 8 bits.</summary>
    /// <returns>The <see cref="T:Aspose::Page::Drawing::Color"></see> that this method creates.</returns>
    /// <param name="alpha">The alpha component. Valid values are 0 through 255. </param>
    /// <param name="red">The red component. Valid values are 0 through 255. </param>
    /// <param name="green">The green component. Valid values are 0 through 255. </param>
    /// <param name="blue">The blue component. Valid values are 0 through 255. </param>
    /// <exception cref="T:System::ArgumentException">
    /// <paramref name="alpha" ></paramref>, <paramref name="red" ></paramref>, <paramref name="green" ></paramref>, or <paramref name="blue" ></paramref> is less than 0 or greater than 255.</exception>
    static ASPOSE_PAGE_SHARED_API Color FromArgb(int32_t alpha, int32_t red, int32_t green, int32_t blue);
    /// <summary>Creates a <see cref="T:Aspose::Page::Drawing::Color"></see> structure from the specified <see cref="T:Aspose::Page::Drawing::Color"></see> structure, but with the new specified alpha value. Although this method allows a 32-bit value to be passed for the alpha value, the value is limited to 8 bits.</summary>
    /// <returns>The <see cref="T:Aspose::Page::Drawing::Color"></see> that this method creates.</returns>
    /// <param name="alpha">The alpha value for the new <see cref="T:Aspose::Page::Drawing::Color"></see>. Valid values are 0 through 255. </param>
    /// <param name="baseColor">The <see cref="T:Aspose::Page::Drawing::Color"></see> from which to create the new <see cref="T:Aspose::Page::Drawing::Color"></see>. </param>
    /// <exception cref="T:System::ArgumentException">
    /// <paramref name="alpha" ></paramref> is less than 0 or greater than 255.</exception>
    static ASPOSE_PAGE_SHARED_API Color FromArgb(int32_t alpha, Color baseColor);
    /// <summary>Creates a <see cref="T:Aspose::Page::Drawing::Color"></see> structure from the specified 8-bit color values (red, green, and blue). The alpha value is implicitly 255 (fully opaque). Although this method allows a 32-bit value to be passed for each color component, the value of each component is limited to 8 bits.</summary>
    /// <returns>The <see cref="T:Aspose::Page::Drawing::Color"></see> that this method creates.</returns>
    /// <param name="red">The red component value for the new <see cref="T:Aspose::Page::Drawing::Color"></see>. Valid values are 0 through 255. </param>
    /// <param name="green">The green component value for the new <see cref="T:Aspose::Page::Drawing::Color"></see>. Valid values are 0 through 255. </param>
    /// <param name="blue">The blue component value for the new <see cref="T:Aspose::Page::Drawing::Color"></see>. Valid values are 0 through 255. </param>
    /// <exception cref="T:System::ArgumentException">
    /// <paramref name="red" ></paramref>, <paramref name="green" ></paramref>, or <paramref name="blue" ></paramref> is less than 0 or greater than 255.</exception>
    static ASPOSE_PAGE_SHARED_API Color FromArgb(int32_t red, int32_t green, int32_t blue);
    /// <summary>Creates a <see cref="T:Aspose::Page::Drawing::Color"></see> structure from the specified name of a predefined color.</summary>
    /// <returns>The <see cref="T:Aspose::Page::Drawing::Color"></see> that this method creates.</returns>
    /// <param name="name">A string that is the name of a predefined color. Valid names are the same as the names of the elements of the <see cref="T:System::Drawing::KnownColor"></see> enumeration. </param>
    static ASPOSE_PAGE_SHARED_API Color FromName(System::String name);
    /// <summary>Gets the hue-saturation-brightness (HSB) brightness value for this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>The brightness of this <see cref="T:Aspose::Page::Drawing::Color"></see>. The brightness ranges from 0.0 through 1.0, where 0.0 represents black and 1.0 represents white.</returns>
    ASPOSE_PAGE_SHARED_API float GetBrightness();
    /// <summary>Gets the hue-saturation-brightness (HSB) hue value, in degrees, for this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>The hue, in degrees, of this <see cref="T:Aspose::Page::Drawing::Color"></see>. The hue is measured in degrees, ranging from 0.0 through 360.0, in HSB color space.</returns>
    ASPOSE_PAGE_SHARED_API float GetHue();
    /// <summary>Gets the hue-saturation-brightness (HSB) saturation value for this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>The saturation of this <see cref="T:Aspose::Page::Drawing::Color"></see>. The saturation ranges from 0.0 through 1.0, where 0.0 is grayscale and 1.0 is the most saturated.</returns>
    ASPOSE_PAGE_SHARED_API float GetSaturation();
    /// <summary>Gets the 32-bit ARGB value of this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>The 32-bit ARGB value of this <see cref="T:Aspose::Page::Drawing::Color"></see>.</returns>
    ASPOSE_PAGE_SHARED_API int32_t ToArgb();
    /// <summary>Clones this Aspose.Page.Drawing.Color.</summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> Clone();
    /// <summary>Tests whether the specified object is a <see cref="T:Aspose::Page::Drawing::Color"></see> structure and is equivalent to this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>true if <paramref name="obj" ></paramref> is a <see cref="T:Aspose::Page::Drawing::Color"></see> structure equivalent to this <see cref="T:Aspose::Page::Drawing::Color"></see> structure; otherwise, false.</returns>
    /// <param name="obj">The object to test. </param>
    ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>Returns a hash code for this <see cref="T:Aspose::Page::Drawing::Color"></see> structure.</summary>
    /// <returns>An integer value that specifies the hash code for this <see cref="T:Aspose::Page::Drawing::Color"></see>.</returns>
    ASPOSE_PAGE_SHARED_API int32_t GetHashCode() const override;
    
    ASPOSE_PAGE_SHARED_API Color();
    
    /// <summary>Converts this <see cref="T:Aspose::Page::Drawing::Color"></see> structure to a human-readable string.</summary>
    /// <returns>A string that is the name of this <see cref="T:Aspose::Page::Drawing::Color"></see>, if the <see cref="T:Aspose::Page::Drawing::Color"></see> is created from a predefined color by using either the <see cref="M:Aspose::Page::Drawing::Color::FromName(System::String)"></see> method; otherwise, a string that consists of the ARGB component names and their values.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    System::Drawing::Color get_NativeValue() const;
    
    Color(System::Drawing::Color nativeValue);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Color, CODEPORTING_ARGS(System::Drawing::Color nativeValue));
    
private:

    System::Drawing::Color nativeValue;
    
    System::String ToString_NonConst();
    
};

ASPOSE_PAGE_SHARED_API bool operator ==(const Color& left, const Color& right);
ASPOSE_PAGE_SHARED_API bool operator !=(const Color& left, const Color& right);

} // namespace Drawing
} // namespace Page
} // namespace Aspose


