#pragma once

#include <xml/xml_element.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/enum_helpers.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <drawing/size_f.h>
#include <drawing/rectangle_f.h>
#include <drawing/point_f.h>
#include <drawing/font_style.h>
#include <drawing/color.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsPresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElementLinkTarget; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientStop; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImageBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsLinearGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsRadialGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsVisual; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsVisualBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsCanvas; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPageContext; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsResourceDictionary; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTreeLoader; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsList; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrix; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsOutlineEntry; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPath; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathFigure; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathGeometry; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsArcSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyBezierSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyLineSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyQuadraticBezierSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedDocument; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedPage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class HyperlinksTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class ChildElementsCollectionTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class PageOperationsTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsCanvasTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsDocumentTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsGlyphsTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsPathFigureTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsPathGeometryTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsPathTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsHyperlinkTarget; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class RegistrationType; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsFont; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsSweepDirection; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsSolidColorBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsColor; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsIccProfile; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTreeVisitor; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

enum class XpsElementType
{
    SimpleElement,
    CompositeElement
};

/// <summary>
/// Class incapsulating common XPS element features.
/// </summary>
class XpsElement : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsElement>>
{
    typedef XpsElement ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsElement>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::XpsModel::XpsElementLinkTarget;
    friend class Aspose::Page::Xps::XpsModel::XpsBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientStop;
    friend class Aspose::Page::Xps::XpsModel::XpsImageBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsLinearGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsRadialGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsVisual;
    friend class Aspose::Page::Xps::XpsModel::XpsVisualBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsCanvas;
    friend class Aspose::Page::Xps::XpsModel::XpsContext;
    friend class Aspose::Page::Xps::XpsModel::XpsPageContext;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsModel::XpsResourceDictionary;
    friend class Aspose::Page::Xps::XpsModel::XpsTreeLoader;
    friend class Aspose::Page::Xps::XpsDocument;
    friend class Aspose::Page::Xps::XpsModel::XpsGlyphs;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsList;
    friend class Aspose::Page::Xps::XpsModel::XpsMatrix;
    friend class Aspose::Page::Xps::XpsModel::XpsOutlineEntry;
    friend class Aspose::Page::Xps::XpsModel::XpsPage;
    friend class Aspose::Page::Xps::XpsModel::XpsPath;
    friend class Aspose::Page::Xps::XpsModel::XpsPathFigure;
    friend class Aspose::Page::Xps::XpsModel::XpsPathGeometry;
    friend class Aspose::Page::Xps::XpsModel::XpsArcSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPathSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyBezierSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyLineSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyQuadraticBezierSegment;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedPage;
    friend class Aspose::Page::Xps::Tests::HyperlinksTests;
    friend class Aspose::Page::Xps::Tests::ChildElementsCollectionTests;
    friend class Aspose::Page::Xps::Tests::PageOperationsTests;
    friend class Aspose::Page::Xps::Tests::XpsCanvasTests;
    friend class Aspose::Page::Xps::Tests::XpsDocumentTests;
    friend class Aspose::Page::Xps::Tests::XpsGlyphsTests;
    friend class Aspose::Page::Xps::Tests::XpsPathFigureTests;
    friend class Aspose::Page::Xps::Tests::XpsPathGeometryTests;
    friend class Aspose::Page::Xps::Tests::XpsPathTests;
    
public:

    /// <summary>
    /// Returns number of child elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Provides access to element's children by index <paramref name="i"/>.
    /// </summary>
    /// <param name="i">Index of child element.</param>
    /// <returns>Child element at <paramref name="i"/> position.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> idx_get(int32_t i);
    
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;XpsElement&gt;"/> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<XpsElement>>> GetEnumerator();
    
protected:

    XpsElementType _elementType;
    System::SharedPtr<XpsContext> _context;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsElement>>> _owners;
    System::SharedPtr<XpsList<System::SharedPtr<XpsElement>>> _children;
    System::String _xKey;
    System::String _name;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsMatrix>>> _renderTransform;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsPathGeometry>>> _clip;
    System::SharedPtr<XpsHyperlinkTarget> _linkTarget;
    
