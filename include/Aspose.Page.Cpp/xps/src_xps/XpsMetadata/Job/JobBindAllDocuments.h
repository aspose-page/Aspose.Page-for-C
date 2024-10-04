#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/ScoredProperty.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
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
class JobBindAllDocuments;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the method of binding. All documents in the job are bound together.
/// <see cref="JobBindAllDocuments"></see> and <see cref="DocumentBinding"></see> are mutually exclusive.
/// It is up to the driver to determine constraint handling between these keywords.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobbindalldocuments
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobBindAllDocuments final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobBindAllDocuments ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="BindingOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IBindingOptionItem : public virtual Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IBindingOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes the way to specify the <code>BindingGutter</code> scored property value,
    /// whether by an integer value or by the reference to the <code>DocumentBindingGutter</code> parameter.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS BindingGutter final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::JobBindAllDocuments::IBindingOptionItem
    {
        typedef BindingGutter ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::JobBindAllDocuments::IBindingOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies the <code>BindingGutter</code> scored property value by the reference
        /// to the <code>DocumentBindingGutter</code> parameter.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingGutter> JobBindAllDocumentsGutter;
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="value">A scored property value.</param>
        ASPOSE_PAGE_SHARED_API BindingGutter(int32_t value);
        
    private:
    
        BindingGutter();
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BindingGutter, CODEPORTING_ARGS());
        
    };
    
    /// <summary>
    /// Describes the <see cref="JobBindAllDocuments"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS BindingOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef BindingOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies bale binding.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> Bale;
        /// <summary>
        /// Specifies binding along the bottom edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> BindBottom;
        /// <summary>
        /// Specifies binding along the left edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> BindLeft;
        /// <summary>
        /// Specifies binding along the right edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> BindRight;
        /// <summary>
        /// Specifies binding along the top edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> BindTop;
        /// <summary>
        /// Specifies booklet binding.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> Booklet;
        /// <summary>
        /// Specifies edge stitching along the bottom edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> EdgeStitchBottom;
        /// <summary>
        /// Specifies edge stitching along the left edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> EdgeStitchLeft;
        /// <summary>
        /// Specifies edge stitching along the right edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> EdgeStitchRight;
        /// <summary>
        /// Specifies edge stitching along the top edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> EdgeStitchTop;
        /// <summary>
        /// Specifies a folded binding.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> Fold;
        /// <summary>
        /// Specifies jog offset binding.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> JogOffset;
        /// <summary>
        /// Specifies trimming binding.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> Trim;
        /// <summary>
        /// Specifies no binding.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobBindAllDocuments::BindingOption> None;
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="name">An option name.</param>
        /// <param name="items">An array of legal child items.</param>
        ASPOSE_PAGE_SHARED_API BindingOption(System::String name, const System::ArrayPtr<System::SharedPtr<JobBindAllDocuments::IBindingOptionItem>>& items);
        
    private:
    
        BindingOption(System::String name, bool addBindingGutter = true);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BindingOption, CODEPORTING_ARGS(System::String name, bool addBindingGutter = true));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobBindAllDocuments(const System::ArrayPtr<System::SharedPtr<JobBindAllDocuments::BindingOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


