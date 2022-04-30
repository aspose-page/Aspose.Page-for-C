#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <system/date_time.h>

#include "Aspose.Page.Cpp/SaveOptions.h"
#include "Aspose.Page.Cpp/IMultiPageSaveOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Pdf
{
class PdfDevice;
class PdfDigitalSignatureDetails;
class PdfEncryptionDetails;
class PdfRenderer;
} // namespace Pdf
} // namespace Presentation
} // namespace XPS
} // namespace Page
namespace Rendering
{
namespace Pdf
{
class PdfDigitalSignatureDetailsCore;
class PdfEncryptionDetailsCore;
class PdfOptionsCore;
} // namespace Pdf
} // namespace Rendering
} // namespace Aspose
namespace System
{
namespace Security
{
namespace Cryptography
{
namespace X509Certificates
{
class X509Certificate2;
} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

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
    /// performs surprisingly good. Better than <see cref="LzwOptimizedPredictor"></see>.
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
class ASPOSE_PAGE_SHARED_CLASS PdfSaveOptions : public Aspose::Page::SaveOptions, public Aspose::Page::IMultiPageSaveOptions
{
    typedef PdfSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    typedef Aspose::Page::IMultiPageSaveOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Pdf::PdfDevice;
    friend class Aspose::Page::XPS::Presentation::Pdf::PdfRenderer;
    
public:

    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<int32_t> get_PageNumbers() override;
    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_PageNumbers(System::ArrayPtr<int32_t> value) override;
    /// <summary>
    /// Specifies the height of the document outline tree to save.
    /// 0 - the outline tree will not be converted,
    /// 1 - only the first level outline items will be converted,
    /// ans so on.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_OutlineTreeHeight() const;
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
    ASPOSE_PAGE_SHARED_API int32_t get_OutlineTreeExpansionLevel() const;
    /// <summary>
    /// Specifies up to what level the document outline should be expanded when the PDF file is viewed.
    /// 1 - only the first level outline items are shown,
    /// 2 - only the first and second level outline items are shown,
    /// and so on.
    /// Default is 1.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OutlineTreeExpansionLevel(int32_t value);
    /// <summary>
    /// Specifies at which level in the document outline to display <see cref="ApsBookmark"></see> objects.
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
    /// Default is <see cref="PdfTextCompression::Flate"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PdfTextCompression get_TextCompression() const;
    /// <summary>
    /// Specifies at which level in the document outline to display <see cref="ApsBookmark"></see> objects.
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
    /// Default is <see cref="PdfTextCompression::Flate"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TextCompression(PdfTextCompression value);
    /// <summary>
    /// Specifies compression type to be used for all images in the document.
    /// Default is <see cref="PdfImageCompression::Auto"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PdfImageCompression get_ImageCompression() const;
    /// <summary>
    /// Specifies compression type to be used for all images in the document.
    /// Default is <see cref="PdfImageCompression::Auto"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ImageCompression(PdfImageCompression value);
    /// <summary>
    /// Gets a encryption details. If not set, then no encryption will be performed.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PdfEncryptionDetails> get_EncryptionDetails() const;
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
    /// Default is <see cref="PdfCompliance::Pdf15"></see>.
    /// </summary>
    PdfCompliance get_Compliance() const;
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
    /// Default is <see cref="PdfCompliance::Pdf15"></see>.
    /// </summary>
    void set_Compliance(PdfCompliance value);
    /// <summary>
    /// Gets a digital signature details. If not set, then no signing will be performed.
    /// </summary>
    System::SharedPtr<PdfDigitalSignatureDetails> get_DigitalSignatureDetails() const;
    /// <summary>
    /// Sets a digital signature details. If not set, then no signing will be performed.
    /// </summary>
    void set_DigitalSignatureDetails(System::SharedPtr<PdfDigitalSignatureDetails> value);
    
    System::SharedPtr<Aspose::Rendering::Pdf::PdfOptionsCore> ToCore();
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
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
class ASPOSE_PAGE_SHARED_CLASS PdfEncryptionDetails : public System::Object
{
    typedef PdfEncryptionDetails ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Pdf::PdfSaveOptions;
    
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
    ASPOSE_PAGE_SHARED_API System::String get_UserPassword() const;
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
    ASPOSE_PAGE_SHARED_API System::String get_OwnerPassword() const;
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
    ASPOSE_PAGE_SHARED_API int32_t get_Permissions() const;
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
    ASPOSE_PAGE_SHARED_API PdfEncryptionAlgorithm get_EncryptionAlgorithm() const;
    /// <summary>
    /// Sets the encryption mode.
    /// </summary>
    /// <value>
    /// The encryption algorithm.
    /// </value>
    ASPOSE_PAGE_SHARED_API void set_EncryptionAlgorithm(PdfEncryptionAlgorithm value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfEncryptionDetailsCore"></see> class.
    /// </summary>
    /// <param name="userPassword">The user password.</param>
    /// <param name="ownerPassword">The owner password.</param>
    /// <param name="permissions">The permissions.</param>
    /// <param name="encryptionAlgorithm">The encryption algorithm.</param>
    ASPOSE_PAGE_SHARED_API PdfEncryptionDetails(System::String userPassword, System::String ownerPassword, int32_t permissions, PdfEncryptionAlgorithm encryptionAlgorithm);
    
protected:

    System::SharedPtr<Aspose::Rendering::Pdf::PdfEncryptionDetailsCore> ToCore();
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
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
    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> get_Certificate() const;
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
    System::String get_Reason() const;
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
    System::String get_Location() const;
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
    System::DateTime get_SignatureDate() const;
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
    PdfDigitalSignatureHashAlgorithm get_HashAlgorithm() const;
    /// <summary>
    /// Hash algorithm.
    /// </summary>
    /// <value>
    /// The hash algorithm.
    /// </value>
    void set_HashAlgorithm(PdfDigitalSignatureHashAlgorithm value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfDigitalSignatureDetails"></see> class.
    /// </summary>
    /// <param name="certificate">The certificate.</param>
    /// <param name="reason">The reason.</param>
    /// <param name="location">The location.</param>
    /// <param name="signatureDate">The signature date.</param>
    /// <param name="hashAlgorithm">The hash algorithm.</param>
    PdfDigitalSignatureDetails(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> certificate, System::String reason, System::String location, System::DateTime signatureDate, PdfDigitalSignatureHashAlgorithm hashAlgorithm);
    
    System::SharedPtr<Aspose::Rendering::Pdf::PdfDigitalSignatureDetailsCore> ToCore();
    
protected:

    #ifdef ASPOSE_GET_SHARED_MEMBERS
    System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> _certificate;
    System::String _reason;
    System::String _location;
    System::DateTime _signatureDate;
    PdfDigitalSignatureHashAlgorithm _hashAlgorithm;
    
};

} // namespace Pdf
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Page::XPS::Presentation::Pdf::PdfTextCompression>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::Presentation::Pdf::PdfTextCompression, const char_t*>, 4>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::Presentation::Pdf::PdfImageCompression>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::Presentation::Pdf::PdfImageCompression, const char_t*>, 7>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::Presentation::Pdf::PdfCompliance>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::Presentation::Pdf::PdfCompliance, const char_t*>, 3>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::Presentation::Pdf::PdfEncryptionAlgorithm>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::Presentation::Pdf::PdfEncryptionAlgorithm, const char_t*>, 2>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::Presentation::Pdf::PdfDigitalSignatureHashAlgorithm>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::Presentation::Pdf::PdfDigitalSignatureHashAlgorithm, const char_t*>, 5>& values();
};



