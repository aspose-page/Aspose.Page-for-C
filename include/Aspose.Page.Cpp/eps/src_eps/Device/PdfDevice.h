#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/rectangle.h>
#include <cstdint>

#include "Device.h"
#include "Aspose.Page.Cpp/IStreamable.h"
#include "Aspose.Page.Cpp/IMultiPageDevice.h"

namespace Aspose
{
namespace Foundation
{
namespace Drawing
{
class DrMatrix;
} // namespace Drawing
} // namespace Foundation
namespace Page
{
class BaseTrFont;
namespace EPS
{
namespace Device
{
class PdfCanvas;
class PdfNode;
} // namespace Device
namespace Graphics2d
{
class TagString;
} // namespace Graphics2d
namespace GraphicsIO
{
namespace Font
{
namespace Encoding
{
class CharTable;
} // namespace Encoding
} // namespace Font
namespace Pdf
{
class PDFFontTable;
class PDFImageDelayQueue;
class PDFName;
class PDFPaintDelayQueue;
class PDFStream;
class PDFWriter;
} // namespace Pdf
} // namespace GraphicsIO
namespace Postscript
{
class TrFont;
} // namespace Postscript
namespace Util
{
namespace IO
{
class StreamEx;
} // namespace IO
} // namespace Util
} // namespace EPS
class UserProperties;
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename, typename> class IDictionary;
template <typename> class IList;
template <typename> class List;
template <typename> class Stack;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Bitmap;
class Brush;
class Color;
namespace Drawing2D
{
enum class DashCap;
class GraphicsPath;
class LinearGradientBrush;
enum class LineCap;
enum class LineJoin;
class Matrix;
} // namespace Drawing2D
class Pen;
class RectangleF;
class Size;
class SolidBrush;
class TextureBrush;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

namespace Device {

enum class PdfNodeType
{
    Canvas,
    Text,
    Path,
    Image
};

class PdfNode : public System::Object
{
    typedef PdfNode ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<PdfNode> get_Parent() const;
    void set_Parent(System::SharedPtr<PdfNode> value);
    
    PdfNode(PdfNodeType type);
    
private:

    PdfNodeType type;
    System::WeakPtr<PdfNode> parent;
    
};

class PdfCanvas : public Aspose::Page::EPS::Device::PdfNode
{
    typedef PdfCanvas ThisType;
    typedef Aspose::Page::EPS::Device::PdfNode BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> get_Clip() const;
    void set_Clip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> value);
    System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> get_RenderTransform() const;
    void set_RenderTransform(System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> value);
    System::SharedPtr<System::Drawing::Brush> get_Paint() const;
    void set_Paint(System::SharedPtr<System::Drawing::Brush> value);
    int32_t get_Count();
    
    PdfCanvas();
    
    void Add(System::SharedPtr<PdfNode> node);
    
protected:

    virtual ~PdfCanvas();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfNode>>> children;
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clip;
    System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> renderTransform;
    System::SharedPtr<System::Drawing::Brush> paint;
    
};

class PdfText : public Aspose::Page::EPS::Device::PdfNode
{
    typedef PdfText ThisType;
    typedef Aspose::Page::EPS::Device::PdfNode BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    PdfText();
    
};

class PdfPath : public Aspose::Page::EPS::Device::PdfNode
{
    typedef PdfPath ThisType;
    typedef Aspose::Page::EPS::Device::PdfNode BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    PdfPath();
    
};

class PdfImage : public Aspose::Page::EPS::Device::PdfNode
{
    typedef PdfImage ThisType;
    typedef Aspose::Page::EPS::Device::PdfNode BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    PdfImage();
    
};

/// @deprecated PdfDevice class is deprecated beginning from 24.3. Please use SaveAsPdf method in PsDocument class instead. In 24.6 this class will be entirely hidden False
/// <summary>
/// This class encapsulates rendering of document to PDF.
/// </summary>
class PdfDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPageDevice, public Aspose::Page::IStreamable
{
    typedef PdfDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPageDevice BaseType1;
    typedef Aspose::Page::IStreamable BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary> "Version" property key. </summary>
    static System::String VERSION;
    /// <summary> "Version of Adobe Acrobat Reader" property value. </summary>
    static const System::String VERSION5;
    
