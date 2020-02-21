#pragma once
// General Information about an assembly is controlled through the following
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.
//[assembly: Obfuscation(Feature = "treat warning EF-4008 as error")]

// C# preprocessor directive: #if ASSEMBLY_OBFUSCATE_EMBED


// C# preprocessor directive: #if EMBED_DEPENDENCIES

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = @"ilmerge custom parameters: /log:$(SolutionDir)..\..\..\..\..\merge_obfuscate.log", Exclude = false)]

// C# preprocessor directive: #else


// C# preprocessor directive: #if !THIS_EMPTY_ASSEMBLY

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = "encrypt resources [compress]", Exclude = false)]

// C# preprocessor directive: #endif


// C# preprocessor directive: #if NETSTANDARD2_0

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = "merge with [internalization=full] Aspose.Foundation.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = "merge with [internalization=full] Aspose.Font.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = "merge with [internalization=full] Aspose.Icc.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = @"merge with Aspose.Page.Internal.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = @"ilmerge custom parameters: /internalize:$(SolutionDir)..\..\build\config\internalize_exclude.txt /log:$(SolutionDir)..\..\build-out\bin\merge_obfuscate2.log", Exclude = false)]

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = @"merge with Aspose.Page.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = @"ilmerge custom parameters: /internalize:$(SolutionDir)..\..\..\..\config\internalize_exclude.txt /log:$(SolutionDir)..\..\..\..\..\merge_obfuscate.log", Exclude = false)]

// C# preprocessor directive: #endif


// C# preprocessor directive: #if UNIT_TEST && !NETSTANDARD2_0

// C# INACTIVE CODE:
// [assembly: Obfuscation(Feature = "merge with [internalization=none] Aspose.EPS.Tests.dll", Exclude = false)]
// [assembly: Obfuscation(Feature = "merge with [internalization=none] Aspose.XPS.Tests.dll", Exclude = false)]

// C# preprocessor directive: #endif


// C# preprocessor directive: #endif


// C# preprocessor directive: #endif

// The following GUID is for the ID of the typelib if this project is exposed to COM
//[assembly: Guid("0aa7f792-8829-4945-8444-c1018ca100e1")]

#include <system/string.h>
#include <system/object.h>

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
    static const System::String Product;
    static const System::String Product2;
    static const System::String Product3;
    static const System::String PRODUCT;
    static const System::String Version;
    static const System::String VERSION;
    static const System::String ReleaseDate;
    static const System::String Producer;
    
};

/// <summary>
/// This class provides information about current product build.
/// </summary>
class BuildVersionInfo FINAL : public System::Object
{
    typedef BuildVersionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    static const ASPOSE_PAGE_SHARED_API System::String AssemblyVersion;
    static const ASPOSE_PAGE_SHARED_API System::String Product;
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


