#pragma once

#include <system/shared_ptr.h>
#include <system/enum.h>
#include <system/date_time.h>
#include <security/cryptography/x509_certificates/x509_certificate_2.h>

#include "Aspose.Page.Cpp/SaveOptions.h"
#include "Aspose.Page.Cpp/IMultiPageSaveOptions.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Pdf { class PdfDevice; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Pdf { class PdfRenderer; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Pdf { class PdfEncryptionDetails; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Pdf { class PdfDigitalSignatureDetails; } } } } }
namespace Aspose { namespace Rendering { namespace Pdf { class PdfOptionsCore; } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Pdf { class PdfSaveOptions; } } } } }
namespace Aspose { namespace Rendering { namespace Pdf { class PdfEncryptionDetailsCore; } } }
namespace Aspose { namespace Rendering { namespace Pdf { class PdfDigitalSignatureDetailsCore; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace Presentation {

namespace Pdf {

/// <summary>
/// Specifies a type of compression applied to all contents in the PDF file except images.
/// </summary>
enum class PdfTextCompression
{
    /// <summary>
    /// None compression type
    /// </summary>
    None,
    /// <summary>
    /// Rle compression type
    /// </summary>
    Rle,
    /// <summary>
    /// Lzw compression type
    /// </summary>
    Lzw,
    /// <summary>
    /// Flate compression type
    /// </summary>
    Flate
};

/// <summary>
/// Specifies the type of compression applied to images in the PDF file.
/// </summary>
enum class PdfImageCompression
{
    /// <summary>
    /// Automatically selects the most appropriate compression for each image.
    /// </summary>
    Auto,
    /// <summary>
    /// Saves raw image bytes resulting in bigger PDF file sizes.
    /// </summary>
    None,
    /// <summary>
    /// Run Length compression.
    /// </summary>
    Rle,
    /// <summary>
    /// Flate compression.
    /// </summary>
    Flate,
    /// <summary>
    /// Predictor selection is restricted to PNG Paeth predictor to speed-up the process. In practice
    /// performs surprisingly good. Better than <see cref="LzwOptimizedPredictor"/>.
    /// </summary>
    LzwBaselinePredictor,
    /// <summary>
    /// Predictor selection is more complicated and should result in smaller image sizes but
    /// taking more time.
    /// </summary> 
    LzwOptimizedPredictor,
    /// <summary>
    /// JPEG compression.
    /// Does not support transparency.
    /// </summary>
    Jpeg
};

/// <summary>
/// Specifies the PDF compliance level to output file. 
/// </summary>
enum class PdfCompliance
{
    /// <summary>
    /// The output file will be PDF 1.5 compliant.
    /// </summary>
    Pdf15,
    /// <summary>
    /// The output file will be PDF/A-1a compliant.
    /// </summary>
    PdfA1a,
    /// <summary>
    /// The output file will be PDF/A-1b compliant.
    /// </summary>
    PdfA1b
};

/// <summary>
/// Encryption mode enum. Describe using algorithm and key length.
/// This enum is extended in order to be able to further increase functionality.
/// This enum implements "Base-to-Core" pattern.
/// </summary>
enum class PdfEncryptionAlgorithm
{
    /// <summary>
    /// Algorithm, with an RC4 encryption key length of 40 bits;
    /// </summary>
    RC4_40,
    /// <summary>
    /// Algorithm, with an RC4 encryption key length of 128 bits and advanced permission set;
    /// </summary>
    RC4_128
};

/// <summary>
/// Specifies digital hash algorithm used by digital signature.
/// </summary>
enum class PdfDigitalSignatureHashAlgorithm
{
    /// <summary>
    /// SHA-1 hash algorithm.
    /// </summary>
    Sha1,
    /// <summary>
    ///  SHA-256 hash algorithm.
    /// </summary>
    Sha256,
    /// <summary>
    ///  SHA-384 hash algorithm.
    /// </summary>
    Sha384,
    /// <summary>
    ///  SHA-512 hash algorithm.
    /// </summary>
    Sha512,
    /// <summary>
    ///  SHA-1 hash algorithm.
    /// </summary>
    Md5
};

/// <summary>
/// Class for XPS-as-PDF saving options.
/// </summary>
class PdfSaveOptions : public Aspose::Page::SaveOptions, public Aspose::Page::IMultiPageSaveOptions
{
    typedef PdfSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    typedef Aspose::Page::IMultiPageSaveOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Xps::Presentation::Pdf::PdfDevice;
    friend class Aspose::Page::Xps::Presentation::Pdf::PdfRenderer;
    
public:

    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<int32_t> get_PageNumbers();
    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_PageNumbers(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Specifies the height of the document outline tree to save.
    /// 0 - the outline tree will not be converted,
    /// 1 - only the first level outline items will be converted,
    /// ans so on.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_OutlineTreeHeight();
    /// <summary>
    /// Specifies the height of the document outline tree to save.
    /// 0 - the outline tree will not be converted,
    /// 1 - only the first level outline items will be converted,
    /// ans so on.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OutlineTreeHeight(int32_t value);
    /// <summary>
    /// Specifies up to what level the document outline should be expanded when the PDF file is viewed.
    /// 1 - only the first level outline items are shown,
    /// 2 - only the first and second level outline items are shown,
    /// and so on.
    /// Default is 1.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_OutlineTreeExpansionLevel();
    /// <summary>
    /// Specifies up to what level the document outline should be expanded when the PDF file is viewed.
    /// 1 - only the first level outline items are shown,
    /// 2 - only the first and second level outline items are shown,
    /// and so on.
    /// Default is 1.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OutlineTreeExpansionLevel(int32_t value);
    /// <summary>
    /// Specifies at which level in the document outline to display <see cref="ApsBookmark"/> objects.
    /// 0 - not displayed.
    /// 1 at first level and so on.
    /// Default is 0.
    /// </summary>
    //public int BookmarksOutlineLevel
    //{
    //    get { return _coreOptions.BookmarksOutlineLevel; }
    //    set { _coreOptions.BookmarksOutlineLevel = value; }
    //}
    /// <summary>
    /// Specifies compression type to be used for all content streams except images.
    /// Default is <see cref="PdfTextCompression::Flate"/>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PdfTextCompression get_TextCompression();
    /// <summary>
    /// Specifies at which level in the document outline to display <see cref="ApsBookmark"/> objects.
    /// 0 - not displayed.
    /// 1 at first level and so on.
    /// Default is 0.
    /// </summary>
    //public int BookmarksOutlineLevel
    //{
    //    get { return _coreOptions.BookmarksOutlineLevel; }
    //    set { _coreOptions.BookmarksOutlineLevel = value; }
    //}
    /// <summary>
    /// Specifies compression type to be used for all content streams except images.
    /// Default is <see cref="PdfTextCompression::Flate"/>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TextCompression(PdfTextCompression value);
    /// <summary>
    /// Specifies compression type to be used for all images in the document.
    /// Default is <see cref="PdfImageCompression::Auto"/>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PdfImageCompression get_ImageCompression();
    /// <summary>
    /// Specifies compression type to be used for all images in the document.
    /// Default is <see cref="PdfImageCompression::Auto"/>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ImageCompression(PdfImageCompression value);
    /// <summary>
    /// Gets a encryption details. If not set, then no encryption will be performed.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PdfEncryptionDetails> get_EncryptionDetails();
    /// <summary>
    /// Sets a encryption details. If not set, then no encryption will be performed.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_EncryptionDetails(System::SharedPtr<PdfEncryptionDetails> value);
    
    /// <summary>
    /// Creates new instance of options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PdfSaveOptions();
    
protected:

    /// <summary>
    /// A debug settings that turns on display of active rectangles of hyperlinks in the PDF document.
    /// </summary>
    /*public bool ShowHyperlinkRects
            {
                get { return mIsShowHyperlinkRects; }
                set { mIsShowHyperlinkRects = value; }
            }*/
    /// <summary>
    /// Desired conformance level for generated PDF document.
    /// Important note: This option should not be changed after PdfDocument object is constructed.
    /// Default is <see cref="PdfCompliance::Pdf15"/>.
    /// </summary>
    PdfCompliance get_Compliance();
    /// <summary>
    /// A debug settings that turns on display of active rectangles of hyperlinks in the PDF document.
    /// </summary>
    /*public bool ShowHyperlinkRects
            {
                get { return mIsShowHyperlinkRects; }
                set { mIsShowHyperlinkRects = value; }
            }*/
    /// <summary>
    /// Desired conformance level for generated PDF document.
    /// Important note: This option should not be changed after PdfDocument object is constructed.
    /// Default is <see cref="PdfCompliance::Pdf15"/>.
    /// </summary>
    void set_Compliance(PdfCompliance value);
    /// <summary>
    /// Gets a digital signature details. If not set, then no signing will be performed.
    /// </summary>
    System::SharedPtr<PdfDigitalSignatureDetails> get_DigitalSignatureDetails();
    /// <summary>
    /// Sets a digital signature details. If not set, then no signing will be performed.
    /// </summary>
    void set_DigitalSignatureDetails(System::SharedPtr<PdfDigitalSignatureDetails> value);
    
    System::SharedPtr<Aspose::Rendering::Pdf::PdfOptionsCore> ToCore();
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t _outlineTreeHeight;
    int32_t _outlineTreeExpansionLevel;
    PdfTextCompression _textCompression;
    PdfImageCompression _imageCompression;
    PdfCompliance _compliance;
    System::SharedPtr<PdfEncryptionDetails> _encryptionDetails;
    System::SharedPtr<PdfDigitalSignatureDetails> _digitalSignatureDetails;
    System::ArrayPtr<int32_t> pr_PageNumbers;
    
};

/// <summary>
/// Contains details for a pdf encryption.
/// </summary>
class PdfEncryptionDetails : public System::Object
{
    typedef PdfEncryptionDetails ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Xps::Presentation::Pdf::PdfSaveOptions;
    
public:

