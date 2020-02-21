#pragma once

#include <system/collections/list.h>
#include <drawing/imaging/image_format.h>

#include "Aspose.Page.Cpp/IMultiPageDevice.h"
#include "Aspose.Page.Cpp/Device.h"

namespace Aspose { namespace Page { namespace LicenseManagement { class VentureLicense; } } }
namespace Aspose { namespace Page { enum class TextRenderingMode; } }
namespace Aspose { namespace Page { class UserProperties; } }
namespace Aspose { namespace Page { namespace EPS { namespace Device { class ApsDevice; } } } }
namespace Aspose { namespace Page { class SaveOptions; } }
namespace Aspose { namespace Page { class ITrFont; } }
namespace Aspose { namespace Page { class Margins; } }
namespace Aspose { namespace Rendering { class ApsPage; } }
namespace Aspose { namespace Images { enum class ImageTypeCore; } }

namespace Aspose {

namespace Page {

namespace EPS {

namespace Device {

class ImageBytesContainer : public System::Object
{
    typedef ImageBytesContainer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::ArrayPtr<System::ArrayPtr<uint8_t>> imagesBytes;
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
};

/// <summary>
/// This class encapsulates rendering of document to image.
/// </summary>
class ImageDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPageDevice
{
    typedef ImageDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPageDevice BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
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
    /// Image format.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Imaging::ImageFormat> get_Format();
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
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color get_Background();
    /// <summary>
    /// Indicates whether device uses direct RGB mode, that is RGB.        
    /// </summary>
    /// <param name="value">True if direct RGB mode and false otherwise, that is BGR.</param>
    virtual ASPOSE_PAGE_SHARED_API void set_Background(System::Drawing::Color value);
    /// <summary>
    /// Returns or specifies current background of the page.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API float get_Opacity();
    /// <summary>
    /// Returns or specifies current background of the page.
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
    /// Indicates whether device uses direct RGB mode, that is RGB.        
    /// </summary>
    /// <returns>True if direct RGB mode and false otherwise, that is BGR.</returns>
    virtual ASPOSE_PAGE_SHARED_API bool get_IsDirectRGB();
    /// <summary>
    /// Current page number.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_CurrentPageNumber();
    /// <summary>
    /// Returns resulting images in bytes, one byte array for one page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::ArrayPtr<uint8_t>> get_ImagesBytes();
    
    /// <summary>
    /// Initializes new instance of <see cref="ImageDevice"/>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API ImageDevice();
    /// <summary>
    /// Initializes new instance of <see cref="ImageDevice"/> with specified size of a page.
    /// </summary>
    /// <param name="size">Page size. </param>
    ASPOSE_PAGE_SHARED_API ImageDevice(System::Drawing::Size size);
    /// <summary>
    /// Initializes new instance of <see cref="ImageDevice"/> with specified size of a page and image format.
    /// </summary>
    /// <param name="size">Page size. </param>
    /// <param name="imageFormat">Format of the image. </param>
    ASPOSE_PAGE_SHARED_API ImageDevice(System::Drawing::Size size, System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat);
    
