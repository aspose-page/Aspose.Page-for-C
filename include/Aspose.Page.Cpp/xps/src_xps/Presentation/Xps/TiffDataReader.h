#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.
// 09/10/2009 by Alexey Noskov

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Foundation
{
class BigEndianBinaryReader;
} // namespace Foundation
namespace Images
{
enum class TiffCompressionCore;
enum class TiffInkSetCore;
enum class TiffPhotometricInterpretationCore;
enum class TiffPlanarConfigurationCore;
enum class TiffResolutionUnitCore;
} // namespace Images
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

namespace Xps {

/// <summary>
/// Class is used to read data from TIFF image file directory (IFD).
/// It helps to read TIFF resolution and check TIFF conformance.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS TiffDataReader : public System::Object
{
    typedef TiffDataReader ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns Tiff image width. If width is 0, returns default value (100).
    /// </summary>
    /// <value>
    /// The width of the image.
    /// </value>
    ASPOSE_PAGE_SHARED_API int32_t get_ImageWidth();
    /// <summary>
    /// Returns Tiff image height. If height is 0, returns default value (100).
    /// </summary>
    /// <value>
    /// The height of the image.
    /// </value>
    ASPOSE_PAGE_SHARED_API int32_t get_ImageHeight();
    /// <summary>
    /// Returns Tiff image X resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API double get_ImageXResolution() const;
    /// <summary>
    /// Returns Tiff image Y resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API double get_ImageYResolution() const;
    /// <summary>
    /// Returns true if TIFF image conforms XPS specification and can be inserted into XPS document as is.
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is conform XPS specification; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PAGE_SHARED_API bool get_IsConformXpsSpecification();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDataReader"></see> class.
    /// </summary>
    /// <param name="imageBytes">The image bytes.</param>
    ASPOSE_PAGE_SHARED_API TiffDataReader(System::ArrayPtr<uint8_t> imageBytes);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDataReader"></see> class.
    /// </summary>
    /// <param name="reader">The reader.</param>
    ASPOSE_PAGE_SHARED_API TiffDataReader(System::SharedPtr<Aspose::Foundation::BigEndianBinaryReader> reader);
    
    /// <summary>
    /// Documentation for the format is in Aspose.Words\Doc.
    /// </summary>
    /// <param name="data">The file data.</param>
    /// <returns>
    ///   <c>true</c> if the specified data is tiff; otherwise, <c>false</c>.
    /// </returns>
    static ASPOSE_PAGE_SHARED_API bool IsTiff(System::ArrayPtr<uint8_t> data);
    
private:

    /// <summary>
    /// Returns true if image is valid Bilevel Tiff
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is valid bilevel tiff; otherwise, <c>false</c>.
    /// </value>
    bool get_IsValidBilevelTiff();
    /// <summary>
    /// Returns true if image is valid Grayscale Tiff
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is valid grayscale tiff; otherwise, <c>false</c>.
    /// </value>
    bool get_IsValidGrayscaleTiff();
    /// <summary>
    /// Returns true if image is valid Palete Color Tiff
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is valid palete color tiff; otherwise, <c>false</c>.
    /// </value>
    bool get_IsValidPaleteColorTiff();
    /// <summary>
    /// Returns true if image is valid Rgb Tiff
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is valid RGB tiff; otherwise, <c>false</c>.
    /// </value>
    bool get_IsValidRgbTiff();
    /// <summary>
    /// Returns true if image is valid CMYK Tiff
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is valid cmyk tiff; otherwise, <c>false</c>.
    /// </value>
    bool get_IsValidCmykTiff();
    /// <summary>
    /// Returns true if all items in bitsPerSample array are equel and is 8 or 16.
    /// This option has no matter when there is only one item in the BitsPerSample array.
    /// It is used only to check Rgb and Cmyk TIFFs.
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is bits per sample valid; otherwise, <c>false</c>.
    /// </value>
    bool get_IsBitsPerSampleValid();
    
    /// <summary>
    /// TiffDataReader is also used to read information from EXIF data of JPEG image. 
    /// In this case, Tiff data can be placed not at the beggining of the stream.
    /// </summary>
    int64_t mTiffDataOffset;
    uint32_t mWidth;
    uint32_t mHeight;
    double mXResolution;
    double mYResolution;
    Aspose::Images::TiffPhotometricInterpretationCore mPhotometricInterpretation;
    Aspose::Images::TiffResolutionUnitCore mResolutionUnit;
    Aspose::Images::TiffCompressionCore mCompression;
    Aspose::Images::TiffPlanarConfigurationCore mPlanarConfiguration;
    Aspose::Images::TiffInkSetCore mInkSet;
    uint16_t mSamplesPerPixel;
    uint16_t mNumberOfInks;
    System::ArrayPtr<uint16_t> mBitsPerSample;
    static const uint16_t DefaultSamplesPerPixel;
    static const uint16_t DefaultNumberOfInks;
    
    void ReadTiffFields(System::SharedPtr<Aspose::Foundation::BigEndianBinaryReader> reader);
    static uint16_t ReadTiffInt16(System::SharedPtr<Aspose::Foundation::BigEndianBinaryReader> reader, bool isBigEndian);
    static uint32_t ReadTiffInt32(System::SharedPtr<Aspose::Foundation::BigEndianBinaryReader> reader, bool isBigEndian);
    static System::ArrayPtr<uint16_t> ReadTiffInt16Array(System::SharedPtr<Aspose::Foundation::BigEndianBinaryReader> reader, bool isBigEndian, uint32_t numberOfItems);
    static double ReadTiffRational(System::SharedPtr<Aspose::Foundation::BigEndianBinaryReader> reader, bool isBigEndian);
    
};

} // namespace Xps
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


