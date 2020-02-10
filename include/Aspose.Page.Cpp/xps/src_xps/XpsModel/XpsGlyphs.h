#pragma once

#include <system/collections/sorted_list.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsInterfaces.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsPresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializer; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializationContext; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTreeLoader; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class GlyphsToImageTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class GlyphsToApsTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class GlyphsToPdfTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsStyleSimulations; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsFont; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphMapping; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrix; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathGeometry; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsHyperlinkTarget; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphsClusterMap; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating Glyphs element features.
/// This element represents a run of uniformly-formatted text from a single font.
/// It provides information necessary for accurate rendering and supports search
/// and selection features in viewing consumers. 
/// </summary>
class XpsGlyphs FINAL : public Aspose::Page::Xps::XpsModel::XpsElement, public Aspose::Page::Xps::XpsModel::ITransformableElement, public Aspose::Page::Xps::XpsModel::IClippable, public Aspose::Page::Xps::XpsModel::IXpsVisualElement
{
    typedef XpsGlyphs ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    typedef Aspose::Page::Xps::XpsModel::ITransformableElement BaseType1;
    typedef Aspose::Page::Xps::XpsModel::IClippable BaseType2;
    typedef Aspose::Page::Xps::XpsModel::IXpsVisualElement BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsModel::XpsTreeLoader;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    friend class Aspose::Page::Xps::Tests::GlyphsToImageTests;
    friend class Aspose::Page::Xps::Tests::GlyphsToApsTests;
    friend class Aspose::Page::Xps::Tests::GlyphsToPdfTests;
    
public:

    /// <summary>
    /// Returns/sets the value specifying the Unicode algorithm bidirectional nesting level.
    /// Even values imply left-to-right layout, odd values imply right-to-left layout.
    /// Right-to-left layout places the run origin at the right side of the first glyph,
    /// with positive advance widths (representing advances to the left) placing subsequent
    /// glyphs to the left of the previous glyph.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_BidiLevel();
    /// <summary>
    /// Returns/sets the value specifying the Unicode algorithm bidirectional nesting level.
    /// Even values imply left-to-right layout, odd values imply right-to-left layout.
    /// Right-to-left layout places the run origin at the right side of the first glyph,
    /// with positive advance widths (representing advances to the left) placing subsequent
    /// glyphs to the left of the previous glyph.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_BidiLevel(int32_t value);
    /// <summary>
    /// Returns/sets the brush used to fill the shape of the rendered glyphs.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsBrush> get_Fill();
    /// <summary>
    /// Returns/sets the brush used to fill the shape of the rendered glyphs.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Fill(System::SharedPtr<XpsBrush> value);
    /// <summary>
    /// Returns font resource for the TrueType font used to typeset elements text.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsFont> get_Font();
    /// <summary>
    /// Returns/sets the font size in drawing surface units, expressed as a float
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_FontRenderingEmSize();
    /// <summary>
    /// Returns/sets the font size in drawing surface units, expressed as a float
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_FontRenderingEmSize(float value);
    /// <summary>
    /// Returns/sets the x coordinate of the first glyph in the run, in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_OriginX();
    /// <summary>
    /// Returns/sets the x coordinate of the first glyph in the run, in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OriginX(float value);
    /// <summary>
    /// Returns/sets the y coordinate of the first glyph in the run, in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_OriginY();
    /// <summary>
    /// Returns/sets the y coordinate of the first glyph in the run, in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OriginY(float value);
    /// <summary>
    /// Returns/sets the value indicating that a glyph is turned on its side,
    /// with the origin being defined as the top center of the unturned glyph. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsSideways();
    /// <summary>
    /// Returns/sets the value indicating that a glyph is turned on its side,
    /// with the origin being defined as the top center of the unturned glyph. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsSideways(bool value);
    /// <summary>
    /// Returns/sets the string of text rendered by the Glyphs element.
    /// The text is specified as Unicode code points.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_UnicodeString();
    /// <summary>
    /// Returns/sets the string of text rendered by the Glyphs element.
    /// The text is specified as Unicode code points.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_UnicodeString(System::String value);
    /// <summary>
    /// Returns/sets the value specifying a style simulation.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsStyleSimulations get_StyleSimulations();
    /// <summary>
    /// Returns/sets the value specifying a style simulation.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StyleSimulations(XpsStyleSimulations value);
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing a new coordinate frame for
    /// the glyph run specified by the Glyphs element. The render transform affects clip, opacity mask,
    /// fill, x origin, y origin, the actual shape of individual glyphs, and the advance widths.
    /// The render transform also affects the font size and values specified in the Indices attribute. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> get_RenderTransform();
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing a new coordinate frame for
    /// the glyph run specified by the Glyphs element. The render transform affects clip, opacity mask,
    /// fill, x origin, y origin, the actual shape of individual glyphs, and the advance widths.
    /// The render transform also affects the font size and values specified in the Indices attribute. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RenderTransform(System::SharedPtr<XpsMatrix> value);
    /// <summary>
    /// Returns/sets the path geometry limitting the rendered region of the element.
    /// Only portions of the Glyphs element that fall within the clip region (even partially clipped characters)
    /// produce marks on the page. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathGeometry> get_Clip();
    /// <summary>
    /// Returns/sets the path geometry limitting the rendered region of the element.
    /// Only portions of the Glyphs element that fall within the clip region (even partially clipped characters)
    /// produce marks on the page. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Clip(System::SharedPtr<XpsPathGeometry> value);
    /// <summary>
    /// Returns/sets the value defining the uniform transparency of the glyph element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Opacity();
    /// <summary>
    /// Returns/sets the value defining the uniform transparency of the glyph element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Opacity(float value);
    /// <summary>
    /// Returns/sets the brush specifying a mask of alpha values
    /// that is applied to the glyphs in the same fashion as the Opacity attribute, but allowing
    /// different alpha values for different areas of the element. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsBrush> get_OpacityMask();
    /// <summary>
    /// Returns/sets the brush specifying a mask of alpha values
    /// that is applied to the glyphs in the same fashion as the Opacity attribute, but allowing
    /// different alpha values for different areas of the element. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OpacityMask(System::SharedPtr<XpsBrush> value);
    /// <summary>
    /// Returns/sets hyperlink target object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsHyperlinkTarget> get_HyperlinkTarget();
    /// <summary>
    /// Returns/sets hyperlink target object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_HyperlinkTarget(System::SharedPtr<XpsHyperlinkTarget> value);
    
