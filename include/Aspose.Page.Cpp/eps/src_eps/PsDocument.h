#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using PointF = Aspose.Page.Drawing.PointF;
// using SizeF = Aspose.Page.Drawing.SizeF;
// using Size = Aspose.Page.Drawing.Size;
// using Color = Aspose.Page.Drawing.Color;
// using RectangleF = Aspose.Page.Drawing.RectangleF;
// using GraphicsPath = Aspose.Page.Drawing.Drawing2D.GraphicsPath;
// using Matrix = Aspose.Page.Drawing.Drawing2D.Matrix;
// using Brush = Aspose.Page.Drawing.Brush;
// using Pen = Aspose.Page.Drawing.Pen;
// using PFont = Aspose.Page.Drawing.Font;
// using Bitmap = Aspose.Page.Drawing.Bitmap;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


// C# preprocessor directive: #if ASPOSE_PAGE


// C# preprocessor directive: #elif ASPOSE_TEX

// C# INACTIVE CODE:
// using LicenseCore = Aspose.TeX.LicenseCore;
// using LicenseState = Aspose.TeX.LicenseState;

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using LicenseCore = Aspose.Pdf.LicenseCore;
// using LicenseState = Aspose.Pdf.LicenseState;
// using MeteredBillingService = Aspose.Pdf.Licensing.Metered.MeteredBillingService;
// using MeteredState = Aspose.Pdf.Licensing.Metered.MeteredState;

// C# preprocessor directive: #endif


