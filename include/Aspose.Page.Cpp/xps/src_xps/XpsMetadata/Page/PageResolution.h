#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/ScoredProperty.h"
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
class PageResolution;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Defines the page resolution of printed output as either a qualitative value or as dots per inch, or both.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageresolution
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageResolution final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageResolution ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="PageResolution"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageResolutionItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IPageResolutionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// The interface of any <see cref="PageResolutionOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageResolutionOptionItem : public virtual Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IPageResolutionOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Defines constants for the <code>QualitativeResolution</code> scored property value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS QualitativeResolution final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::PageResolution::IPageResolutionOptionItem
    {
        typedef QualitativeResolution ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageResolution::IPageResolutionOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Default value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageResolution::QualitativeResolution> Default;
        /// <summary>
        /// Draft value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageResolution::QualitativeResolution> Draft;
        /// <summary>
        /// High value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageResolution::QualitativeResolution> High;
        /// <summary>
        /// Normal value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageResolution::QualitativeResolution> Normal;
        /// <summary>
        /// Other value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageResolution::QualitativeResolution> Other;
        
    private:
    
        QualitativeResolution(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(QualitativeResolution, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Describes the <see cref="PageResolution"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageResolutionOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::PageResolution::IPageResolutionItem
    {
        typedef PageResolutionOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageResolution::IPageResolutionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="optionName">An options name.</param>
        /// <param name="items">An arbitrary array of <see cref="IPageResolutionOptionItem"></see> instances.</param>
        ASPOSE_PAGE_SHARED_API PageResolutionOption(System::String optionName, const System::ArrayPtr<System::SharedPtr<PageResolution::IPageResolutionOptionItem>>& items);
        
        /// <summary>
        /// Adds an array of <see cref="IPageResolutionOptionItem"></see> instances to the option.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IPageResolutionOptionItem"></see> instances.</param>
        /// <returns>This options instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageResolution::PageResolutionOption> Add(const System::ArrayPtr<System::SharedPtr<PageResolution::IPageResolutionOptionItem>>& items);
        /// <summary>
        /// Sets a <code>ResolutionX</code> scored property value.
        /// </summary>
        /// <param name="resolutionX">A <code>ResolutionX</code> scored property value.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageResolution::PageResolutionOption> SetResolutionX(int32_t resolutionX);
        /// <summary>
        /// Sets a <code>ResolutionY</code> scored property value.
        /// </summary>
        /// <param name="resolutionY">A <code>ResolutionY</code> scored property value.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageResolution::PageResolutionOption> SetResolutionY(int32_t resolutionY);
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
        virtual ASPOSE_PAGE_SHARED_API ~PageResolutionOption();
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageResolution(const System::ArrayPtr<System::SharedPtr<PageResolution::IPageResolutionItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


