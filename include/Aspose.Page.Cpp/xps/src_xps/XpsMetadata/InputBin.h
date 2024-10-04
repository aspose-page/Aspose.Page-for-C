#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/ScoredProperty.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Property.h"
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
class DocumentInputBin;
class InputBin;
class JobInputBin;
class PageInputBin;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="JobInputBin"></see>, <see cref="DocumentInputBin"></see>
/// and <see cref="PageInputBin"></see> features classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS InputBin : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef InputBin ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentInputBin;
    friend class Aspose::Page::XPS::XpsMetadata::JobInputBin;
    friend class Aspose::Page::XPS::XpsMetadata::PageInputBin;
    
public:

    /// <summary>
    /// The interface of any <see cref="JobInputBin"></see>, <see cref="DocumentInputBin"></see>
    /// and <see cref="PageInputBin"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IInputBinItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IInputBinItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// The interface of any <see cref="InputBinOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IInputBinOptionItem : public virtual Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IInputBinOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Defines constants for the <em>BinType</em> scored property value
    /// that specify the type of the bin.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS BinType final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef BinType ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// ContinuousFeed value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::BinType> ContinuousFeed;
        /// <summary>
        /// SheetFeed value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::BinType> SheetFeed;
        
    private:
    
        BinType(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BinType, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <em>FeedType</em> scored property value
    /// that specify the feed mechanism of the bin.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS FeedType final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef FeedType ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Automatic value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::FeedType> Automatic;
        /// <summary>
        /// Manual value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::FeedType> Manual;
        
    private:
    
        FeedType(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FeedType, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Define constants for the <em>MediaCapacity</em> scored property value
    /// that specify whether the bin is a high capacity bin (qualitative).
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS MediaCapacity final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef MediaCapacity ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// High value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::MediaCapacity> High;
        /// <summary>
        /// Standard value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::MediaCapacity> Standard;
        
    private:
    
        MediaCapacity(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MediaCapacity, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <em>MediaSizeAutoSense</em> scored property value
    /// that specifies the media size auto sense capability of the device.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS MediaSizeAutoSense final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef MediaSizeAutoSense ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Supported value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::MediaSizeAutoSense> Supported;
        /// <summary>
        /// None value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::MediaSizeAutoSense> None;
        
    private:
    
        MediaSizeAutoSense(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MediaSizeAutoSense, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <em>MediaTypeAutoSense</em> scored property value
    /// that specify the media capacity in number of pages (full level) of the bin.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS MediaTypeAutoSense final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef MediaTypeAutoSense ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Supported value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::MediaTypeAutoSense> Supported;
        /// <summary>
        /// None value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::MediaTypeAutoSense> None;
        
    private:
    
        MediaTypeAutoSense(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MediaTypeAutoSense, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines the <em>MediaSheetCapacity</em> scored property value
    /// that specifies the Media capacity in number of pages (full level) of the bin.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS MediaSheetCapacity final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef MediaSheetCapacity ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
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
    /// Defines constants for the <em>MediaPath</em> scored property value
    /// that specify the characteristics of the media path.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS MediaPath final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef MediaPath ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Straight value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::MediaPath> Straight;
        /// <summary>
        /// Serpentine value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::MediaPath> Serpentine;
        
    private:
    
        MediaPath(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MediaPath, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <em>FeedFace</em> property value
    /// that specify whether media is to be printed face up or face down.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS FeedFace final : public Aspose::Page::XPS::XpsMetadata::Property, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef FeedFace ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// FaceUp value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::FeedFace> FaceUp;
        /// <summary>
        /// FaceDown value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::FeedFace> FaceDown;
        
    private:
    
        FeedFace(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FeedFace, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <em>FeedDirection</em> property value
    /// that specify whether media is fed long edge first or short edge first.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS FeedDirection final : public Aspose::Page::XPS::XpsMetadata::Property, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem
    {
        typedef FeedDirection ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// LongEdgeFirst value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::FeedDirection> LongEdgeFirst;
        /// <summary>
        /// LongEdgeFirst value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::FeedDirection> ShortEdgeFirst;
        
    private:
    
        FeedDirection(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FeedDirection, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Describes the <see cref="JobInputBin"></see>, <see cref="DocumentInputBin"></see>
    /// and <see cref="PageInputBin"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS InputBinOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinItem
    {
        typedef InputBinOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::InputBin::IInputBinItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Device will automatically choose best option based on configuration.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::InputBinOption> AutoSelect;
        /// <summary>
        /// Specifies the default manual feed bin.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::InputBinOption> Manual;
        /// <summary>
        /// Specifies the feed bin is a cassette.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::InputBinOption> Cassette;
        /// <summary>
        /// Specifies the feed bin is a tractor.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::InputBinOption> Tractor;
        /// <summary>
        /// Device Input tray for Inkjet Printers.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::InputBinOption> AutoSheetFeeder;
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="optionName">An options name.</param>
        /// <param name="items">An arbitrary array of <see cref="IInputBinOptionItem"></see> instances.</param>
        ASPOSE_PAGE_SHARED_API InputBinOption(System::String optionName, const System::ArrayPtr<System::SharedPtr<InputBin::IInputBinOptionItem>>& items);
        
        /// <summary>
        /// Adds an array of <see cref="IInputBinOptionItem"></see> instances to the option.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IInputBinOptionItem"></see> instances.</param>
        /// <returns>This options instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::InputBinOption> Add(const System::ArrayPtr<System::SharedPtr<InputBin::IInputBinOptionItem>>& items);
        /// <summary>
        /// Clones this option instance.
        /// </summary>
        /// <returns>The clone of this option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<InputBin::InputBinOption> Clone();
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
        virtual ASPOSE_PAGE_SHARED_API ~InputBinOption();
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        
        /// <summary>
        /// Clones this option instance.
        /// </summary>
        /// <param name="option">An instance to clone.</param>
        InputBinOption(System::SharedPtr<InputBin::InputBinOption> option);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InputBinOption, CODEPORTING_ARGS(System::SharedPtr<InputBin::InputBinOption> option));
        
        InputBinOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InputBinOption, CODEPORTING_ARGS(System::String name));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
protected:

    InputBin(System::String name, const System::ArrayPtr<System::SharedPtr<InputBin::IInputBinItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