#include <system/io/text_writer.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/Document.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace EPS
{
class ApsToPsConverter;
} // namespace EPS
namespace Foundation
{
namespace Drawing
{
class DrFont;
} // namespace Drawing
} // namespace Foundation
namespace Page
{
class Device;
namespace EPS
{
class ApsLoadOptions;
namespace Device
{
class ImageSaveOptions;
class PdfSaveOptions;
class PsDevice;
class PsSaveOptions;
} // namespace Device
namespace GraphicsIO
{
class FontMap;
} // namespace GraphicsIO
namespace Postscript
{
class Metadata;
class Processor;
class PSInputFile;
} // namespace Postscript
namespace Ps
{
class PsBaseTest;
class ResizeEpsTests;
} // namespace Ps
namespace Ps2Aps
{
class ApsMeteredTests;
class MeteredPluginTests;
class Ps2ApsBaseTest;
} // namespace Ps2Aps
namespace Ps2Pdf
{
class MeteredPluginTests;
class MeteredTests;
class MultithreadingTests;
class Ps2PdfBaseTest;
} // namespace Ps2Pdf
namespace XMP
{
class XmpMetadata;
} // namespace XMP
} // namespace EPS
namespace Font
{
class DrFont;
} // namespace Font
class SaveOptions;
enum class Units;
namespace XPS
{
namespace Presentation
{
namespace Ps
{
class PsDevice;
} // namespace Ps
} // namespace Presentation
} // namespace XPS
} // namespace Page
namespace Rendering
{
class ApsGroup;
class ApsPage;
} // namespace Rendering
namespace TeX
{
class PageConversions;
} // namespace TeX
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Bitmap;
class Brush;
class Color;
namespace Drawing2D
{
class GraphicsPath;
class Matrix;
} // namespace Drawing2D
class Font;
class Pen;
class RectangleF;
class Size;
class SizeF;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
namespace Text
{
class Encoding;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

/// <summary>
/// The <b>Aspose.Page.EPS</b> is a root namespace for all classes that deal with PS/EPS files.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class BinaryHeader : public System::Object, public System::Details::BoxableObjectBase
{
    typedef BinaryHeader ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    int32_t psStartPosition;
    int32_t psLength;
    int32_t wmfStartPosition;
    int32_t wmfLength;
    int32_t tiffStartPosition;
    int32_t tiffLength;
    int16_t checkSum;
    
    void GrowUpPositions(int32_t additionalLength);
    void Write(System::SharedPtr<System::IO::Stream> stream);
    
    BinaryHeader();
    
};

/// <summary>
/// This class encapsulates PS/EPS documents.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PsDocument final : public Aspose::Page::Document
{
    typedef PsDocument ThisType;
    typedef Aspose::Page::Document BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::EPS::ApsToPsConverter;
    friend class Aspose::Page::XPS::Presentation::Ps::PsDevice;
    friend class Aspose::Page::EPS::Ps2Aps::ApsMeteredTests;
    friend class Aspose::Page::EPS::Ps2Pdf::MeteredTests;
    friend class Aspose::Page::EPS::Ps2Pdf::MeteredPluginTests;
    friend class Aspose::Page::EPS::Ps2Aps::MeteredPluginTests;
    friend class Aspose::Page::EPS::Ps::PsBaseTest;
    friend class Aspose::Page::EPS::Ps2Aps::Ps2ApsBaseTest;
    friend class Aspose::Page::EPS::Ps::ResizeEpsTests;
    friend class Aspose::Page::EPS::Ps2Pdf::MultithreadingTests;
    friend class Aspose::Page::EPS::Ps2Pdf::Ps2PdfBaseTest;
    friend class Aspose::TeX::PageConversions;
    
protected:

    class ErrorPrintStream : public System::IO::TextWriter
    {
        typedef ErrorPrintStream ThisType;
        typedef System::IO::TextWriter BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<System::IO::TextWriter> innerStream;
        bool debug;
        
        System::SharedPtr<System::Text::Encoding> get_Encoding() override;
        
        ErrorPrintStream(System::SharedPtr<PsDocument> outerInstance, System::SharedPtr<System::IO::TextWriter> printStream, bool debug);
        
        void WriteLine(const System::String& x) override;
        void Write(const System::String& x) override;
        
    private:
    
        System::WeakPtr<PsDocument> outerInstance;
        
    };
    
    
public:

    /// <summary>
    /// Initializes <see cref="PsDocument"></see> with a stream and load options.
    /// </summary>
    /// <param name="inPsStream">Input stream of PS/EPS file. </param>
    /// <param name="loadOptions">Set of parameters controlling loading of PS file. </param>
    /*public PsDocument(Stream inPsStream, LoadOptions loadOptions)
            {
                if (loadOptions.getSourceFormat().Equals(DocumentFormat.PS))
                    @in = new PSInputFile(new StreamEx(inPsStream), false);	
                else
                    throw new InvalidOperationException();
    
            }*/
    /// <summary>
    /// Gets an input stream of PS/EPS file.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::IO::Stream> get_InputStream();
    /// <summary>
    /// Initializes <see cref="PsDocument"></see> with a stream and load options.
    /// </summary>
    /// <param name="inPsStream">Input stream of PS/EPS file. </param>
    /// <param name="loadOptions">Set of parameters controlling loading of PS file. </param>
    /*public PsDocument(Stream inPsStream, LoadOptions loadOptions)
            {
                if (loadOptions.getSourceFormat().Equals(DocumentFormat.PS))
                    @in = new PSInputFile(new StreamEx(inPsStream), false);	
                else
                    throw new InvalidOperationException();
    
            }*/
    /// <summary>
    /// Sets an input stream of PS/EPS file.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Returns the number of pages in resulting PDF document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_NumberOfPages() const;
    
    /// <summary>
    /// Initializes empty <see cref="PsDocument"></see> with initialized page.
    /// </summary>
    /// <param name="outPsFilePath">The output PS/EPS file path. </param>
    /// <param name="options">A set of parameters controlling saving of PostScript file. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::String outPsFilePath, System::SharedPtr<Device::PsSaveOptions> options);
    /// <summary>
    /// Initializes empty <see cref="PsDocument"></see> with initialized page.
    /// </summary>
    /// <param name="outPsStream">Stream where to save PS/EPS file. </param>
    /// <param name="options">A set of parameters controlling saving of PostScript file. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::SharedPtr<System::IO::Stream> outPsStream, System::SharedPtr<Device::PsSaveOptions> options);
    /// <summary>
    /// Initializes empty <see cref="PsDocument"></see>.
    /// </summary>
    /// <param name="outPsFilePath">The output PS/EPS file path. </param>
    /// <param name="options">A set of parameters controlling saving of PostScript file. </param>
    /// <param name="multipaged">If false page will not be initialized. In this case page initialization should be performed via explicit "openPage(width, height) call. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::String outPsFilePath, System::SharedPtr<Device::PsSaveOptions> options, bool multipaged);
    /// <summary>
    /// Initializes empty <see cref="PsDocument"></see>.
    /// </summary>
    /// <param name="outPsStream">Stream where to save PS/EPS file. </param>
    /// <param name="options">A set of parameters controlling saving of PostScript file. </param>
    /// <param name="multipaged">If false page will not be initialized. In this case page initialization should be performed via explicit "openPage(width, height) call. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::SharedPtr<System::IO::Stream> outPsStream, System::SharedPtr<Device::PsSaveOptions> options, bool multipaged);
    /// <summary>
    /// Initializes empty <see cref="PsDocument"></see> when the number of Postscript document pages is known in advance.
    /// </summary>
    /// <param name="outPsFilePath">The output PS/EPS file path. </param>
    /// <param name="options">A set of parameters controlling saving of PostScript file. </param>
    /// <param name="numberOfPages">The number of pages in the PostScript document. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::String outPsFilePath, System::SharedPtr<Device::PsSaveOptions> options, int32_t numberOfPages);
    /// <summary>
    /// Initializes empty <see cref="PsDocument"></see> when the number of Postscript document pages is known in advance.
    /// </summary>
    /// <param name="outPsStream">Stream where to save PS/EPS file. </param>
    /// <param name="options">A set of parameters controlling saving of PostScript file. </param>
    /// <param name="numberOfPages">The number of pages in the PostScript document. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::SharedPtr<System::IO::Stream> outPsStream, System::SharedPtr<Device::PsSaveOptions> options, int32_t numberOfPages);
    /// <summary>
    /// Initializes <see cref="PsDocument"></see> with an input PS/EPS file.
    /// </summary>
    /// <param name="psFilePath">PS/EPS file path. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::String psFilePath);
    /// <summary>
    /// Initializes <see cref="PsDocument"></see> with a stream of PS/EPS file.
    /// </summary>
    /// <param name="inPsStream">Input stream of PS/EPS file. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::SharedPtr<System::IO::Stream> inPsStream);
    
    /// <summary>
    /// Saves PS/EPS file to PDF file.
    /// </summary>
    /// <param name="outPdfFilePath"> An output PDF file path. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    ASPOSE_PAGE_SHARED_API void SaveAsPdf(System::String outPdfFilePath, System::SharedPtr<Device::PdfSaveOptions> options);
    /// <summary>
    /// Saves PS/EPS file to PDF stream.
    /// </summary>
    /// <param name="pdfStream"> An output PDF stream. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    ASPOSE_PAGE_SHARED_API void SaveAsPdf(System::SharedPtr<System::IO::Stream> pdfStream, System::SharedPtr<Device::PdfSaveOptions> options);
    /// <summary>
    /// Saves PS/EPS file to images bytes arrays.
    /// </summary>
    /// <param name="options"> Contains necessary parameters for saving image and flags that specify output of errors thrown during conversion. </param>
    /// <returns>Images bytes. One byte array for one page.</returns>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::ArrayPtr<uint8_t>> SaveAsImage(System::SharedPtr<Device::ImageSaveOptions> options);
    /// <summary>
    /// Saves given <see cref="PsDocument"></see> as EPS file. This method is used only after updating XMP metadata.
    /// It saves initial EPS file with updated existing metadata or new one created while calling GetMetadata method.
    /// In the last case all necessary PostScript code and EPS comments are added.
    /// </summary>
    /// <param name="epsStream">Stream of output EPS file. </param>
    ASPOSE_PAGE_SHARED_API void Save(System::SharedPtr<System::IO::Stream> epsStream);
    /// <summary>
    /// Saves given <see cref="PsDocument"></see> as EPS file. This method is used only when PsDocument was created from scratch.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Save();
    /// <summary>
    /// Reads PS/EPS file and extracts XmpMetdata if it already exists or add new one if it doesn't exist.
    /// </summary>
    /// <returns> Existing or new instance of XMP metadata. </returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XMP::XmpMetadata> GetXmpMetadata();
    /// <summary>
    /// Extract text from PS file. The text can be extracted only if it is written with Type 42 (TrueType) font or Type 0 font with Type 42 fonts in its Vector Map.
    /// </summary>
    /// <param name="options">The save options. </param>
    /// <param name="startPage">The page from which to begin to extract text. This parameter is usefull for multi-paged documents.</param>
    /// <param name="endPage">The page till which to finish to extract text. This parameter is usefull for multi-paged documents.</param>
    /// <returns> The extracted text. </returns>
    ASPOSE_PAGE_SHARED_API System::String ExtractText(System::SharedPtr<SaveOptions> options, int32_t startPage = 0, int32_t endPage = 0);
    /// <summary>
    /// Reads EPS file and extracts a size of EPS image from %%BoundingBox comment or default page size (595, 842) if it doesn't exist.
    /// </summary>
    /// <returns> The size of the EPS image. </returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::Size ExtractEpsSize();
    /// <summary>
    /// Resizes given <see cref="PsDocument"></see> as EPS file. This method is used only after extracting EPS size.
    /// It saves initial EPS file with updated existing %%BoundingBox or new one will be created. Page transformation matrix also will be set.
    /// </summary>
    /// <param name="outEpsFilePath">The output EPS file path. </param>
    /// <param name="newSizeInUnits">New size of EPS image in assigned units. </param>
    /// <param name="units">The units of the new size. Can be points, inches, millimeters, centimeters and percents of initial size.</param>
    ASPOSE_PAGE_SHARED_API void ResizeEps(System::String outEpsFilePath, System::Drawing::SizeF newSizeInUnits, Units units);
    /// <summary>
    /// Resizes given <see cref="PsDocument"></see> as EPS file. This method is used only after extracting EPS size.
    /// It saves initial EPS file with updated existing %%BoundingBox or new one will be created. Page transformation matrix also will be set.
    /// </summary>
    /// <param name="epsStream">Stream of output EPS file. </param>
    /// <param name="newSizeInUnits">New size of EPS image in assigned units. </param>
    /// <param name="units">The units of the new size. Can be points, inches, millimeters, centimeters and percents of initial size.</param>
    ASPOSE_PAGE_SHARED_API void ResizeEps(System::SharedPtr<System::IO::Stream> epsStream, System::Drawing::SizeF newSizeInUnits, Units units);
    /// <summary>
    /// Reads EPS file and extracts bounding box of EPS image from %%BoundingBox comment or bounds for default page size (0, 0, 595, 842) if it doesn't exist.
    /// </summary>
    /// <returns> The bounding box of the EPS image. </returns>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<int32_t> ExtractEpsBoundingBox();
    /// <summary>
    /// Crops given <see cref="PsDocument"></see> as EPS file.
    /// It saves initial EPS file with updated existing %%BoundingBox or new one will be created.
    /// </summary>
    /// <param name="outEpsFilePath">The output EPS file path.  </param>
    /// <param name="cropBox">The crop box (x0, y0, x, y). </param>
    ASPOSE_PAGE_SHARED_API void CropEps(System::String outEpsFilePath, System::ArrayPtr<float> cropBox);
    /// <summary>
    /// Crops given <see cref="PsDocument"></see> as EPS file.
    /// It saves initial EPS file with updated existing %%BoundingBox or new one will be created.
    /// </summary>
    /// <param name="epsStream">Stream of output EPS file. </param>
    /// <param name="cropBox">The crop box (x0, y0, x, y). </param>
    ASPOSE_PAGE_SHARED_API void CropEps(System::SharedPtr<System::IO::Stream> epsStream, System::ArrayPtr<float> cropBox);
    /// <summary>
    /// Saves PNG/JPEG/TIFF/BMP/GIF/EMF image from input stream to EPS output stream.
    /// </summary>
    /// <param name="imageStream"> Image input stream. </param>
    /// <param name="epsStream"> EPS output stream. </param>
    /// <param name="options"> Contains parameters that specify output of errors thrown during conversion. </param>
    static ASPOSE_PAGE_SHARED_API void SaveImageAsEps(System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<System::IO::Stream> epsStream, System::SharedPtr<Device::PsSaveOptions> options);
    /// <summary>
    /// Saves PNG/JPEG/TIFF/BMP/GIF/EMF image from file to EPS file.
    /// </summary>
    /// <param name="imageFilePath"> The image file path. </param>
    /// <param name="epsFilePath"> EPS file path. </param>
    /// <param name="options"> Contains parameters that specify output of errors thrown during conversion. </param>
    static ASPOSE_PAGE_SHARED_API void SaveImageAsEps(System::String imageFilePath, System::String epsFilePath, System::SharedPtr<Device::PsSaveOptions> options);
    /// <summary>
    /// Saves Bitmap object to EPS file.
    /// </summary>
    /// <param name="image"> The image. </param>
    /// <param name="epsFilePath"> EPS file path. </param>
    /// <param name="options"> Contains parameters that specify output of errors thrown during conversion. </param>
    static ASPOSE_PAGE_SHARED_API void SaveImageAsEps(System::SharedPtr<System::Drawing::Bitmap> image, System::String epsFilePath, System::SharedPtr<Device::PsSaveOptions> options);
    /// <summary>
    /// Saves Bitmap object to EPS output stream.
    /// </summary>
    /// <param name="image"> The image. </param>
    /// <param name="epsStream"> EPS output stream. </param>
    /// <param name="options"> Contains parameters that specify output of errors thrown during conversion. </param>
    static ASPOSE_PAGE_SHARED_API void SaveImageAsEps(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::IO::Stream> epsStream, System::SharedPtr<Device::PsSaveOptions> options);
    /// <summary>
    /// Sets page size. To create pages with different sizes in one document use <see cref="SetPageDevice"></see> 
    /// method just after this method.
    /// </summary>
    /// <param name="width"> The width of page in resulting PostScript file. </param>
    /// <param name="height"> The height of page in resulting PostScript file. </param>
    ASPOSE_PAGE_SHARED_API void SetPageSize(float width, float height);
    /// <summary>
    /// Sets page device parameters (see operator "setpagedevice" PostScript spesification).
    /// Among these can be page size and color etc. 
    /// </summary>
    /// <param name="pageParams"> Parameters of the page. In this dictionary can be page size and color etc</param>
    ASPOSE_PAGE_SHARED_API void SetPageDevice(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> pageParams);
    /// <summary>
    /// Creates new page and make it current one.
    /// </summary>
    /// <param name="width"> The width of new page. </param>
    /// <param name="height"> The height of new page. </param>
    ASPOSE_PAGE_SHARED_API void OpenPage(float width, float height);
    /// <summary>
    /// Creates new page with document's size and make it current one.
    /// </summary>
    /// <param name="pageName"> The name of new page. If it is null the name o the page will be an order number of the page.</param>
    ASPOSE_PAGE_SHARED_API void OpenPage(System::String pageName = nullptr);
    /// <summary>
    /// Complete current page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void ClosePage();
    /// <summary>
    /// Writes saving of the current graphics state (See PostScript specification on operator "gsave").
    /// </summary>
    ASPOSE_PAGE_SHARED_API void WriteGraphicsSave();
    /// <summary>
    /// Writes restoring of the current graphics state (See PostScript specification on operator "grestore").
    /// </summary>
    ASPOSE_PAGE_SHARED_API void WriteGraphicsRestore();
    /// <summary>
    /// Set current transformation to this one.
    /// </summary>
    /// <param name="matrix"> The transformation. </param>
    ASPOSE_PAGE_SHARED_API void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix);
    /// <summary>
    /// Adds transformation to current graphics state (concatenates this matrix with current one).
    /// </summary>
    /// <param name="matrix"> The transformation. </param>
    ASPOSE_PAGE_SHARED_API void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix);
    /// <summary>
    /// Adds translation to current graphics state (translates current matrix).
    /// </summary>
    /// <param name="x"> The translation in X direction. </param>
    /// <param name="y"> The translation in Y direction. </param>
    ASPOSE_PAGE_SHARED_API void Translate(float x, float y);
    /// <summary>
    /// Adds scale to current graphics state (scale current matrix).
    /// </summary>
    /// <param name="xScale"> The scale in X axis. </param>
    /// <param name="yScale"> The translation in Y axis. </param>
    ASPOSE_PAGE_SHARED_API void Scale(float xScale, float yScale);
    /// <summary>
    /// Adds rotation counterclockwise about the origin to current graphics state (rotate current matrix).
    /// </summary>
    /// <param name="angleRadians"> The angle of rotation in radians. </param>
    ASPOSE_PAGE_SHARED_API void Rotate(float angleRadians);
    /// <summary>
    /// Adds rotation counterclockwise about the origin to current graphics state (rotate current matrix).
    /// </summary>
    /// <param name="angleDegrees"> The angle of rotation in degrees. </param>
    ASPOSE_PAGE_SHARED_API void Rotate(int32_t angleDegrees);
    /// <summary>
    /// Rotates current graphics state counterclockwise around a point.
    /// </summary>
    /// <param name="angleDegrees"> The angle of rotation in degrees. </param>
    /// <param name="point"> The point around which rotation will be performed. </param>
    /*public void RotateAt(int angleDegrees, PointF point)
            {
                device.Rotate(angleDegrees * (System.Math.PI / 180));
            }*/
    /// <summary>
    /// Adds shear transformation to current graphics state (shear current matrix).
    /// </summary>
    /// <param name="shx"> The shear in X axis. </param>
    /// <param name="shy"> The shear in Y axis. </param>
    ASPOSE_PAGE_SHARED_API void Shear(float shx, float shy);
    /// <summary>
    /// Adds clip to current graphics state.
    /// </summary>
    /// <param name="s"> The clipping path. </param>
    ASPOSE_PAGE_SHARED_API void Clip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    /// <summary>
    /// Adds clip from an outline of given text in given font.
    /// </summary>
    /// <param name="text"> The text. </param>
    /// <param name="font"> The font. </param>
    /// <param name="x"> An X coordinate of the text position. </param>
    /// <param name="y"> An Y coordinate of the text position. </param>
    ASPOSE_PAGE_SHARED_API void ClipText(System::String text, System::SharedPtr<System::Drawing::Font> font, float x, float y);
    /// <summary>
    /// Adds clipping rectangle to current graphics state.
    /// </summary>
    /// <param name="rect"> The clipping rectangle. </param>
    ASPOSE_PAGE_SHARED_API void ClipRectangle(System::Drawing::RectangleF rect);
    /// <summary>
    /// Adds clip to current graphics state and than writes "newpath" operator. It is necessary to do to escape
    /// of confluence of this clipping path and some subsequent pathes such as glyphs outlined with "charpath" operator.
    /// </summary>
    /// <param name="s"> The clipping path. </param>
    ASPOSE_PAGE_SHARED_API void ClipAndNewPath(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    /// <summary>
    /// Sets paint in current graphics state.
    /// </summary>
    /// <param name="paint"> The paint. It can be any subclass of <see cref="Brush"></see> class existed in .NET platform.</param>
    ASPOSE_PAGE_SHARED_API void SetPaint(System::SharedPtr<System::Drawing::Brush> paint);
    /// <summary>
    /// Gets paint of current graphics state.
    /// </summary>
    /// <return> Current paint.</return>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> GetPaint();
    /// <summary>
    /// Sets stroke in current graphics state.
    /// </summary>
    /// <param name="stroke"> The stroke.</param>
    ASPOSE_PAGE_SHARED_API void SetStroke(System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Sets stroke in current graphics state.
    /// </summary>
    /// <param name="brush"> The brush used in the stroke.</param>
    /// <param name="width"> The width of the stroke.</param>
    /*public void SetStroke(Brush brush, float width)
            {
                device.SetStroke(brush, width);
            }*/
    /// <summary>
    /// Gets stroke of current graphics state.
    /// </summary>
    /// <return> Current stroke.</return>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Pen> GetStroke();
    /// <summary>
    /// Adds a text string by filling interrior of glyphs.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="font"> System font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    ASPOSE_PAGE_SHARED_API void FillText(System::String text, System::SharedPtr<System::Drawing::Font> font, float x, float y);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="font"> The font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    ASPOSE_PAGE_SHARED_API void FillText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<System::Drawing::Font> font, float x, float y);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    ASPOSE_PAGE_SHARED_API void FillText(System::String text, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    ASPOSE_PAGE_SHARED_API void FillText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="font"> System font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="fill"> The fill used for painting glyphs.</param>
    ASPOSE_PAGE_SHARED_API void FillText(System::String text, System::SharedPtr<System::Drawing::Font> font, float x, float y, System::SharedPtr<System::Drawing::Brush> fill);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="font"> System font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="fill"> The fill used for painting glyphs.</param>
    ASPOSE_PAGE_SHARED_API void FillText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<System::Drawing::Font> font, float x, float y, System::SharedPtr<System::Drawing::Brush> fill);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="fill"> The fill used for painting glyphs.</param>
    ASPOSE_PAGE_SHARED_API void FillText(System::String text, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> fill);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="fill"> The fill used for painting glyphs.</param>
    ASPOSE_PAGE_SHARED_API void FillText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> fill);
    /// <summary>
    /// Adds a text string by drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="font"> System font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    ASPOSE_PAGE_SHARED_API void OutlineText(System::String text, System::SharedPtr<System::Drawing::Font> font, float x, float y);
    /// <summary>
    /// Adds a text string by drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="font"> The font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    ASPOSE_PAGE_SHARED_API void OutlineText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<System::Drawing::Font> font, float x, float y);
    /// <summary>
    /// Adds a text string by drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    ASPOSE_PAGE_SHARED_API void OutlineText(System::String text, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y);
    /// <summary>
    /// Adds a text string by drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    ASPOSE_PAGE_SHARED_API void OutlineText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y);
    /// <summary>
    /// Adds a text string by drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="font"> System font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="stroke"> The stroke used for drawing glyphs outlines.</param>
    ASPOSE_PAGE_SHARED_API void OutlineText(System::String text, System::SharedPtr<System::Drawing::Font> font, float x, float y, System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Adds a text string by drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="font"> System font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="stroke"> The stroke used for drawing glyphs outlines.</param>
    ASPOSE_PAGE_SHARED_API void OutlineText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<System::Drawing::Font> font, float x, float y, System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Adds a text string by drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>        
    /// <param name="stroke"> The stroke used for drawing glyphs outlines.</param>
    //<param name="outlinePaint"> The <see cref="Brush"></see> used for painting glyphs outlines. Can be any subclass of <see cref="Brush"></see> class in .NET platform.</param>
    ASPOSE_PAGE_SHARED_API void OutlineText(System::String text, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Adds a text string by drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>        
    /// <param name="stroke"> The stroke used for drawing glyphs outlines.</param>
    // <param name="outlinePaint"> The <see cref="Brush"></see> used for painting glyphs outlines. Can be any subclass of <see cref="Brush"></see> class in .NET platform.</param>
    ASPOSE_PAGE_SHARED_API void OutlineText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs and drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="font"> System font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="fillPaint"> The fill used for painting glyphs interior.</param>        
    /// <param name="stroke"> The stroke used for drawing glyphs contours.</param>
    // <param name="strokePaint"> The <see cref="Brush"></see> used for painting glyphs contours. Can be any subclass of <see cref="Brush"></see> class in .NET platform.</param>
    ASPOSE_PAGE_SHARED_API void FillAndStrokeText(System::String text, System::SharedPtr<System::Drawing::Font> font, float x, float y, System::SharedPtr<System::Drawing::Brush> fillPaint, System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs and drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="font"> System font that will be used to draw text.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="fillPaint"> The fill used for painting glyphs interior.</param>        
    /// <param name="stroke"> The stroke used for drawing glyphs contours.</param>
    // <param name="strokePaint"> The <see cref="Brush"></see> used for painting glyphs contours. Can be any subclass of <see cref="Brush"></see> class in .NET platform.</param>
    ASPOSE_PAGE_SHARED_API void FillAndStrokeText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<System::Drawing::Font> font, float x, float y, System::SharedPtr<System::Drawing::Brush> fillPaint, System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs and drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="fillPaint"> The fill used for painting glyphs interior.</param>        
    /// <param name="stroke"> The stroke used for drawing glyphs contours.</param>
    // <param name="strokePaint"> The <see cref="Brush"></see> used for painting glyphs contours. Can be any subclass of <see cref="Brush"></see> class in .NET platform.</param>
    ASPOSE_PAGE_SHARED_API void FillAndStrokeText(System::String text, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> fillPaint, System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Adds a text string by filling interrior of glyphs and drawing glyphs contours.
    /// </summary>
    /// <param name="text"> The text to add.</param>
    /// <param name="advances"> An array of glyphs width. It's length must comply with the number of glyphs in the string.</param>
    /// <param name="drFont"> <see cref="DrFont"></see> that will be used to draw text. It can be used with custom font that is located in custom folder.</param>
    /// <param name="x"> X coordinate for text origin.</param>
    /// <param name="y"> Y coordinate for text origin.</param>
    /// <param name="fillPaint"> The fill used for painting glyphs interior.</param>        
    /// <param name="stroke"> The stroke used for drawing glyphs contours.</param>
    // <param name="strokePaint"> The <see cref="Brush"></see> used for painting glyphs contours. Can be any subclass of <see cref="Brush"></see> class in .NET platform.</param>
    ASPOSE_PAGE_SHARED_API void FillAndStrokeText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Page::Font::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> fillPaint, System::SharedPtr<System::Drawing::Pen> stroke);
    /// <summary>
    /// Fill an arbitrary path.
    /// </summary>
    /// <param name="shape"> The path to fill.</param>
    ASPOSE_PAGE_SHARED_API void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> shape);
    /// <summary>
    /// Draw an arbitrary path.
    /// </summary>
    /// <param name="shape"> The path to draw.</param>
    ASPOSE_PAGE_SHARED_API void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> shape);
    /// <summary>
    /// Draws an arc.
    /// </summary>
    /// <param name="x"> X coordinate of center of the arc. </param>
    /// <param name="y"> Y coordinate of center of the arc. </param>
    /// <param name="width"> A width of circumscribed rectangle. </param>
    /// <param name="height"> A height of circumscribed rectangle. </param>
    /// <param name="startAngle"> A start angle of the arc. </param>
    /// <param name="arcAngle"> An angle of the arc. </param>
    ASPOSE_PAGE_SHARED_API void DrawArc(double x, double y, double width, double height, double startAngle, double arcAngle);
    /// <summary>
    /// Draws a line segment.
    /// </summary>
    /// <param name="x1"> X coordinate of the beginning of segment. </param>
    /// <param name="y1"> Y coordinate of the beginning of segment. </param>
    /// <param name="x2"> X coordinate of the end of segment. </param>
    /// <param name="y2"> Y coordinate of the end of segment. </param>
    ASPOSE_PAGE_SHARED_API void DrawLine(double x1, double y1, double x2, double y2);
    /// <summary>
    /// Draws an oval.
    /// </summary>
    /// <param name="x"> X coordinate of center of the oval. </param>
    /// <param name="y"> Y coordinate of center of the oval. </param>
    /// <param name="width"> A width of circumscribed rectangle. </param>
    /// <param name="height"> A height of circumscribed rectangle. </param>
    ASPOSE_PAGE_SHARED_API void DrawOval(double x, double y, double width, double height);
    /// <summary>
    /// Draws a polyline.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    ASPOSE_PAGE_SHARED_API void DrawPolyline(System::ArrayPtr<int32_t> xPoints, System::ArrayPtr<int32_t> yPoints, int32_t nPoints);
    /// <summary>
    /// Draws a polyline.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    ASPOSE_PAGE_SHARED_API void DrawPolyline(System::ArrayPtr<double> xPoints, System::ArrayPtr<double> yPoints, int32_t nPoints);
    /// <summary>
    /// Draws a polygon.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    ASPOSE_PAGE_SHARED_API void DrawPolygon(System::ArrayPtr<int32_t> xPoints, System::ArrayPtr<int32_t> yPoints, int32_t nPoints);
    /// <summary>
    /// Draws a poligone.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    ASPOSE_PAGE_SHARED_API void DrawPolygon(System::ArrayPtr<double> xPoints, System::ArrayPtr<double> yPoints, int32_t nPoints);
    /// <summary>
    /// Draws a rectangle.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    ASPOSE_PAGE_SHARED_API void DrawRect(double x, double y, double width, double height);
    /// <summary>
    /// Draws a round rectangle.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    /// <param name="arcWidth"> A width of circumscribed rectangle of the arc that rounds an angle of the rectangle. </param>
    /// <param name="arcHeight"> A height of circumscribed rectangle of the arc that rounds an angle of the rectangle. </param>
    ASPOSE_PAGE_SHARED_API void DrawRoundRect(double x, double y, double width, double height, double arcWidth, double arcHeight);
    /// <summary>
    /// Fills an arc.
    /// </summary>
    /// <param name="x"> X coordinate of center of the arc. </param>
    /// <param name="y"> Y coordinate of center of the arc. </param>
    /// <param name="width"> A width of circumscribed rectangle. </param>
    /// <param name="height"> A height of circumscribed rectangle. </param>
    /// <param name="startAngle"> A start angle of the arc. </param>
    /// <param name="arcAngle"> An angle of the arc. </param>
    ASPOSE_PAGE_SHARED_API void FillArc(double x, double y, double width, double height, double startAngle, double arcAngle);
    /// <summary>
    /// Fills an oval.
    /// </summary>
    /// <param name="x"> X coordinate of center of the oval. </param>
    /// <param name="y"> Y coordinate of center of the oval. </param>
    /// <param name="width"> A width of circumscribed rectangle. </param>
    /// <param name="height"> A height of circumscribed rectangle. </param>
    ASPOSE_PAGE_SHARED_API void FillOval(double x, double y, double width, double height);
    /// <summary>
    /// Fills a poligone.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    ASPOSE_PAGE_SHARED_API void FillPolygon(System::ArrayPtr<int32_t> xPoints, System::ArrayPtr<int32_t> yPoints, int32_t nPoints);
    /// <summary>
    /// Fills a poligone.
    /// </summary>
    /// <param name="xPoints"> X coordinates of points. </param>
    /// <param name="yPoints"> Y coordinate of points. </param>
    /// <param name="nPoints"> The number of points. </param>
    ASPOSE_PAGE_SHARED_API void FillPolygon(System::ArrayPtr<double> xPoints, System::ArrayPtr<double> yPoints, int32_t nPoints);
    /// <summary>
    /// Fills a rectangle.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    ASPOSE_PAGE_SHARED_API void FillRect(double x, double y, double width, double height);
    /// <summary>
    /// Fills a round rectangle.
    /// </summary>
    /// <param name="x"> X coordinate of upper left corner of the rectangle. </param>
    /// <param name="y"> Y coordinate of upper left corner of the rectangle. </param>
    /// <param name="width"> A width of the rectangle. </param>
    /// <param name="height"> A height of the rectangle. </param>
    /// <param name="arcWidth"> A width of circumscribed rectangle of the arc that rounds an angle of the rectangle. </param>
    /// <param name="arcHeight"> A height of circumscribed rectangle of the arc that rounds an angle of the rectangle. </param>
    ASPOSE_PAGE_SHARED_API void FillRoundRect(double x, double y, double width, double height, double arcWidth, double arcHeight);
    /// <summary>
    /// Draw image.
    /// </summary>
    /// <param name="image"> The image to draw.</param>
    ASPOSE_PAGE_SHARED_API void DrawImage(System::SharedPtr<System::Drawing::Bitmap> image);
    /// <summary>
    /// Draw transformed image with background.
    /// </summary>
    /// <param name="image"> The image to draw.</param>
    /// <param name="transform"> The matrix to transform image.</param>
    /// <param name="bkg"> Background for image.</param>
    ASPOSE_PAGE_SHARED_API void DrawImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::Drawing::Color bkg);
    /// <summary>
    /// Draw transformed transparent image. If image doesn't have Alpha channel it will be drawn as opaque image
    /// </summary>
    /// <param name="image"> The image to draw.</param>
    /// <param name="transform"> The matrix to transform image.</param>
    /// <param name="transparencyThreshold"> A threshold that defines from which value of transparency pixel will be interpreted as fully transparent. All values below this threshold will be interpreted as fully opaque. </param>
    ASPOSE_PAGE_SHARED_API void DrawTransparentImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, int32_t transparencyThreshold);
    /// <summary>
    /// Draw masked image.
    /// </summary>
    /// <param name="image24bpp"> The image to draw. Must be in 24bpp RGB image format</param>
    /// <param name="alphaMask1bpp"> The image mask. Must be in 1bpp image format.</param>
    /// <param name="transform"> The matrix to transform image.</param>
    ASPOSE_PAGE_SHARED_API void DrawExplicitImageMask(System::SharedPtr<System::Drawing::Bitmap> image24bpp, System::SharedPtr<System::Drawing::Bitmap> alphaMask1bpp, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Merges PS/EPS files to a device.
    /// </summary>
    /// <param name="filesForMerge"> PS/EPS files for merging with this file to an output device. </param>
    /// <param name="outPdfFilePath"> An output PDF file path. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    ASPOSE_PAGE_SHARED_API void MergeToPdf(System::String outPdfFilePath, System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Merges PS/EPS files to a device.
    /// </summary>
    /// <param name="filesForMerge"> PS/EPS files for merging with this file to an output device. </param>
    /// <param name="pdfStream"> An output PDF stream. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    ASPOSE_PAGE_SHARED_API void MergeToPdf(System::SharedPtr<System::IO::Stream> pdfStream, System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<SaveOptions> options);
    
protected:

    static const System::String IN_EXT;
    static const System::String IN_EXT2;
    bool directRgbMode;
    System::SharedPtr<Postscript::PSInputFile> in;
    BinaryHeader binaryHeader;
    int32_t numberOfPages;
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>> get_ApsPages() const;
    System::SharedPtr<Aspose::Page::EPS::Postscript::Metadata> get_Metadata();
    bool get_IsLicensed();
    
    PsDocument();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PsDocument, CODEPORTING_ARGS());
    /// @deprecated Save is deprecated beginning from 24.3, please use SaveAsPdf or SaveAsImage instead. In 24.6 this method will be hidden False
    /// <summary>
    /// Saves PS/EPS file to a device.
    /// </summary>
    /// <param name="device"> An output device. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    ASPOSE_PAGE_SHARED_API void Save(System::SharedPtr<Aspose::Page::Device> device, System::SharedPtr<SaveOptions> options) override;
    void RenderAps(System::SharedPtr<System::IO::Stream> apsStream, System::SharedPtr<ApsLoadOptions> options);
    void RenderAps(System::SharedPtr<Aspose::Rendering::ApsGroup> group, System::SharedPtr<ApsLoadOptions> options);
    void FillText(System::String text, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y);
    void FillText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y);
    void FillText(System::String text, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> fill);
    void FillText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> fill);
    void OutlineText(System::String text, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y);
    void OutlineText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y);
    void OutlineText(System::String text, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> outlinePaint, System::SharedPtr<System::Drawing::Pen> stroke);
    void OutlineText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> outlinePaint, System::SharedPtr<System::Drawing::Pen> stroke);
    void FillAndStrokeText(System::String text, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> fillPaint, System::SharedPtr<System::Drawing::Brush> strokePaint, System::SharedPtr<System::Drawing::Pen> stroke);
    void FillAndStrokeText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont, float x, float y, System::SharedPtr<System::Drawing::Brush> fillPaint, System::SharedPtr<System::Drawing::Brush> strokePaint, System::SharedPtr<System::Drawing::Pen> stroke);
    /// @deprecated Save is deprecated beginning from 24.3, please use MergeToPdf instead. In 24.6 this method will be hidden False
    /// <summary>
    /// Merges PS/EPS files to a device.
    /// </summary>
    /// <param name="filesForMerge"> PS/EPS files for merging with this file to an output device. </param>
    /// <param name="device"> An output device. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    void Merge(System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<Aspose::Page::Device> device, System::SharedPtr<SaveOptions> options);
    static void SetAdditionalFontsFolders(System::ArrayPtr<System::String> additionalFontFolders, System::SharedPtr<SaveOptions> options);
    
    virtual ASPOSE_PAGE_SHARED_API ~PsDocument();
    
