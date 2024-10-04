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
class DocumentRollCut;
class JobRollCutAtEndOfJob;
class RollCut;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="JobRollCutAtEndOfJob"></see> and <see cref="DocumentRollCut"></see> features classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS RollCut : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef RollCut ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentRollCut;
    friend class Aspose::Page::XPS::XpsMetadata::JobRollCutAtEndOfJob;
    
public:

    /// <summary>
    /// Describes the <see cref="JobRollCutAtEndOfJob"></see> and <see cref="DocumentRollCut"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS RollCutOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef RollCutOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies cutting method for banner (<see cref="DocumentRollCut"></see> only).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<RollCut::RollCutOption> Banner;
        /// <summary>
        /// Specifies cutting at the edge of the image.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<RollCut::RollCutOption> CutSheetAtImageEdge;
        /// <summary>
        /// Specifies cutting for standard media size.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<RollCut::RollCutOption> CutSheetAtStandardMediaSize;
        /// <summary>
        /// Specifies no job roll cut.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<RollCut::RollCutOption> None;
        
    private:
    
        RollCutOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RollCutOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
protected:

    RollCut(System::String name, const System::ArrayPtr<System::SharedPtr<RollCut::RollCutOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


