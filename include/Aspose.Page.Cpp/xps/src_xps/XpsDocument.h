#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/idisposable.h>
#include <system/constraints.h>
#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsPackageParts/FixedPage.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContext/XpsContext.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContentElement.h"
#include "Aspose.Page.Cpp/Document.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace OpcPackaging
{
class OpcPackage;
} // namespace OpcPackaging
namespace Page
{
class Device;
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
class SaveOptions;
namespace XPS
{
class LoadOptions;
namespace Presentation
{
namespace Xps
{
class XpsSerializer;
} // namespace Xps
class XpsBasePresenter;
class XpsPresenter;
} // namespace Presentation
namespace Tests
{
class DocumentOperationsTests;
class GlyphsToImageTests;
class PageOperationsTests;
class SavingAsImageTests;
class XpsBaseTest;
class XpsCanvasTests;
class XpsDocumentTests;
class XpsPathTests;
} // namespace Tests
namespace Util
{
class XpsLicenseUtils;
} // namespace Util
namespace XpsMetadata
{
class DocumentPrintTicket;
class JobPrintTicket;
class PagePrintTicket;
} // namespace XpsMetadata
namespace XpsModel
{
class XpsArcSegment;
class XpsCanvas;
class XpsColor;
class XpsFont;
class XpsGlyphs;
class XpsGradientStop;
class XpsHyperlinkTarget;
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
namespace XpsPackageParts
{
class FixedDocument;
class FixedDocumentSequence;
} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
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
class Color;
enum class FontStyle;
class PointF;
class RectangleF;
class SizeF;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

/// <summary>
/// The <b>Aspose.Page.XPS</b> is a root namespace for all classes that deal with XPS document.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class incapsulating the main entity of XPS document that provides manipulation
/// methods for any XPS element.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsDocument final : public Aspose::Page::Document, public System::IDisposable
{
    typedef XpsDocument ThisType;
    typedef Aspose::Page::Document BaseType;
    typedef System::IDisposable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::XpsBasePresenter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::XPS::Util::XpsLicenseUtils;
    friend class Aspose::Page::XPS::Tests::DocumentOperationsTests;
    friend class Aspose::Page::XPS::Tests::PageOperationsTests;
    friend class Aspose::Page::XPS::Tests::XpsCanvasTests;
    friend class Aspose::Page::XPS::Tests::XpsBaseTest;
    friend class Aspose::Page::XPS::Tests::XpsPathTests;
    friend class Aspose::Page::XPS::Tests::XpsDocumentTests;
    friend class Aspose::Page::XPS::Tests::SavingAsImageTests;
    friend class Aspose::Page::XPS::Tests::GlyphsToImageTests;
    
public:

    /// <summary>
    /// Gets the active document number.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_ActiveDocument();
    /// <summary>
    /// Gets the active page number within the active document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_ActivePage();
    /// <summary>
    /// Returns an <see cref="XpsPage"></see> instance for active page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> get_Page();
    /// <summary>
    /// Returns the number of documents inside the XPS package.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_DocumentCount();
    /// <summary>
    /// Returns total number of pages in all documents inside XPS document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_TotalPageCount();
    /// <summary>
    /// Returns the number of pages in the active document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_PageCount();
    /// <summary>
    /// Returns/sets document's job print ticket
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsMetadata::JobPrintTicket> get_JobPrintTicket();
    /// <summary>
    /// Returns/sets document's job print ticket
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_JobPrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsMetadata::JobPrintTicket> value);
    
