#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

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
class JobDeviceLanguage;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the device languages supported for sending data from driver to physical device.
/// This is often called "Page Description Language". This keyword defines what page description
/// language is supported by the driver and physical device.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobdevicelanguage
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobDeviceLanguage final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobDeviceLanguage ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="JobDeviceLanguageOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IJobDeviceLanguageOptionItem : public Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IJobDeviceLanguageOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes the <see cref="JobDeviceLanguage"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS JobDeviceLanguageOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef JobDeviceLanguageOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies device language is XPS.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> XPS;
        /// <summary>
        /// Specifies device language is PC-PR201.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> _201PL;
        /// <summary>
        /// Specified device language is ART.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> ART;
        /// <summary>
        /// Specified device language is ASCII.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> ASCII;
        /// <summary>
        /// Specified device language is CaPSL.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> CaPSL;
        /// <summary>
        /// Specified device language is ESC/P2.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> ESCP2;
        /// <summary>
        /// Specified device language is ESC/Page.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> ESCPage;
        /// <summary>
        /// Specified device language is HP-GL/2.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> HPGL2;
        /// <summary>
        /// Specified device language is KPDL.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> KPDL;
        /// <summary>
        /// Specified device language is KS.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> KS;
        /// <summary>
        /// Specified device language is KSSM.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> KSSM;
        /// <summary>
        /// Specified device language is PCL.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> PCL;
        /// <summary>
        /// Specified device language is PCL5c.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> PCL5c;
        /// <summary>
        /// Specified device language is PCL5e.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> PCL5e;
        /// <summary>
        /// Specified device language is PCL-XL.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> PCLXL;
        /// <summary>
        /// Specified device language is PostScript.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> PostScript;
        /// <summary>
        /// Specified device language is PPDS.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> PPDS;
        /// <summary>
        /// Specified device language is RPDL.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> RPDL;
        /// <summary>
        /// Specified device language is RTL.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> RTL;
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="name">An option name.</param>
        /// <param name="items">An arbitrary array of <see cref="IJobDeviceLanguageOptionItem"></see> instances.</param>
        ASPOSE_PAGE_SHARED_API JobDeviceLanguageOption(System::String name, const System::ArrayPtr<System::SharedPtr<JobDeviceLanguage::IJobDeviceLanguageOptionItem>>& items);
        /// <summary>
        /// Clones this option instance.
        /// </summary>
        /// <param name="option">An instance to clone.</param>
        ASPOSE_PAGE_SHARED_API JobDeviceLanguageOption(System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> option);
        
        /// <summary>
        /// Adds a list of <see cref="IJobDeviceLanguageOptionItem"></see> instances to the options.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IJobDeviceLanguageOptionItem"></see> instances.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> Add(const System::ArrayPtr<System::SharedPtr<JobDeviceLanguage::IJobDeviceLanguageOptionItem>>& items);
        /// <summary>
        /// Sets the <code>LanguageLevel</code> scored property value.
        /// </summary>
        /// <param name="languageLevel">The <code>LanguageLevel</code> scored property value.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> SetLanguageLevel(System::String languageLevel);
        /// <summary>
        /// Sets the <code>LanguageEncoding</code> scored property value.
        /// </summary>
        /// <param name="languageEncoding">The <code>LanguageEncoding</code> scored property value.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> SetLanguageEncoding(System::String languageEncoding);
        /// <summary>
        /// Sets the <code>LanguageVersion</code> scored property value.
        /// </summary>
        /// <param name="languageVersion">The <code>LanguageVersion</code> scored property value.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> SetLanguageVersion(System::String languageVersion);
        /// <summary>
        /// Clones this option instance. The shortcut to the cloneing constructor.
        /// </summary>
        /// <returns>The clone of this option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption> Clone();
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
        virtual ASPOSE_PAGE_SHARED_API ~JobDeviceLanguageOption();
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        
        JobDeviceLanguageOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobDeviceLanguageOption, CODEPORTING_ARGS(System::String name));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobDeviceLanguage(const System::ArrayPtr<System::SharedPtr<JobDeviceLanguage::JobDeviceLanguageOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


