#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
//     using Color = Aspose.Page.Drawing.Color;
//     using FontStyle = Aspose.Page.Drawing.FontStyle;
//     using PointF = Aspose.Page.Drawing.PointF;
//     using RectangleF = Aspose.Page.Drawing.RectangleF;
//     using SizeF = Aspose.Page.Drawing.SizeF;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/enum_helpers.h>
#include <system/constraints.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContentElement.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsDocument.h"
#include "Aspose.Page.Cpp/xps/src_xps/Features/EventBasedModifications/IModificationAPI.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class DocumentUtils;
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
} // namespace Presentation
namespace XpsModel
{
class XpsArcSegment;
class XpsCanvas;
class XpsColor;
class XpsFont;
class XpsGlyphs;
class XpsGradientStop;
class XpsIccProfile;
class XpsImage;
class XpsImageBrush;
class XpsLinearGradientBrush;
class XpsMatrix;
class XpsPath;
class XpsPathFigure;
class XpsPathGeometry;
class XpsPathSegment;
class XpsPolyBezierSegment;
class XpsPolyLineSegment;
class XpsPolyQuadraticBezierSegment;
class XpsRadialGradientBrush;
class XpsSolidColorBrush;
enum class XpsSweepDirection;
class XpsVisualBrush;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
enum class FontStyle;
class PointF;
class RectangleF;
class SizeF;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace Features {

namespace EventBasedModifications {

/// <summary>
/// The <b>Page</b> element modification API.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageAPI : public Aspose::Page::XPS::Features::EventBasedModifications::IModificationAPI
{
    typedef PageAPI ThisType;
    typedef Aspose::Page::XPS::Features::EventBasedModifications::IModificationAPI BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    
public:

    /// <summary>
    /// Gets the object that provides utilities beyond the formal XPS manipulation API.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentUtils> get_Utils();
    /// <summary>
    /// Returns the total number of pages in all documents inside XPS document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_TotalPageCount();
    /// <summary>
    /// Returns the number of pages in the active document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_PageCount();
    /// <summary>
    /// Returns/sets the height of the page, expressed as a real number
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Height();
    /// <summary>
    /// Returns/sets the height of the page, expressed as a real number
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Height(float value);
    /// <summary>
    /// Returns/sets the width of the page, expressed as a real number in
    /// units of the effective coordinate space. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Width();
    /// <summary>
    /// Returns/sets the width of the page, expressed as a real number in
    /// units of the effective coordinate space. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Width(float value);
    
    /// <summary>
    /// Adds a content element (Canvas, Path, or Glyphs).
    /// </summary>
    /// <typeparam name="T">The type of the element.</typeparam>
    /// <param name="element">Element to be added.</param>
    /// <returns>Added element.</returns>
    template <typename T>
    T Add(T element)
    {
        typedef XpsModel::XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        return _document->template Add<T>(element);
    }
    
    /// <summary>
    /// Inserts an element (Canvas, Path, or Glyphs) to the page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <typeparam name="T">The type of the element.</typeparam>
    /// <param name="index">Position at which an <paramref name="element"></paramref> should be inserted.</param>
    /// <param name="element">Element to be inserted.</param>
    /// <returns>Inserted element.</returns>
    template <typename T>
    T Insert(int32_t index, T element)
    {
        typedef XpsModel::XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        return _document->template Insert<T>(index, element);
    }
    
    /// <summary>
    /// Removes an element from the page.
    /// </summary>
    /// <typeparam name="T">The type of the element.</typeparam>
    /// <param name="element">Element to be removed.</param>
    /// <returns>Removed element.</returns>
    template <typename T>
    T Remove(T element)
    {
        typedef XpsModel::XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        return _document->template Remove<T>(element);
    }
    
    /// <summary>
    /// Removes an element at <paramref name="index"></paramref> position from the page.
    /// </summary>
    /// <param name="index">Position at which element should be removed.</param>
    /// <returns>Removed element.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContentElement> RemoveAt(int32_t index);
    /// <summary>
    /// Creates a new canvas.
    /// </summary>
    /// <returns>New canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsCanvas> CreateCanvas();
    /// <summary>
    /// Adds a new canvas to the page.
    /// </summary>
    /// <returns>Added canvas.</returns>.
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsCanvas> AddCanvas();
    /// <summary>
    /// Inserts a new canvas to the page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a new canvas should be inserted.</param>
    /// <returns>Inserted canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsCanvas> InsertCanvas(int32_t index);
    /// <summary>
    /// Creates a new path.
    /// </summary>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>New  path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPath> CreatePath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathGeometry> data);
    /// <summary>
    /// Adds a new path to the page.
    /// </summary>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>Added path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPath> AddPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathGeometry> data);
    /// <summary>
    /// Inserts a new path to the page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a new path should be inserted.</param>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>Inserted path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPath> InsertPath(int32_t index, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathGeometry> data);
    /// <summary>
    /// Creates new glyphs.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontRenderingEmSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>New glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGlyphs> CreateGlyphs(System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Creates new glyphs.
    /// </summary>
    /// <param name="font">Font resource.</param>
    /// <param name="fontRenderingEmSize">Font size.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>New glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGlyphs> CreateGlyphs(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Adds new glyphs to the page.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontRenderingEmSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGlyphs> AddGlyphs(System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Inserts new glyphs to the page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which new glyphs should be inserted.</param>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Inserted glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGlyphs> InsertGlyphs(int32_t index, System::String fontFamily, float fontSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Adds new glyphs to the page.
    /// </summary>
    /// <param name="font">Font resource.</param>
    /// <param name="fontRenderingEmSize">Font size.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGlyphs> AddGlyphs(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Inserts new glyphs to the page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which new glyphs should be inserted.</param>
    /// <param name="font">Font resource.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Inserted glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGlyphs> InsertGlyphs(int32_t index, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsFont> font, float fontSize, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Creates a new affine transformation matrix.
    /// </summary>
    /// <param name="m11">Element 11.</param>
    /// <param name="m12">Element 12.</param>
    /// <param name="m21">Element 21.</param>
    /// <param name="m22">Element 22.</param>
    /// <param name="m31">Element 31.</param>
    /// <param name="m32">Element 32.</param>
    /// <returns>New affine transformation matrix.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsMatrix> CreateMatrix(float m11, float m12, float m21, float m22, float m31, float m32);
    /// <summary>
    /// Creates a new path geometry specified with abbreviated form.
    /// </summary>
    /// <param name="abbreviatedGeometry">Abbreviated form of path geometry.</param>
    /// <returns>New path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathGeometry> CreatePathGeometry(System::String abbreviatedGeometry);
    /// <summary>
    /// Creates a new path geometry.
    /// </summary>
    /// <returns>New path geometry.</returns>.
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathGeometry> CreatePathGeometry();
    /// <summary>
    /// Creates a new path geometry with specified list of path figures.
    /// </summary>
    /// <param name="pathFigures">List of path figures.</param>
    /// <returns>New path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathGeometry> CreatePathGeometry(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathFigure>>> pathFigures);
    /// <summary>
    /// Creates a new path figure.
    /// </summary>
    /// <param name="startPoint">The starting point for the first segment of the path figure.</param>
    /// <param name="isClosed">Specifies whether the path is closed. If set to true, the stroke is drawn
    /// "closed", that is, the last point in the last segment of the path figure is connected with
    /// the point specified in the StartPoint attribute, otherwise the stroke is drawn "open", and
    /// the last point is not connected to the start point. Only applicable if the path figure is
    /// used in a Path element that specifies a stroke.</param>
    /// <returns>New path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathFigure> CreatePathFigure(System::Drawing::PointF startPoint, bool isClosed = false);
    /// <summary>
    /// Creates a new path figure.
    /// </summary>
    /// <param name="startPoint">The starting point for the first segment of the path figure.</param>
    /// <param name="segments">List of path segments.</param>
    /// <param name="isClosed">Specifies whether the path is closed. If set to true, the stroke is drawn
    /// "closed", that is, the last point in the last segment of the path figure is connected with
    /// the point specified in the StartPoint attribute, otherwise the stroke is drawn "open", and
    /// the last point is not connected to the start point. Only applicable if the path figure is
    /// used in a Path element that specifies a stroke.</param>
    /// <returns>New path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathFigure> CreatePathFigure(System::Drawing::PointF startPoint, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathSegment>>> segments, bool isClosed = false);
    /// <summary>
    /// Creates a new elliptical arc segment.
    /// </summary>
    /// <param name="point">The endpoint of the elliptical arc.</param>
    /// <param name="size">The x and y radius of the elliptical arc as an x,y pair.</param>
    /// <param name="rotationAngle">Indicates how the ellipse is rotated relative to the current coordinate system.</param>
    /// <param name="isLargeArc">Determines whether the arc is drawn with a sweep of 180 or greater.</param>
    /// <param name="sweepDirection">The direction in which the arc is drawn.</param>
    /// <param name="isStroked">Specifies whether the stroke for this segment of the path is drawn.</param>
    /// <returns>New elliptical arc segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsArcSegment> CreateArcSegment(System::Drawing::PointF point, System::Drawing::SizeF size, float rotationAngle, bool isLargeArc, Aspose::Page::XPS::XpsModel::XpsSweepDirection sweepDirection, bool isStroked = true);
    /// <summary>
    /// Creates a new polygonal drawing containing an arbitrary number of individual vertices.
    /// </summary>
    /// <param name="points">A set of coordinates for the multiple segments that define the poly line segment.</param>
    /// <param name="isStroked">Specifies whether the stroke for this segment of the path is drawn.</param>
    /// <returns>New polygonal drawing segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPolyLineSegment> CreatePolyLineSegment(System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    /// <summary>
    /// Creates a new set of cubic Bézier curves.
    /// </summary>
    /// <param name="points">Control points for multiple Bézier segments.</param>
    /// <param name="isStroked">Specifies whether the stroke for this segment of the path is drawn.</param>
    /// <returns>New cubic Bézier curves segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPolyBezierSegment> CreatePolyBezierSegment(System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    /// <summary>
    /// Creates a new set of quadratic Bézier curves from the previous point in the path figure through a set
    /// of vertices, using specified control points.
    /// </summary>
    /// <param name="points">Control points for multiple quadratic Bézier segments.</param>
    /// <param name="isStroked">Specifies whether the stroke for this segment of the path is drawn.</param>
    /// <returns>New quadratic Bézier curves segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPolyQuadraticBezierSegment> CreatePolyQuadraticBezierSegment(System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    /// <summary>
    /// Creates a new solid color brush.
    /// </summary>
    /// <param name="color">The color for filled elements.</param>
    /// <returns>New solid color brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsSolidColorBrush> CreateSolidColorBrush(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> color);
    /// <summary>
    /// Creates a new solid color brush.
    /// </summary>
    /// <param name="color">The color for filled elements.</param>
    /// <returns>New solid color brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsSolidColorBrush> CreateSolidColorBrush(System::Drawing::Color color);
    /// <summary>
    /// Creates a new gradient stop.
    /// </summary>
    /// <param name="color">The gradient stop color.</param>
    /// <param name="offset">The gradient offset.</param>
    /// <returns>New gradient stop.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGradientStop> CreateGradientStop(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> color, float offset);
    /// <summary>
    /// Creates a new gradient stop.
    /// </summary>
    /// <param name="color">The gradient stop color.</param>
    /// <param name="offset">The gradient offset.</param>
    /// <returns>New gradient stop.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGradientStop> CreateGradientStop(System::Drawing::Color color, float offset);
    /// <summary>
    /// Creates a new linear gradient brush.
    /// </summary>
    /// <param name="gradientStops">The list of gradient stops.</param>
    /// <param name="startPoint">The starting point of the linear gradient.</param>
    /// <param name="endPoint">The end point of the linear gradient. </param>
    /// <returns>New linear gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsLinearGradientBrush> CreateLinearGradientBrush(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGradientStop>>> gradientStops, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    /// <summary>
    /// Creates a new linear gradient brush.
    /// </summary>
    /// <param name="startPoint">The starting point of the linear gradient.</param>
    /// <param name="endPoint">The end point of the linear gradient. </param>
    /// <returns>New linear gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsLinearGradientBrush> CreateLinearGradientBrush(System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    /// <summary>
    /// Creates a new radial gradient brush.
    /// </summary>
    /// <param name="gradientStops">The list of gradient stops.</param>
    /// <param name="center">The center point of the radial gradient (that is, the center of the ellipse).</param>
    /// <param name="gradientOrigin">The origin point of the radial gradient.</param>
    /// <param name="radiusX">The radius in the x dimension of the ellipse which defines the radial gradient.</param>
    /// <param name="radiusY">The radius in the y dimension of the ellipse which defines the radial gradient.</param>
    /// <returns>New radial gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsRadialGradientBrush> CreateRadialGradientBrush(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGradientStop>>> gradientStops, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    /// <summary>
    /// Creates a new radial gradient brush.
    /// </summary>
    /// <param name="center">The center point of the radial gradient (that is, the center of the ellipse).</param>
    /// <param name="gradientOrigin">The origin point of the radial gradient.</param>
    /// <param name="radiusX">The radius in the x dimension of the ellipse which defines the radial gradient.</param>
    /// <param name="radiusY">The radius in the y dimension of the ellipse which defines the radial gradient.</param>
    /// <returns>New radial gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsRadialGradientBrush> CreateRadialGradientBrush(System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    /// <summary>
    /// Creates a new visual brush.
    /// </summary>
    /// <param name="element">The XPS element (Canvas, Path or Glyphs) for Visual property od visual brush.</param>
    /// <param name="viewbox">The position and dimensions of the brush's source content.</param>
    /// <param name="viewport">The region in the containing coordinate space of the prime brush
    /// tile that is (possibly repeatedly) applied to fill the region to which the brush is applied</param>
    /// <returns>New visual brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsVisualBrush> CreateVisualBrush(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContentElement> element, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    /// <summary>
    /// Creates a new image brush.
    /// </summary>
    /// <param name="image">An image resource.</param>
    /// <param name="viewbox">The position and dimensions of the brush's source content.</param>
    /// <param name="viewport">The region in the containing coordinate space of the prime brush
    /// tile that is (possibly repeatedly) applied to fill the region to which the brush is applied</param>
    /// <returns>New image brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsImageBrush> CreateImageBrush(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsImage> image, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    /// <summary>
    /// Creates a new image brush.
    /// </summary>
    /// <param name="imagePath">The path to the image to take as a brush tile.</param>
    /// <param name="viewbox">The position and dimensions of the brush's source content.</param>
    /// <param name="viewport">The region in the containing coordinate space of the prime brush
    /// tile that is (possibly repeatedly) applied to fill the region to which the brush is applied</param>
    /// <returns>New image brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsImageBrush> CreateImageBrush(System::String imagePath, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    /// <summary>
    /// Creates a new color.
    /// </summary>
    /// <param name="color">A native color instance for RGB color.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> CreateColor(System::Drawing::Color color);
    /// <summary>
    /// Creates a new color in sRGB color space.
    /// </summary>
    /// <param name="a">The alpha color component.</param>
    /// <param name="r">The red color component.</param>
    /// <param name="g">The green color component.</param>
    /// <param name="b">The blue color component.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> CreateColor(int32_t a, int32_t r, int32_t g, int32_t b);
    /// <summary>
    /// Creates a new color in sRGB color space.
    /// </summary>
    /// <param name="r">The red color component.</param>
    /// <param name="g">The green color component.</param>
    /// <param name="b">The blue color component.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> CreateColor(int32_t r, int32_t g, int32_t b);
    /// <summary>
    /// Creates a new color in scRGB color space.
    /// </summary>
    /// <param name="a">The alpha color component.</param>
    /// <param name="r">The red color component.</param>
    /// <param name="g">The green color component.</param>
    /// <param name="b">The blue color component.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> CreateColor(float a, float r, float g, float b);
    /// <summary>
    /// Creates a new color in scRGB color space.
    /// </summary>
    /// <param name="r">The red color component.</param>
    /// <param name="g">The green color component.</param>
    /// <param name="b">The blue color component.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> CreateColor(float r, float g, float b);
    /// <summary>
    /// Creates a new color in ICC based color space.
    /// </summary>
    /// <param name="path">The path to the ICC profile.</param>
    /// <param name="components">Color components.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> CreateColor(System::String path, const System::ArrayPtr<float>& components);
    /// <summary>
    /// Creates a new color in ICC based color space.
    /// </summary>
    /// <param name="iccProfile">The ICC profile resource.</param>
    /// <param name="components">Color components.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsColor> CreateColor(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsIccProfile> iccProfile, const System::ArrayPtr<float>& components);
    /// <summary>
    /// Adds an outline entry to the document.
    /// </summary>
    /// <param name="description">The entry description.</param>
    /// <param name="outlineLevel">The outline level.</param>
    /// <param name="targetPageNumber">The target page number.</param>
    ASPOSE_PAGE_SHARED_API void AddOutlineEntry(System::String description, int32_t outlineLevel, int32_t targetPageNumber);
    
protected:

    PageAPI(System::SharedPtr<XpsDocument> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageAPI, CODEPORTING_ARGS(System::SharedPtr<XpsDocument> document));
    
private:

    System::SharedPtr<XpsDocument> _document;
    
};

} // namespace EventBasedModifications
} // namespace Features
} // namespace XPS
} // namespace Page
} // namespace Aspose


