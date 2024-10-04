#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Property.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class StringValue;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Specifies the optimal color profile given the current device configuration.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/joboptimaldestinationcolorprofile
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobOptimalDestinationColorProfile final : public Aspose::Page::XPS::XpsMetadata::Property, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobOptimalDestinationColorProfile ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes available color profiles.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS Profile final : public System::Object
    {
        typedef Profile ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Page::XPS::XpsMetadata::JobOptimalDestinationColorProfile;
        
    public:
    
        /// <summary>
        /// RGB profile.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobOptimalDestinationColorProfile::Profile> RGB;
        /// <summary>
        /// ICC profile.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobOptimalDestinationColorProfile::Profile> ICC;
        /// <summary>
        /// CMYK profile.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobOptimalDestinationColorProfile::Profile> CMYK;
        
    protected:
    
        System::SharedPtr<StringValue> get_Value() const;
        
    private:
    
        System::SharedPtr<StringValue> _value;
        
        Profile(System::String profile);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Profile, CODEPORTING_ARGS(System::String profile));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="profile">The color profile.</param>
    /// <param name="profileData">The color profile data content.</param>
    /// <param name="path">The pathe to the color profile.</param>
    ASPOSE_PAGE_SHARED_API JobOptimalDestinationColorProfile(System::SharedPtr<JobOptimalDestinationColorProfile::Profile> profile, System::String profileData, System::String path);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


