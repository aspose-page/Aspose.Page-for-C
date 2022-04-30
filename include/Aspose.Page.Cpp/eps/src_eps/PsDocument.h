#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PAGE


// C# preprocessor directive: #elif ASPOSE_TEX

// C# INACTIVE CODE:
// using LicenseCore = Aspose.TeX.LicenseCore;
// using LicenseState = Aspose.TeX.LicenseState;

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using LicenseCore = Aspose.Pdf.LicenseCore;
// using LicenseState = Aspose.Pdf.LicenseState;

// C# preprocessor directive: #endif


#include <system/io/text_writer.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/Document.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
class Device;
namespace EPS
{
namespace Postscript
{
class Processor;
class PSInputFile;
} // namespace Postscript
namespace XMP
{
class XmpMetadata;
} // namespace XMP
} // namespace EPS
class SaveOptions;
} // namespace Page
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
namespace Text
{
class Encoding;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

/// <summary>
/// The <b>Aspose.Page.EPS</b> is a root namespace for all classes that deal with PS/EPS files.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class BinaryHeader : public System::Object
{
    typedef BinaryHeader ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    int32_t psStartPosition;
    int32_t psLength;
    int32_t wmfStartPosition;
    int32_t wmfLength;
    int32_t tiffStartPosition;
    int32_t tiffLength;
    int16_t checkSum;
    
    void GrowUpPositions(int32_t additionalLength);
    void Write(System::SharedPtr<System::IO::Stream> stream);
    
    BinaryHeader();
    
};

/// <summary>
/// This class encapsulates PS/EPS documents.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PsDocument final : public Aspose::Page::Document
{
    typedef PsDocument ThisType;
    typedef Aspose::Page::Document BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
protected:

    class ErrorPrintStream : public System::IO::TextWriter
    {
        typedef ErrorPrintStream ThisType;
        typedef System::IO::TextWriter BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<System::IO::TextWriter> innerStream;
        bool debug;
        
        System::SharedPtr<System::Text::Encoding> get_Encoding() override;
        
        ErrorPrintStream(System::SharedPtr<PsDocument> outerInstance, System::SharedPtr<System::IO::TextWriter> printStream, bool debug);
        
        void WriteLine(const System::String& x) override;
        void Write(const System::String& x) override;
        
    protected:
    
        #ifdef ASPOSE_GET_SHARED_MEMBERS
        System::Object::shared_members_type GetSharedMembers() const override;
        #endif
        
        
    private:
    
        System::WeakPtr<PsDocument> outerInstance;
        
    };
    
    
public:

    /// <summary>
    /// Returns the number of pages in resulting PDF document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_NumberOfPages() const;
    
    /// <summary>
    /// Initializes <see cref="PsDocument"></see> with a stream of PS/EPS file.
    /// </summary>
    /// <param name="psStream">Stream of PS/EPS file. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::SharedPtr<System::IO::Stream> psStream);
    
    /// <summary>
    /// Saves PS/EPS file to a device.
    /// </summary>
    /// <param name="device"> An output device. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    ASPOSE_PAGE_SHARED_API void Save(System::SharedPtr<Aspose::Page::Device> device, System::SharedPtr<SaveOptions> options) override;
    /// <summary>
    /// Saves given <see cref="PsDocument"></see> as EPS file. This method is used only after updating XMP metadata.
    /// It saves initial EPS file with updated existing metadata or new one created while calling GetMetadata method.
    /// In the last case all necessary PostScript code and EPS comments are added.
    /// </summary>
    /// <param name="epsStream">Stream of output EPS file. </param>
    ASPOSE_PAGE_SHARED_API void Save(System::SharedPtr<System::IO::Stream> epsStream);
    /// <summary>
    /// Reads PS/EPS file and extracts XmpMetdata if it already exists or add new one if it doesn't exist.
    /// </summary>
    /// <returns> Existing or new instance of XMP metadata. </returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XMP::XmpMetadata> GetXmpMetadata();
    /// <summary>
    /// Merges PS/EPS files to a device.
    /// </summary>
    /// <param name="filesForMerge"> PS/EPS files for merging with this file to an output device. </param>
    /// <param name="device"> An output device. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    ASPOSE_PAGE_SHARED_API void Merge(System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<Aspose::Page::Device> device, System::SharedPtr<SaveOptions> options);
    
protected:

    static const System::String IN_EXT;
    static const System::String IN_EXT2;
    bool directRgbMode;
    System::SharedPtr<Postscript::PSInputFile> in;
    BinaryHeader binaryHeader;
    int32_t numberOfPages;
    
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    bool get_IsLicensed();
    
    PsDocument();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PsDocument, CODEPORTING_ARGS());
    static void SetAdditionalFontsFolders(System::ArrayPtr<System::String> additionalFontFolders);
    
    virtual ASPOSE_PAGE_SHARED_API ~PsDocument();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::IO::Stream> outputStream;
    
    void GetDocumentPropertiesInternal(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    bool CheckBinaryHeader(System::SharedPtr<Postscript::PSInputFile> input);
    void GetDocumentProperties(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void Convert(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void ConvertInternal(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void GetDocumentPropertiesForMerge(System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    int64_t GetDocumentPropertiesForMergeInternal(System::SharedPtr<Postscript::Processor> processor, System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device, int64_t totalInputLength);
    void ConvertForMerge(System::ArrayPtr<System::String> filesForMerge, System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void ConvertForMergeInternal(System::SharedPtr<Postscript::Processor> processor, System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void SetFontsFolders(System::SharedPtr<SaveOptions> options);
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


