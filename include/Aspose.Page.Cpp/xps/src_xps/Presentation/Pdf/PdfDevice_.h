#pragma once

// C# preprocessor directive: #if ASPOSE_PAGE


// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using BuildVersionInfo = Aspose.Pdf.BuildVersionInfo;

// C# preprocessor directive: #endif


#include <system/io/stream.h>

#include "Aspose.Page.Cpp/IMultiPartitionDevice.h"
#include "Aspose.Page.Cpp/IInteractiveDevice.h"
#include "Aspose.Page.Cpp/Device.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsDevice; } } } } }
namespace Aspose { namespace Page { class SaveOptions; } }
namespace Aspose { namespace Page { class ITrFont; } }
namespace Aspose { namespace Page { class IMultiPageDevice; } }
namespace Aspose { namespace Rendering { class ApsGlyphsIndices; } }
namespace Aspose { namespace Rendering { class ApsPage; } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Pdf { class PdfSaveOptions; } } } } }

namespace Aspose {

namespace Page {

namespace Xps {

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
class PdfDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPartitionDevice, public Aspose::Page::IInteractiveDevice
{
    typedef PdfDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPartitionDevice BaseType1;
    typedef Aspose::Page::IInteractiveDevice BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    /// Initializes save options.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_SaveOptions(System::SharedPtr<Aspose::Page::SaveOptions> value);
    /// <summary>
    /// Gets/sets the device media size.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Size get_Size();
    /// <summary>
    /// Gets/sets the device media size.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::Size value);
    /// <summary>
    /// Gets/sets the background color.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color get_Background();
    /// <summary>
    /// Gets/sets the background color.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Background(System::Drawing::Color value);
    /// <summary>
    /// Gets/sets the opacity.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API float get_Opacity();
    /// <summary>
    /// Gets/sets the opacity.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Opacity(float value);
    /// <summary>
    /// Gets/sets the stroke for drawing paths.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Pen> get_Stroke();
    /// <summary>
    /// Gets/sets the stroke for drawing paths.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Stroke(System::SharedPtr<System::Drawing::Pen> value);
    /// <summary>
    /// Gets/sets the brush for filling paths.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> get_Paint();
    /// <summary>
    /// Gets/sets the brush for filling paths.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Paint(System::SharedPtr<System::Drawing::Brush> value);
    /// <summary>
    /// Gets/sets the brush for opacity mask. The mask applies over Paint or Strike.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> get_OpacityMask();
    /// <summary>
    /// Gets/sets the brush for opacity mask. The mask applies over Paint or Strike.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_OpacityMask(System::SharedPtr<System::Drawing::Brush> value);
    /// <summary>
    /// Gets/sets the current font.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<ITrFont> get_Font();
    /// <summary>
    /// Gets/sets the current font.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Font(System::SharedPtr<ITrFont> value);
    /// <summary>
    /// Returns the absolute number of the current page withint the document.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_CurrentPageNumber();
    /// <summary>
    /// Returns the number of the current page within the current partititon.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_CurrentRelativePageNumber();
    /// <summary>
    /// Returns the map of internal hyperlink targets.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> get_InternalHyperlinksTargets();
    
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
    virtual ASPOSE_PAGE_SHARED_API void ReNew();
    /// <summary>
    /// Starts the document.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void StartDocument();
    /// <summary>
    /// Accomplishes the document.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void EndDocument();
    /// <summary>
    /// Resets the device.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void Reset();
    /// <summary>
    /// Initializes numbers of pages to output.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void InitPageNumbers();
    /// <summary>
    /// Starts a new page with the specifies title.
    /// </summary>
    /// <param name="title">The title.</param>
    /// <returns><c>True</c> if started page is to be output (it's number is contained in PageNumbers save options).
    /// <c>False</c>, otherwise.</returns>
    virtual ASPOSE_PAGE_SHARED_API bool OpenPage(System::String title);
    /// <summary>
    /// Starts a new page with the specified width and height.
    /// </summary>
    /// <param name="width">The width of the page.</param>
    /// <param name="height">The height of the page.</param>
    /// <returns><c>True</c> if started page is to be output (it's number is contained in PageNumbers save options).
    /// <c>False</c>, otherwise.</returns>
    virtual ASPOSE_PAGE_SHARED_API bool OpenPage(float width, float height);
    /// <summary>
    /// Accomplishes the page.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void ClosePage();
    /// <summary>
    /// Updates the current page parameters.
    /// </summary>
    /// <param name="device">The multipage device.</param>
    virtual ASPOSE_PAGE_SHARED_API void UpdatePageParameters(System::SharedPtr<IMultiPageDevice> device);
    /// <summary>
    /// Starts a new document partition.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void OpenPartition();
    /// <summary>
    /// Accomplished the document partition.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void ClosePartition();
    /// <summary>
    /// Sets the hyperlink with an external URI as its target.
    /// </summary>
    /// <param name="targetUri">The target external URI.</param>
    virtual ASPOSE_PAGE_SHARED_API void SetHyperlinkTarget(System::String targetUri);
    /// <summary>
    /// Sets the hyperlink with a page number as its target.
    /// </summary>
    /// <param name="targetPageNumber">The target page number.</param>
    virtual ASPOSE_PAGE_SHARED_API void SetHyperlinkTarget(int32_t targetPageNumber);
    /// <summary>
    /// Adds an outline item with the last object as its target.
    /// </summary>
    /// <param name="outlineLevel">The outline level.</param>
    /// <param name="description">The item description.</param>
    virtual ASPOSE_PAGE_SHARED_API void AddOutline(int32_t outlineLevel, System::String description);
    /// <summary>
    /// Adds an outline item with the origin point as its target.
    /// </summary>
    /// <param name="origin">The target origin.</param>
    /// <param name="outlineLevel">The outline level.</param>
    /// <param name="description">The item description.</param>
    virtual ASPOSE_PAGE_SHARED_API void AddOutline(System::Drawing::PointF origin, int32_t outlineLevel, System::String description);
    /// <summary>
    /// Saves internal hyperlink target as an absolute page number and a rectangular area on a page.
    /// </summary>
    /// <param name="absolutePageNumber">The absolute page number.</param>
    /// <param name="rect">The rectangular area on a page.</param>
    ASPOSE_PAGE_SHARED_API void SaveInternalHyperlinkTarget(int32_t absolutePageNumber, System::Drawing::RectangleF rect);
    /// <summary>
    /// Creates a new instance of the device based on this device instance.
    /// Writes this device graphics state, i.e. creates <see cref="ApsCanvas"/> instance(s)
    /// with corresponding RenderTransform and Clip properties.
    /// </summary>
    /// <returns>The new device instance.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Device> Create();
    /// <summary>
    /// Disposes this device instance. Finalizes this device instance graphics state,
    /// i.e. switches APS composing context to the <see cref="ApsCanvas"/> of the level higher then this
    /// device's graphics state <see cref="ApsCanvas"/>.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void Dispose();
    /// <summary>
    /// Returns the current transformation matrix.
    /// </summary>
    /// <returns>The current transformation matrix.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetTransform();
    /// <summary>
    /// Sets the current transformation matrix.
    /// </summary>
    /// <param name="transform">The new transformation matrix.</param>
    virtual ASPOSE_PAGE_SHARED_API void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Multiplies the current transformation matrix by the specified <see cref="Matrix"/>.
    /// </summary>
    /// <param name="transform">The matrix by which the current transformation matrix is to be multiplied.</param>
    virtual ASPOSE_PAGE_SHARED_API void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Applies the specified translation vector to the current transformation matrix.
    /// </summary>
    /// <param name="x">The x offset.</param>
    /// <param name="y">The y offset.</param>
    virtual ASPOSE_PAGE_SHARED_API void Translate(double x, double y);
    /// <summary>
    /// Applies a clockwise rotation about the origin to the current transformation matrix.
    /// </summary>
    /// <param name="theta">The angle of the rotation, in radians.</param>
    virtual ASPOSE_PAGE_SHARED_API void Rotate(double theta);
    /// <summary>
    /// Applies the specified scale vector to the current transformation matrix.
    /// </summary>
    /// <param name="x">The x scale factor.</param>
    /// <param name="y">The y scale factor.</param>
    virtual ASPOSE_PAGE_SHARED_API void Scale(double x, double y);
    /// <summary>
    /// Applies the specified shear vector to the current transformation matrix.
    /// </summary>
    /// <param name="shx">The x shear factor.</param>
    /// <param name="shy">The y shear factor.</param>
    virtual ASPOSE_PAGE_SHARED_API void Shear(double shx, double shy);
    /// <summary>
    /// Adds the specified path to the current clip path.
    /// </summary>
    /// <param name="clipPath">The clip path to be added.</param>
    virtual ASPOSE_PAGE_SHARED_API void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clipPath);
    /// <summary>
    /// Draws the specified path.
    /// </summary>
    /// <param name="path">The path to draw.</param>
    virtual ASPOSE_PAGE_SHARED_API void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
    /// <summary>
    /// Fills the specified path.
    /// </summary>
    /// <param name="path">The path to fill.</param>
    virtual ASPOSE_PAGE_SHARED_API void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
    /// <summary>
    /// Draws a string at the specified position.
    /// </summary>
    /// <param name="str">The text to be drawn.</param>
    /// <param name="x">The x-coordinate of the string position.</param>
    /// <param name="y">The y-coordinate of the string position.</param>
    virtual ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y);
    
protected:

