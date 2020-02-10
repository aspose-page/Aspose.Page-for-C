#pragma once
//using System.ComponentModel;
//using System.Windows.Forms;

#include <system/io/stream.h>
#include <system/guid.h>
#include <system/collections/stack.h>
#include <system/collections/list.h>
#include <drawing/imaging/image_format.h>
#include <drawing/imaging/image_codec_info.h>

#include "Aspose.Page.Cpp/IMultiPageDevice.h"
#include "Aspose.Page.Cpp/Device.h"

namespace Aspose { namespace Page { namespace EPS { namespace Device { class ImageDevice; } } } }
namespace Aspose { namespace Foundation { namespace Drawing { class DrMatrix; } } }
namespace Aspose { namespace Page { namespace EPS { namespace GraphicsIO { namespace Font { namespace Encoding { class CharTable; } } } } } }
namespace Aspose { namespace Rendering { class ApsPage; } }
namespace Aspose { namespace Rendering { class ApsCanvas; } }
namespace Aspose { namespace Rendering { class ApsNode; } }
namespace Aspose { namespace Page { class ITrFont; } }

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

class ApsDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPageDevice
{
    typedef ApsDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPageDevice BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
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
    virtual ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::Size value);
    virtual ASPOSE_PAGE_SHARED_API bool get_IsDirectRGB();
    virtual ASPOSE_PAGE_SHARED_API int32_t get_CurrentPageNumber();
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
    virtual ASPOSE_PAGE_SHARED_API void set_Font(System::SharedPtr<ITrFont> value);
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>> get_Pages();
    
    ASPOSE_PAGE_SHARED_API ApsDevice();
    ASPOSE_PAGE_SHARED_API ApsDevice(System::Drawing::Size pageSize);
    
    virtual ASPOSE_PAGE_SHARED_API void ReNew();
    virtual ASPOSE_PAGE_SHARED_API void StartDocument();
    virtual ASPOSE_PAGE_SHARED_API void EndDocument();
    /// <summary>
    /// Disposes of the graphics context. If on creation restoreOnDispose was true,
    /// writeGraphicsRestore() will be called.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void Dispose();
    virtual ASPOSE_PAGE_SHARED_API void Reset();
    virtual ASPOSE_PAGE_SHARED_API void InitPageNumbers();
    virtual ASPOSE_PAGE_SHARED_API bool OpenPage(System::String title);
    virtual ASPOSE_PAGE_SHARED_API bool OpenPage(float width, float height);
    virtual ASPOSE_PAGE_SHARED_API void ClosePage();
    virtual ASPOSE_PAGE_SHARED_API void UpdatePageParameters(System::SharedPtr<IMultiPageDevice> device);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::Device> Create();
    virtual ASPOSE_PAGE_SHARED_API void InitClip();
    virtual ASPOSE_PAGE_SHARED_API void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    virtual ASPOSE_PAGE_SHARED_API void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    virtual ASPOSE_PAGE_SHARED_API void DrawImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::Drawing::Color bkg);
    virtual ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y);
    /// <summary>
    /// Get the current transform.
    /// </summary>
    /// <returns> current transform </returns>
    /// <summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetTransform();
    virtual ASPOSE_PAGE_SHARED_API void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Transforms the current transform. Calls writeTransform(Transform)
    /// </summary>
    /// <param name="transform"> to be applied </param>
    virtual ASPOSE_PAGE_SHARED_API void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Translates the current transform. Calls writeTransform(Transform)
    /// </summary>
    /// <param name="x">, y amount by which to translate </param>
    virtual ASPOSE_PAGE_SHARED_API void Translate(double x, double y);
    /// <summary>
    /// Rotate the current transform over the Z-axis. Calls writeTransform(Transform).
    /// Rotating with a positive angle theta rotates points on the positive x axis
    /// toward the positive y axis.
    /// </summary>
    /// <param name="theta"> radians over which to rotate </param>
    virtual ASPOSE_PAGE_SHARED_API void Rotate(double theta);
    /// <summary>
    /// Scales the current transform. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="sx">, sy amount used for scaling </param>
    virtual ASPOSE_PAGE_SHARED_API void Scale(double sx, double sy);
    /// <summary>
    /// Shears the current transform. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="shx">, shy amount for shearing </param>
    virtual ASPOSE_PAGE_SHARED_API void Shear(double shx, double shy);
    /// <summary>
    /// Clips shape. PS only allows to intersect the currentClip so this calls clip(Shape).
    /// </summary>
    /// <param name="shape"> used for clipping </param>
    virtual ASPOSE_PAGE_SHARED_API void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
    virtual ASPOSE_PAGE_SHARED_API void WriteComment(System::String comment);
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    
protected:

    bool doRestoreOnDispose;
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> currentTransform;
    System::SharedPtr<Aspose::Page::EPS::GraphicsIO::Font::Encoding::CharTable> currentCharTable;
    int32_t currentPageNumber;
    
    System::String get_WarningMessage();
    
    /// <summary>
    /// Cloneconstructor </summary>
    ApsDevice(System::SharedPtr<ApsDevice> device, bool doRestoreOnDispose);
    
    virtual ASPOSE_PAGE_SHARED_API void WriteBackground();
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
    virtual ASPOSE_PAGE_SHARED_API void WriteWidth(float width);
    virtual ASPOSE_PAGE_SHARED_API void WriteCap(System::Drawing::Drawing2D::LineCap cap);
    virtual ASPOSE_PAGE_SHARED_API void WriteJoin(System::Drawing::Drawing2D::LineJoin join);
    virtual ASPOSE_PAGE_SHARED_API void WriteMiterLimit(float limit);
    virtual ASPOSE_PAGE_SHARED_API void WriteDash(System::ArrayPtr<double> dash, double phase, System::Drawing::Drawing2D::DashCap dashCap);
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::SolidBrush> c);
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> c);
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::TextureBrush> c);
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Brush> paint);
    /// <summary>
    /// Writes out a warning, by default to System.err.
    /// </summary>
    /// <param name="warning"> to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteWarning(System::String warning);
    virtual ASPOSE_PAGE_SHARED_API void WriteString(System::SharedPtr<ITrFont> font, System::String str);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
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
    static System::SharedPtr<System::Drawing::Drawing2D::Matrix> DrMatrixToMatrix(System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> m);
    void SetEvaluationWarning();
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> TransformShape(System::SharedPtr<System::Drawing::Drawing2D::Matrix> at, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> TransformShape(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> UntransformShape(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    /// <summary>
    /// See the comment of VectorGraphicsUtitlies1. </summary>
    ///  <seealso cref= VectorGraphicsUtitlies1#showCharacterCodes </seealso>
    void ShowCharacterCodes(System::String str);
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