private:

    bool closeStream;
    System::SharedPtr<System::IO::Stream> outputStream;
    System::SharedPtr<Device::PsDevice> device;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>> apsPages;
    System::SharedPtr<System::Collections::Generic::List<System::String>> textPages;
    System::SharedPtr<Aspose::Rendering::ApsGroup> group;
    
    PsDocument(System::SharedPtr<System::IO::Stream> inPsStream, bool closeStream, System::String inputFilePath);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PsDocument, CODEPORTING_ARGS(System::SharedPtr<System::IO::Stream> inPsStream, bool closeStream, System::String inputFilePath));
    void CloseStream(System::SharedPtr<SaveOptions> options);
    void ReadEpsFile();
    System::SharedPtr<GraphicsIO::FontMap> CreateFontMap(System::SharedPtr<System::Drawing::Font> font);
    void AddText(System::String text, System::SharedPtr<GraphicsIO::FontMap> fontMap, float x, float y);
    void AddText(System::String text, System::ArrayPtr<float> advances, System::SharedPtr<GraphicsIO::FontMap> fontMap, float x, float y);
    static System::SharedPtr<Device::PsDevice> InitializePsDocument(System::SharedPtr<System::IO::Stream> outEpsStream, System::SharedPtr<Device::PsSaveOptions> options, bool multipaged, System::SharedPtr<PsDocument> doc);
    System::SharedPtr<Device::PsDevice> InitializePsDocument(System::SharedPtr<System::IO::Stream> outEpsStream, System::SharedPtr<Device::PsSaveOptions> options, int32_t numberOfPages);
    static void InitializeDeviceProperties(System::SharedPtr<Device::PsDevice> device, System::SharedPtr<Device::PsSaveOptions> options);
    void FinalizePsDocument(System::SharedPtr<Device::PsDevice> device);
    void GetDocumentPropertiesInternal(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    bool CheckBinaryHeader(System::SharedPtr<Postscript::PSInputFile> input);
    void GetDocumentProperties(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void Convert(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void ConvertInternal(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void GetDocumentPropertiesForMerge(System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    int64_t GetDocumentPropertiesForMergeInternal(System::SharedPtr<Postscript::Processor> processor, System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device, int64_t totalInputLength);
    void ConvertForMerge(System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void ConvertForMergeInternal(System::SharedPtr<Postscript::Processor> processor, System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void SetFontsFolders(System::SharedPtr<SaveOptions> options);
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


