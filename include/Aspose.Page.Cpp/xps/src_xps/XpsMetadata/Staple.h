#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
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
class DocumentStaple;
class JobStapleAllDocuments;
class Staple;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="JobStapleAllDocuments"></see> and <see cref="DocumentStaple"></see> features classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Staple : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef Staple ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentStaple;
    friend class Aspose::Page::XPS::XpsMetadata::JobStapleAllDocuments;
    
public:

    /// <summary>
    /// The interface of any <see cref="StapleOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IStapleOptionItem : public Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IStapleOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes the <see cref="JobStapleAllDocuments"></see> and <see cref="DocumentStaple"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS StapleOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef StapleOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies saddle stitch stapling.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> SaddleStitch;
        /// <summary>
        /// Specifies a single staple in the bottom, left corner.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> StapleBottomLeft;
        /// <summary>
        /// Specifies a single staple in the bottom, right corner.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> StapleBottomRight;
        /// <summary>
        /// Specifies two staples along the bottom edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> StapleDualBottom;
        /// <summary>
        /// Specifies two staples along the left edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> StapleDualLeft;
        /// <summary>
        /// Specifies two staples along the right edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> StapleDualRight;
        /// <summary>
        /// Specifies two staples along the top edge
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> StapleDualTop;
        /// <summary>
        /// Specifies no stapling.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> None;
        /// <summary>
        /// Specifies a single staple in the top, left corner.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> StapleTopLeft;
        /// <summary>
        /// Specifies a single staple in the top, right corner.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> StapleTopRight;
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="optionName">An options name.</param>
        /// <param name="items">An arbitrary array of <see cref="IStapleOptionItem"></see> instances.</param>
        ASPOSE_PAGE_SHARED_API StapleOption(System::String optionName, const System::ArrayPtr<System::SharedPtr<Staple::IStapleOptionItem>>& items);
        
        /// <summary>
        /// Adds an array of <see cref="IStapleOptionItem"></see> instances to the feature.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IStapleOptionItem"></see> instances.</param>
        /// <returns>This options instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> Add(const System::ArrayPtr<System::SharedPtr<Staple::IStapleOptionItem>>& items);
        /// <summary>
        /// Sets an <em>Angle</em> scored property value.
        /// </summary>
        /// <param name="angle">An <em>Angle</em> scored property value.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> SetAngle(int32_t angle);
        /// <summary>
        /// Sets an <em>SheetCapacity</em> scored property value.
        /// </summary>
        /// <param name="sheetCapacity">An <em>SheetCapacity</em> scored property value.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<Staple::StapleOption> SetSheetCapacity(int32_t sheetCapacity);
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
        virtual ASPOSE_PAGE_SHARED_API ~StapleOption();
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        
        StapleOption(System::String optionName);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StapleOption, CODEPORTING_ARGS(System::String optionName));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
protected:

    Staple(System::String name, const System::ArrayPtr<System::SharedPtr<Staple::StapleOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


