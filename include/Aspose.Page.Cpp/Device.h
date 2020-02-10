#pragma once

// C# preprocessor directive: #if ASPOSE_PAGE


// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using LicenseCore = Aspose.Pdf.LicenseCore;
// using LicenseState = Aspose.Pdf.LicenseState;

// C# preprocessor directive: #endif


#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <drawing/texture_brush.h>
#include <drawing/solid_brush.h>
#include <drawing/size.h>
#include <drawing/rectangle_f.h>
#include <drawing/pen.h>
#include <drawing/drawing2d/matrix.h>
#include <drawing/drawing2d/linear_gradient_brush.h>
#include <drawing/drawing2d/line_join.h>
#include <drawing/drawing2d/line_cap.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/drawing2d/dash_cap.h>
#include <drawing/color.h>
#include <drawing/brush.h>
#include <drawing/bitmap.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace LicenseManagement { class VentureLicense; } } }
namespace Aspose { namespace Page { namespace LicenseManagement { class VentureLicenseDecoder; } } }
namespace Aspose { namespace Page { namespace EPS { namespace Graphics2d { class PixelGraphics2D; } } } }
namespace Aspose { namespace Page { namespace EPS { namespace Graphics2d { class ScreenConstants; } } } }
namespace Aspose { namespace Page { namespace EPS { namespace Device { class ApsDevice; } } } }
namespace Aspose { namespace Page { namespace EPS { namespace Device { class ImageDevice; } } } }
namespace Aspose { namespace Page { namespace EPS { namespace GraphicsIO { namespace Font { class FontUtilities; } } } } }
namespace Aspose { namespace Page { namespace EPS { namespace Device { class PdfDevice; } } } }
namespace Aspose { namespace Page { namespace EPS { class PsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Image { class ImageDevice; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Pdf { class PdfDevice; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsPresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsDevice; } } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { enum class TextRenderingMode; } }
namespace Aspose { namespace Page { class UserProperties; } }
namespace Aspose { namespace Page { class SaveOptions; } }
namespace Aspose { namespace Page { class ITrFont; } }
namespace Aspose { namespace Page { class Margins; } }
namespace Aspose { namespace Rendering { class ApsGlyphsIndices; } }

namespace Aspose {

namespace Page {

/// <summary>
/// This class encapsulates rendering of document to abstract device.
/// Rendering of the document is performed page by page.
/// </summary>
class Device : public virtual System::Object
{
    typedef Device ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::LicenseManagement::VentureLicenseDecoder;
    friend class Aspose::Page::EPS::Graphics2d::PixelGraphics2D;
    friend class Aspose::Page::EPS::Graphics2d::ScreenConstants;
    friend class Aspose::Page::EPS::Device::ApsDevice;
    friend class Aspose::Page::EPS::Device::ImageDevice;
    friend class Aspose::Page::EPS::GraphicsIO::Font::FontUtilities;
    friend class Aspose::Page::EPS::Device::PdfDevice;
    friend class Aspose::Page::EPS::PsDocument;
    friend class Aspose::Page::Xps::Presentation::Image::ImageDevice;
    friend class Aspose::Page::Xps::Presentation::Pdf::PdfDevice;
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsDevice;
    friend class Aspose::Page::Xps::XpsDocument;
    
public:

    static ASPOSE_PAGE_SHARED_API System::String VERSION;
    