    /// <summary>
    /// Creates empty XPS document with default page size.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsDocument();
    /// <summary>
    /// Opens an existing XPS document located at the <paramref name="path"></paramref>.
    /// </summary>
    /// <param name="path">Location of the document.</param>
    ASPOSE_PAGE_SHARED_API XpsDocument(System::String path);
    /// <summary>
    /// Opens an existing document located at the <paramref name="path"></paramref> as XPS document.
    /// </summary>
    /// <param name="path">Location of the document.</param>
    /// <param name="options">Document loading options.</param>
    ASPOSE_PAGE_SHARED_API XpsDocument(System::String path, System::SharedPtr<LoadOptions> options);
    /// <summary>
    /// Loads an existing document stored in the <paramref name="stream"></paramref> as XPS document.
    /// </summary>
    /// <param name="stream">Document stream.</param>
    /// <param name="options">Document loading options.</param>
    ASPOSE_PAGE_SHARED_API XpsDocument(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<LoadOptions> options);
    
    /// <summary>
    /// Selects an active document for editing.
    /// </summary>
    /// <param name="documentNumber">A document number.</param>
    /// <exception cref="System::ArgumentException">Thrown when 
    /// <paramref name="documentNumber"></paramref> is out of bounds.</exception>
    ASPOSE_PAGE_SHARED_API void SelectActiveDocument(int32_t documentNumber);
    /// <summary>
    /// Selects an active document page for editing.
    /// </summary>
    /// <param name="pageNumber">A page number.</param>
    /// <returns><see cref="XpsPage"></see> instance for active page.</returns>
    /// <exception cref="System::ArgumentException">Thrown when 
    /// <paramref name="pageNumber"></paramref> is out of bounds.</exception>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> SelectActivePage(int32_t pageNumber);
    /// <summary>
    /// Saves XPS document to XPS file located at the <paramref name="path"></paramref>.
    /// </summary>
    /// <param name="path">Location of the document.</param>
    ASPOSE_PAGE_SHARED_API void Save(System::String path);
    /// <summary>
    /// Saves XPS document to stream.
    /// </summary>
    /// <param name="stream">Stream XPS document to be saved into.</param>
    ASPOSE_PAGE_SHARED_API void Save(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Saves the document using the <see cref="Device"></see> instance.
    /// </summary>
    /// <param name="device">The <see cref="Device"></see> instance.</param>
    /// <param name="options">Document saving options.</param>
    ASPOSE_PAGE_SHARED_API void Save(System::SharedPtr<Device> device, System::SharedPtr<SaveOptions> options) override;
    /// <summary>
    /// Merging XPS documents using the <see cref="Device"></see> instance.
    /// </summary>
    /// <param name="filesForMerge"> XPS files for merging with this document to an output device. </param>
    /// <param name="device">The <see cref="Device"></see> instance.</param>
    /// <param name="options">Document saving options.</param>
    ASPOSE_PAGE_SHARED_API void Merge(System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<Device> device, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Returns the print ticket of the document indexed by <paramref name="documentIndex"></paramref>.
    /// </summary>
    /// <param name="documentIndex">Index of the document whose print ticket to return.</param>
    /// <returns>Document's print ticket.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMetadata::DocumentPrintTicket> GetDocumentPrintTicket(int32_t documentIndex);
    /// <summary>
    /// Links the <paramref name="printTicket"></paramref> to the document indexed by <paramref name="documentIndex"></paramref>.
    /// </summary>
    /// <param name="documentIndex">Index of the document to link the print ticket to.</param>
    /// <param name="printTicket">The print ticket to link.</param>
    ASPOSE_PAGE_SHARED_API void SetDocumentPrintTicket(int32_t documentIndex, System::SharedPtr<XpsMetadata::DocumentPrintTicket> printTicket);
    /// <summary>
    /// Returns the print ticket of the page indexed by <paramref name="pageIndex"></paramref> 
    /// in the document indexed by <paramref name="documentIndex"></paramref>.
    /// </summary>
    /// <param name="documentIndex">Index of the document.</param>
    /// <param name="pageIndex">Index of the page whose print ticket to return.</param>
    /// <returns>Page's print ticket.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMetadata::PagePrintTicket> GetPagePrintTicket(int32_t documentIndex, int32_t pageIndex);
    /// <summary>
    /// Links the <paramref name="printTicket"></paramref> to the page indexed by <paramref name="pageIndex"></paramref>
    /// in the document indexed by <paramref name="documentIndex"></paramref>.
    /// </summary>
    /// <param name="documentIndex">Index of the document.</param>
    /// <param name="pageIndex">Index of the page to link the print ticket to.</param>
    /// <param name="printTicket">The print ticket to link.</param>
    ASPOSE_PAGE_SHARED_API void SetPagePrintTicket(int32_t documentIndex, int32_t pageIndex, System::SharedPtr<XpsMetadata::PagePrintTicket> printTicket);
    /// <summary>
    /// Adds a content element (Canvas, Path or Glyphs)
    /// </summary>
    /// <typeparam name="T">The type of the element.</typeparam>
    /// <param name="element">Element to be added.</param>
    /// <returns>Added element.</returns>
    template <typename T>
    T Add(T element)
    {
        typedef XpsModel::XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        Assert();
        return _context->get_ActivePage().get_Value()->get_Page()->template Add<T>(element);
    }
    
    /// <summary>
    /// Inserts an element (Canvas, Path or Glyphs) to the active page
    /// at <paramref name="index"></paramref> position.
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
        
        Assert();
        return _context->get_ActivePage().get_Value()->get_Page()->template Insert<T>(index, element);
    }
    
    /// <summary>
    /// Removes an element from the active page.
    /// </summary>
    /// <typeparam name="T">The type of the element.</typeparam>
    /// <param name="element">Element to be removed.</param>
    /// <returns>Removed element.</returns>
    template <typename T>
    T Remove(T element)
    {
        typedef XpsModel::XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        Assert();
        return _context->get_ActivePage().get_Value()->get_Page()->template Remove<T>(element);
    }
    
    /// <summary>
    /// Removes an element at <paramref name="index"></paramref> position from the active page.
    /// </summary>
    /// <param name="index">Position at which element should be removed.</param>
    /// <returns>Removed element.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsContentElement> RemoveAt(int32_t index);
    /// <summary>
    /// Adds an empty document with default page size.
    /// </summary>
    /// <param name="activate">Flag indicating whether to select added document as active.</param>
    ASPOSE_PAGE_SHARED_API void AddDocument(bool activate = true);
    /// <summary>
    /// Adds an empty document with the first page dimensions
    /// <paramref name="width"></paramref> and <paramref name="height"></paramref>.
    /// </summary>
    /// <param name="width">Width of the first page.</param>
    /// <param name="height">Height of the first page.</param>
    /// <param name="activate">Flag indicating whether to select added document as active.</param>
    ASPOSE_PAGE_SHARED_API void AddDocument(float width, float height, bool activate = true);
    /// <summary>
    /// Inserts an empty document with default page size
    /// at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a document should be inserted.</param>
    /// <param name="activate">Flag indicating whether to select inserted document as active.</param>
    ASPOSE_PAGE_SHARED_API void InsertDocument(int32_t index, bool activate = true);
    /// <summary>
    /// Inserts an empty document with the first page dimensions
    /// <paramref name="width"></paramref> and <paramref name="height"></paramref> at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a document should be inserted.</param>
    /// <param name="width">Width of the first page.</param>
    /// <param name="height">Height of the first page.</param>
    /// <param name="activate">Flag indicating whether to select inserted document as active.</param>
    ASPOSE_PAGE_SHARED_API void InsertDocument(int32_t index, float width, float height, bool activate = true);
    /// <summary>
    /// Removes a document at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a document should be removed.</param>
    ASPOSE_PAGE_SHARED_API void RemoveDocumentAt(int32_t index);
    /// <summary>
    /// Adds an empty page to the document with default page size.
    /// </summary>
    /// <param name="activate">Flag indicating whether to select added page as active.</param>
    /// <returns>Added page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> AddPage(bool activate = true);
    /// <summary>
    /// Adds an empty page to the document with specified 
    /// <paramref name="width"></paramref> and <paramref name="height"></paramref>.
    /// </summary>
    /// <param name="width">Width of a new page.</param>
    /// <param name="height">Height of a new page.</param>
    /// <param name="activate">Flag indicating whether to select added page as active.</param>
    /// <returns>Added page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> AddPage(float width, float height, bool activate = true);
    /// <summary>
    /// Adds a page to the document.
    /// </summary>
    /// <param name="page">Page to be added.</param>
    /// <param name="activate">Flag indicating whether to select added page as active.</param>
    /// <returns>Added page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> AddPage(System::SharedPtr<XpsModel::XpsPage> page, bool activate = true);
    /// <summary>
    /// Removes a page from the document.
    /// </summary>
    /// <param name="page">Page to be removed.</param>
    /// <returns>Removed page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> RemovePage(System::SharedPtr<XpsModel::XpsPage> page);
    /// <summary>
    /// Inserts an empty page to the document with default page size
    /// at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a page should be inserted.</param>
    /// <param name="activate">Flag indicating whether to select inserted page as active.</param>
    /// <returns>Inserted page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> InsertPage(int32_t index, bool activate = true);
    /// <summary>
    /// Inserts an empty page to the document with specified 
    /// <paramref name="width"></paramref> and <paramref name="height"></paramref> at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a page should be inserted.</param>
    /// <param name="width">Width of a new page.</param>
    /// <param name="height">Height of a new page.</param>
    /// <param name="activate">Flag indicating whether to select inserted page as active.</param>
    /// <returns>Inserted page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> InsertPage(int32_t index, float width, float height, bool activate = true);
    /// <summary>
    /// Inserts a page to the document at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a page should be added.</param>
    /// <param name="page">Page to be inserted.</param>
    /// <param name="activate">Flag indicating whether to select inserted page as active.</param>
    /// <returns>Inserted page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> InsertPage(int32_t index, System::SharedPtr<XpsModel::XpsPage> page, bool activate = true);
    /// <summary>
    /// Removes a page from the document at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a page should be removed.</param>
    /// <returns>Removed page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPage> RemovePageAt(int32_t index);
    /// <summary>
    /// Creates a new canvas.
    /// </summary>
    /// <returns>New canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsCanvas> CreateCanvas();
    /// <summary>
    /// Adds a new canvas to the active page.
    /// </summary>
    /// <returns>Added canvas.</returns>.
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsCanvas> AddCanvas();
    /// <summary>
    /// Inserts a new canvas to the active page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a new canvas should be inserted.</param>
    /// <returns>Inserted canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsCanvas> InsertCanvas(int32_t index);
    /// <summary>
    /// Creates a new path.
    /// </summary>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>New  path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPath> CreatePath(System::SharedPtr<XpsModel::XpsPathGeometry> data);
    /// <summary>
    /// Adds a new path to the active page.
    /// </summary>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>Added path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPath> AddPath(System::SharedPtr<XpsModel::XpsPathGeometry> data);
    /// <summary>
    /// Inserts a new path to the active page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a new path should be inserted.</param>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>Inserted path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPath> InsertPath(int32_t index, System::SharedPtr<XpsModel::XpsPathGeometry> data);
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
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsGlyphs> CreateGlyphs(System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Creates new glyphs.
    /// </summary>
    /// <param name="font">Font resource.</param>
    /// <param name="fontRenderingEmSize">Font size.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>New glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsGlyphs> CreateGlyphs(System::SharedPtr<XpsModel::XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Adds new glyphs to the active page.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontRenderingEmSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsGlyphs> AddGlyphs(System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Inserts new glyphs to the active page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which new glyphs should be inserted.</param>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Inserted glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsGlyphs> InsertGlyphs(int32_t index, System::String fontFamily, float fontSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Adds new glyphs to the active page.
    /// </summary>
    /// <param name="font">Font resource.</param>
    /// <param name="fontRenderingEmSize">Font size.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsGlyphs> AddGlyphs(System::SharedPtr<XpsModel::XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Inserts new glyphs to the active page at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which new glyphs should be inserted.</param>
    /// <param name="font">Font resource.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin Y coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Inserted glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsGlyphs> InsertGlyphs(int32_t index, System::SharedPtr<XpsModel::XpsFont> font, float fontSize, float originX, float originY, System::String unicodeString);
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
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsMatrix> CreateMatrix(float m11, float m12, float m21, float m22, float m31, float m32);
    /// <summary>
    /// Creates a new path geometry.
    /// </summary>
    /// <returns>New path geometry.</returns>.
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreatePathGeometry();
    /// <summary>
    /// Creates a new path geometry with specified list of path figures.
    /// </summary>
    /// <param name="pathFigures">List of path figures.</param>
    /// <returns>New path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreatePathGeometry(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsPathFigure>>> pathFigures);
    /// <summary>
    /// Creates a new path geometry specified with abbreviated form.
    /// </summary>
    /// <param name="abbreviatedGeometry">Abbreviated form of path geometry.</param>
    /// <returns>New path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreatePathGeometry(System::String abbreviatedGeometry);
    /// <summary>
    /// Creates a new path figure.
    /// </summary>
    /// <param name="startPoint">The starting point for the first segment of the path figure.</param>
    /// <param name="isClosed">Specifies whether the path is closed. If set to true, the stroke is drawn
    /// "closed," that is, the last point in the last segment of the path figure is connected with
    /// the point specified in the StartPoint attribute, otherwise the stroke is drawn "open," and
    /// the last point is not connected to the start point. Only applicable if the path figure is
    /// used in a {Path} element that specifies a stroke.</param>
    /// <returns>New path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathFigure> CreatePathFigure(System::Drawing::PointF startPoint, bool isClosed = false);
    /// <summary>
    /// Creates a new path figure.
    /// </summary>
    /// <param name="startPoint">The starting point for the first segment of the path figure.</param>
    /// <param name="segments">List of path segments.</param>
    /// <param name="isClosed">Specifies whether the path is closed. If set to true, the stroke is drawn
    /// "closed," that is, the last point in the last segment of the path figure is connected with
    /// the point specified in the StartPoint attribute, otherwise the stroke is drawn "open," and
    /// the last point is not connected to the start point. Only applicable if the path figure is
    /// used in a {Path} element that specifies a stroke.</param>
    /// <returns>New path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathFigure> CreatePathFigure(System::Drawing::PointF startPoint, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsPathSegment>>> segments, bool isClosed = false);
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
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsArcSegment> CreateArcSegment(System::Drawing::PointF point, System::Drawing::SizeF size, float rotationAngle, bool isLargeArc, XpsModel::XpsSweepDirection sweepDirection, bool isStroked = true);
    /// <summary>
    /// Creates a new polygonal drawing containing an arbitrary number of individual vertices.
    /// </summary>
    /// <param name="points">A set of coordinates for the multiple segments that define the poly line segment.</param>
    /// <param name="isStroked">Specifies whether the stroke for this segment of the path is drawn.</param>
    /// <returns>New polygonal drawing segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPolyLineSegment> CreatePolyLineSegment(System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    /// <summary>
    /// Creates a new set of cubic Bézier curves.
    /// </summary>
    /// <param name="points">Control points for multiple Bézier segments.</param>
    /// <param name="isStroked">Specifies whether the stroke for this segment of the path is drawn.</param>
    /// <returns>New cubic Bézier curves segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPolyBezierSegment> CreatePolyBezierSegment(System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    /// <summary>
    /// Creates a new set of quadratic Bézier curves from the previous point in the path figure through a set
    /// of vertices, using specified control points.
    /// </summary>
    /// <param name="points">Control points for multiple quadratic Bézier segments.</param>
    /// <param name="isStroked">Specifies whether the stroke for this segment of the path is drawn.</param>
    /// <returns>New quadratic Bézier curves segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPolyQuadraticBezierSegment> CreatePolyQuadraticBezierSegment(System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    /// <summary>
    /// Creates a new solid color brush.
    /// </summary>
    /// <param name="color">The color for filled elements.</param>
    /// <returns>New solid color brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsSolidColorBrush> CreateSolidColorBrush(System::SharedPtr<XpsModel::XpsColor> color);
    /// <summary>
    /// Creates a new solid color brush.
    /// </summary>
    /// <param name="color">The color for filled elements.</param>
    /// <returns>New solid color brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsSolidColorBrush> CreateSolidColorBrush(System::Drawing::Color color);
    /// <summary>
    /// Creates a new gradient stop.
    /// </summary>
    /// <param name="color">The gradient stop color.</param>
    /// <param name="offset">The gradient offset.</param>
    /// <returns>New gradient stop.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsGradientStop> CreateGradientStop(System::SharedPtr<XpsModel::XpsColor> color, float offset);
    /// <summary>
    /// Creates a new gradient stop.
    /// </summary>
    /// <param name="color">The gradient stop color.</param>
    /// <param name="offset">The gradient offset.</param>
    /// <returns>New gradient stop.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsGradientStop> CreateGradientStop(System::Drawing::Color color, float offset);
    /// <summary>
    /// Creates a new linear gradient brush.
    /// </summary>
    /// <param name="gradientStops">The list of gradient stops.</param>
    /// <param name="startPoint">The starting point of the linear gradient.</param>
    /// <param name="endPoint">The end point of the linear gradient. </param>
    /// <returns>New linear gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsLinearGradientBrush> CreateLinearGradientBrush(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsGradientStop>>> gradientStops, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    /// <summary>
    /// Creates a new linear gradient brush.
    /// </summary>
    /// <param name="startPoint">The starting point of the linear gradient.</param>
    /// <param name="endPoint">The end point of the linear gradient. </param>
    /// <returns>New linear gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsLinearGradientBrush> CreateLinearGradientBrush(System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    /// <summary>
    /// Creates a new radial gradient brush.
    /// </summary>
    /// <param name="gradientStops">The list of gradient stops.</param>
    /// <param name="center">The center point of the radial gradient (that is, the center of the ellipse).</param>
    /// <param name="gradientOrigin">The origin point of the radial gradient.</param>
    /// <param name="radiusX">The radius in the x dimension of the ellipse which defines the radial gradient.</param>
    /// <param name="radiusY">The radius in the y dimension of the ellipse which defines the radial gradient.</param>
    /// <returns>New radial gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsRadialGradientBrush> CreateRadialGradientBrush(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsGradientStop>>> gradientStops, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    /// <summary>
    /// Creates a new radial gradient brush.
    /// </summary>
    /// <param name="center">The center point of the radial gradient (that is, the center of the ellipse).</param>
    /// <param name="gradientOrigin">The origin point of the radial gradient.</param>
    /// <param name="radiusX">The radius in the x dimension of the ellipse which defines the radial gradient.</param>
    /// <param name="radiusY">The radius in the y dimension of the ellipse which defines the radial gradient.</param>
    /// <returns>New radial gradient brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsRadialGradientBrush> CreateRadialGradientBrush(System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    /// <summary>
    /// Creates a new visual brush.
    /// </summary>
    /// <param name="element">The XPS element (Canvas, Path or Glyphs) for Visual property od visual brush.</param>
    /// <param name="viewbox">The position and dimensions of the brush's source content.</param>
    /// <param name="viewport">The region in the containing coordinate space of the prime brush
    /// tile that is (possibly repeatedly) applied to fill the region to which the brush is applied</param>
    /// <returns>New visual brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsVisualBrush> CreateVisualBrush(System::SharedPtr<XpsModel::XpsContentElement> element, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    /// <summary>
    /// Creates a new image brush.
    /// </summary>
    /// <param name="image">An image resource.</param>
    /// <param name="viewbox">The position and dimensions of the brush's source content.</param>
    /// <param name="viewport">The region in the containing coordinate space of the prime brush
    /// tile that is (possibly repeatedly) applied to fill the region to which the brush is applied</param>
    /// <returns>New image brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsImageBrush> CreateImageBrush(System::SharedPtr<XpsModel::XpsImage> image, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    /// <summary>
    /// Creates a new image brush.
    /// </summary>
    /// <param name="imagePath">The path to the image to take as a brush tile.</param>
    /// <param name="viewbox">The position and dimensions of the brush's source content.</param>
    /// <param name="viewport">The region in the containing coordinate space of the prime brush
    /// tile that is (possibly repeatedly) applied to fill the region to which the brush is applied</param>
    /// <returns>New image brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsImageBrush> CreateImageBrush(System::String imagePath, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    /// <summary>
    /// Creates a new color.
    /// </summary>
    /// <param name="color">A native color instance for RGB color.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsColor> CreateColor(System::Drawing::Color color);
    /// <summary>
    /// Creates a new color in sRGB color space.
    /// </summary>
    /// <param name="a">The alpha color component.</param>
    /// <param name="r">The red color component.</param>
    /// <param name="g">The green color component.</param>
    /// <param name="b">The blue color component.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsColor> CreateColor(int32_t a, int32_t r, int32_t g, int32_t b);
    /// <summary>
    /// Creates a new color in sRGB color space.
    /// </summary>
    /// <param name="r">The red color component.</param>
    /// <param name="g">The green color component.</param>
    /// <param name="b">The blue color component.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsColor> CreateColor(int32_t r, int32_t g, int32_t b);
    /// <summary>
    /// Creates a new color in scRGB color space.
    /// </summary>
    /// <param name="a">The alpha color component.</param>
    /// <param name="r">The red color component.</param>
    /// <param name="g">The green color component.</param>
    /// <param name="b">The blue color component.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsColor> CreateColor(float a, float r, float g, float b);
    /// <summary>
    /// Creates a new color in scRGB color space.
    /// </summary>
    /// <param name="r">The red color component.</param>
    /// <param name="g">The green color component.</param>
    /// <param name="b">The blue color component.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsColor> CreateColor(float r, float g, float b);
    /// <summary>
    /// Creates a new color in ICC based color space.
    /// </summary>
    /// <param name="path">The path to the ICC profile.</param>
    /// <param name="components">Color components.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsColor> CreateColor(System::String path, const System::ArrayPtr<float>& components);
    /// <summary>
    /// Creates a new color in ICC based color space.
    /// </summary>
    /// <param name="iccProfile">The ICC profile resource.</param>
    /// <param name="components">Color components.</param>
    /// <returns>New color.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsColor> CreateColor(System::SharedPtr<XpsModel::XpsIccProfile> iccProfile, const System::ArrayPtr<float>& components);
    /// <summary>
    /// Creates a new image resource out of image file located at the <paramref name="imagePath"></paramref>.
    /// </summary>
    /// <param name="imagePath">The path to the image to take as a resource.</param>
    /// <returns>New image resource.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsImage> CreateImage(System::String imagePath);
    /// <summary>
    /// Creates a new image resource out of <paramref name="stream"></paramref>.
    /// </summary>
    /// <param name="stream">The stream containing the image to take as a resource.</param>
    /// <returns>New image resource.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsImage> CreateImage(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Creates a new ICC profile resource out of ICC profile file located at the
    /// <paramref name="iccProfilePath"></paramref>.
    /// </summary>
    /// <param name="iccProfilePath">The path to the ICC profile to take as a resource.</param>
    /// <returns>New ICC profile resource.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsIccProfile> CreateIccProfile(System::String iccProfilePath);
    /// <summary>
    /// Creates a new ICC profile resource out of <paramref name="stream"></paramref>.
    /// </summary>
    /// <param name="stream">The stream containing the ICC profile to take as a resource.</param>
    /// <returns>New ICC profile resource.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsIccProfile> CreateIccProfile(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Creates a new TrueType font resource.
    /// </summary>
    /// <param name="fontFamily">The font family.</param>
    /// <param name="fontStyle">The font style.</param>
    /// <returns>New TrueType font resource.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsFont> CreateFont(System::String fontFamily, System::Drawing::FontStyle fontStyle);
    /// <summary>
    /// Creates a new TrueType font resource out of stream.
    /// </summary>
    /// <param name="stream">The stream containing the ICC profile to take as a resource.</param>
    /// <returns>New TrueType font resource.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsFont> CreateFont(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Adds an outline entry to the document.
    /// </summary>
    /// <param name="description">The entry description.</param>
    /// <param name="outlineLevel">The outline level.</param>
    /// <param name="target">The entry target.</param>
    ASPOSE_PAGE_SHARED_API void AddOutlineEntry(System::String description, int32_t outlineLevel, System::SharedPtr<XpsModel::XpsHyperlinkTarget> target);
    ASPOSE_PAGE_SHARED_API void Assert();
    /// <summary>
    /// Disposes the instance.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
protected:

    System::SharedPtr<XpsPackageParts::FixedDocumentSequence> _fixedDocumentSequence;
    
    System::SharedPtr<XpsPackageParts::FixedDocument> get_ActiveDocumentInternal();
    System::SharedPtr<XpsModel::XpsContext> get_Context() const;
    
    ASPOSE_PAGE_SHARED_API void SetVentureLicense(System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> license) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> GetVentureLicense() override;
    void PrepareSaving(System::SharedPtr<Device> device);
    void SerializeDocumentSequence(System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package);
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsDocument();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<Aspose::OpcPackaging::OpcPackage> _package;
    System::SharedPtr<XpsModel::XpsContext> _context;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<XpsModel::XpsPage>, System::SharedPtr<XpsModel::XpsGlyphs>>> _watermarks;
    bool _isDisposed;
    
    void LoadDocument(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<LoadOptions> options);
    void CreateDocumentSequence();
    void LoadDocumentSequence();
    System::SharedPtr<XpsPackageParts::FixedDocument> SelectActiveDocumentInternal();
    System::SharedPtr<XpsModel::XpsPage> SelectActivePageInternal();
    bool BackupIfExists(System::String sourcePath, System::String backupPath);
    void Restore(System::String backupPath, System::String sourcePath);
    void AddEvaluationWatermarkInternal();
    void AddEvaluationWatermarksInternal();
    void AddEvaluationWatermarks();
    System::SharedPtr<XpsPackageParts::FixedDocument> AddDocumentInternal(System::SharedPtr<XpsPackageParts::FixedDocument> fixedDocument, bool activate);
    System::SharedPtr<XpsPackageParts::FixedDocument> InsertDocumentInternal(int32_t index, System::SharedPtr<XpsPackageParts::FixedDocument> fixedDocument, bool activate);
    System::SharedPtr<XpsPackageParts::FixedDocument> RemoveDocumentAtInternal(int32_t index, System::SharedPtr<XpsPackageParts::FixedDocument> fixedDocument);
    System::SharedPtr<XpsPackageParts::FixedPage> AddPageInternal(System::SharedPtr<XpsPackageParts::FixedPage> fixedPage, bool activate);
    System::SharedPtr<XpsPackageParts::FixedPage> InsertPageInternal(int32_t index, System::SharedPtr<XpsPackageParts::FixedPage> fixedPage, bool activate);
    System::SharedPtr<XpsPackageParts::FixedPage> RemovePageAtInternal(int32_t index, System::SharedPtr<XpsPackageParts::FixedPage> fixedPage);
    
};

} // namespace XPS
} // namespace Page
} // namespace Aspose


