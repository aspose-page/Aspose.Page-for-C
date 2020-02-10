#pragma once

#include <drawing/font_style.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsFileResources/XpsFileResource.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsPresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializationContext; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializationContextBase; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class GlyphsToImageTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class GlyphsToApsTests; } } } }
namespace Aspose { namespace TrueType { class TTFont; } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Foundation { class BigEndianBinaryReader; } }
namespace Aspose { namespace TrueType { class TTFontNames; } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating a TrueType font resource.
/// </summary>
class XpsFont FINAL : public Aspose::Page::Xps::XpsModel::XpsFileResource
{
    typedef XpsFont ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsFileResource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializationContextBase;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsFileResource;
    friend class Aspose::Page::Xps::XpsModel::XpsGlyphs;
    friend class Aspose::Page::Xps::Tests::GlyphsToImageTests;
    friend class Aspose::Page::Xps::Tests::GlyphsToApsTests;
    
protected:

    System::SharedPtr<Aspose::TrueType::TTFont> get_Font();
    virtual ASPOSE_PAGE_SHARED_API System::String get_DefaultNamePrefix();
    virtual ASPOSE_PAGE_SHARED_API System::String get_Extension();
    
    virtual ASPOSE_PAGE_SHARED_API void Load();
    static System::SharedPtr<XpsFont> Create(System::SharedPtr<XpsContext> context, System::String fontFamily, System::Drawing::FontStyle fontStyle);
    static System::SharedPtr<XpsFont> Create(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, System::String path, bool isExternal = false);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _fontFamily;
    System::Drawing::FontStyle _fontStyle;
    System::SharedPtr<Aspose::TrueType::TTFont> _ttFont;
    
    XpsFont(System::SharedPtr<XpsContext> context, System::String fontFamily, System::Drawing::FontStyle fontStyle);
    XpsFont(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false);
    
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
} // namespace Xps
} // namespace Page
} // namespace Aspose