    /// <summary>
    /// Options for managing rendering process.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_SaveOptions(System::SharedPtr<Aspose::Page::SaveOptions> value);
    /// <summary>
    /// Device properties including metadata.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> get_Properties();
    /// <summary>
    /// Device properties including metadata.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Properties(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> value);
    /// <summary>
    /// Returns or specifies creator of resulting device output.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Creator();
    /// <summary>
    /// Returns or specifies creator of resulting device output.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Creator(System::String value);
    /// <summary>
    /// Returns or specifies a size of the page.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Size get_Size();
    /// <summary>
    /// Returns or specifies a size of the page.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::Size value);
    /// <summary>
    /// Indicates whether device uses direct RGB mode, that is RGB.        
    /// </summary>
    /// <returns>True if direct RGB mode and false otherwise, that is BGR.</returns>
    virtual ASPOSE_PAGE_SHARED_API bool get_IsDirectRGB();
    /// <summary>
    /// Returns or specifies current background of the page.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color get_Background();
    /// <summary>
    /// Returns or specifies current background of the page.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Background(System::Drawing::Color value);
    /// <summary>
    /// Returns or specifies current opacity.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API float get_Opacity();
    /// <summary>
    /// Returns or specifies current opacity.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Opacity(float value);
    /// <summary>
    /// Returns or specifies current stroke.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Pen> get_Stroke();
    /// <summary>
    /// Returns or specifies current stroke.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Stroke(System::SharedPtr<System::Drawing::Pen> value);
    /// <summary>
    /// Returns or specifies current paint.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> get_Paint();
    /// <summary>
    /// Returns or specifies current paint.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Paint(System::SharedPtr<System::Drawing::Brush> value);
    /// <summary>
    /// Returns or specifies current opacity mask.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> get_OpacityMask();
    /// <summary>
    /// Returns or specifies current opacity mask.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_OpacityMask(System::SharedPtr<System::Drawing::Brush> value);
    /// <summary>
    /// Returns or specifies current font.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<ITrFont> get_Font();
    /// <summary>
    /// Returns or specifies current font.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Font(System::SharedPtr<ITrFont> value);
    /// <summary>
    /// Returns or specifies current characters transform.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> get_CharTM();
    /// <summary>
    /// Returns or specifies current characters transform.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_CharTM(System::SharedPtr<System::Drawing::Drawing2D::Matrix> value);
    /// <summary>
    /// Returns or specifies current text rendering mode.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API Aspose::Page::TextRenderingMode get_TextRenderingMode();
    /// <summary>
    /// Returns or specifies current text rendering mode.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_TextRenderingMode(Aspose::Page::TextRenderingMode value);
    /// <summary>
    /// Returns or specifies current text stroke width.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API float get_TextStrokeWidth();
    /// <summary>
    /// Returns or specifies current text stroke width.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_TextStrokeWidth(float value);
    /// <summary>
    /// Indicates whether this instance of Aspose.Page library is licensed.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsLicensed();
    
    /// <summary>
    /// Initializes <see cref="Device"/> with a size of a page.
    /// </summary>
    /// <param name="pageSize">Page size. </param>
    ASPOSE_PAGE_SHARED_API Device(System::Drawing::Size pageSize);
    
