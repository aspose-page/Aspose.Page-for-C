#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <include/Rendering/Aps/ApsGlyphs.h>

#include "Aspose.Page.Cpp/IMultiPartitionDevice.h"
#include "Aspose.Page.Cpp/IInteractiveDevice.h"
#include "Aspose.Page.Cpp/Device.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Foundation
{
namespace Drawing
{
class DrBrush;
class DrColor;
class DrPen;
class DrTextureBrush;
} // namespace Drawing
} // namespace Foundation
namespace Page
{
class IMultiPageDevice;
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsPathBuilder;
class GraphicState;
} // namespace Aps
namespace Image
{
class ImageDevice;
} // namespace Image
namespace Pdf
{
class PdfDevice;
} // namespace Pdf
} // namespace Presentation
} // namespace XPS
} // namespace Page
namespace Rendering
{
class ApsBoundingBoxCalculator;
class ApsCanvas;
class ApsGlyphs;
class ApsHyperlink;
class ApsImage;
class ApsNode;
class ApsOutlineItem;
class ApsPage;
class ApsPath;
class GlyphData;
} // namespace Rendering
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename, typename> class IDictionary;
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
class Image;
namespace Imaging
{
class ImageFormat;
} // namespace Imaging
class Pen;
class PointF;
class RectangleF;
class Size;
class SolidBrush;
class TextureBrush;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

