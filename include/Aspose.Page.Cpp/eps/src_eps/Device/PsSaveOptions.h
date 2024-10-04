#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using Color = Aspose.Page.Drawing.Color;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/object_ext.h>
#include <system/nullable.h>
#include <system/enum.h>
#include <drawing/color.h>

#include "Aspose.Page.Cpp/SaveOptions.h"
#include "Aspose.Page.Cpp/Drawing/Size.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
class Margins;
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace EPS {

namespace Device {

/// <summary>
/// This enumeration contains available options of saving format. It can be PS or EPS.
/// EPS is used for only 1-paged documents while PS file can contain any number of pages.
/// </summary>
enum class PsSaveFormat
{
    /// <summary>
    /// This option indicates that resulting document must be PostScript (PS) or Encapsulated PostScript (EPS) file.
    /// </summary>
    PS,
    /// <summary>
    /// This option indicates that resulting document must be Encapsulated PostScript (EPS) file. It is used only for 1-paged documents;
    /// </summary>
    EPS
};

/// <summary>
/// This class contains options necessary for managing process of converting document to PostScript (PS) or Encapsulated PostScript (EPS) file.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PsSaveOptions : public Aspose::Page::SaveOptions
{
    typedef PsSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///  The save format of resulting file.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PsSaveFormat get_SaveFormat() const;
    /// <summary>
    ///  The save format of resulting file.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SaveFormat(PsSaveFormat value);
    /// <summary>
    ///  The size of the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::Drawing::Size get_PageSize() const;
    /// <summary>
    ///  The size of the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_PageSize(Aspose::Page::Drawing::Size value);
    /// <summary>
    ///  The margins of the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::Margins> get_Margins() const;
    /// <summary>
    ///  The margins of the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Margins(System::SharedPtr<Aspose::Page::Margins> value);
    /// <summary>
    ///  The background color.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Nullable<System::Drawing::Color> get_BackgroundColor() const;
    /// <summary>
    ///  The background color.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_BackgroundColor(System::Nullable<System::Drawing::Color> value);
    /// <summary>
    ///  Indicates if background is transparent.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_Transparent() const;
    /// <summary>
    ///  Indicates if background is transparent.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Transparent(bool value);
    /// <summary>
    ///  Indicates whether to embed used fonts in PS document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_EmbedFonts() const;
    /// <summary>
    ///  Indicates whether to embed used fonts in PS document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_EmbedFonts(bool value);
    /// <summary>
    ///  A type of font in which to embed fonts in PS document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_EmbedFontsAs() const;
    /// <summary>
    ///  A type of font in which to embed fonts in PS document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_EmbedFontsAs(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PsSaveOptions"></see> class with default values 
    /// for flags <see cref="SuppressErrors"></see> (true) and <see cref="Debug"></see> (false).
    /// </summary>
    ASPOSE_PAGE_SHARED_API PsSaveOptions();
    /// <summary>
    /// Initializes a new instance of the <see cref="PsSaveOptions"></see> class with default values for flag <see cref="Debug"></see> (false).
    /// </summary>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    ASPOSE_PAGE_SHARED_API PsSaveOptions(bool supressErrors);
    
private:

    PsSaveFormat saveFormat;
    Aspose::Page::Drawing::Size pageSize;
    System::SharedPtr<Aspose::Page::Margins> margins;
    System::Nullable<System::Drawing::Color> backgroundColor;
    bool transparent;
    bool embedFonts;
    System::String embedFontsAs;
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Page::EPS::Device::PsSaveFormat>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::EPS::Device::PsSaveFormat, const char_t*>, 2>& values();
};



