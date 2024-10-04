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
class Collate;
class DocumentCollate;
class IOptionItem;
class JobCollateAllDocuments;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="DocumentCollate"></see> and <see cref="JobCollateAllDocuments"></see> features classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Collate : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef Collate ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentCollate;
    friend class Aspose::Page::XPS::XpsMetadata::JobCollateAllDocuments;
    
public:

    /// <summary>
    /// Describes the <see cref="DocumentCollate"></see> and <see cref="JobCollateAllDocuments"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS CollateOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef CollateOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies collating.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Collate::CollateOption> Collated;
        /// <summary>
        /// Specifies no collating.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Collate::CollateOption> Uncollated;
        
    private:
    
        CollateOption(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CollateOption, CODEPORTING_ARGS(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
protected:

    Collate(System::String name, const System::ArrayPtr<System::SharedPtr<Collate::CollateOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


