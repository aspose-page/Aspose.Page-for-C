#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/IPagePrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Feature.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class PageOutputColor;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the characteristics of the color settings for the output.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageoutputcolor
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageOutputColor final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageOutputColor ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="PageOutputColor"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageOutputColorItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IPageOutputColorItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// The interface of any <see cref="PageOutputColorOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageOutputColorOptionItem : public Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IPageOutputColorOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes the <see cref="PageOutputColor"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageOutputColorOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::PageOutputColor::IPageOutputColorItem
    {
        typedef PageOutputColorOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageOutputColor::IPageOutputColorItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies the output should be in color.
        /// </summary>
        /// <param name="deviceBitsPerPixel">A <em>DeviceBitsPerPixel</em> scored property value
        /// that indicates the number of bits per pixel of color data supported by the printer.</param>
        /// <param name="driverBitsPerPixel">A <em>DriverBitsPerPixel</em> scored property value
        /// that indicates the number of bits per pixel that the core driver should use for its bitmap rendering buffer.</param>
        /// <returns>The <em>PageOutputColor</em> options.</returns>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputColor::PageOutputColorOption> Color(int32_t deviceBitsPerPixel, int32_t driverBitsPerPixel);
        /// <summary>
        /// Specifies the output should be in grayscale.
        /// </summary>
        /// <param name="deviceBitsPerPixel">A <em>DeviceBitsPerPixel</em> scored property value
        /// that indicates the number of bits per pixel of color data supported by the printer.</param>
        /// <param name="driverBitsPerPixel">A <em>DriverBitsPerPixel</em> scored property value
        /// that indicates the number of bits per pixel that the core driver should use for its bitmap rendering buffer.</param>
        /// <returns>The <em>PageOutputColor</em> options.</returns>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputColor::PageOutputColorOption> Grayscale(int32_t deviceBitsPerPixel, int32_t driverBitsPerPixel);
        /// <summary>
        /// Specifies the output should be in monochrome (Black).
        /// </summary>
        /// <param name="deviceBitsPerPixel">A <em>DeviceBitsPerPixel</em> scored property value
        /// that indicates the number of bits per pixel of color data supported by the printer.</param>
        /// <param name="driverBitsPerPixel">A <em>DriverBitsPerPixel</em> scored property value
        /// that indicates the number of bits per pixel that the core driver should use for its bitmap rendering buffer.</param>
        /// <returns>The <em>PageOutputColor</em> options.</returns>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputColor::PageOutputColorOption> Monochrome(int32_t deviceBitsPerPixel, int32_t driverBitsPerPixel);
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="optionName">An options name.</param>
        /// <param name="items">An arbitrary array of <see cref="IPageOutputColorOptionItem"></see> instances.</param>
        ASPOSE_PAGE_SHARED_API PageOutputColorOption(System::String optionName, const System::ArrayPtr<System::SharedPtr<PageOutputColor::IPageOutputColorOptionItem>>& items);
        
        /// <summary>
        /// Adds an array of <see cref="IPageOutputColorOptionItem"></see> instances to the option.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IPageOutputColorOptionItem"></see> instances.</param>
        /// <returns>This options instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputColor::PageOutputColorOption> Add(const System::ArrayPtr<System::SharedPtr<PageOutputColor::IPageOutputColorOptionItem>>& items);
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
        virtual ASPOSE_PAGE_SHARED_API ~PageOutputColorOption();
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        
        PageOutputColorOption(System::String optionName);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageOutputColorOption, CODEPORTING_ARGS(System::String optionName));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageOutputColor(const System::ArrayPtr<System::SharedPtr<PageOutputColor::IPageOutputColorItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


