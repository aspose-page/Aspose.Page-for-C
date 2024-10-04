#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsFileResources/XpsFileResource.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Foundation
{
class BigEndianBinaryReader;
} // namespace Foundation
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
namespace Xps
{
class XpsSerializationContext;
class XpsSerializationContextBase;
} // namespace Xps
class XpsPresenter;
} // namespace Presentation
namespace Tests
{
class GlyphsToApsTests;
class GlyphsToImageTests;
} // namespace Tests
namespace XpsModel
{
class XpsContext;
class XpsElement;
class XpsGlyphs;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
namespace TrueType
{
class TTFont;
class TTFontNames;
} // namespace TrueType
} // namespace Aspose
namespace System
{
namespace Drawing
{
enum class FontStyle;
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
/// Class incapsulating a TrueType font resource.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsFont final : public Aspose::Page::XPS::XpsModel::XpsFileResource
{
    typedef XpsFont ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsFileResource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContextBase;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsFileResource;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::Tests::GlyphsToImageTests;
    friend class Aspose::Page::XPS::Tests::GlyphsToApsTests;
    
protected:

    System::SharedPtr<Aspose::TrueType::TTFont> get_Font() const;
    ASPOSE_PAGE_SHARED_API System::String get_DefaultNamePrefix() override;
    ASPOSE_PAGE_SHARED_API System::String get_Extension() override;
    
    ASPOSE_PAGE_SHARED_API void LoadExternal() override;
    static System::SharedPtr<XpsFont> Create(System::SharedPtr<XpsContext> context, System::String fontFamily, System::Drawing::FontStyle fontStyle);
    static System::SharedPtr<XpsFont> Create(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, System::String path, bool isExternal = false);
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsFileResource> Clone(System::SharedPtr<XpsContext> context) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsFont();
    
private:

    System::String _fontFamily;
    System::Drawing::FontStyle _fontStyle;
    System::SharedPtr<Aspose::TrueType::TTFont> _ttFont;
    
    XpsFont(System::SharedPtr<XpsContext> context, System::String fontFamily, System::Drawing::FontStyle fontStyle);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsFont, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::String fontFamily, System::Drawing::FontStyle fontStyle));
    
    XpsFont(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsFont, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false));
    
    XpsFont(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsFont, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFont> font));
    static void LoadFont(System::SharedPtr<XpsFont> font, System::String path);
    static System::SharedPtr<Aspose::TrueType::TTFont> GetFont(System::SharedPtr<System::IO::Stream> stream, System::String fontUri);
    static void DeobfuscateFont(System::SharedPtr<System::IO::Stream> obfuscatedStream, System::String fontUri, System::SharedPtr<System::IO::Stream> deobfuscatedStream);
    static bool ReadTtcFirstFontName(System::SharedPtr<Aspose::Foundation::BigEndianBinaryReader> reader, System::String& fontName);
    /// <summary>
    /// Reads the records to the NameTable and stores Microsoft Unicode strings into TTFontNames>.
    /// Throws if table format is unsupported.
    /// </summary>
    /// <param name="tableStart">Start of the NameTable.</param>
    /// <param name="reader">The reader</param>
    /// <returns>The TTFontNames</returns>
    static System::SharedPtr<Aspose::TrueType::TTFontNames> ReadNameRecords(int32_t tableStart, System::SharedPtr<Aspose::Foundation::BigEndianBinaryReader> reader);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


