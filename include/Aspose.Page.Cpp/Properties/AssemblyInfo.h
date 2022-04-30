#pragma once
//Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.
// General Information about an assembly is controlled through the following
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.

// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #if ASSEMBLY_OBFUSCATE_EMBED


// C# preprocessor directive: #if THIS_EMPTY_ASSEMBLY

// C# INACTIVE CODE:
// [assembly: AssemblyProduct("Aspose.Page")]
// [assembly: AssemblyTitle("Aspose.Page")]

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// [assembly: AssemblyProduct("Aspose.Page.Public")]
// [assembly: AssemblyTitle("Aspose.Page.Public")]

// C# preprocessor directive: #endif


// C# preprocessor directive: #else

// C# INACTIVE CODE:
// [assembly: AssemblyProduct("Aspose.Page")]
// [assembly: AssemblyTitle("Aspose.Page")]

// C# preprocessor directive: #endif


// C# preprocessor directive: #endif

//[assembly: Obfuscation(Feature = "encrypt symbol names with password babushka_varila_kashu", Exclude = false)]
//[assembly: Obfuscation(Feature = "treat warning EF-4008 as error")]
//[assembly: Obfuscation(Feature = "Apply to type  Aspose.Rendering.Pdf* when internal and enum: renaming", Exclude = true, ApplyToMembers = true)]

// C# preprocessor directive: #if ASSEMBLY_OBFUSCATE_EMBED


// C# preprocessor directive: #if EMBED_DEPENDENCIES

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = @"ilmerge custom parameters: /log:$(SolutionDir)..\..\..\..\..\merge_obfuscate.log", Exclude = false)]

// C# preprocessor directive: #else


// C# preprocessor directive: #if !THIS_EMPTY_ASSEMBLY

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = "encrypt resources [compress]", Exclude = false)]

// C# preprocessor directive: #endif


// C# preprocessor directive: #if NETSTANDARD2_0 || NETSTANDARD2_1 || NET5_0

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = "merge with [internalization=full] Aspose.Foundation.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = "merge with [internalization=full] Aspose.Font.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = "merge with [internalization=full] Aspose.Icc.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = @"merge with Aspose.Page.Public.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = @"ilmerge custom parameters: /internalize:$(SolutionDir)..\..\build\config\internalize_exclude.txt /log:$(SolutionDir)..\..\build-out\bin\merge_obfuscate_core.log", Exclude = false)]

// C# preprocessor directive: #else


// C# preprocessor directive: #if THIS_EMPTY_ASSEMBLY

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = @"merge with Aspose.Page.Public.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = "merge with Aspose.Font.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = @"ilmerge custom parameters: /internalize:$(InputDir)..\..\..\..\build\config\internalize_exclude.txt /log:$(InputDir)..\..\..\..\merge_obfuscate.log", Exclude = false)]
// //[assembly: Obfuscation(Feature = @"ilmerge custom parameters: /internalize:$(SolutionDir)..\..\..\..\config\internalize_exclude.txt /log:$(SolutionDir)..\..\..\..\..\merge_obfuscate.log", Exclude = false)]

// C# preprocessor directive: #endif


// C# preprocessor directive: #endif


// C# preprocessor directive: #if UNIT_TEST && !NETSTANDARD2_0 && !NETSTANDARD2_1 && !NET5_0

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = "merge with [internalization=none] Aspose.EPS.Tests.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = "merge with [internalization=none] Aspose.XPS.Tests.dll", Exclude = false)]

// C# preprocessor directive: #endif


// C# preprocessor directive: #endif


// C# preprocessor directive: #endif

// The following GUID is for the ID of the typelib if this project is exposed to COM
//[assembly: Guid("0aa7f792-8829-4945-8444-c1018ca100e1")]

#include <system/string.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {


// C# preprocessor directive: #if !THIS_EMPTY_ASSEMBLY || !ASSEMBLY_OBFUSCATE_EMBED

/// <summary>
/// Defines the constants that participate in the license check for the component.
/// These used to be defined directly as assembly attributes, but I moved them into
/// separate class because in .NET Compact Framework I cannot access assembly attributes.
/// Now the licensing code when compiled for the .NET Compact Framework uses these constants
/// instead of the assembly attributes.
/// </summary>
class AssemblyConstants : public System::Object
{
    typedef AssemblyConstants ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static const System::String Title;
    /// <summary>
    /// This is used by Aspose licensing code to verify the license is for the correct product.
    /// </summary>
    static const System::String Product;
    /// <summary>
    /// This is used by Aspose licensing code to verify the license is for the correct product.
    /// Temporarily Aspose.EPS license will be valid for Aspose.Page too.
    /// </summary>
    static const System::String Product2;
    /// <summary>
    /// This is used by Aspose licensing code to verify the license is for the correct product.
    /// Temporarily Aspose.XPS license will be valid for Aspose.Page too.
    /// </summary>
    static const System::String Product3;
    static const System::String Platform;
    /// <summary>
    /// The version of the assembly.
    /// </summary>
    static const System::String Version;
    /// <summary>
    /// This is used by Aspose licensing code to check for subscription expiry.
    /// You need to set this to the date you publish a release or a hotfix.
    /// </summary>
    static const System::String ReleaseDate;
    /// <summary>
    /// The producer of the output documents.
    /// </summary>
    static const System::String Producer;
    static const System::String Family;
    /// @deprecated This is for original Aspose.Page tests
    static const System::String PRODUCT;
    /// @deprecated This is for original Aspose.Page tests
    static const System::String VERSION;
    
};

/// <summary>
/// This class provides information about current product build.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS BuildVersionInfo final : public System::Object
{
    typedef BuildVersionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Assembly Version
    /// </summary>
    static const ASPOSE_PAGE_SHARED_API System::String AssemblyVersion;
    /// <summary>
    /// Product Name
    /// </summary>
    static const ASPOSE_PAGE_SHARED_API System::String Product;
    /// <summary>
    /// File Version
    /// </summary>
    static const ASPOSE_PAGE_SHARED_API System::String FileVersion;
    
};

/// <summary>
/// The <b>Aspose.Page</b> is a root namespace for all classes of Aspose.Page library which are either directly in it like <b>Device</b> or indirectly through several subnamespaces.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

//#else
//internal sealed class BuildVersionInfo

// C# preprocessor directive: #endif

} // namespace Page
} // namespace Aspose