    /// <summary>
    /// Clone this glyphs.
    /// </summary>
    /// <returns>Clone of this glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphs> Clone();
    
protected:

    /// <summary>
    /// Returns font resource for the TrueType font used to typeset elements text.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Font(System::SharedPtr<XpsFont> value);
    System::String get_FontUri();
    void set_FontUri(System::String value);
    System::SharedPtr<System::Collections::Generic::SortedList<int32_t, System::SharedPtr<XpsGlyphMapping>>> get_Indices();
    void set_Indices(System::SharedPtr<System::Collections::Generic::SortedList<int32_t, System::SharedPtr<XpsGlyphMapping>>> value);
    
    XpsGlyphs(System::SharedPtr<XpsContext> context, System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    XpsGlyphs(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString);
    XpsGlyphs(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent);
    XpsGlyphs(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFont> font);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void ForcePropertyValueReferencesUpdate(System::SharedPtr<XpsElement> parent, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true);
    void InitIndices(System::String indices);
    System::String IndicesToString();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t _bidiLevel;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _fill;
    System::SharedPtr<XpsFont> _font;
    float _fontRenderingEmSize;
    System::String _fontUri;
    float _originX;
    float _originY;
    bool _isSideways;
    System::SharedPtr<System::Collections::Generic::SortedList<int32_t, System::SharedPtr<XpsGlyphMapping>>> _indices;
    System::String _unicodeString;
    XpsStyleSimulations _styleSymulations;
    float _opacity;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _opacityMask;
    
};

class XpsGlyphMapping : public System::Object
{
    typedef XpsGlyphMapping ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static const float AdvanceWidthUndefined;
    
    System::SharedPtr<XpsGlyphsClusterMap> get_ClusterMap();
    float get_AdvanceWidth();
    float get_UOffset();
    float get_VOffset();
    
    XpsGlyphMapping(System::SharedPtr<XpsGlyphsClusterMap> clusterMap, float advanceWidth, float uOffset, float vOffset);
    XpsGlyphMapping(float advanceWidth, float uOffset, float vOffset);
    XpsGlyphMapping(float uOffset, float vOffset);
    XpsGlyphMapping(float advanceWidth);
    XpsGlyphMapping(System::SharedPtr<XpsGlyphsClusterMap> clusterMap, float advanceWidth);
    XpsGlyphMapping(System::SharedPtr<XpsGlyphsClusterMap> clusterMap);
    
    virtual System::String ToString();
    System::SharedPtr<XpsGlyphMapping> Clone();
    static System::SharedPtr<XpsGlyphMapping> Create(System::String indices);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsGlyphsClusterMap> _clusterMap;
    float _advanceWidth;
    float _uOffset;
    float _vOffset;
    
};

class XpsGlyphsClusterMap : public System::Object
{
    typedef XpsGlyphsClusterMap ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    uint8_t get_CodeUnitCount();
    uint8_t get_GlyphCount();
    int32_t get_GlyphId();
    
    XpsGlyphsClusterMap(uint8_t codeUnitCount, uint8_t glyphCount, int32_t glyphId);
    XpsGlyphsClusterMap(uint8_t codeUnitCount, int32_t glyphId);
    XpsGlyphsClusterMap(int32_t glyphId);
    
    virtual System::String ToString();
    System::SharedPtr<XpsGlyphsClusterMap> Clone();
    static System::SharedPtr<XpsGlyphsClusterMap> Create(System::String clusterMap);
    
private:

    uint8_t _codeUnitCount;
    uint8_t _glyphCount;
    int32_t _glyphId;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


