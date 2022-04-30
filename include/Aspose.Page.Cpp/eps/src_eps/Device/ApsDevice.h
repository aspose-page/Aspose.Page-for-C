#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.
//using System.ComponentModel;
//using System.Windows.Forms;

#include <system/guid.h>

#include "Aspose.Page.Cpp/IMultiPageDevice.h"
#include "Aspose.Page.Cpp/Device.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

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
namespace EPS
{
namespace Device
{
class ImageDevice;
} // namespace Device
namespace GraphicsIO
{
namespace Font
{
namespace Encoding
{
class CharTable;
} // namespace Encoding
} // namespace Font
} // namespace GraphicsIO
} // namespace EPS
class ITrFont;
} // namespace Page
namespace Rendering
{
class ApsCanvas;
class ApsNode;
class ApsPage;
} // namespace Rendering
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
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
namespace Imaging
{
class ImageCodecInfo;
class ImageFormat;
} // namespace Imaging
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

/// <summary>
/// The <b>Aspose.Page.EPS.Device</b> namespace provides classes of possible devices and save options that can be used
/// while converting PS/EPS to other formats.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PAGE_SHARED_CLASS ApsDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPageDevice
{
    typedef ApsDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPageDevice BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::EPS::Device::ImageDevice;
    
public:

    static ASPOSE_PAGE_SHARED_API System::String& TRANSPARENT();
    static ASPOSE_PAGE_SHARED_API System::String& BACKGROUND();
    static ASPOSE_PAGE_SHARED_API System::String& BACKGROUND_COLOR();
    static ASPOSE_PAGE_SHARED_API System::String& PAGE_SIZE();
    static ASPOSE_PAGE_SHARED_API System::String& PAGE_MARGINS();
    static ASPOSE_PAGE_SHARED_API System::String& ORIENTATION();
    static ASPOSE_PAGE_SHARED_API System::String& FIT_TO_PAGE();
    static ASPOSE_PAGE_SHARED_API System::String& EMBED_FONTS();
    static ASPOSE_PAGE_SHARED_API System::String& EMIT_WARNINGS();
    static ASPOSE_PAGE_SHARED_API System::String& EMIT_ERRORS();
    
    static ASPOSE_PAGE_SHARED_API System::String PRODUCER;
    
    /// <summary>
    /// Specifies a size of the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::Size value) override;
    ASPOSE_PAGE_SHARED_API bool get_IsDirectRGB() override;
    ASPOSE_PAGE_SHARED_API int32_t get_CurrentPageNumber() override;
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
                    Color = bannerColor;
                    FillRect(rx, ry, rw, rh);
                    Paint = paint;
                }
                if (framed)
                {
                    Brush paint = Paint;
                    Pen stroke = Stroke;
                    Color = frameColor;
                    SetLineWidth(frameWidth);
                    DrawRect(rx, ry, rw, rh);
                    Paint = paint;
                    Stroke = stroke;
                }
    
                return new PointF((float)x, (float)y);
            }*/
    /// <summary>
    /// Clips rectangle. Calls clip(Rectangle2D).
    /// </summary>
    /// <param name="x">, y, width, height rectangle for clipping </param>
    /*protected internal virtual void ClipRect(float x, float y, float width, float height)
            {
                GraphicsPath path = new GraphicsPath(FillMode.Winding);
                path.AddRectangle(new RectangleF(x, y, width, height));
                Clip(path);
            }*/
    ASPOSE_PAGE_SHARED_API void set_Font(System::SharedPtr<ITrFont> value) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>> get_Pages() const;
    
    ASPOSE_PAGE_SHARED_API ApsDevice();
    ASPOSE_PAGE_SHARED_API ApsDevice(System::Drawing::Size pageSize);
    
    ASPOSE_PAGE_SHARED_API void ReNew() override;
    ASPOSE_PAGE_SHARED_API void StartDocument() override;
    ASPOSE_PAGE_SHARED_API void EndDocument() override;
    /// <summary>
    /// Disposes of the graphics context. If on creation restoreOnDispose was true,
    /// writeGraphicsRestore() will be called.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    ASPOSE_PAGE_SHARED_API void Reset() override;
    ASPOSE_PAGE_SHARED_API void InitPageNumbers() override;
    ASPOSE_PAGE_SHARED_API bool OpenPage(System::String title) override;
    ASPOSE_PAGE_SHARED_API bool OpenPage(float width, float height) override;
    ASPOSE_PAGE_SHARED_API void ClosePage() override;
    ASPOSE_PAGE_SHARED_API void UpdatePageParameters(System::SharedPtr<IMultiPageDevice> device) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::Device> Create() override;
    ASPOSE_PAGE_SHARED_API void InitClip() override;
    ASPOSE_PAGE_SHARED_API void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s) override;
    ASPOSE_PAGE_SHARED_API void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s) override;
    ASPOSE_PAGE_SHARED_API void DrawImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::Drawing::Color bkg) override;
    ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y) override;
    /// <summary>
    /// Get the current transform.
    /// </summary>
    /// <returns> current transform </returns>
    /// <summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetTransform() override;
    ASPOSE_PAGE_SHARED_API void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Transforms the current transform. Calls writeTransform(Transform)
    /// </summary>
    /// <param name="transform"> to be applied </param>
    ASPOSE_PAGE_SHARED_API void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Translates the current transform. Calls writeTransform(Transform)
    /// </summary>
    /// <param name="x">, y amount by which to translate </param>
    ASPOSE_PAGE_SHARED_API void Translate(double x, double y) override;
    /// <summary>
    /// Rotate the current transform over the Z-axis. Calls writeTransform(Transform).
    /// Rotating with a positive angle theta rotates points on the positive x axis
    /// toward the positive y axis.
    /// </summary>
    /// <param name="theta"> radians over which to rotate </param>
    ASPOSE_PAGE_SHARED_API void Rotate(double theta) override;
    /// <summary>
    /// Scales the current transform. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="sx">, sy amount used for scaling </param>
    ASPOSE_PAGE_SHARED_API void Scale(double sx, double sy) override;
    /// <summary>
    /// Shears the current transform. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="shx">, shy amount for shearing </param>
    ASPOSE_PAGE_SHARED_API void Shear(double shx, double shy) override;
    /// <summary>
    /// Clips shape. PS only allows to intersect the currentClip so this calls clip(Shape).
    /// </summary>
    /// <param name="shape"> used for clipping </param>
    ASPOSE_PAGE_SHARED_API void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path) override;
    ASPOSE_PAGE_SHARED_API void WriteComment(System::String comment) override;
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    bool doRestoreOnDispose;
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> currentTransform;
    System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Font::Encoding::CharTable> currentCharTable;
    int32_t currentPageNumber;
    
    ASPOSE_PAGE_SHARED_API System::String get_WarningMessage();
    
    /// <summary>
    /// Cloneconstructor </summary>
    ASPOSE_PAGE_SHARED_API ApsDevice(System::SharedPtr<ApsDevice> device, bool doRestoreOnDispose);
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ApsDevice, CODEPORTING_ARGS(System::SharedPtr<ApsDevice> device, bool doRestoreOnDispose));
    ASPOSE_PAGE_SHARED_API void WriteBackground() override;
    static System::SharedPtr<System::Drawing::Drawing2D::Matrix> DrMatrixToMatrix(System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> m);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::Device> Copy();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::Device> Create(double x, double y, double width, double height);
    virtual ASPOSE_PAGE_SHARED_API void WriteGraphicsSave();
    virtual ASPOSE_PAGE_SHARED_API void WriteGraphicsRestore();
    static void WriteImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, System::SharedPtr<System::IO::Stream> os);
    static System::SharedPtr<System::Drawing::Imaging::ImageCodecInfo> GetCodec(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Write the given transformation matrix to the file. </summary>
    virtual ASPOSE_PAGE_SHARED_API void WriteTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> t);
    /// <summary>
    /// Clips using given shape. Dispatches to writeClip(Rectangle),
    /// writeClip(Rectangle2D) or writeClip(Shape).
    /// </summary>
    /// <param name="shape"> used for clipping </param>
    virtual ASPOSE_PAGE_SHARED_API void Clip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    virtual ASPOSE_PAGE_SHARED_API void WriteClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    ASPOSE_PAGE_SHARED_API void WriteWidth(float width) override;
    ASPOSE_PAGE_SHARED_API void WriteCap(System::Drawing::Drawing2D::LineCap cap) override;
    ASPOSE_PAGE_SHARED_API void WriteJoin(System::Drawing::Drawing2D::LineJoin join) override;
    ASPOSE_PAGE_SHARED_API void WriteMiterLimit(float limit) override;
    ASPOSE_PAGE_SHARED_API void WriteDash(System::ArrayPtr<double> dash, double phase, System::Drawing::Drawing2D::DashCap dashCap) override;
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::SolidBrush> c) override;
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> c) override;
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::TextureBrush> c) override;
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Brush> paint) override;
    /// <summary>
    /// Writes out a warning, by default to System.err.
    /// </summary>
    /// <param name="warning"> to be written </param>
    ASPOSE_PAGE_SHARED_API void WriteWarning(System::String warning) override;
    ASPOSE_PAGE_SHARED_API void WriteString(System::SharedPtr<ITrFont> font, System::String str) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~ApsDevice();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    static System::String rootKey;
    static const float FONTSIZE_CORRECTION;
    static System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> pageTransform;
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> userClip;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>> pages;
    System::SharedPtr<Aspose::Rendering::ApsPage> currentPage;
    System::SharedPtr<Aspose::Rendering::ApsCanvas> currentCanvas;
    System::SharedPtr<Aspose::Rendering::ApsNode> currentNode;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Rendering::ApsCanvas>>> canvasesStack;
    bool inClipQ;
    static int32_t gStates;
    static int32_t imagesCount;
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::Guid, System::SharedPtr<System::Drawing::Imaging::ImageCodecInfo>>> gImageCodecInfos;
    
    void set_NonStrokeColor(System::Drawing::Color value);
    void set_StrokeColor(System::Drawing::Color value);
    float get_Width();
    float get_Height();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
    void Init();
    void SetEvaluationWarning();
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> TransformShape(System::SharedPtr<System::Drawing::Drawing2D::Matrix> at, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> TransformShape(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> UntransformShape(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    System::String ToString_NonConst();
    /// <summary>
    /// See the comment of VectorGraphicsUtitlies1. </summary>
    ///  <seealso cref= VectorGraphicsUtitlies1#showCharacterCodes </seealso>
    void ShowCharacterCodes(System::String str);
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


