#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/ScoredProperty.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
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
class DocumentOutputBin;
class JobOutputBin;
class OutputBin;
class PageOutputBin;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="JobOutputBin"></see>, <see cref="DocumentOutputBin"></see> and <see cref="PageOutputBin"></see>
/// features classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS OutputBin : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef OutputBin ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentOutputBin;
    friend class Aspose::Page::XPS::XpsMetadata::PageOutputBin;
    friend class Aspose::Page::XPS::XpsMetadata::JobOutputBin;
    
public:

    /// <summary>
    /// The interface of any <see cref="JobOutputBin"></see>, <see cref="DocumentOutputBin"></see> and
    /// <see cref="PageOutputBin"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IOutputBinItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IOutputBinItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// The interface of any <see cref="OutputBinOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IOutputBinOptionItem : public virtual Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IOutputBinOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Defines constants for the <em>BinType</em> scored property value
    /// that specify the general type of the bin.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS BinType final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::OutputBin::IOutputBinOptionItem
    {
        typedef BinType ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::OutputBin::IOutputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// MailBox bin.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<OutputBin::BinType> MailBox;
        /// <summary>
        /// Sorter bin.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<OutputBin::BinType> Sorter;
        /// <summary>
        /// Stacker bin.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<OutputBin::BinType> Stacker;
        /// <summary>
        /// Finisher bin.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<OutputBin::BinType> Finisher;
        /// <summary>
        /// None of the above.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<OutputBin::BinType> None;
        
    private:
    
        BinType(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BinType, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines the <em>MediaSheetCapacity</em> scored property value
    /// that specifies the Media capacity in number of pages (full level) of the bin.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS MediaSheetCapacity final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::OutputBin::IOutputBinOptionItem
    {
        typedef MediaSheetCapacity ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::OutputBin::IOutputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="mediaSheetCapacity">A <em>MediaSheetCapacity</em> scored property value.</param>
        ASPOSE_PAGE_SHARED_API MediaSheetCapacity(int32_t mediaSheetCapacity);
        
    };
    
    /// <summary>
    /// Describes the <see cref="JobOutputBin"></see>, <see cref="DocumentOutputBin"></see> and
    /// <see cref="PageOutputBin"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS OutputBinOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::OutputBin::IOutputBinItem
    {
        typedef OutputBinOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::OutputBin::IOutputBinItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IOutputBinOptionItem"></see> instances.</param>
        ASPOSE_PAGE_SHARED_API OutputBinOption(const System::ArrayPtr<System::SharedPtr<OutputBin::IOutputBinOptionItem>>& items);
        
        /// <summary>
        /// Adds an array of <see cref="IOutputBinOptionItem"></see> instances to the feature.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IOutputBinOptionItem"></see> instances.</param>
        /// <returns>This options instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<OutputBin::OutputBinOption> Add(const System::ArrayPtr<System::SharedPtr<OutputBin::IOutputBinOptionItem>>& items);
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
        virtual ASPOSE_PAGE_SHARED_API ~OutputBinOption();
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
protected:

    OutputBin(System::String name, const System::ArrayPtr<System::SharedPtr<OutputBin::IOutputBinItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