    /// <summary> "Transparent" property key. </summary>
    static System::String& TRANSPARENT();
    /// <summary> "Background" property key. </summary>
    static System::String& BACKGROUND();
    /// <summary> "Background color" property key. </summary>
    static System::String& BACKGROUND_COLOR();
    
    /// <summary> "Page size" property key. </summary>
    static System::String PAGE_SIZE_;
    
    /// <summary> "Page margins" property key. </summary>
    static System::String& PAGE_MARGINS();
    /// <summary> "Orientation" property key. </summary>
    static System::String& ORIENTATION();
    /// <summary> "Fit content to page" property key. </summary>
    static System::String& FIT_TO_PAGE();
    /// <summary> "Embed font in document" property key. </summary>
    static System::String& EMBED_FONTS();
    /// <summary> "What font type is used for embedding" property key. </summary>
    static System::String& EMBED_FONTS_AS();
    /// <summary> "Compress" property key. </summary>
    static System::String& COMPRESS();
    /// <summary> "Format of images" property key. </summary>
    static System::String& WRITE_IMAGES_AS();
    /// <summary> "Author" property value. </summary>
    static System::String& AUTHOR();
    /// <summary> "Title" property value. </summary>
    static System::String& TITLE();
    /// <summary> "Subject" property value. </summary>
    static System::String& SUBJECT();
    /// <summary> "Keywords" property value. </summary>
    static System::String& KEYWORDS();
    /// <summary> "Emit warnings" property value. </summary>
    static System::String& EMIT_WARNINGS();
    /// <summary> "Emit errors" property value. </summary>
    static System::String& EMIT_ERRORS();
    
    /// <summary>
    /// Current page number.
    /// </summary>
    int32_t get_CurrentPageNumber() override;
    /// <summary>
    /// Returns or specifies current stroke.
    /// </summary>
    void set_Stroke(System::SharedPtr<System::Drawing::Pen> value) override;
    /// <summary>
    /// Returns or specifies current paint.
    /// </summary>
    void set_Paint(System::SharedPtr<System::Drawing::Brush> value) override;
    /// <summary>
    /// Draws frame and banner around a string. The method calculates and returns
    ///  the point to which the text curser should be set before drawing the string. 
    /// </summary>
    // FIXME, has been moved up, can be removed
    /*private PointF DrawFrameAndBanner(double x, double y, RectangleF textSize, double adjustment, bool framed, Color frameColor, double frameWidth, bool banner, Color bannerColor, int horizontal, int vertical)
            {
                double descent = textSize.Y + textSize.Height;
                x = GetXalignment(x, textSize.Width, horizontal);
                y = GetYalignment(y, textSize.Height, descent, vertical);
    
                double rx = x - adjustment;
                double ry = y - textSize.Height + descent - adjustment;
                double rw = textSize.Width + 2 * adjustment;
                double rh = textSize.Height + 2 * adjustment;
    
                if (banner)
                {
                    Brush paint = Paint;
                    Paint = new SolidBrush(bannerColor);
                    FillRect(rx, ry, rw, rh);
                    Paint = paint;
                }
                if (framed)
                {
                    Brush paint = Paint;
                    Pen stroke = Stroke;
                    Paint = new SolidBrush(frameColor);
                    Stroke.Width = (float) frameWidth;
                    DrawRect(rx, ry, rw, rh);
                    Paint = paint;
                    Stroke = stroke;
                }
    
                return new PointF((float)x, (float)y);
            }*/
    System::SharedPtr<System::Drawing::Brush> get_LastWrittenPaint() const;
    /// <summary>
    /// Specifies current font.
    /// </summary>
    void set_Font(System::SharedPtr<BaseTrFont> value) override;
    System::String get_WarningMessage();
    /// <summary>
    /// Specifies or returns an output stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_OutputStream() override;
    /// <summary>
    /// Specifies or returns an output stream.
    /// </summary>
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value) override;
    
