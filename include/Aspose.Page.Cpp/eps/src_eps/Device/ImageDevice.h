#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/IMultiPageDevice.h"
#include "Aspose.Page.Cpp/Device.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Images
{
enum class ImageTypeCore;
} // namespace Images
namespace Page
{
namespace EPS
{
namespace Device
{
class ApsDevice;
} // namespace Device
namespace Ps2Aps
{
class Ps2ApsBaseTest;
} // namespace Ps2Aps
} // namespace EPS
class ITrFont;
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
class Margins;
class SaveOptions;
enum class TextRenderingMode;
class UserProperties;
} // namespace Page
namespace Rendering
{
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
class ImageFormat;
} // namespace Imaging
class Pen;
class RectangleF;
class Size;
class SolidBrush;
class TextureBrush;
} // namespace Drawing
} // namespace System

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

    #ifdef ASPOSE_GET_SHARED_MEMBERS
    System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
};

/// <summary>
/// This class encapsulates rendering of document to image.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ImageDevice : public Aspose::Page::Device, public Aspose::Page::IMultiPageDevice
{
    typedef ImageDevice ThisType;
    typedef Aspose::Page::Device BaseType;
    typedef Aspose::Page::IMultiPageDevice BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::EPS::Ps2Aps::Ps2ApsBaseTest;
    
public:

    /// <summary> "Transparent" property key. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& TRANSPARENT();
    /// <summary> "Background" property key. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& BACKGROUND();
    /// <summary> "Background color" property key. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& BACKGROUND_COLOR();
    /// <summary> "Page size" property key. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& PAGE_SIZE();
    /// <summary> "Page margins" property key. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& PAGE_MARGINS();
    /// <summary> "Orientation" property key. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& ORIENTATION();
    /// <summary> "Fit content to page" property key. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& FIT_TO_PAGE();
    /// <summary> "Embed font in document" property key. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& EMBED_FONTS();
    /// <summary> "Emit warnings" property value. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& EMIT_WARNINGS();
    /// <summary> "Emit errors" property value. </summary>
    static ASPOSE_PAGE_SHARED_API System::String& EMIT_ERRORS();
    
    /// <summary> "Producer" property value. </summary>
    static ASPOSE_PAGE_SHARED_API System::String PRODUCER;
    
    /// <summary>
    /// Image format.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Imaging::ImageFormat> get_Format() const;
    /// <summary>
    /// Options for managing rendering process.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SaveOptions(System::SharedPtr<Aspose::Page::SaveOptions> value) override;
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
    ASPOSE_PAGE_SHARED_API System::Drawing::Size get_Size() override;
    /// <summary>
    /// Returns or specifies a size of the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::Size value) override;
    /// <summary>
    /// Indicates whether device uses direct RGB mode, that is RGB.        
    /// </summary>
    /// <returns>True if direct RGB mode and false otherwise, that is BGR.</returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::Color get_Background() override;
    /// <summary>
    /// Indicates whether device uses direct RGB mode, that is RGB.        
    /// </summary>
    /// <param name="value">True if direct RGB mode and false otherwise, that is BGR.</param>
    ASPOSE_PAGE_SHARED_API void set_Background(System::Drawing::Color value) override;
    /// <summary>
    /// Returns or specifies current background of the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Opacity() override;
    /// <summary>
    /// Returns or specifies current background of the page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Opacity(float value) override;
    /// <summary>
    /// Returns or specifies current stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Pen> get_Stroke() override;
    /// <summary>
    /// Returns or specifies current stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Stroke(System::SharedPtr<System::Drawing::Pen> value) override;
    /// <summary>
    /// Returns or specifies current paint.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> get_Paint() override;
    /// <summary>
    /// Returns or specifies current paint.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Paint(System::SharedPtr<System::Drawing::Brush> value) override;
    /// <summary>
    /// Returns or specifies current font.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<ITrFont> get_Font() override;
    /// <summary>
    /// Returns or specifies current font.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Font(System::SharedPtr<ITrFont> value) override;
    /// <summary>
    /// Returns or specifies current characters transform.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> get_CharTM() override;
    /// <summary>
    /// Returns or specifies current characters transform.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_CharTM(System::SharedPtr<System::Drawing::Drawing2D::Matrix> value) override;
    /// <summary>
    /// Returns or specifies current text rendering mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::TextRenderingMode get_TextRenderingMode() override;
    /// <summary>
    /// Returns or specifies current text rendering mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TextRenderingMode(Aspose::Page::TextRenderingMode value) override;
    /// <summary>
    /// Returns or specifies current text stroke width.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_TextStrokeWidth() override;
    /// <summary>
    /// Returns or specifies current text stroke width.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TextStrokeWidth(float value) override;
    /// <summary>
    /// Indicates whether device uses direct RGB mode, that is RGB.        
    /// </summary>
    /// <returns>True if direct RGB mode and false otherwise, that is BGR.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsDirectRGB() override;
    /// <summary>
    /// Current page number.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_CurrentPageNumber() override;
    /// <summary>
    /// Returns resulting images in bytes, one byte array for one page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::ArrayPtr<uint8_t>> get_ImagesBytes() const;
    /// <summary>
    /// Returns internal APS device. For testing purpose only.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<ApsDevice> get_InternalDevice() const;
    
    /// <summary>
    /// Initializes new instance of <see cref="ImageDevice"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API ImageDevice();
    /// <summary>
    /// Initializes new instance of <see cref="ImageDevice"></see> with specified size of a page.
    /// </summary>
    /// <param name="size">Page size. </param>
    ASPOSE_PAGE_SHARED_API ImageDevice(System::Drawing::Size size);
    /// <summary>
    /// Initializes new instance of <see cref="ImageDevice"></see> with specified image format.
    /// </summary>
    /// <param name="imageFormat">Format of the image. </param>
    ASPOSE_PAGE_SHARED_API ImageDevice(System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat);
    /// <summary>
    /// Initializes new instance of <see cref="ImageDevice"></see> with specified size of a page and image format.
    /// </summary>
    /// <param name="size">Page size. </param>
    /// <param name="imageFormat">Format of the image. </param>
    ASPOSE_PAGE_SHARED_API ImageDevice(System::Drawing::Size size, System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat);
    
    /// <summary>
    /// Reset device to initial state for whole document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void ReNew() override;
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
    ASPOSE_PAGE_SHARED_API void StartDocument() override;
    /// <summary>
    /// Makes necessary preparation of device after the document has been rendered.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void EndDocument() override;
    /// <summary>
    /// Disposes the device.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    /// <summary>
    /// Reset the device to initial state for a page.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Reset() override;
    /// <summary>
    /// Initializes numbers of pages to output.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void InitPageNumbers() override;
    /// <summary>
    /// Makes necessary preparation of the device before page rendering.
    /// </summary>
    /// <param name="title">The page title.</param>
    /// <returns>Always true.</returns>
    ASPOSE_PAGE_SHARED_API bool OpenPage(System::String title) override;
    /// <summary>
    /// Makes necessary preparation of the device before each page rendering.
    /// </summary>
    /// <param name="width">A width of the page.</param>
    /// <param name="height">A height of the page.</param>
    /// <returns>Always true.</returns>
    ASPOSE_PAGE_SHARED_API bool OpenPage(float width, float height) override;
    /// <summary>
    /// Makes necessary preparation of the device after page has been rendered.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void ClosePage() override;
    /// <summary>
    /// Updates page parameters from other multi-paged device.
    /// </summary>
    /// <param name="device"> Another instance of the same device. </param>
    ASPOSE_PAGE_SHARED_API void UpdatePageParameters(System::SharedPtr<IMultiPageDevice> device) override;
    /// <summary>
    /// Creates a copy of this device.
    /// </summary>
    /// <returns>Copy of this device.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::Device> Create() override;
    /// <summary>
    /// Initializes a clip of the device.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void InitClip() override;
    /// <summary>
    /// Draws a path.
    /// </summary>
    /// <param name="s"> A path to be drawn. </param>
    ASPOSE_PAGE_SHARED_API void Draw(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s) override;
    /// <summary>
    /// Fills a path.
    /// </summary>
    /// <param name="s"> A path to be filled. </param>
    ASPOSE_PAGE_SHARED_API void Fill(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> s) override;
    /// <summary>
    /// Draws an image with assigned transform and background.
    /// </summary>
    /// <param name="image"> An image to be drawn. </param>
    /// <param name="transform"> A transform. </param>
    /// <param name="bkg"> A background color. </param>
    ASPOSE_PAGE_SHARED_API void DrawImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::Drawing::Color bkg) override;
    /// <summary>
    /// Draws a string at given point.
    /// </summary>
    /// <param name="str"> A string to be drawn. </param>
    /// <param name="x"> X coordinate of point. </param>
    /// <param name="y"> Y coordinate of point. </param>
    ASPOSE_PAGE_SHARED_API void DrawString(System::String str, double x, double y) override;
    /// <summary>
    /// Gets the current transform.
    /// </summary>
    /// <returns> Current transform. </returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetTransform() override;
    /// <summary>
    /// Specifies current transform.
    /// </summary>
    /// <param name="transform"> A transform. </param>
    ASPOSE_PAGE_SHARED_API void SetTransform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Transforms the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="transform"> Transform to be applied. </param>
    ASPOSE_PAGE_SHARED_API void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) override;
    /// <summary>
    /// Translates the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="x"> Translation in X axis. </param>
    /// <param name="y"> Translation in Y axis. </param>
    ASPOSE_PAGE_SHARED_API void Translate(double x, double y) override;
    /// <summary>
    /// Rotate the current transformation matrix over the Z-axis. Calls writeTransform(Transform).
    /// Rotating with a positive angle theta rotates points on the positive x axis
    /// toward the positive y axis.
    /// </summary>
    /// <param name="theta"> Angle in radians over which to rotate. </param>
    ASPOSE_PAGE_SHARED_API void Rotate(double theta) override;
    /// <summary>
    /// Scales the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="sx"> A scale in X axis. </param>
    /// <param name="sy"> A scale in Y axis. </param>
    ASPOSE_PAGE_SHARED_API void Scale(double sx, double sy) override;
    /// <summary>
    /// Shears the current transformation matrix. Calls writeTransform(Transform).
    /// </summary>
    /// <param name="shx"> A shear in X axis. </param>
    /// <param name="shy"> A shear in Y axis. </param>
    ASPOSE_PAGE_SHARED_API void Shear(double shx, double shy) override;
    /// <summary>
    /// Clips shape.
    /// </summary>
    /// <param name="path"> Path that is used for clipping. </param>
    // PS only allows to intersect the currentClip so this calls clip(Shape).
    ASPOSE_PAGE_SHARED_API void SetClip(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path) override;
    /// <summary>
    /// Writes a comment.
    /// </summary>
    /// <param name="comment"> A comment to be written. </param>
    ASPOSE_PAGE_SHARED_API void WriteComment(System::String comment) override;
    /// <summary>
    /// Returns the name of device type.
    /// </summary>
    /// <returns>Type name.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Clone constructor. Initializes new instance of <see cref="ImageDevice"></see> with existing device.
    /// </summary>
    /// <param name="device"> Existing device. </param>
    /// <param name="doRestoreOnDispose">Use true if need to write restoring graphics state on disposing. </param>
    ASPOSE_PAGE_SHARED_API ImageDevice(System::SharedPtr<ImageDevice> device, bool doRestoreOnDispose);
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ImageDevice, CODEPORTING_ARGS(System::SharedPtr<ImageDevice> device, bool doRestoreOnDispose));
    /// <summary>
    /// Writes out current background.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void WriteBackground() override;
    /// <summary>
    /// Writes out the width of the stroke.
    /// </summary>
    /// <param name="width"> The width of the stroke </param>
    ASPOSE_PAGE_SHARED_API void WriteWidth(float width) override;
    /// <summary>
    /// Writes out the cap of the stroke.
    /// </summary>
    /// <param name="cap"> Line cap of the stroke. </param>
    ASPOSE_PAGE_SHARED_API void WriteCap(System::Drawing::Drawing2D::LineCap cap) override;
    /// <summary>
    /// Writes out the join of the stroke.
    /// </summary>
    /// <param name="join"> Line join of the stroke. </param>
    ASPOSE_PAGE_SHARED_API void WriteJoin(System::Drawing::Drawing2D::LineJoin join) override;
    /// <summary>
    /// Writes out the miter limit of the stroke.
    /// </summary>
    /// <param name="limit"> Miter limit of the stroke. </param>
    ASPOSE_PAGE_SHARED_API void WriteMiterLimit(float limit) override;
    /// <summary>
    /// Writes out the dash of the stroke.
    /// </summary>
    /// <param name="dash"> The dash pattern or an empty array if line is solid. </param>
    /// <param name="phase"> The phase of the dash pattern. </param>
    /// <param name="dashCap"> The dash cap of the dash pattern. </param>
    ASPOSE_PAGE_SHARED_API void WriteDash(System::ArrayPtr<double> dash, double phase, System::Drawing::Drawing2D::DashCap dashCap) override;
    /// <summary>
    /// Writes out paint as the given color.
    /// </summary>
    /// <param name="c"> The color to be written </param>
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::SolidBrush> c) override;
    /// <summary>
    /// Writes out paint as the given gradient.
    /// </summary>
    /// <param name="c"> The paint to be written </param>
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> c) override;
    /// <summary>
    /// Writes out paint as the given texture.
    /// </summary>
    /// <param name="c"> The paint to be written </param>
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::TextureBrush> c) override;
    /// <summary>
    /// Writes out paint.
    /// </summary>
    /// <param name="paint"> The paint to be written </param>
    ASPOSE_PAGE_SHARED_API void WritePaint(System::SharedPtr<System::Drawing::Brush> paint) override;
    /// <summary>
    /// Writes out a warning, by default to System.err.
    /// </summary>
    /// <param name="warning"> to be written </param>
    ASPOSE_PAGE_SHARED_API void WriteWarning(System::String warning) override;
    /// <summary>
    /// Writes out string with specified font.
    /// </summary>
    /// <param name="font"> Specified font. </param>
    /// <param name="str"> The string. </param>
    ASPOSE_PAGE_SHARED_API void WriteString(System::SharedPtr<ITrFont> font, System::String str) override;
    ASPOSE_PAGE_SHARED_API void SetVentureLicense(System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> license) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> GetVentureLicense() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~ImageDevice();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    static System::String rootKey;
    static System::SharedPtr<UserProperties> defaultProperties;
    System::SharedPtr<ApsDevice> apsd;
    System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat;
    System::SharedPtr<ImageBytesContainer> imagesBytesContainer;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
    void Init();
    System::String ToString_NonConst();
    static System::ArrayPtr<System::ArrayPtr<uint8_t>> SaveApsAsImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Rendering::ApsPage>>> apsPages, Aspose::Images::ImageTypeCore imageType);
    static System::ArrayPtr<uint8_t> renderPage(System::SharedPtr<Aspose::Rendering::ApsPage> page, int32_t number, Aspose::Images::ImageTypeCore imageType);
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


