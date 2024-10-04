#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
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
class DocumentHolePunch;
class HolePunch;
class JobHolePunch;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="JobHolePunch"></see> and <see cref="DocumentHolePunch"></see> features classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS HolePunch : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef HolePunch ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentHolePunch;
    friend class Aspose::Page::XPS::XpsMetadata::JobHolePunch;
    
public:

    /// <summary>
    /// Describes the <see cref="HolePunch"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS HolePunchOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef HolePunchOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies hole(s) along the bottom edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<HolePunch::HolePunchOption> BottomEdge;
        /// <summary>
        /// Specifies hole(s) along the left edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<HolePunch::HolePunchOption> LeftEdge;
        /// <summary>
        /// Specifies no hole punching.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<HolePunch::HolePunchOption> None;
        /// <summary>
        /// Specifies hole(s) along the right edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<HolePunch::HolePunchOption> RightEdge;
        /// <summary>
        /// Specifies hole(s) along the top edge.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<HolePunch::HolePunchOption> TopEdge;
        
    private:
    
        HolePunchOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HolePunchOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
protected:

    HolePunch(System::String name, const System::ArrayPtr<System::SharedPtr<HolePunch::HolePunchOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