    /// <summary>
    /// Reset device to initial state for whole document. Used for reseting output stream.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void ReNew();
    /// <summary>
    /// Gets a value of string property.
    /// </summary>
    /// <param name="key"> The name of property. </param>
    /// <returns> The property value. </returns>
    ASPOSE_PAGE_SHARED_API System::String GetProperty(System::String key);
    /// <summary>
    /// Gets a value of color property.
    /// </summary>
    /// <param name="key"> The name of property. </param>
    /// <returns> The property value. </returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::Color GetPropertyColor(System::String key);
    /// <summary>
    /// Gets a value of rectangle property.
    /// </summary>
    /// <param name="key"> The name of property. </param>
    /// <returns> The property value. </returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF GetPropertyRectangle(System::String key);
    /// <summary>
    /// Gets a value of margin property.
    /// </summary>
    /// <param name="key"> The name of property. </param>
    /// <returns> The property value. </returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Margins> GetPropertyMargins(System::String key);
    /// <summary>
    /// Gets a value of size property.
    /// </summary>
    /// <param name="key"> The name of property. </param>
    /// <returns> The property value. </returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::Size GetPropertySize(System::String key);
    /// <summary>
    /// Gets a value of integer property.
    /// </summary>
    /// <param name="key"> The name of property. </param>
    /// <returns> The property value. </returns>
    ASPOSE_PAGE_SHARED_API int32_t GetPropertyInt(System::String key);
    /// <summary>
    /// Gets a value of double property.
    /// </summary>
    /// <param name="key"> The name of property. </param>
    /// <returns> The property value. </returns>
    ASPOSE_PAGE_SHARED_API double GetPropertyDouble(System::String key);
    /// <summary>
    /// Gets a value of boolean property.
    /// </summary>
    /// <param name="key"> The name of property. </param>
    /// <returns> The property value. </returns>
    ASPOSE_PAGE_SHARED_API bool IsProperty(System::String key);
    /// <summary>
    /// Creates a copy of this device.
    /// </summary>
    /// <returns>Copy of this device.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Device> Create();
    /// <summary>
    /// Specifies current transform.
    /// </summary>
    /// <param name="transform"> A transform. </param>
    virtual ASPOSE_PAGE_SHARED_API void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Gets current transform.
    /// </summary>
    /// <returns>Current transform</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetTransform();
    /// <summary>
    /// Transforms the current transformation matrix. Calls writeTransform(Transform)
    /// </summary>
    /// <param name="transform"> Transform to be applied. </param>
    virtual ASPOSE_PAGE_SHARED_API void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Translates the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="x"> Translation in X axis. </param>
    /// <param name="y"> Translation in Y axis. </param>
    virtual ASPOSE_PAGE_SHARED_API void Translate(double x, double y);
    /// <summary>
    /// Rotate the current transformation matrix. Calls writeTransform(Transform).
    /// Rotating with a positive angle theta rotates points on the positive x axis
    /// toward the positive y axis.
    /// </summary>
    /// <param name="theta"> Angle in radians over which to rotate. </param>
    virtual ASPOSE_PAGE_SHARED_API void Rotate(double theta);
    /// <summary>
    /// Rotate the current transformation matrix around a point.
    /// </summary>
    /// <param name="theta"> An angle of rotation in radians. </param>
    /// <param name="x"> X coordinate of point. </param>
    /// <param name="y"> Y coordinate of point. </param>
    virtual ASPOSE_PAGE_SHARED_API void Rotate(double theta, double x, double y);
    /// <summary>
    /// Scales the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="x"> A scale in X axis. </param>
    /// <param name="y"> A scale in Y axis. </param>
    virtual ASPOSE_PAGE_SHARED_API void Scale(double x, double y);
    /// <summary>
    /// Shears the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="shx"> A shear in X axis. </param>
    /// <param name="shy"> A shear in Y axis. </param>
    virtual ASPOSE_PAGE_SHARED_API void Shear(double shx, double shy);
    /// <summary>
    /// Initializes clip of the device.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void InitClip();
    /// <summary>
    /// Specifies the clip of the device.
    /// </summary>
    /// <param name="clipPath"> A clipping path. </param>
    virtual ASPOSE_PAGE_SHARED_API void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clipPath);
    /// <summary>
    /// Draws a path.
    /// </summary>
    /// <param name="path"> A path to be drawn. </param>
    virtual ASPOSE_PAGE_SHARED_API void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
    /// <summary>
    /// Fills a path.
    /// </summary>
    /// <param name="path"> A path to be filled. </param>
    virtual ASPOSE_PAGE_SHARED_API void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
    /// <summary>
    /// Draws a string at given point.
    /// </summary>
    /// <param name="str"> A string to be drawn. </param>
    /// <param name="x"> X coordinate of point. </param>
    /// <param name="y"> Y coordinate of point. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y);
    /// <summary>
    /// Draws an image with assigned transform and background.
    /// </summary>
    /// <param name="image"> An image to be drawn. </param>
    /// <param name="transform"> A transform. </param>
    /// <param name="bkg"> A background color. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::Drawing::Color bkg);
    /// <summary>
    /// Makes necessary preparation of device before start rendering of document.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void StartDocument();
    /// <summary>
    /// Makes necessary preparation of device after the document has been rendered.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void EndDocument();
    /// <summary>
    /// Disposes the device.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void Dispose();
    /// <summary>
    /// Reset the device to initial state for a page.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void Reset();
    /// <summary>
    /// Writes a comment.
    /// </summary>
    /// <param name="comment"> A comment to be written. </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteComment(System::String comment);
    /// <summary>
    /// Returns the name of device type.
    /// </summary>
    /// <returns>Type name.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    /// <summary>
    /// Draws an arc.
    /// </summary>
    /// <param name="x"> X coordinate of center of the arc. </param>
    /// <param name="y"> Y coordinate of center of the arc. </param>
    /// <param name="width"> A width of circumscribed rectangle. </param>
    /// <param name="height"> A height of circumscribed rectangle. </param>
    /// <param name="startAngle"> A start angle of the arc. </param>
    /// <param name="arcAngle"> An angle of the arc. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawArc(double x, double y, double width, double height, double startAngle, double arcAngle);
    /// <summary>
    /// Draws a line segment.
    /// </summary>
    /// <param name="x1"> X coordinate of the beginning of segment. </param>
    /// <param name="y1"> Y coordinate of the beginning of segment. </param>
    /// <param name="x2"> X coordinate of the end of segment. </param>
    /// <param name="y2"> Y coordinate of the end of segment. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawLine(double x1, double y1, double x2, double y2);
    /// <summary>
    /// Draws an oval.
    /// </summary>
    /// <param name="x"> X coordinate of center of the oval. </param>
    /// <param name="y"> Y coordinate of center of the oval. </param>
    /// <param name="width"> A width of circumscribed rectangle. </param>
    /// <param name="height"> A height of circumscribed rectangle. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawOval(double x, double y, double width, double height);
    /// <summary>
    /// Draws a polyline.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawPolyline(System::ArrayPtr<int32_t> xPoints, System::ArrayPtr<int32_t> yPoints, int32_t nPoints);
    /// <summary>
    /// Draws a polyline.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawPolyline(System::ArrayPtr<double> xPoints, System::ArrayPtr<double> yPoints, int32_t nPoints);
    /// <summary>
    /// Draws a polygon.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawPolygon(System::ArrayPtr<int32_t> xPoints, System::ArrayPtr<int32_t> yPoints, int32_t nPoints);
    /// <summary>
    /// Draws a poligone.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawPolygon(System::ArrayPtr<double> xPoints, System::ArrayPtr<double> yPoints, int32_t nPoints);
    /// <summary>
    /// Draws a rectangle.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawRect(double x, double y, double width, double height);
    /// <summary>
    /// Draws a round rectangle.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    /// <param name="arcWidth"> A width of circumscribed rectangle of the arc that rounds an angle of the rectangle. </param>
    /// <param name="arcHeight"> A height of circumscribed rectangle of the arc that rounds an angle of the rectangle. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawRoundRect(double x, double y, double width, double height, double arcWidth, double arcHeight);
    /// <summary>
    /// Fills an arc.
    /// </summary>
    /// <param name="x"> X coordinate of center of the arc. </param>
    /// <param name="y"> Y coordinate of center of the arc. </param>
    /// <param name="width"> A width of circumscribed rectangle. </param>
    /// <param name="height"> A height of circumscribed rectangle. </param>
    /// <param name="startAngle"> A start angle of the arc. </param>
    /// <param name="arcAngle"> An angle of the arc. </param>
    virtual ASPOSE_PAGE_SHARED_API void FillArc(double x, double y, double width, double height, double startAngle, double arcAngle);
    /// <summary>
    /// Fills an oval.
    /// </summary>
    /// <param name="x"> X coordinate of center of the oval. </param>
    /// <param name="y"> Y coordinate of center of the oval. </param>
    /// <param name="width"> A width of circumscribed rectangle. </param>
    /// <param name="height"> A height of circumscribed rectangle. </param>
    virtual ASPOSE_PAGE_SHARED_API void FillOval(double x, double y, double width, double height);
    /// <summary>
    /// Fills a poligone.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    virtual ASPOSE_PAGE_SHARED_API void FillPolygon(System::ArrayPtr<int32_t> xPoints, System::ArrayPtr<int32_t> yPoints, int32_t nPoints);
    /// <summary>
    /// Fills a poligone.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    virtual ASPOSE_PAGE_SHARED_API void FillPolygon(System::ArrayPtr<double> xPoints, System::ArrayPtr<double> yPoints, int32_t nPoints);
    /// <summary>
    /// Fills a rectangle.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    virtual ASPOSE_PAGE_SHARED_API void FillRect(double x, double y, double width, double height);
    /// <summary>
    /// Fills a round rectangle.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    /// <param name="arcWidth"> A width of circumscribed rectangle of the arc that rounds an angle of the rectangle. </param>
    /// <param name="arcHeight"> A height of circumscribed rectangle of the arc that rounds an angle of the rectangle. </param>
    virtual ASPOSE_PAGE_SHARED_API void FillRoundRect(double x, double y, double width, double height, double arcWidth, double arcHeight);
    
protected:

    System::String creator;
    System::SharedPtr<Aspose::Page::SaveOptions> saveOptions;
    System::Drawing::Size size;
    float opacity;
    System::SharedPtr<System::Drawing::Pen> stroke;
    System::SharedPtr<System::Drawing::Brush> paint;
    System::SharedPtr<System::Drawing::Brush> opacityMask;
    System::SharedPtr<ITrFont> font;
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> charTM;
    Aspose::Page::TextRenderingMode textRenderingMode;
    float textStrokeWidth;
    
    /// <summary>
    /// Initializes new instance of <see cref="Device"/>.
    /// </summary>
    Device();
    /// <summary>
    /// Clone constructor. Initializes this device with existing device.
    /// </summary>
    /// <param name="device"> Existing device. </param>
    Device(System::SharedPtr<Device> device);
    
    /// <summary>
    /// Initializes default properties of device with values.
    /// </summary>
    /// <param name="defaults"> Default properties with values. </param>
    void InitProperties(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> defaults);
    virtual ASPOSE_PAGE_SHARED_API void ApplyGraphicState(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clip);
    virtual ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y, double width, System::SharedPtr<Aspose::Rendering::ApsGlyphsIndices> indices, bool isRtl = false);
    /// <summary>
    /// Creates a polyline/polygon shape from a set of points.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    /// <param name="close"> Indicates whether shape is closed </param>
    /// <returns>The shape.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> CreateShape(System::ArrayPtr<int32_t> xPoints, System::ArrayPtr<int32_t> yPoints, int32_t nPoints, bool close);
    /// <summary>
    /// Creates a polyline/polygon shape from a set of points.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    /// <param name="close"> Indicates whether shape is closed </param>
    /// <returns>The shape.</returns>
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> CreateShape(System::ArrayPtr<double> xPoints, System::ArrayPtr<double> yPoints, int32_t nPoints, bool close);
    /// <summary>
    /// Clears rectangle by painting it with the backgroundColor.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    virtual ASPOSE_PAGE_SHARED_API void ClearRect(float x, float y, float width, float height);
    /// <summary>
    /// Writes out current background.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void WriteBackground();
    /// <summary>
    /// Writes out the current stroke. If stroke is an instance of BasicStroke it will
    /// call writeWidth, writeCap, writeJoin, writeMiterLimit and writeDash,
    /// if any were different than the current stroke.
    /// </summary>
    /// <param name="stroke"> A stroke to be written. </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteStroke(System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Writes out the width of the stroke.
    /// </summary>
    /// <param name="width"> The width of the stroke </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteWidth(float width);
    /// <summary>
    /// Handles an exception which has been caught. Dispatches
    /// exception to writeWarning for UnsupportedOperationExceptions
    /// and writeError for others
    /// </summary>
    /// <param name="exception"> The exception to be handled </param>
    virtual ASPOSE_PAGE_SHARED_API void HandleException(System::Exception exception);
    /// <summary>
    /// Writes out a warning, by default to System.err.
    /// </summary>
    /// <param name="warning"> The warning to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteWarning(System::Exception warning);
    /// <summary>
    /// Writes out a warning, by default to System.err.
    /// </summary>
    /// <param name="warning">The warning to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteWarning(System::String warning);
    /// <summary>
    /// Writes out an error, by default the stack trace is printed.
    /// </summary>
    /// <param name="error"> The error to be reported </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteError(System::Exception error);
    /// <summary>
    /// Writes out the cap of the stroke.
    /// </summary>
    /// <param name="cap"> Line cap of the stroke. </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteCap(System::Drawing::Drawing2D::LineCap cap);
    /// <summary>
    /// Writes out the join of the stroke.
    /// </summary>
    /// <param name="join"> Line join of the stroke. </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteJoin(System::Drawing::Drawing2D::LineJoin join);
    /// <summary>
    /// Writes out the miter limit of the stroke.
    /// </summary>
    /// <param name="limit"> Miter limit of the stroke. </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteMiterLimit(float limit);
    /// <summary>
    /// Writes out the dash of the stroke.
    /// </summary>
    /// <param name="dash"> The dash pattern or an empty array if line is solid. </param>
    /// <param name="phase"> The phase of the dash pattern. </param>
    /// <param name="dashCap"> The dash cap of the dash pattern. </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteDash(System::ArrayPtr<double> dash, double phase, System::Drawing::Drawing2D::DashCap dashCap);
    /// <summary>
    /// Writes out paint as the given color.
    /// </summary>
    /// <param name="color"> The color to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::SolidBrush> color);
    /// <summary>
    /// Writes out paint as the given gradient.
    /// </summary>
    /// <param name="paint"> The paint to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> paint);
    /// <summary>
    /// Writes out paint as the given texture.
    /// </summary>
    /// <param name="paint"> The paint to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::TextureBrush> paint);
    /// <summary>
    /// Writes out paint.
    /// </summary>
    /// <param name="paint"> The paint to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Brush> paint);
    /// <summary>
    /// Writes out string with specified font.
    /// </summary>
    /// <param name="font"> Specified font. </param>
    /// <param name="str"> The string. </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteString(System::SharedPtr<ITrFont> font, System::String str);
    virtual ASPOSE_PAGE_SHARED_API void SetVentureLicense(System::SharedPtr<LicenseManagement::VentureLicense> license);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<LicenseManagement::VentureLicense> GetVentureLicense();
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> _ventureLicense;
    System::SharedPtr<UserProperties> properties;
    System::Drawing::Color background;
    
    void Init();
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> CreateRoundedRectanglePath(double x, double y, double width, double height, double arcWidth, double arcHeight);
    
};

} // namespace Page
} // namespace Aspose