    /// <summary>
    /// Reset device to initial state for whole document.
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
    /// Gets a value of margins property.
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
    /// Initializes numbers of pages to output.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void InitPageNumbers();
    /// <summary>
    /// Makes necessary preparation of the device before page rendering.
    /// </summary>
    /// <param name="title">The page title.</param>
    /// <returns>Always true.</returns>
    virtual ASPOSE_PAGE_SHARED_API bool OpenPage(System::String title);
    /// <summary>
    /// Makes necessary preparation of the device before each page rendering.
    /// </summary>
    /// <param name="width">A width of the page.</param>
    /// <param name="height">A height of the page.</param>
    /// <returns>Always true.</returns>
    virtual ASPOSE_PAGE_SHARED_API bool OpenPage(float width, float height);
    /// <summary>
    /// Makes necessary preparation of the device after page has been rendered.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void ClosePage();
    /// <summary>
    /// Updates page parameters from other multi-paged device.
    /// </summary>
    /// <param name="device"> Another instance of the same device. </param>
    virtual ASPOSE_PAGE_SHARED_API void UpdatePageParameters(System::SharedPtr<IMultiPageDevice> device);
    /// <summary>
    /// Creates a copy of this device.
    /// </summary>
    /// <returns>Copy of this device.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::Device> Create();
    /// <summary>
    /// Initializes a clip of the device.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void InitClip();
    /// <summary>
    /// Draws a path.
    /// </summary>
    /// <param name="s"> A path to be drawn. </param>
    virtual ASPOSE_PAGE_SHARED_API void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    /// <summary>
    /// Fills a path.
    /// </summary>
    /// <param name="s"> A path to be filled. </param>
    virtual ASPOSE_PAGE_SHARED_API void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s);
    /// <summary>
    /// Draws an image with assigned transform and background.
    /// </summary>
    /// <param name="image"> An image to be drawn. </param>
    /// <param name="transform"> A transform. </param>
    /// <param name="bkg"> A background color. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::Drawing::Color bkg);
    /// <summary>
    /// Draws a string at given point.
    /// </summary>
    /// <param name="str"> A string to be drawn. </param>
    /// <param name="x"> X coordinate of point. </param>
    /// <param name="y"> Y coordinate of point. </param>
    virtual ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y);
    /// <summary>
    /// Gets the current transform.
    /// </summary>
    /// <returns> Current transform. </returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetTransform();
    /// <summary>
    /// Specifies current transform.
    /// </summary>
    /// <param name="transform"> A transform. </param>
    virtual ASPOSE_PAGE_SHARED_API void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
    /// <summary>
    /// Transforms the current transformation matrix. Calls writeTransform(Transform).
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
    /// Rotate the current transformation matrix over the Z-axis. Calls writeTransform(Transform).
    /// Rotating with a positive angle theta rotates points on the positive x axis
    /// toward the positive y axis.
    /// </summary>
    /// <param name="theta"> Angle in radians over which to rotate. </param>
    virtual ASPOSE_PAGE_SHARED_API void Rotate(double theta);
    /// <summary>
    /// Scales the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="sx"> A scale in X axis. </param>
    /// <param name="sy"> A scale in Y axis. </param>
    virtual ASPOSE_PAGE_SHARED_API void Scale(double sx, double sy);
    /// <summary>
    /// Shears the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="shx"> A shear in X axis. </param>
    /// <param name="shy"> A shear in Y axis. </param>
    virtual ASPOSE_PAGE_SHARED_API void Shear(double shx, double shy);
    /// <summary>
    /// Clips shape.
    /// </summary>
    /// <param name="path"> Path that is used for clipping. </param>
    // PS only allows to intersect the currentClip so this calls clip(Shape).
    virtual ASPOSE_PAGE_SHARED_API void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
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
    
protected:

    System::SharedPtr<ApsDevice> get_InternalDevice();
    
    /// <summary>
    /// Clone constructor. Initializes new instance of <see cref="ImageDevice"/> with existing device.
    /// </summary>
    /// <param name="device"> Existing device. </param>
    /// <param name="doRestoreOnDispose">Use true if need to write restoring graphics state on disposing. </param>
    ImageDevice(System::SharedPtr<ImageDevice> device, bool doRestoreOnDispose);
    
    /// <summary>
    /// Writes out current background.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void WriteBackground();
    /// <summary>
    /// Writes out the width of the stroke.
    /// </summary>
    /// <param name="width"> The width of the stroke </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteWidth(float width);
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
    /// <param name="c"> The color to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::SolidBrush> c);
    /// <summary>
    /// Writes out paint as the given gradient.
    /// </summary>
    /// <param name="c"> The paint to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> c);
    /// <summary>
    /// Writes out paint as the given texture.
    /// </summary>
    /// <param name="c"> The paint to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::TextureBrush> c);
    /// <summary>
    /// Writes out paint.
    /// </summary>
    /// <param name="paint"> The paint to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Brush> paint);
    /// <summary>
    /// Writes out a warning, by default to System.err.
    /// </summary>
    /// <param name="warning"> to be written </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteWarning(System::String warning);
    /// <summary>
    /// Writes out string with specified font.
    /// </summary>
    /// <param name="font"> Specified font. </param>
    /// <param name="str"> The string. </param>
    virtual ASPOSE_PAGE_SHARED_API void WriteString(System::SharedPtr<ITrFont> font, System::String str);
    virtual ASPOSE_PAGE_SHARED_API void SetVentureLicense(System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> license);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> GetVentureLicense();
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static System::String rootKey;
    static System::SharedPtr<UserProperties> defaultProperties;
    System::SharedPtr<ApsDevice> apsd;
    System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat;
    System::SharedPtr<ImageBytesContainer> imagesBytesContainer;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
    void Init();
    static System::ArrayPtr<System::ArrayPtr<uint8_t>> SaveApsAsImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>> apsPages, Aspose::Images::ImageTypeCore imageType);
    static System::ArrayPtr<uint8_t> renderPage(System::SharedPtr<Aspose::Rendering::ApsPage> page, int32_t number, Aspose::Images::ImageTypeCore imageType);
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


