#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PAGE


// C# preprocessor directive: #elif ASPOSE_TEX

// C# INACTIVE CODE:
// using BuildVersionInfo = Aspose.TeX.BuildVersionInfo;

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using BuildVersionInfo = Aspose.Pdf.BuildVersionInfo;

// C# preprocessor directive: #endif


#include "Aspose.Page.Cpp/IMultiPartitionDevice.h"
#include "Aspose.Page.Cpp/IInteractiveDevice.h"
#include "Aspose.Page.Cpp/Device.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
class IMultiPageDevice;
class ITrFont;
class SaveOptions;
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsDevice;
} // namespace Aps
namespace Pdf
{
class PdfSaveOptions;
} // namespace Pdf
} // namespace Presentation
} // namespace XPS
} // namespace Page
namespace Rendering
{
class ApsGlyphsIndices;
class ApsPage;
} // namespace Rendering
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class IDictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
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
class PointF;
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

namespace XPS {

namespace Presentation {

namespace Pdf {

/// <summary>
/// The <b>Aspose.Page.Xps.Presentation.Pdf</b> namespace provides classes for rendering XPS
/// document to PDF document.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class incapsulating image composing device.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PdfDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPartitionDevice, public Aspose::Page::IInteractiveDevice
{
    typedef PdfDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPartitionDevice BaseType1;
    typedef Aspose::Page::IInteractiveDevice BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes save options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SaveOptions(System::SharedPtr<Aspose::Page::SaveOptions> value) override;
    /// <summary>
    /// Gets/sets the device media size.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Size get_Size() override;
    /// <summary>
    /// Gets/sets the device media size.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::Size value) override;
    /// <summary>
    /// Gets/sets the background color.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Color get_Background() override;
    /// <summary>
    /// Gets/sets the background color.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Background(System::Drawing::Color value) override;
    /// <summary>
    /// Gets/sets the opacity.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Opacity() override;
    /// <summary>
    /// Gets/sets the opacity.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Opacity(float value) override;
    /// <summary>
    /// Gets/sets the stroke for drawing paths.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Pen> get_Stroke() override;
    /// <summary>
    /// Gets/sets the stroke for drawing paths.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Stroke(System::SharedPtr<System::Drawing::Pen> value) override;
    /// <summary>
    /// Gets/sets the brush for filling paths.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> get_Paint() override;
    /// <summary>
    /// Gets/sets the brush for filling paths.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Paint(System::SharedPtr<System::Drawing::Brush> value) override;
    /// <summary>
    /// Gets/sets the brush for opacity mask. The mask applies over Paint or Strike.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> get_OpacityMask() override;
    /// <summary>
    /// Gets/sets the brush for opacity mask. The mask applies over Paint or Strike.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OpacityMask(System::SharedPtr<System::Drawing::Brush> value) override;
    /// <summary>
    /// Gets/sets the current font.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<ITrFont> get_Font() override;
    /// <summary>
    /// Gets/sets the current font.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Font(System::SharedPtr<ITrFont> value) override;
    /// <summary>
    /// Returns the absolute number of the current page withint the document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_CurrentPageNumber() override;
    /// <summary>
    /// Returns the number of the current page within the current partititon.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_CurrentRelativePageNumber() override;
    /// <summary>
    /// Returns the map of internal hyperlink targets.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> get_InternalHyperlinksTargets() override;
    
    /// <summary>
    /// Creates the new instance.
    /// </summary>
    /// <param name="stream">The output stream containing PDF.</param>
    ASPOSE_PAGE_SHARED_API PdfDevice(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Creates the new instance with specified media size.
    /// </summary>
    /// <param name="stream">The output stream containing PDF.</param>
    /// <param name="pageSize">The size of the device output media.</param>
    ASPOSE_PAGE_SHARED_API PdfDevice(System::SharedPtr<System::IO::Stream> stream, System::Drawing::Size pageSize);
    
    /// <summary>
    /// Sets the devices to the initial state.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void ReNew() override;
    /// <summary>
    /// Starts the document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void StartDocument() override;
    /// <summary>
    /// Accomplishes the document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void EndDocument() override;
    /// <summary>
    /// Resets the device.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Reset() override;
    /// <summary>
    /// Initializes numbers of pages to output.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void InitPageNumbers() override;
    /// <summary>
    /// Starts a new page with the specifies title.
    /// </summary>
    /// <param name="title">The title.</param>
    /// <returns><c>True</c> if started page is to be output (it's number is contained in PageNumbers save options).
    /// <c>False</c>, otherwise.</returns>
    ASPOSE_PAGE_SHARED_API bool OpenPage(System::String title) override;
    /// <summary>
    /// Starts a new page with the specified width and height.
    /// </summary>
    /// <param name="width">The width of the page.</param>
    /// <param name="height">The height of the page.</param>
    /// <returns><c>True</c> if started page is to be output (it's number is contained in PageNumbers save options).
    /// <c>False</c>, otherwise.</returns>
    ASPOSE_PAGE_SHARED_API bool OpenPage(float width, float height) override;
    /// <summary>
    /// Accomplishes the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void ClosePage() override;
    /// <summary>
    /// Updates the current page parameters.
    /// </summary>
    /// <param name="device">The multipage device.</param>
    ASPOSE_PAGE_SHARED_API void UpdatePageParameters(System::SharedPtr<IMultiPageDevice> device) override;
    /// <summary>
    /// Starts a new document partition.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void OpenPartition() override;
    /// <summary>
    /// Accomplished the document partition.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void ClosePartition() override;
    /// <summary>
    /// Sets the hyperlink with an external URI as its target.
    /// </summary>
    /// <param name="targetUri">The target external URI.</param>
    ASPOSE_PAGE_SHARED_API void SetHyperlinkTarget(System::String targetUri) override;
    /// <summary>
    /// Sets the hyperlink with a page number as its target.
    /// </summary>
    /// <param name="targetPageNumber">The target page number.</param>
    ASPOSE_PAGE_SHARED_API void SetHyperlinkTarget(int32_t targetPageNumber) override;
    /// <summary>
    /// Adds an outline item with the last object as its target.
    /// </summary>
    /// <param name="outlineLevel">The outline level.</param>
    /// <param name="description">The item description.</param>
    ASPOSE_PAGE_SHARED_API void AddOutline(int32_t outlineLevel, System::String description) override;
    /// <summary>
    /// Adds an outline item with the origin point as its target.
    /// </summary>
    /// <param name="origin">The target origin.</param>
    /// <param name="outlineLevel">The outline level.</param>
    /// <param name="description">The item description.</param>
    ASPOSE_PAGE_SHARED_API void AddOutline(System::Drawing::PointF origin, int32_t outlineLevel, System::String description) override;
    /// <summary>
    /// Saves internal hyperlink target as an absolute page number and a rectangular area on a page.
    /// </summary>
    /// <param name="absolutePageNumber">The absolute page number.</param>
    /// <param name="rect">The rectangular area on a page.</param>
    ASPOSE_PAGE_SHARED_API void SaveInternalHyperlinkTarget(int32_t absolutePageNumber, System::Drawing::RectangleF rect) override;
    /// <summary>
    /// Creates a new instance of the device based on this device instance.
    /// Writes this device graphics state, i.e. creates <see cref="ApsCanvas"></see> instance(s)
    /// with corresponding RenderTransform and Clip properties.
    /// </summary>
    /// <returns>The new device instance.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Device> Create() override;
    /// <summary>
    /// Disposes this device instance. Finalizes this device instance graphics state,
    /// i.e. switches APS composing context to the <see cref="ApsCanvas"></see> of the level higher then this
    /// device's graphics state <see cref="ApsCanvas"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    /// <summary>
    /// Returns the current transformation matrix.
    /// </summary>
    /// <returns>The current transformation matrix.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetTransform() override;
    /// <summary>
    /// Sets the current transformation matrix.
    /// </summary>
    /// <param name="transform">The new transformation matrix.</param>
    ASPOSE_PAGE_SHARED_API void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Multiplies the current transformation matrix by the specified <see cref="Matrix"></see>.
    /// </summary>
    /// <param name="transform">The matrix by which the current transformation matrix is to be multiplied.</param>
    ASPOSE_PAGE_SHARED_API void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Applies the specified translation vector to the current transformation matrix.
    /// </summary>
    /// <param name="x">The x offset.</param>
    /// <param name="y">The y offset.</param>
    ASPOSE_PAGE_SHARED_API void Translate(double x, double y) override;
    /// <summary>
    /// Applies a clockwise rotation about the origin to the current transformation matrix.
    /// </summary>
    /// <param name="theta">The angle of the rotation, in radians.</param>
    ASPOSE_PAGE_SHARED_API void Rotate(double theta) override;
    /// <summary>
    /// Applies the specified scale vector to the current transformation matrix.
    /// </summary>
    /// <param name="x">The x scale factor.</param>
    /// <param name="y">The y scale factor.</param>
    ASPOSE_PAGE_SHARED_API void Scale(double x, double y) override;
    /// <summary>
    /// Applies the specified shear vector to the current transformation matrix.
    /// </summary>
    /// <param name="shx">The x shear factor.</param>
    /// <param name="shy">The y shear factor.</param>
    ASPOSE_PAGE_SHARED_API void Shear(double shx, double shy) override;
    /// <summary>
    /// Adds the specified path to the current clip path.
    /// </summary>
    /// <param name="clipPath">The clip path to be added.</param>
    ASPOSE_PAGE_SHARED_API void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clipPath) override;
    /// <summary>
    /// Draws the specified path.
    /// </summary>
    /// <param name="path">The path to draw.</param>
    ASPOSE_PAGE_SHARED_API void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path) override;
    /// <summary>
    /// Fills the specified path.
    /// </summary>
    /// <param name="path">The path to fill.</param>
    ASPOSE_PAGE_SHARED_API void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path) override;
    /// <summary>
    /// Draws a string at the specified position.
    /// </summary>
    /// <param name="str">The text to be drawn.</param>
    /// <param name="x">The x-coordinate of the string position.</param>
    /// <param name="y">The y-coordinate of the string position.</param>
    ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y) override;
    
protected:

