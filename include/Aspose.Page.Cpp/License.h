#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.
// RK: When EMBEDDED is defined, the licensing code is not included in the component.
// This results in a built that can be embedded in another Aspose component.
// When a component is embedded in another Aspose component, they must be 
// obfuscated into a single assembly so the embedded component is not publicly accessible.

// C# preprocessor directive: #if !EMBEDDED

//27/10/2004 by Roman Korchagin
//This file contains all client side licensing for the new Aspose licensing system released in 2004.
//Just include this file in your component and follow instructions and examples how to use it.
//NOTE The code in this file was manually tuned so some crucial functions fail 
//to decompile in Reflector as of 5/11/05. 
//using Aspose.Pdf.LicenseManagement.Hackers;
// To compile licensing for your product, make sure your product is mentioned here and add a conditional 
// compilation constant to your project properties (both to Debug and Release configurations).

// C# preprocessor directive: #if ASPOSE_WORDS

// C# INACTIVE CODE:
// namespace Aspose.Words

// C# preprocessor directive: #elif ASPOSE_WORDS_REPORTING_SERVICES

// C# INACTIVE CODE:
// namespace Aspose.Words.ReportingServices

// C# preprocessor directive: #elif ASPOSE_CELLS

// C# INACTIVE CODE:
// namespace Aspose.Cells

// C# preprocessor directive: #elif ASPOSE_SLIDES

// C# INACTIVE CODE:
// namespace Aspose.Slides

// C# preprocessor directive: #elif ASPOSE_TASKS

// C# INACTIVE CODE:
// namespace Aspose.Tasks

// C# preprocessor directive: #elif ASPOSE_PDF || ASPOSE_PDF_DOM

// C# INACTIVE CODE:
// namespace Aspose.Pdf

// C# preprocessor directive: #elif ASPOSE_CHART

// C# INACTIVE CODE:
// namespace Aspose.Chart

// C# preprocessor directive: #elif ASPOSE_SPELL

// C# INACTIVE CODE:
// namespace Aspose.Spell

// C# preprocessor directive: #elif ASPOSE_EMAIL

// C# INACTIVE CODE:
// namespace Aspose.Email

// C# preprocessor directive: #elif ASPOSE_MIME

// C# INACTIVE CODE:
// namespace Aspose.Mime

// C# preprocessor directive: #elif ASPOSE_ADHOC

// C# INACTIVE CODE:
// namespace Aspose.AdHoc

// C# preprocessor directive: #elif ASPOSE_ASPXPAND

// C# INACTIVE CODE:
// namespace Aspose.ASPXPand

// C# preprocessor directive: #elif ASPOSE_GRID

// C# INACTIVE CODE:
// namespace Aspose.Grid

// C# preprocessor directive: #elif ASPOSE_BARCODE

// C# INACTIVE CODE:
// namespace Aspose.BarCode

// C# preprocessor directive: #elif ASPOSE_RECURRENCE

// C# INACTIVE CODE:
// namespace Aspose.Recurrence

// C# preprocessor directive: #elif ASPOSE_ICALENDAR

// C# INACTIVE CODE:
// namespace Aspose.iCalendar

// C# preprocessor directive: #elif ASPOSE_RECOGNITION

// C# INACTIVE CODE:
// namespace Aspose.Recognition

// C# preprocessor directive: #elif ASPOSE_TEX

// C# INACTIVE CODE:
// namespace Aspose.TeX

// C# preprocessor directive: #elif ASPOSE_PAGE


#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Page {


// C# preprocessor directive: #endif


// C# preprocessor directive: #if EMBED_PDF


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Provides methods to license the component.
/// </summary>
/// <example>
/// </example>
class ASPOSE_PAGE_SHARED_CLASS License : public System::Object
{
    typedef License ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_Embedded() const;
    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Embedded(bool value);
    
    /// <summary>
    /// Initializes a new instance of this class.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PAGE_SHARED_API License();
    
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <remarks>
    /// <p>Tries to find the license in the following locations:</p>
    /// <p>1. Explicit path.</p>
    /// 
    /// <ms>
    /// <p>2. The folder of the component assembly.</p>
    /// <p>3. The folder of the client's calling assembly.</p>
    /// <p>4. The folder of the entry assembly.</p>
    /// <p>5. An embedded resource in the client's calling assembly.</p>
    /// 
    /// <p><b>Note:</b>On the .NET Compact Framework, tries to find the license only in these locations:</p>
    /// <p>1. Explicit path.</p>
    /// <p>2. An embedded resource in the client's calling assembly.</p>
    /// </ms>
    /// 
    /// <java>
    /// <p>2. The folder of the component jar file.</p>
    /// </java>
    /// 
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PAGE_SHARED_API void SetLicense(System::String licenseName);
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <param name="stream">A stream that contains the license.</param>
    /// <remarks>
    /// <p>Use this method to load a license from a stream.</p>
    /// </remarks>
    /// <example>
    /// </example>
    /// <javaName>void setLicense(java.io.InputStream stream)</javaName>
    ASPOSE_PAGE_SHARED_API void SetLicense(System::SharedPtr<System::IO::Stream> stream);
    
private:

    bool mEmbedded;
    
    void _SetLicense(System::String licenseName);
    void _SetLicense(System::SharedPtr<System::IO::Stream> stream);
    
};

} // namespace Page
} // namespace Aspose

// C# preprocessor directive: #endif



