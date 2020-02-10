#pragma once

// C# preprocessor directive: #if ASPOSE_PAGE


// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using LicenseCore = Aspose.Pdf.LicenseCore;
// using LicenseState = Aspose.Pdf.LicenseState;

// C# preprocessor directive: #endif


#include <system/text/encoding.h>
#include <system/string.h>
#include <system/io/text_writer.h>
#include <system/io/stream.h>
#include <cstdint>

#include "Aspose.Page.Cpp/Document.h"

namespace Aspose { namespace Page { namespace EPS { namespace Postscript { class PSInputFile; } } } }
namespace Aspose { namespace Page { class Device; } }
namespace Aspose { namespace Page { class SaveOptions; } }

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
    
    BinaryHeader();
    
};

/// <summary>
/// This class encapsulates PS/EPS documents.
/// </summary>
class PsDocument FINAL : public Aspose::Page::Document
{
    typedef PsDocument ThisType;
    typedef Aspose::Page::Document BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
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
        
        virtual System::SharedPtr<System::Text::Encoding> get_Encoding();
        
        ErrorPrintStream(System::SharedPtr<PsDocument> outerInstance, System::SharedPtr<System::IO::TextWriter> printStream, bool debug);
        
        virtual void WriteLine(System::String x);
        virtual void Write(System::String x);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<PsDocument> outerInstance;
        
    };
    
    
public:

    /// <summary>
    /// Returns the number of pages in resulting PDF document.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_NumberOfPages();
    
    /// <summary>
    /// Initializes <see cref="PsDocument"/> with a stream of PS/EPS file.
    /// </summary>
    /// <param name="psStream">Stream of PS/EPS file. </param>
    ASPOSE_PAGE_SHARED_API PsDocument(System::SharedPtr<System::IO::Stream> psStream);
    
    /// <summary>
    /// Saves PS/EPS file to a device.
    /// </summary>
    /// <param name="device"> An output device. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    virtual ASPOSE_PAGE_SHARED_API void Save(System::SharedPtr<Aspose::Page::Device> device, System::SharedPtr<SaveOptions> options);
    
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
    
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::IO::Stream> outputStream;
    
    void GetDocumentPropertiesInternal(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    bool CheckBinaryHeader();
    void GetDocumentProperties(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void Convert(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void ConvertInternal(System::SharedPtr<SaveOptions> options, System::SharedPtr<Aspose::Page::Device> device);
    void SetFontsFolders(System::SharedPtr<SaveOptions> options);
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


