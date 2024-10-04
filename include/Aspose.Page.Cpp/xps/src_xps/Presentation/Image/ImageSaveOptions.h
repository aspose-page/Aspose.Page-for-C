#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing.Drawing2D;
// using Aspose.Page.Drawing.Text;
// //using Size = Aspose.Page.Drawing.Size;
// using SmoothingMode = Aspose.Page.Drawing.Drawing2D.SmoothingMode;
// using InterpolationMode = Aspose.Page.Drawing.Drawing2D.InterpolationMode;
// using TextRenderingHint = Aspose.Page.Drawing.Text.TextRenderingHint;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include "Aspose.Page.Cpp/xps/src_xps/Presentation/IPipelineOptions.h"
#include "Aspose.Page.Cpp/xps/src_xps/Presentation/IEventBasedModificationOptions.h"
#include "Aspose.Page.Cpp/SaveOptions.h"
#include "Aspose.Page.Cpp/IMultiPageSaveOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Images
{
enum class ImageTypeCore;
} // namespace Images
namespace Page
{
namespace XPS
{
namespace Features
{
namespace EventBasedModifications
{
class BeforePageSavingEventHandler;
} // namespace EventBasedModifications
} // namespace Features
namespace Presentation
{
namespace Aps
{
class ApsSaveOptions;
} // namespace Aps
namespace Image
{
class GdiRenderer;
class ImageDevice;
class ImageRenderer;
} // namespace Image
} // namespace Presentation
class XpsDocument;
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
namespace Drawing2D
{
enum class InterpolationMode;
enum class SmoothingMode;
} // namespace Drawing2D
namespace Text
{
enum class TextRenderingHint;
} // namespace Text
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

namespace Image {

/// <summary>
/// Basic class for XPS-as-image saving options.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ImageSaveOptions : public Aspose::Page::SaveOptions, public Aspose::Page::IMultiPageSaveOptions, public Aspose::Page::XPS::Presentation::IPipelineOptions, public Aspose::Page::XPS::Presentation::IEventBasedModificationOptions
{
    typedef ImageSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    typedef Aspose::Page::IMultiPageSaveOptions BaseType1;
    typedef Aspose::Page::XPS::Presentation::IPipelineOptions BaseType2;
    typedef Aspose::Page::XPS::Presentation::IEventBasedModificationOptions BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Image::ImageDevice;
    friend class Aspose::Page::XPS::Presentation::Image::GdiRenderer;
    friend class Aspose::Page::XPS::Presentation::Image::ImageRenderer;
    friend class Aspose::Page::XPS::XpsDocument;
    
public:

    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<int32_t> get_PageNumbers() override;
    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_PageNumbers(System::ArrayPtr<int32_t> value) override;
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Resolution() const;
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Resolution(float value);
    /// <summary>
    /// Gets/sets the smoothing mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Drawing2D::SmoothingMode get_SmoothingMode() const;
    /// <summary>
    /// Gets/sets the smoothing mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode value);
    /// <summary>
    /// Gets/sets the text rendering hint.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Text::TextRenderingHint get_TextRenderingHint() const;
    /// <summary>
    /// Gets/sets the text rendering hint.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TextRenderingHint(System::Drawing::Text::TextRenderingHint value);
    /// <summary>
    /// Gets/sets the interpolation mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Drawing2D::InterpolationMode get_InterpolationMode() const;
    /// <summary>
    /// Gets/sets the interpolation mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_InterpolationMode(System::Drawing::Drawing2D::InterpolationMode value);
    /// <summary>
    /// Gets/sets the size of the output images in pixels.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Size get_ImageSize() const;
    /// <summary>
    /// Gets/sets the size of the output images in pixels.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ImageSize(System::Drawing::Size value);
    /// <summary>
    /// Specifies the size of a portion of pages to pass from node to node.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_BatchSize() override;
    /// <summary>
    /// Specifies the size of a portion of pages to pass from node to node.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_BatchSize(int32_t value) override;
    /// <summary>
    /// The collection of event handlers that performs modifications to an XPS page just before it is saved.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Page::XPS::Features::EventBasedModifications::BeforePageSavingEventHandler>>> get_BeforePageSavingEventHandlers() override;
    
    /// <summary>
    /// Creates new instance of options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions();
    
protected:

    ASPOSE_PAGE_SHARED_API bool get_OutlineCff() override;
    
    virtual System::String GetExtension() = 0;
    virtual Aspose::Images::ImageTypeCore GetNativeImageType() = 0;
    System::SharedPtr<Aspose::Page::XPS::Presentation::Aps::ApsSaveOptions> GetApsSaveOptions();
    
private:

    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Page::XPS::Features::EventBasedModifications::BeforePageSavingEventHandler>>> _beforePageSavingEventHandlers;
    System::ArrayPtr<int32_t> pr_PageNumbers;
    float pr_Resolution;
    System::Drawing::Drawing2D::SmoothingMode pr_SmoothingMode;
    System::Drawing::Text::TextRenderingHint pr_TextRenderingHint;
    System::Drawing::Drawing2D::InterpolationMode pr_InterpolationMode;
    System::Drawing::Size pr_ImageSize;
    int32_t pr_BatchSize;
    
};

} // namespace Image
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