    int32_t get_Id();
    System::SharedPtr<XpsElement> get_Parent();
    void set_Parent(System::SharedPtr<XpsElement> value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsElement>>> get_Owners();
    System::String get_xKey();
    void set_xKey(System::String value);
    
    XpsElement(System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ForcePropertyValueReferencesUpdate(System::SharedPtr<XpsElement> parent, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void UpdatePropertyValueReferences(System::SharedPtr<XpsElement> propertyValue, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void RegisterForPreprocessing(System::SharedPtr<XpsElement> element, RegistrationType regType, bool add = true);
    void RegisterLinks(System::SharedPtr<XpsHyperlinkTarget> linkTarget);
    virtual ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessingPV(bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void RegisterForPreprocessingPV(System::SharedPtr<XpsElement> element, RegistrationType regType, bool add = true);
    System::SharedPtr<XpsElement> Add(System::SharedPtr<XpsElement> element);
    System::SharedPtr<XpsElement> AddReference(System::SharedPtr<XpsElement> element);
    System::SharedPtr<XpsElement> Remove(System::SharedPtr<XpsElement> element);
    System::SharedPtr<XpsElement> RemoveReference(System::SharedPtr<XpsElement> element);
    System::SharedPtr<XpsElement> Insert(int32_t index, System::SharedPtr<XpsElement> element);
    System::SharedPtr<XpsElement> InsertReference(int32_t index, System::SharedPtr<XpsElement> element);
    System::SharedPtr<XpsElement> RemoveAt(int32_t index);
    System::SharedPtr<XpsElement> RemoveReferenceAt(int32_t index, System::SharedPtr<XpsElement> element);
    /// <summary>
    /// Clones all the children of <paramref name="element"/> and add them to this element.
    /// </summary>
    /// <param name="element">An element whose children are to be cloned.</param>
    /// <param name="deep">Flag indicating if a deep clone must be made.</param>
    void CloneChildren(System::SharedPtr<XpsElement> element, bool deep = true);
    System::SharedPtr<XpsCanvas> CreateCanvas(System::SharedPtr<XpsContext> context);
    System::SharedPtr<XpsPath> CreatePath(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPathGeometry> data);
    System::SharedPtr<XpsGlyphs> CreateGlyphs(System::SharedPtr<XpsContext> context, System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    System::SharedPtr<XpsGlyphs> CreateGlyphs(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString);
    System::SharedPtr<XpsMatrix> CreateMatrix(System::SharedPtr<XpsContext> context, float m11, float m12, float m21, float m22, float m31, float m32);
    System::SharedPtr<XpsPathGeometry> CreatePathGeometry(System::SharedPtr<XpsContext> context);
    System::SharedPtr<XpsPathGeometry> CreatePathGeometry(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsList<System::SharedPtr<XpsPathFigure>>> pathFigures);
    System::SharedPtr<XpsPathGeometry> CreatePathGeometry(System::SharedPtr<XpsContext> context, System::String abbreviatedGeometry);
    System::SharedPtr<XpsPathFigure> CreatePathFigure(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, bool isClosed = false);
    System::SharedPtr<XpsPathFigure> CreatePathFigure(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::SharedPtr<XpsList<System::SharedPtr<XpsPathSegment>>> segments, bool isClosed = false);
    System::SharedPtr<XpsArcSegment> CreateArcSegment(System::SharedPtr<XpsContext> context, System::Drawing::PointF point, System::Drawing::SizeF size, float rotationAngle, bool isLargeArc, XpsSweepDirection sweepDirection, bool isStroked = true);
    System::SharedPtr<XpsPolyLineSegment> CreatePolyLineSegment(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    System::SharedPtr<XpsPolyBezierSegment> CreatePolyBezierSegment(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    System::SharedPtr<XpsPolyQuadraticBezierSegment> CreatePolyQuadraticBezierSegment(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    System::SharedPtr<XpsSolidColorBrush> CreateSolidColorBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color);
    System::SharedPtr<XpsSolidColorBrush> CreateSolidColorBrush(System::SharedPtr<XpsContext> context, System::Drawing::Color color);
    System::SharedPtr<XpsGradientStop> CreateGradientStop(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color, float offset);
    System::SharedPtr<XpsGradientStop> CreateGradientStop(System::SharedPtr<XpsContext> context, System::Drawing::Color color, float offset);
    System::SharedPtr<XpsLinearGradientBrush> CreateLinearGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    System::SharedPtr<XpsLinearGradientBrush> CreateLinearGradientBrush(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    System::SharedPtr<XpsRadialGradientBrush> CreateRadialGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    System::SharedPtr<XpsRadialGradientBrush> CreateRadialGradientBrush(System::SharedPtr<XpsContext> context, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    System::SharedPtr<XpsVisualBrush> CreateVisualBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsCanvas> canvas, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    System::SharedPtr<XpsVisualBrush> CreateVisualBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPath> path, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    System::SharedPtr<XpsVisualBrush> CreateVisualBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsGlyphs> glyphs, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    System::SharedPtr<XpsImageBrush> CreateImageBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsImage> image, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    System::SharedPtr<XpsImageBrush> CreateImageBrush(System::SharedPtr<XpsContext> context, System::String imagePath, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    System::SharedPtr<XpsColor> CreateColor(System::Drawing::Color color);
    System::SharedPtr<XpsColor> CreateColor(int32_t a, int32_t r, int32_t g, int32_t b);
    System::SharedPtr<XpsColor> CreateColor(int32_t r, int32_t g, int32_t b);
    System::SharedPtr<XpsColor> CreateColor(float a, float r, float g, float b);
    System::SharedPtr<XpsColor> CreateColor(float r, float g, float b);
    System::SharedPtr<XpsColor> CreateColor(System::SharedPtr<XpsContext> context, System::String path, const System::ArrayPtr<float>& components);
    System::SharedPtr<XpsColor> CreateColor(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsIccProfile> iccProfile, const System::ArrayPtr<float>& components);
    System::SharedPtr<XpsImage> CreateImage(System::SharedPtr<XpsContext> context, System::String imagePath);
    System::SharedPtr<XpsImage> CreateImage(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream);
    System::SharedPtr<XpsIccProfile> CreateIccProfile(System::SharedPtr<XpsContext> context, System::String iccProfilePath);
    System::SharedPtr<XpsIccProfile> CreateIccProfile(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream);
    System::SharedPtr<XpsFont> CreateFont(System::SharedPtr<XpsContext> context, System::String fontFamily, System::Drawing::FontStyle fontStyle);
    System::SharedPtr<XpsFont> CreateFont(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream);
    virtual System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index) = 0;
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    void Accept(System::SharedPtr<XpsTreeVisitor> visitor, System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t _id;
    System::SharedPtr<XpsElement> pr_Parent;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