    /// <summary>
    /// Initializes new instance of <see cref="PdfDevice"></see> with output stream.
    /// </summary>
    /// <param name="ros">Output stream. </param>
    PdfDevice(System::SharedPtr<System::IO::Stream> ros);
    /// <summary>
    /// Initializes new instance of <see cref="PdfDevice"></see> with output stream and specified size of a page.
    /// </summary>        
    /// <param name="ros">Output stream. </param>
    /// /// <param name="size">Page size. </param>
    PdfDevice(System::SharedPtr<System::IO::Stream> ros, System::Drawing::Size size);
    
    /// <summary>
    /// Reset device to initial state for whole document. Used for reseting output stream.
    /// </summary>
    void ReNew() override;
    /// <summary>
    /// Reset device to initial state for whole document while merging several documents. Used for reseting output stream.
    /// </summary>
    void ReNewForMerge(bool mainDocument) override;
    
    /// <summary>
    /// Clone constructor. Initializes new instance of <see cref="PdfDevice"></see> with existing device.
    /// </summary>
    /// <param name="device"> Existing device. </param>
    /// <param name="doRestoreOnDispose">Use true if need to write restoring graphics state on disposing. </param>
    PdfDevice(System::SharedPtr<PdfDevice> device, bool doRestoreOnDispose);
    
