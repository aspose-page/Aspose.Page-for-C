#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
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
class DocumentNUp;
class JobNUpAllDocumentsContiguously;
class NUp;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="JobNUpAllDocumentsContiguously"></see> and <see cref="DocumentNUp"></see>
/// features classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS NUp : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef NUp ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentNUp;
    friend class Aspose::Page::XPS::XpsMetadata::JobNUpAllDocumentsContiguously;
    
public:

    /// <summary>
    /// The interface of any <see cref="JobNUpAllDocumentsContiguously"></see> or <see cref="DocumentNUp"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS INUpItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef INUpItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes inner <code>PresentationDirection</code> feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PresentationDirection final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::NUp::INUpItem
    {
        typedef PresentationDirection ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::NUp::INUpItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Describes the <see cref="PresentationDirection"></see> feature options.
        /// </summary>
        class ASPOSE_PAGE_SHARED_CLASS PresentationDirectionOption final : public Aspose::Page::XPS::XpsMetadata::Option
        {
            typedef PresentationDirectionOption ThisType;
            typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
            
            typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
            ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
            
        public:
        
            /// <summary>
            /// Specifies left to right, top to bottom.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption> RightBottom;
            /// <summary>
            /// Specifies top to bottom, left to right.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption> BottomRight;
            /// <summary>
            /// Specifies right to left, top to bottom.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption> LeftBottom;
            /// <summary>
            /// Specifies top to bottom, right to left.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption> BottomLeft;
            /// <summary>
            /// Specifies left to right, bottom to top.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption> RightTop;
            /// <summary>
            /// Specifies bottom to top, left to right.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption> TopRight;
            /// <summary>
            /// Specifies right to left, bottom to top.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption> LeftTop;
            /// <summary>
            ///  Specifies bottom to top, right to left.
            /// </summary>
            static ASPOSE_PAGE_SHARED_API System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption> TopLeft;
            
        private:
        
            PresentationDirectionOption(System::String name);
            
            MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PresentationDirectionOption, CODEPORTING_ARGS(System::String name));
            
        };
        
        
    public:
    
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="options">An array of options specific for the feature.</param>
        ASPOSE_PAGE_SHARED_API PresentationDirection(const System::ArrayPtr<System::SharedPtr<NUp::PresentationDirection::PresentationDirectionOption>>& options);
        
    };
    
    
protected:

    NUp(System::String name, const System::ArrayPtr<System::SharedPtr<NUp::INUpItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