    /// <summary>
    /// Gets the User password.
    /// </summary>
    /// <value>
    /// The user password.
    /// </value>
    /// <remarks>
    /// Opening the document with the correct user password (or opening a document
    /// that does not have a user password) allows additional operations to be
    /// performed according to the user access permissions specified in the document’s
    /// encryption dictionary.
    /// </remarks>
    ASPOSE_PAGE_SHARED_API System::String get_UserPassword();
    /// <summary>
    /// Sets the User password.
    /// </summary>
    /// <value>
    /// The user password.
    /// </value>
    /// <remarks>
    /// Opening the document with the correct user password (or opening a document
    /// that does not have a user password) allows additional operations to be
    /// performed according to the user access permissions specified in the document’s
    /// encryption dictionary.
    /// </remarks>
    ASPOSE_PAGE_SHARED_API void set_UserPassword(System::String value);
    /// <summary>
    /// Gets the Owner password.
    /// </summary>
    /// <value>
    /// The owner password.
    /// </value>
    /// <remarks>
    /// Opening the document with the correct owner password (assuming it is not the
    /// same as the user password) allows full (owner) access to the document. This
    /// unlimited access includes the ability to change the document’s passwords and
    /// access permissions.
    /// </remarks>
    ASPOSE_PAGE_SHARED_API System::String get_OwnerPassword();
    /// <summary>
    /// Sets the Owner password.
    /// </summary>
    /// <value>
    /// The owner password.
    /// </value>
    /// <remarks>
    /// Opening the document with the correct owner password (assuming it is not the
    /// same as the user password) allows full (owner) access to the document. This
    /// unlimited access includes the ability to change the document’s passwords and
    /// access permissions.
    /// </remarks>
    ASPOSE_PAGE_SHARED_API void set_OwnerPassword(System::String value);
    /// <summary>
    /// Gets the permissions.
    /// </summary>
    /// <value>
    /// The permissions.
    /// </value>
    ASPOSE_PAGE_SHARED_API int32_t get_Permissions();
    /// <summary>
    /// Sets the permissions.
    /// </summary>
    /// <value>
    /// The permissions.
    /// </value>
    ASPOSE_PAGE_SHARED_API void set_Permissions(int32_t value);
    /// <summary>
    /// Gets the encryption mode.
    /// </summary>
    /// <value>
    /// The encryption algorithm.
    /// </value>
    ASPOSE_PAGE_SHARED_API PdfEncryptionAlgorithm get_EncryptionAlgorithm();
    /// <summary>
    /// Sets the encryption mode.
    /// </summary>
    /// <value>
    /// The encryption algorithm.
    /// </value>
    ASPOSE_PAGE_SHARED_API void set_EncryptionAlgorithm(PdfEncryptionAlgorithm value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfEncryptionDetailsCore"/> class.
    /// </summary>
    /// <param name="userPassword">The user password.</param>
    /// <param name="ownerPassword">The owner password.</param>
    /// <param name="permissions">The permissions.</param>
    /// <param name="encryptionAlgorithm">The encryption algorithm.</param>
    ASPOSE_PAGE_SHARED_API PdfEncryptionDetails(System::String userPassword, System::String ownerPassword, int32_t permissions, PdfEncryptionAlgorithm encryptionAlgorithm);
    
protected:

    System::SharedPtr<Aspose::Rendering::Pdf::PdfEncryptionDetailsCore> ToCore();
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    PdfEncryptionAlgorithm _encryptionAlgorithm;
    int32_t _permissions;
    System::String _userPassword;
    System::String _ownerPassword;
    
};

/// <summary>
/// Contains details for a PDF digital signature.
/// </summary>
//[JavaDelete("Do later in Java.")]
class PdfDigitalSignatureDetails : public System::Object
{
    typedef PdfDigitalSignatureDetails ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Certificate to sign with.
    /// </summary>
    /// <value>
    /// The certificate.
    /// </value>
    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> get_Certificate();
    /// <summary>
    /// Certificate to sign with.
    /// </summary>
    /// <value>
    /// The certificate.
    /// </value>
    void set_Certificate(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> value);
    /// <summary>
    /// The reason of signing.
    /// </summary>
    /// <value>
    /// The reason.
    /// </value>
    System::String get_Reason();
    /// <summary>
    /// The reason of signing.
    /// </summary>
    /// <value>
    /// The reason.
    /// </value>
    void set_Reason(System::String value);
    /// <summary>
    /// Location of signing.
    /// </summary>
    /// <value>
    /// The location.
    /// </value>
    System::String get_Location();
    /// <summary>
    /// Location of signing.
    /// </summary>
    /// <value>
    /// The location.
    /// </value>
    void set_Location(System::String value);
    /// <summary>
    /// Date of signing.
    /// </summary>
    /// <value>
    /// The signature date.
    /// </value>
    System::DateTime get_SignatureDate();
    /// <summary>
    /// Date of signing.
    /// </summary>
    /// <value>
    /// The signature date.
    /// </value>
    void set_SignatureDate(System::DateTime value);
    /// <summary>
    /// Hash algorithm.
    /// </summary>
    /// <value>
    /// The hash algorithm.
    /// </value>
    PdfDigitalSignatureHashAlgorithm get_HashAlgorithm();
    /// <summary>
    /// Hash algorithm.
    /// </summary>
    /// <value>
    /// The hash algorithm.
    /// </value>
    void set_HashAlgorithm(PdfDigitalSignatureHashAlgorithm value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfDigitalSignatureDetails"/> class.
    /// </summary>
    /// <param name="certificate">The certificate.</param>
    /// <param name="reason">The reason.</param>
    /// <param name="location">The location.</param>
    /// <param name="signatureDate">The signature date.</param>
    /// <param name="hashAlgorithm">The hash algorithm.</param>
    PdfDigitalSignatureDetails(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> certificate, System::String reason, System::String location, System::DateTime signatureDate, PdfDigitalSignatureHashAlgorithm hashAlgorithm);
    
    System::SharedPtr<Aspose::Rendering::Pdf::PdfDigitalSignatureDetailsCore> ToCore();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> _certificate;
    System::String _reason;
    System::String _location;
    System::DateTime _signatureDate;
    PdfDigitalSignatureHashAlgorithm _hashAlgorithm;
    
};

} // namespace Pdf
} // namespace Presentation
} // namespace Xps
} // namespace Page
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Page::Xps::Presentation::Pdf::PdfTextCompression>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::Xps::Presentation::Pdf::PdfTextCompression, const char_t*>, 4>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::Xps::Presentation::Pdf::PdfImageCompression>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::Xps::Presentation::Pdf::PdfImageCompression, const char_t*>, 7>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::Xps::Presentation::Pdf::PdfCompliance>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::Xps::Presentation::Pdf::PdfCompliance, const char_t*>, 3>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::Xps::Presentation::Pdf::PdfEncryptionAlgorithm>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::Xps::Presentation::Pdf::PdfEncryptionAlgorithm, const char_t*>, 2>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::Xps::Presentation::Pdf::PdfDigitalSignatureHashAlgorithm>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::Xps::Presentation::Pdf::PdfDigitalSignatureHashAlgorithm, const char_t*>, 5>& values();
};