    /// <summary>
    /// Makes necessary preparation of device before start rendering of document.
    /// </summary>
    void StartDocument() override;
    /// <summary>
    /// Makes necessary preparation of device after the document has been rendered.
    /// </summary>
    void EndDocument() override;
    /// <summary>
    /// Disposes the graphics context. If on creation restoreOnDispose was true,
    /// writeGraphicsRestore() will be called.
    /// </summary>
    void Dispose() override;
    /// <summary>
    /// Writes the catalog, docinfo, preferences, and (as we use only single page
    /// output the page tree. 
    /// </summary>
    void WriteHeader();
    /// <summary>
    /// Writes out current background.
    /// </summary>
    void WriteBackground() override;
    /// <summary>
    /// Writes out trailer of PDF document.
    /// </summary>
    void WriteTrailer();
    void CloseStream();
    /// <summary>
    /// If page device parameters will be set this method allows to return writing stream back the begining of page.
    /// </summary>
    void Reset() override;
    void Reset(bool zeroPageNumbers) override;
    /// <summary>
    /// Initializes numbers of pages to output.
    /// </summary>
    void InitPageNumbers() override;
    /// <summary>
    /// Makes necessary preparation of the device before page rendering.
    /// </summary>
    /// <param name="title">The page title.</param>
    /// <returns>Always true.</returns>
    bool OpenPage(System::String title) override;
    /// <summary>
    /// Makes necessary preparation of the device before each page rendering.
    /// </summary>
    /// <param name="width">A width of the page.</param>
    /// <param name="height">A height of the page.</param>
    /// <returns>Always true.</returns>
    bool OpenPage(float width, float height) override;
    /// <summary>
    /// Makes necessary preparation of the device after page has been rendered.
    /// </summary>
    void ClosePage() override;
    virtual void SavePageTransform();
    /// <summary>
    /// Updates page parameters from other multi-paged device.
    /// </summary>
    /// <param name="device"> Another instance of the same device. </param>
    void UpdatePageParameters(System::SharedPtr<IMultiPageDevice> device) override;
    virtual void SetHeader(System::SharedPtr<Aspose::Page::EPS::Postscript::TrFont> font, System::SharedPtr<Aspose::Page::EPS::Graphics2d::TagString> left, System::SharedPtr<Aspose::Page::EPS::Graphics2d::TagString> center, System::SharedPtr<Aspose::Page::EPS::Graphics2d::TagString> right, int32_t underlineThickness);
    virtual void SetFooter(System::SharedPtr<Aspose::Page::EPS::Postscript::TrFont> font, System::SharedPtr<Aspose::Page::EPS::Graphics2d::TagString> left, System::SharedPtr<Aspose::Page::EPS::Graphics2d::TagString> center, System::SharedPtr<Aspose::Page::EPS::Graphics2d::TagString> right, int32_t underlineThickness);
    void SetSaveFromPatternCreate();
    /// <summary>
    /// Creates a copy of this device.
    /// </summary>
    /// <returns>Copy of this device.</returns>
    System::SharedPtr<Aspose::Page::Device> Create() override;
    virtual System::SharedPtr<Aspose::Page::Device> Copy();
    virtual System::SharedPtr<Aspose::Page::Device> Create(float x, float y, float width, float height);
    virtual void WriteGraphicsSave();
    virtual void WriteGraphicsRestore();
    /// <summary>
    /// Initializes clip of the device.
    /// </summary>
    void InitClip() override;
    /// <summary>
    /// Draws a path.
    /// </summary>
    /// <param name="s"> A path to be drawn. </param>
    void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s) override;
    /// <summary>
    /// Fills a path.
    /// </summary>
    /// <param name="s"> A path to be filled. </param>
    void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s) override;
    void FillLastClip();
    /// <summary>
    /// Draws an image with assigned transform and background.
    /// </summary>
    /// <param name="image"> An image to be drawn. </param>
    /// <param name="transform"> A transform. </param>
    /// <param name="bkg"> A background color. </param>
    void DrawImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::Drawing::Color bkg) override;
    void DrawBitmapGlyph(System::SharedPtr<System::Object> charSelector, System::String fontName, System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Draws a string at given point.
    /// </summary>
    /// <param name="str"> A string to be drawn. </param>
    /// <param name="x"> X coordinate of point. </param>
    /// <param name="y"> Y coordinate of point. </param>
    void DrawString(System::String str, double x, double y) override;
    /// <summary>
    /// Write the given transformation matrix to the file. </summary>
    virtual void WriteTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> t);
    /// <summary>
    /// Gets current transform.        
    /// </summary>
    /// <returns>Current transform</returns>
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetTransform() override;
    /// <summary>
    /// Specifies the current transform. Since most output formats do not
    /// implement this functionality, the inverse transform of the
    /// currentTransform is calculated and multiplied by the
    /// transform to be set.The result is then forwarded by a call
    /// to writeTransform(Transform).
    /// </summary>
    /// <param name="transform"> Transform to be applied. </param>
    void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Transforms the current transformation matrix. Calls writeTransform(Transform)
    /// </summary>
    /// <param name="transform"> Transform to be applied. </param>
    void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Translates the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="x"> Translation in X axis. </param>
    /// <param name="y"> Translation in Y axis. </param>
    void Translate(double x, double y) override;
    /// <summary>
    /// Rotate the current transform over the Z-axis. Calls writeTransform(Transform).
    /// Rotating with a positive angle theta rotates points on the positive x axis
    /// toward the positive y axis.
    /// </summary>
    /// <param name="theta"> radians over which to rotate </param>
    void Rotate(double theta) override;
    /// <summary>
    /// Scales the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="sx"> A scale in X axis. </param>
    /// <param name="sy"> A scale in Y axis. </param>
    void Scale(double sx, double sy) override;
    /// <summary>
    /// Shears the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="shx"> A shear in X axis. </param>
    /// <param name="shy"> A shear in Y axis. </param>
    void Shear(double shx, double shy) override;
    /// <summary>
    /// Specifies the clip of the device.
    /// </summary>
    /// <param name="clipPath"> A clipping path. </param>
    void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clipPath) override;
    virtual void WriteClip(System::Drawing::RectangleF r2d);
    virtual void WriteClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    /// <summary>
    /// Clips rectangle. Calls clip(Rectangle2D).
    /// </summary>
    /// <param name="x">, y, width, height rectangle for clipping </param>
    virtual void ClipRect(float x, float y, float width, float height);
    /// <summary>
    /// Writes out the width of the stroke.
    /// </summary>
    /// <param name="width"> The width of the stroke </param>
    void WriteWidth(float width) override;
    /// <summary>
    /// Writes out the cap of the stroke.
    /// </summary>
    /// <param name="cap"> Line cap of the stroke. </param>
    void WriteCap(System::Drawing::Drawing2D::LineCap cap) override;
    /// <summary>
    /// Writes out the join of the stroke.
    /// </summary>
    /// <param name="join"> Line join of the stroke. </param>
    void WriteJoin(System::Drawing::Drawing2D::LineJoin join) override;
    /// <summary>
    /// Writes out the miter limit of the stroke.
    /// </summary>
    /// <param name="limit"> Miter limit of the stroke. </param>
    void WriteMiterLimit(float limit) override;
    /// <summary>
    /// Writes out the dash of the stroke.
    /// </summary>
    /// <param name="dash"> The dash pattern or an empty array if line is solid. </param>
    /// <param name="phase"> The phase of the dash pattern. </param>
    /// <param name="dashCap"> The dash cap of the dash pattern. </param>
    void WriteDash(System::ArrayPtr<double> dash, double phase, System::Drawing::Drawing2D::DashCap dashCap, float width) override;
    /// <summary>
    /// Writes out paint as the given color.
    /// </summary>
    /// <param name="c"> The color to be written. </param>
    void WritePaint(System::SharedPtr<System::Drawing::SolidBrush> c) override;
    /// <summary>
    /// Writes out paint as the given gradient.
    /// </summary>
    /// <param name="c"> The paint to be written </param>
    void WritePaint(System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> c) override;
    /// <summary>
    /// Writes out paint as the given texture.
    /// </summary>
    /// <param name="c"> The paint to be written </param>
    void WritePaint(System::SharedPtr<System::Drawing::TextureBrush> c) override;
    /// <summary>
    /// Writes out paint.
    /// </summary>
    /// <param name="paint"> The paint to be written. </param>
    void WritePaint(System::SharedPtr<System::Drawing::Brush> paint) override;
    /// <summary>
    /// Writes out last written paint. It is useful in cases when after writing paint graphics restore ("Q") was performed.
    /// </summary>
    /// <param name="paint"> The paint to be written. </param>
    void WriteLastWrittenPaint();
    /// <summary>
    /// Writes a comment.
    /// </summary>
    /// <param name="comment"> A comment to be written. </param>
    void WriteComment(System::String comment) override;
    virtual void ResetClip(System::Drawing::Rectangle clip);
    /// <summary>
    /// Clips using given shape. Dispatches to writeClip(Rectangle),
    /// writeClip(RectangleF) or writeClip(Shape).
    /// </summary>
    /// <param name="shape"> used for clipping </param>
    virtual void Clip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    /// <summary>
    /// Writes out a warning, by default to System.err.
    /// </summary>
    /// <param name="warning"> The warning to be written. </param>
    void WriteWarning(System::String warning) override;
    /// <summary>
    /// Writes out string with specified font.
    /// </summary>
    /// <param name="font"> Specified font. </param>
    /// <param name="str"> The string. </param>
    void WriteString(System::SharedPtr<BaseTrFont> font, System::String str) override;
    int64_t GetFinalWrittenLength() override;
    System::SharedPtr<PdfCanvas> CreatePdfCanvas();
    /// <summary>
    /// Returns the name of device type.
    /// </summary>
    /// <returns>Type name.</returns>
    System::String ToString() const override;
    