    /// <summary>
    /// Clone constructor. Initializes this device with existing device.
    /// </summary>
    /// <param name="device">Existing device.</param>
    PdfDevice(System::SharedPtr<PdfDevice> device);
    
    virtual ASPOSE_PAGE_SHARED_API void ApplyGraphicState(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clip);
    /// <summary>
    /// Writes the line width.
    /// </summary>
    /// <param name="width">The line width.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteWidth(float width);
    /// <summary>
    /// Writes the line cap.
    /// </summary>
    /// <param name="cap">The line cap.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteCap(System::Drawing::Drawing2D::LineCap cap);
    /// <summary>
    /// Writes the line join.
    /// </summary>
    /// <param name="join">The line join.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteJoin(System::Drawing::Drawing2D::LineJoin join);
    /// <summary>
    /// Writes the miter limit.
    /// </summary>
    /// <param name="limit">The miter limit.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteMiterLimit(float limit);
    /// <summary>
    /// Writes dash parameters.
    /// </summary>
    /// <param name="dash">The dash/gap array.</param>
    /// <param name="phase">The stroke phase.</param>
    /// <param name="dashCap">The dash cap.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteDash(System::ArrayPtr<double> dash, double phase, System::Drawing::Drawing2D::DashCap dashCap);
    /// <summary>
    /// Writes the stroke brush.
    /// </summary>
    /// <param name="brush">The <see cref="SolidBrush"/> instance.</param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::SolidBrush> brush);
    /// <summary>
    /// Writes the stroke brush.
    /// </summary>
    /// <param name="brush">The <see cref="LinearGradientBrush"/> instance.</param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> brush);
    /// <summary>
    /// Writes the stroke brush.
    /// </summary>
    /// <param name="brush">The <see cref="TextureBrush"/> instance.</param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::TextureBrush> brush);
    /// <summary>
    /// Writes the stroke brush.
    /// </summary>
    /// <param name="brush">The brush.</param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Brush> brush);
    virtual ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y, double width, System::SharedPtr<Aspose::Rendering::ApsGlyphsIndices> indices, bool isRtl = false);
    void SerializeAps(System::String path);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Page::Xps::Presentation::Aps::ApsDevice> _apsDevice;
    System::SharedPtr<System::IO::Stream> _pdfStream;
    
    static void SaveApsDocumentAsPdf(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>>>> pages, System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<PdfSaveOptions> options);
    
};

} // namespace Pdf
} // namespace Presentation
} // namespace Xps
} // namespace Page
} // namespace Aspose


