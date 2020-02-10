#pragma once

#include <system/collections/stack.h>
#include <Rendering/Aps/ApsGlyphs.h>
#include <drawing/imaging/image_format.h>
#include <drawing/image.h>

#include "Aspose.Page.Cpp/IMultiPartitionDevice.h"
#include "Aspose.Page.Cpp/IInteractiveDevice.h"
#include "Aspose.Page.Cpp/Device.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Image { class ImageDevice; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Pdf { class PdfDevice; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsPathBuilder; } } } } }
namespace Aspose { namespace Rendering { class ApsBoundingBoxCalculator; } }
namespace Aspose { namespace Rendering { class ApsPage; } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class GraphicState; } } } } }
namespace Aspose { namespace Rendering { class ApsCanvas; } }
namespace Aspose { namespace Rendering { class ApsCompositeNode; } }
namespace Aspose { namespace Rendering { class ApsNode; } }
namespace Aspose { namespace Page { class IMultiPageDevice; } }
namespace Aspose { namespace Rendering { class ApsHyperlink; } }
namespace Aspose { namespace Rendering { class ApsOutlineItem; } }
namespace Aspose { namespace Rendering { class ApsGlyphsIndices; } }
namespace Aspose { namespace Foundation { namespace Drawing { class DrPen; } } }
namespace Aspose { namespace Foundation { namespace Drawing { class DrBrush; } } }
namespace Aspose { namespace Foundation { namespace Drawing { class DrColor; } } }
namespace Aspose { namespace Rendering { class ApsImage; } }
namespace Aspose { namespace Rendering { class ApsPath; } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsDevice; } } } } }
namespace Aspose { namespace Rendering { class ApsGlyphs; } }
namespace Aspose { namespace Rendering { class GlyphData; } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace Presentation {

namespace Aps {


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ApsDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPartitionDevice, public Aspose::Page::IInteractiveDevice
{
    typedef ApsDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPartitionDevice BaseType1;
    typedef Aspose::Page::IInteractiveDevice BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
private:

    class ApsGlyphsPdfAdapter;
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::Image::ImageDevice;
    friend class Aspose::Page::Xps::Presentation::Pdf::PdfDevice;
    
private:

    class ApsGlyphsAdapter : public System::Object
    {
        typedef ApsGlyphsAdapter ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Page::Xps::Presentation::Aps::ApsDevice;
        
    public:
    
        virtual System::SharedPtr<Aspose::Rendering::ApsGlyphs> Adapt() = 0;
        
    protected:
    
        System::SharedPtr<Aspose::Rendering::ApsGlyphs> _apsGlyphs;
        
        ApsGlyphsAdapter(System::SharedPtr<Aspose::Rendering::ApsGlyphs> apsGlyphs);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    class ApsGlyphsPdfAdapter : public Aspose::Page::Xps::Presentation::Aps::ApsDevice::ApsGlyphsAdapter
    {
        typedef ApsGlyphsPdfAdapter ThisType;
        typedef Aspose::Page::Xps::Presentation::Aps::ApsDevice::ApsGlyphsAdapter BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        ApsGlyphsPdfAdapter(System::SharedPtr<Aspose::Rendering::ApsGlyphs> apsGlyphs);
        
        /// <summary>
        /// Adaptation itself
        /// </summary>
        virtual System::SharedPtr<Aspose::Rendering::ApsGlyphs> Adapt();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Aspose::Rendering::ApsGlyphsIndices::ApsGlyphsIndicesReader> _indicesReader;
        
        System::SharedPtr<Aspose::Rendering::ApsGlyphsIndices::GlyphsMapping> GetGlyphsMappingAtIndex(int32_t index);
        System::SharedPtr<Aspose::Rendering::GlyphData> GetGlyphDataAtIndex(int32_t index);
        /// <summary>
        /// Wrapper for getting advance widths
        /// </summary>
        float GetAdvanceWidthAtIndex(int32_t index);
        /// <summary>
        /// Wrapper for getting u-offsets
        /// </summary>
        float GetuOffsetAtIndex(int32_t index);
        /// <summary>
        /// Wrapper for getting v-offsets
        /// </summary>
        float GetvOffsetAtIndex(int32_t index);
        
    };
    
    
public:

    /// <summary>
    /// Returns the resulting <see cref="ApsPage"/>s as a list of lists.
    /// The first dimension is for partitions
    /// and the second one is for pages within partions.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>>>> get_Pages();
    /// <summary>
    /// Returns the absolute number of the current page within the document.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_CurrentPageNumber();
    /// <summary>
    /// Returns the relative number of the current page within the current partition.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_CurrentRelativePageNumber();
    /// <summary>
    /// Returns the map of internal hyperlink targets.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> get_InternalHyperlinksTargets();
    
    /// <summary>
    /// Creates a new instance.
    /// </summary>
    ASPOSE_PAGE_SHARED_API ApsDevice();
    /// <summary>
    /// Creates a new instance with the specified media size.
    /// </summary>
    /// <param name="pageSize">The size of the device output media.</param>
    ASPOSE_PAGE_SHARED_API ApsDevice(System::Drawing::Size pageSize);
    
    /// <summary>
    /// Sets this devices to the initial state.
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
    /// Set the hyperlink with an external URI as its target.
    /// </summary>
    /// <param name="targetUri">The target external URI.</param>
    virtual ASPOSE_PAGE_SHARED_API void SetHyperlinkTarget(System::String targetUri);
    /// <summary>
    /// Set the hyperlink with a page number as its target.
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
    /// <param name="str">The text.</param>
    /// <param name="x">The x-coordinate of the string position.</param>
    /// <param name="y">The y-coordinate of the string position.</param>
    virtual ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y);
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    
protected:

    /// <summary>
    /// Returns the current <see cref="ApsCanvas"/> instance.
    /// </summary>
    System::SharedPtr<Aspose::Rendering::ApsCanvas> get_CurrentCanvas();
    
    /// <summary>
    /// The clone constructor.
    /// </summary>
    /// <param name="device">The device to clone.</param>
    ApsDevice(System::SharedPtr<ApsDevice> device);
    
    /// <summary>
    /// Writes the hyperlink.
    /// </summary>
    /// <param name="hyperlink">The APS hyperlink.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteHyperlink(System::SharedPtr<Aspose::Rendering::ApsHyperlink> hyperlink);
    virtual ASPOSE_PAGE_SHARED_API void WriteOutlineItem(System::SharedPtr<Aspose::Rendering::ApsOutlineItem> outlineItem);
    /// <summary>
    /// Writes this device graphics state, i.e. creates <see cref="ApsCanvas"/> instance(s)
    /// with corresponding RenderTransform and Clip properties.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void WriteGraphicsSave();
    /// <summary>
    /// Finalizes this device instance graphics state,
    /// i.e. switches APS composing context to the <see cref="ApsCanvas"/> of the level higher then this
    /// device's graphics state <see cref="ApsCanvas"/>.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void WriteGraphicsRestore();
    virtual ASPOSE_PAGE_SHARED_API void ApplyGraphicState(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clip);
    /// <summary>
    /// Converts the specified transformation matrix to APS format.
    /// </summary>
    /// <param name="transform">The transformation matrix to write.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Adds the specified path to the current clip path.
    /// </summary>
    /// <param name="clipPath">The clip path.</param>
    virtual ASPOSE_PAGE_SHARED_API void AddClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clipPath);
    /// <summary>
    /// Converts the specified clip path to APS format.
    /// </summary>
    /// <param name="clipPath">The clip path.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clipPath);
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
    static System::SharedPtr<Aspose::Foundation::Drawing::DrPen> ToDrPen(System::SharedPtr<System::Drawing::Pen> pen, System::SharedPtr<System::Drawing::Brush> brush, float opacity, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
    static System::SharedPtr<Aspose::Foundation::Drawing::DrBrush> ToDrBrush(System::SharedPtr<System::Drawing::Brush> brush, float opacity, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = nullptr, float penWidth = 0.f);
    void Serialize(System::String path);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    float _scale;
    System::SharedPtr<ApsPathBuilder> _pathBuilder;
    System::SharedPtr<Aspose::Rendering::ApsBoundingBoxCalculator> bbCalc;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>>>> _apsPages;
    System::SharedPtr<GraphicState> _currentState;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Rendering::ApsCanvas>>> _canvasStack;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Rendering::ApsCompositeNode>>> _nodeStack;
    int32_t _absolutePageNumber;
    int32_t _relativePageNumber;
    int32_t _hyperlinkId;
    System::SharedPtr<System::Collections::Generic::List<int32_t>> _pageNumbers;
    System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> _internalHyperlinksTargets;
    
    void Init();
    void Add(System::SharedPtr<Aspose::Rendering::ApsNode> node);
    System::SharedPtr<Aspose::Rendering::ApsNode> GetLastNode();
    static System::SharedPtr<Aspose::Foundation::Drawing::DrColor> ToDrColor(System::Drawing::Color color, float opacity);
    static System::ArrayPtr<uint8_t> ToBytes(System::SharedPtr<System::Drawing::Image> image, System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat);
    /// <summary>
    /// Applies the mask.
    /// </summary>
    /// <param name="input">The input.</param>
    /// <param name="mask">The mask.</param>
    /// <returns></returns>
    static System::SharedPtr<System::Drawing::Bitmap> ApplyMask(System::SharedPtr<System::Drawing::Bitmap> input, System::SharedPtr<System::Drawing::Bitmap> mask);
    /// <summary>
    /// Applies the mask.
    /// </summary>
    /// <param name="path">The path.</param>
    /// <param name="maskBrush">The mask brush.</param>
    /// <returns></returns>
    static System::SharedPtr<Aspose::Rendering::ApsImage> ApplyMask(System::SharedPtr<Aspose::Rendering::ApsPath> path, System::SharedPtr<System::Drawing::Brush> maskBrush);
    
};

class GraphicState : public System::Object
{
    typedef GraphicState ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<System::Drawing::Drawing2D::Matrix> get_Transform();
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> get_NotNullTransform();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath>>> get_Clips();
    System::SharedPtr<Aspose::Rendering::ApsCanvas> get_FirstCanvas();
    System::SharedPtr<Aspose::Rendering::ApsCanvas> get_Canvas();
    
    GraphicState();
    
    void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix);
    void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clip);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Drawing::Drawing2D::Matrix> _transform;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath>>> _clips;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Rendering::ApsCanvas>>> _canvases;
    System::SharedPtr<Aspose::Rendering::ApsCanvas> _firstCanvas;
    
};

} // namespace Aps
} // namespace Presentation
} // namespace Xps
} // namespace Page
} // namespace Aspose