protected:

    /// <summary>
    /// Device properties including metadata.
    /// </summary>
    /*public Dictionary<string, object> Properties
            {
                get
                {
                    return defaultProperties;
                }
                set
                {
                    defaultProperties.Properties = value;
                }
            }*/
    /// <summary> "PDF version" property value. </summary>
    static const System::String PDF_VERSION;
    /// <summary> Current transform. </summary>
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> currentTransform;
    /// <summary> Transform that must be set on each page before adding any element (for multi-page documents). Used when some transforms are set before starting any page. </summary>
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> everyPageTransform;
    
    /// <summary>
    /// Called to write the initial graphics state.
    /// </summary>
    virtual void WriteGraphicsState();
    
    virtual ~PdfDevice();
    
private:

    static System::String& rootKey();
    
    static const System::String VERSION4;
    
    /// <summary> "Create thumbnails" property key. </summary>
    static System::String& THUMBNAILS();
    /// <summary> "Thumbnails size" property key. </summary>
    static System::String& THUMBNAIL_SIZE();
    /// <summary> "Producer" property value. </summary>
    static System::String& PRODUCER();
    static System::SharedPtr<UserProperties>& defaultProperties();
    
    static System::ArrayPtr<System::String> COMPRESS_FILTERS;
    static System::ArrayPtr<System::String> NO_FILTERS;
    static const float FONTSIZE_CORRECTION;
    System::SharedPtr<Aspose::Page::EPS::Util::IO::StreamEx> ros;
    System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Pdf::PDFWriter> os;
    System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Pdf::PDFStream> pageStream;
    System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Pdf::PDFFontTable> fontTable;
    System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Pdf::PDFImageDelayQueue> delayImageQueue;
    System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Pdf::PDFPaintDelayQueue> delayPaintQueue;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<System::Object>, System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Pdf::PDFName>>>>> bitmapFontsGlyphsCache;
    int32_t currentPageNumber;
    System::ArrayPtr<System::SharedPtr<Aspose::Page::EPS::Graphics2d::TagString>> headerText;
    int32_t headerUnderline;
    System::SharedPtr<Aspose::Page::EPS::Postscript::TrFont> headerFont;
    System::ArrayPtr<System::SharedPtr<Aspose::Page::EPS::Graphics2d::TagString>> footerText;
    int32_t footerUnderline;
    System::SharedPtr<Aspose::Page::EPS::Postscript::TrFont> footerFont;
    System::SharedPtr<System::Collections::Generic::IList<System::String>> titles;
    int32_t alphaIndex;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<System::Object>, System::SharedPtr<System::Object>>> extGStates;
    /// <summary>Use true if need to write restoring graphics state on disposing.</summary>
    bool doRestoreOnDispose;
    System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> pageTransform;
    System::Drawing::Rectangle deviceClip;
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> userClip;
    System::SharedPtr<PdfCanvas> currentCanvas;
    bool inClipQ;
    bool lastClipMode;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<PdfCanvas>>> canvasesStack;
    System::SharedPtr<PdfNode> currentNode;
    static int32_t gStates;
    System::SharedPtr<System::Drawing::Brush> lastWrittenPaint;
    System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Font::Encoding::CharTable> currentCharTable;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfCanvas>>> cpp_canvas;
    bool saveFromPatternCreate;
    
    void set_NonStrokeColor(System::Drawing::Color value);
    void set_StrokeColor(System::Drawing::Color value);
    float get_Width();
    float get_Height();
    
    static System::SharedPtr<UserProperties> CreateDefaultProperties();
    void Init();
    void InitStream(System::SharedPtr<System::IO::Stream> ros);
    static System::SharedPtr<System::Drawing::Drawing2D::Matrix> DrMatrixToMatrix(System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> m);
    void ResetDelayed();
    void ProcessDelayed();
    void ResetInternal();
    void SetEvaluationWarning();
    void Fill(bool eofill);
    void WritePdfImage(System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Pdf::PDFName> ref, System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> TransformShape(System::SharedPtr<System::Drawing::Drawing2D::Matrix> at, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> TransformShape(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> UntransformShape(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    System::SharedPtr<System::Drawing::Brush> FindLastWrittenPaint(System::SharedPtr<PdfCanvas> canvas);
    System::String ToString_NonConst();
    void ShowCharacterCodes(System::String str);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