    /// <summary>
    /// Clone constructor. Initializes this device with existing device.
    /// </summary>
    /// <param name="device">Existing device.</param>
    ASPOSE_PAGE_SHARED_API PdfDevice(System::SharedPtr<PdfDevice> device);
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PdfDevice, CODEPORTING_ARGS(System::SharedPtr<PdfDevice> device));
    ASPOSE_PAGE_SHARED_API void ApplyGraphicState(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clip) override;
    /// <summary>
    /// Writes the line width.
    /// </summary>
    /// <param name="width">The line width.</param>
    ASPOSE_PAGE_SHARED_API void WriteWidth(float width) override;
    /// <summary>
    /// Writes the line cap.
    /// </summary>
    /// <param name="cap">The line cap.</param>
    ASPOSE_PAGE_SHARED_API void WriteCap(System::Drawing::Drawing2D::LineCap cap) override;
    /// <summary>
    /// Writes the line join.
    /// </summary>
    /// <param name="join">The line join.</param>
    ASPOSE_PAGE_SHARED_API void WriteJoin(System::Drawing::Drawing2D::LineJoin join) override;
    /// <summary>
    /// Writes the miter limit.
    /// </summary>
    /// <param name="limit">The miter limit.</param>
    ASPOSE_PAGE_SHARED_API void WriteMiterLimit(float limit) override;
    /// <summary>
    /// Writes dash parameters.
    /// </summary>
    /// <param name="dash">The dash/gap array.</param>
    /// <param name="phase">The stroke phase.</param>
    /// <param name="dashCap">The dash cap.</param>
    ASPOSE_PAGE_SHARED_API void WriteDash(System::ArrayPtr<double> dash, double phase, System::Drawing::Drawing2D::DashCap dashCap) override;
    /// <summary>
    /// Writes the stroke brush.
    /// </summary>
    /// <param name="brush">The <see cref="SolidBrush"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::SolidBrush> brush) override;
    /// <summary>
    /// Writes the stroke brush.
    /// </summary>
    /// <param name="brush">The <see cref="LinearGradientBrush"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> brush) override;
    /// <summary>
    /// Writes the stroke brush.
    /// </summary>
    /// <param name="brush">The <see cref="TextureBrush"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::TextureBrush> brush) override;
    /// <summary>
    /// Writes the stroke brush.
    /// </summary>
    /// <param name="brush">The brush.</param>
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Brush> brush) override;
    ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y, double width, System::SharedPtr<Aspose::Rendering::ApsGlyphsIndices> indices, bool isRtl = false) override;
    void SerializeAps(System::String path);
    
    virtual ASPOSE_PAGE_SHARED_API ~PdfDevice();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<Aspose::Page::XPS::Presentation::Aps::ApsDevice> _apsDevice;
    System::SharedPtr<System::IO::Stream> _pdfStream;
    
    static void SaveApsDocumentAsPdf(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>>>> pages, System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<PdfSaveOptions> options);
    
};

} // namespace Pdf
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


