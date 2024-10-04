#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Feature.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class JobErrorSheet;
class ScoredProperty;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the error sheet output. The entire job will have a single error sheet. The error sheet
/// should be output on the default <see cref="PageMediaSize"></see> and using the default <see cref="PageMediaType"></see>.
/// The error sheet should to be isolated from the remainder of the job. This means that any finishing or
/// processing options (such as <code>JobDuplex</code>, <code>JobStaple</code>, or <code>JobBinding</code>)
/// should not include the error sheet. The error sheet should occur as the final sheet of the job.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/joberrorsheet
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobErrorSheet final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobErrorSheet ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="JobErrorSheet"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IJobErrorSheetItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IJobErrorSheetItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes inner <code>ErrorSheetWhen</code> feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS ErrorSheetWhen final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::JobErrorSheet::IJobErrorSheetItem
    {
        typedef ErrorSheetWhen ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::JobErrorSheet::IJobErrorSheetItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Describes the <see cref="ErrorSheetWhen"></see> feature options.
        /// </summary>
        class ASPOSE_PAGE_SHARED_CLASS ErrorSheetWhenOption final : public Aspose::Page::XPS::XpsMetadata::Option
        {
            typedef ErrorSheetWhenOption ThisType;
            typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
            
            typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
            ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
            
        public:
        
            /// <summary>
            /// Specifies an error sheet will be output for every job. 
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobErrorSheet::ErrorSheetWhen::ErrorSheetWhenOption> Always;
            /// <summary>
            /// Specifies an error sheet will be output only on error.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobErrorSheet::ErrorSheetWhen::ErrorSheetWhenOption> OnError;
            
        private:
        
            ErrorSheetWhenOption(System::String name);
            
            MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ErrorSheetWhenOption, CODEPORTING_ARGS(System::String name));
            
        };
        
        
    public:
    
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="options">An array of options specific for the feature.</param>
        ASPOSE_PAGE_SHARED_API ErrorSheetWhen(const System::ArrayPtr<System::SharedPtr<JobErrorSheet::ErrorSheetWhen::ErrorSheetWhenOption>>& options);
        
    };
    
    /// <summary>
    /// Describes the <see cref="JobErrorSheet"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS ErrorSheetOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::JobErrorSheet::IJobErrorSheetItem
    {
        typedef ErrorSheetOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::JobErrorSheet::IJobErrorSheetItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies a custom error sheet should be output. If a <see cref="JobErrorSheetSource"></see>
        /// <see cref="ParameterInit"></see> element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobErrorSheet::ErrorSheetOption> Custom;
        /// <summary>
        /// Specifies no error sheet should be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobErrorSheet::ErrorSheetOption> None;
        /// <summary>
        /// Specifies the standard (device defined) error sheet should be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobErrorSheet::ErrorSheetOption> Standard;
        
    protected:
    
        virtual ASPOSE_PAGE_SHARED_API ~ErrorSheetOption();
        
    private:
    
        ErrorSheetOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ErrorSheetOption, CODEPORTING_ARGS(System::String name));
        System::SharedPtr<JobErrorSheet::ErrorSheetOption> Add(System::SharedPtr<ScoredProperty> sp);
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobErrorSheet(const System::ArrayPtr<System::SharedPtr<JobErrorSheet::IJobErrorSheetItem>>& items);
    
protected:

    ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
    
private:

    static System::ArrayPtr<System::String> _names;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