namespace Aps {


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS ApsDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPartitionDevice, public Aspose::Page::IInteractiveDevice
{
    typedef ApsDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPartitionDevice BaseType1;
    typedef Aspose::Page::IInteractiveDevice BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
private:

    class ApsGlyphsPdfAdapter;
    
    friend class Aspose::Page::XPS::Presentation::Image::ImageDevice;
    friend class Aspose::Page::XPS::Presentation::Pdf::PdfDevice;
    
private:

    /// <summary>
    /// Abstract class for ApsGlyps adaptation
    /// </summary>
    class ApsGlyphsAdapter : public System::Object
    {
        typedef ApsGlyphsAdapter ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        friend class Aspose::Page::XPS::Presentation::Aps::ApsDevice;
        
    public:
    
        virtual System::SharedPtr<Aspose::Rendering::ApsGlyphs> Adapt() = 0;
        
    protected:
    
        System::SharedPtr<Aspose::Rendering::ApsGlyphs> _apsGlyphs;
        
        ApsGlyphsAdapter(System::SharedPtr<Aspose::Rendering::ApsGlyphs> apsGlyphs);
        
        #ifdef ASPOSE_GET_SHARED_MEMBERS
        System::Object::shared_members_type GetSharedMembers() const override;
        #endif
        
        
    };
    
    /// <summary>
    /// Class incapsulating adaptation rules for ApsGlyphs for right-to-left text
    /// </summary>
    class ApsGlyphsPdfAdapter : public Aspose::Page::XPS::Presentation::Aps::ApsDevice::ApsGlyphsAdapter
    {
        typedef ApsGlyphsPdfAdapter ThisType;
        typedef Aspose::Page::XPS::Presentation::Aps::ApsDevice::ApsGlyphsAdapter BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        ApsGlyphsPdfAdapter(System::SharedPtr<Aspose::Rendering::ApsGlyphs> apsGlyphs);
        
        /// <summary>
        /// Adaptation itself
        /// </summary>
        System::SharedPtr<Aspose::Rendering::ApsGlyphs> Adapt() override;
        
    protected:
    
        #ifdef ASPOSE_GET_SHARED_MEMBERS
        System::Object::shared_members_type GetSharedMembers() const override;
        #endif
        
        
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
    /// Returns the resulting <see cref="ApsPage"></see>s as a list of lists.
    /// The first dimension is for partitions
    /// and the second one is for pages within partions.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>>>> get_Pages() const;
    /// <summary>
    /// Returns the absolute number of the current page within the document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_CurrentPageNumber() override;
    /// <summary>
    /// Returns the relative number of the current page within the current partition.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_CurrentRelativePageNumber() override;
    /// <summary>
    /// Returns the map of internal hyperlink targets.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> get_InternalHyperlinksTargets() override;
    
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
    /// Set the hyperlink with an external URI as its target.
    /// </summary>
    /// <param name="targetUri">The target external URI.</param>
    ASPOSE_PAGE_SHARED_API void SetHyperlinkTarget(System::String targetUri) override;
    /// <summary>
    /// Set the hyperlink with a page number as its target.
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
    /// <param name="str">The text.</param>
    /// <param name="x">The x-coordinate of the string position.</param>
    /// <param name="y">The y-coordinate of the string position.</param>
    ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y) override;
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Returns the current <see cref="ApsCanvas"></see> instance.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Rendering::ApsCanvas> get_CurrentCanvas();
    
    /// <summary>
    /// The clone constructor.
    /// </summary>
    /// <param name="device">The device to clone.</param>
    ASPOSE_PAGE_SHARED_API ApsDevice(System::SharedPtr<ApsDevice> device);
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ApsDevice, CODEPORTING_ARGS(System::SharedPtr<ApsDevice> device));
    /// <summary>
    /// Writes the hyperlink.
    /// </summary>
    /// <param name="hyperlink">The APS hyperlink.</param>
    virtual ASPOSE_PAGE_SHARED_API void WriteHyperlink(System::SharedPtr<Aspose::Rendering::ApsHyperlink> hyperlink);
    virtual ASPOSE_PAGE_SHARED_API void WriteOutlineItem(System::SharedPtr<Aspose::Rendering::ApsOutlineItem> outlineItem);
    /// <summary>
    /// Writes this device graphics state, i.e. creates <see cref="ApsCanvas"></see> instance(s)
    /// with corresponding RenderTransform and Clip properties.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void WriteGraphicsSave();
    /// <summary>
    /// Finalizes this device instance graphics state,
    /// i.e. switches APS composing context to the <see cref="ApsCanvas"></see> of the level higher then this
    /// device's graphics state <see cref="ApsCanvas"></see>.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void WriteGraphicsRestore();
    ASPOSE_PAGE_SHARED_API void ApplyGraphicState(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clip) override;
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
    System::SharedPtr<Aspose::Foundation::Drawing::DrPen> ToDrPen(System::SharedPtr<System::Drawing::Pen> pen, System::SharedPtr<System::Drawing::Brush> brush, float opacity, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
    System::SharedPtr<Aspose::Foundation::Drawing::DrBrush> ToDrBrush(System::SharedPtr<System::Drawing::Brush> brush, float opacity, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = nullptr, float penWidth = 0.f);
    void Serialize(System::String path);
    
    virtual ASPOSE_PAGE_SHARED_API ~ApsDevice();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    float _scale;
    System::SharedPtr<ApsPathBuilder> _pathBuilder;
    System::SharedPtr<Aspose::Rendering::ApsBoundingBoxCalculator> bbCalc;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>>>> _apsPages;
    System::SharedPtr<GraphicState> _currentState;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Rendering::ApsCanvas>>> _canvasStack;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Rendering::ApsCanvas>>> _nodeStack;
    int32_t _absolutePageNumber;
    int32_t _relativePageNumber;
    int32_t _hyperlinkId;
    System::SharedPtr<System::Collections::Generic::List<int32_t>> _pageNumbers;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<System::Drawing::TextureBrush>, System::SharedPtr<Aspose::Foundation::Drawing::DrTextureBrush>>> _textureBrushCache;
    System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> _internalHyperlinksTargets;
    
    void Init();
    void Add(System::SharedPtr<Aspose::Rendering::ApsNode> node);
    System::SharedPtr<Aspose::Rendering::ApsNode> GetLastNode();
    System::String ToString_NonConst();
    System::SharedPtr<Aspose::Foundation::Drawing::DrTextureBrush> GetDrTextureBrush(System::SharedPtr<System::Drawing::TextureBrush> textureBrush);
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

    System::SharedPtr<System::Drawing::Drawing2D::Matrix> get_Transform() const;
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> get_NotNullTransform();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath>>> get_Clips() const;
    System::SharedPtr<Aspose::Rendering::ApsCanvas> get_FirstCanvas() const;
    System::SharedPtr<Aspose::Rendering::ApsCanvas> get_Canvas();
    
    GraphicState();
    
    void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix);
    void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clip);
    
protected:

    #ifdef ASPOSE_GET_SHARED_MEMBERS
    System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::Drawing::Drawing2D::Matrix> _transform;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath>>> _clips;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Rendering::ApsCanvas>>> _canvases;
    System::SharedPtr<Aspose::Rendering::ApsCanvas> _firstCanvas;
    
};

} // namespace Aps
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


