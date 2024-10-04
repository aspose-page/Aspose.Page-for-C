#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_element.h>
#include <system/type_info.h>
#include <system/object_ext.h>
#include <system/exceptions.h>
#include <system/enum.h>
#include <system/default.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
namespace Xps
{
class XpsPageWriter;
class XpsSerializer;
} // namespace Xps
class XpsBasePresenter;
class XpsPresenter;
} // namespace Presentation
namespace XpsMetadata
{
class PrintTicket;
} // namespace XpsMetadata
namespace XpsModel
{
class XpsArcSegment;
class XpsBrush;
class XpsCanvas;
class XpsColor;
class XpsContentElement;
class XpsContext;
class XpsElement;
class XpsFileResource;
enum class XpsFillRule;
class XpsFont;
class XpsGlyphMapping;
class XpsGlyphs;
class XpsGlyphsClusterMap;
class XpsGradientBrush;
class XpsGradientStop;
class XpsHyperlinkElement;
class XpsImageBrush;
class XpsLinearGradientBrush;
class XpsMatrix;
class XpsMatrixInternal;
class XpsPage;
class XpsPath;
class XpsPathFigure;
class XpsPathGeometry;
class XpsPathPolySegment;
class XpsPathSegment;
class XpsPropertyValueManager;
class XpsRadialGradientBrush;
class XpsSolidColorBrush;
class XpsTilingBrush;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
class FixedDocumentSequence;
class FixedPage;
class FixedPart;
} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class IDictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class PointF;
class RectangleF;
class SizeF;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlAttribute;
class XmlDocument;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {


// C# preprocessor directive: #if CPLUSPLUS


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS XpsUtils : public System::Object
{
    typedef XpsUtils ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::XpsBasePresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicket;
    friend class Aspose::Page::XPS::XpsModel::XpsContentElement;
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkElement;
    friend class Aspose::Page::XPS::XpsModel::XpsBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientStop;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsTilingBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsLinearGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsRadialGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsCanvas;
    friend class Aspose::Page::XPS::XpsModel::XpsColor;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsFileResource;
    friend class Aspose::Page::XPS::XpsModel::XpsFont;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphMapping;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphsClusterMap;
    friend class Aspose::Page::XPS::XpsModel::XpsMatrix;
    friend class Aspose::Page::XPS::XpsModel::XpsPage;
    friend class Aspose::Page::XPS::XpsModel::XpsPath;
    friend class Aspose::Page::XPS::XpsModel::XpsPathFigure;
    friend class Aspose::Page::XPS::XpsModel::XpsPathGeometry;
    friend class Aspose::Page::XPS::XpsModel::XpsArcSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPathSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPathPolySegment;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPart;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocumentSequence;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    
public:

    static ASPOSE_PAGE_SHARED_API System::String get_RestrictionMessage();
    
    /// <summary>
    /// Convert point
    /// </summary>
    /// <param name="value">The string representation of point</param>
    /// <returns>The point</returns>
    static ASPOSE_PAGE_SHARED_API System::Drawing::PointF ConvertPoint(System::String value);
    /// <summary>
    /// Convert size
    /// </summary>
    /// <param name="value">The string representation of size</param>
    /// <returns>The size</returns>
    static ASPOSE_PAGE_SHARED_API System::Drawing::SizeF ConvertSize(System::String value);
    /// <summary>
    /// Convert rectangular box
    /// </summary>
    /// <param name="value">The string representation of box</param>
    /// <returns>The box</returns>
    static ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF ConvertBox(System::String value);
    
protected:

    static const System::String FloatPattern;
    
    static System::String AddBackSlash(System::String path);
    static void ValidatePath(System::String path);
    static void LogToTrace(System::String message);
    static System::String ComputeHash(System::SharedPtr<System::IO::Stream> stream);
    static void CopyStream(System::SharedPtr<System::IO::Stream> stream1, System::SharedPtr<System::IO::Stream> stream2);
    static System::String DecodeSpecialChars(System::String text);
    static float XpsUnitsToPoints(float val);
    static System::SharedPtr<System::Xml::XmlNode> AddXmlDeclaration(System::SharedPtr<System::Xml::XmlDocument> doc);
    /// <summary>
    /// Convert float. This could be faster. It takes about 2/3 of the deabbriviation time.
    /// </summary>
    /// <param name="str">The string representation of float</param>
    /// <returns>the float</returns>
    static float ConvertFloat(System::String str);
    static System::ArrayPtr<float> ConvertFloatArray(System::String str);
    static System::ArrayPtr<System::Drawing::PointF> ConvertPointArray(System::String str);
    static System::String FloatArrayToString(System::ArrayPtr<float> value);
    /// <summary>
    /// Convert int
    /// </summary>
    /// <param name="str">The string representation of int</param>
    /// <returns>the int</returns>
    static int32_t ConvertInt(System::String str);
    /// <summary>
    /// Convert bool
    /// </summary>
    /// <param name="str">The string representation of bool</param>
    /// <returns>the bool value</returns>
    static bool ConvertBool(System::String str);
    /// <summary>
    /// Convert StBoolean to bool
    /// </summary>
    /// <param name="str">The string representation of StBoolean</param>
    /// <returns>The bool</returns>
    static bool ConvertStBoolean(System::String str);
    /// <summary>
    /// Convert transformation matrix
    /// </summary>
    /// <param name="value">The string representation of matrix</param>
    /// <returns>The matrix</returns>
    static System::SharedPtr<XpsModel::XpsMatrixInternal> ConvertMatrix(System::String value);
    static System::SharedPtr<System::Xml::XmlNode> GetPropertyNode(System::SharedPtr<XpsModel::XpsContext> context, System::SharedPtr<System::Xml::XmlElement> element, System::String propertyName);
    static float GetAttributeValueAsFloat(System::SharedPtr<System::Xml::XmlElement> element, System::String name, float defValue = 0.f, bool required = false);
    static System::ArrayPtr<float> GetAttributeValueAsFloatArray(System::SharedPtr<System::Xml::XmlElement> element, System::String name);
    static System::String GetAttributeValueAsString(System::SharedPtr<System::Xml::XmlElement> element, System::String name, bool required = false);
    static System::String GetAttributeValueAsRawString(System::SharedPtr<System::Xml::XmlElement> element, System::String name, bool required = false);
    static bool GetAttributeValueAsBool(System::SharedPtr<System::Xml::XmlElement> element, System::String name, bool required = false);
    template <typename T>
    static T GetAttributeValueAsEnum(System::SharedPtr<System::Xml::XmlElement> element, System::String name, bool required = false)
    {
        System::String val = GetAttributeValueAsString(element, name, required);
        try
        {
            return System::String::IsNullOrEmpty(val) ? System::Default<T>() : System::Enum<T>::Parse(val);
        }
        catch (System::ArgumentException& )
        {
            throw System::ArgumentException(System::String::Format(u"Invalid value. Object: {0}, attribute: {1}.", element->get_Name(), name));
        }
        
    }
    
    static System::Drawing::PointF GetAttributeValueAsPoint(System::SharedPtr<System::Xml::XmlElement> element, System::String name, bool required = false);
    static System::Drawing::SizeF GetAttributeValueAsSize(System::SharedPtr<System::Xml::XmlElement> element, System::String name, bool required = false, System::String objName = nullptr);
    static System::Drawing::RectangleF GetAttributeValueAsBox(System::SharedPtr<System::Xml::XmlElement> element, System::String name, bool required = false, System::String objName = nullptr);
    static XpsModel::XpsFillRule DeabbriviatePathFigures(System::SharedPtr<XpsModel::XpsContext> context, System::SharedPtr<System::Xml::XmlAttribute> attrNode, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsPathFigure>>> figures);
    static XpsModel::XpsFillRule DeabbriviatePathFigures(System::SharedPtr<XpsModel::XpsContext> context, System::String abbreviatedGeometry, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsPathFigure>>> figures);
    
private:

    static System::ArrayPtr<float> ScanCommaSeparatedFloats(System::String value, int32_t n);
    static System::SharedPtr<XpsModel::XpsPathFigure> DeabbriviatePathFigure(System::SharedPtr<XpsModel::XpsContext> context, char16_t op, System::ArrayPtr<float> data, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsPathFigure>>> figures, System::SharedPtr<XpsModel::XpsPathFigure> currentPathFigure, System::Drawing::PointF& currentEndPoint, System::Drawing::PointF& lastControlPoint);
    
};

/// <summary>
/// Class contains the namespaces used in XPS packages and XPS Documents.
/// </summary>
class XpsNamespaces
{
    typedef XpsNamespaces ThisType;
    
public:

    static const System::String ContentTypes;
    static const System::String CoreProperties;
    static const System::String DigitalSignatures;
    static const System::String Relationships;
    static const System::String DiscardControl;
    static const System::String DocumentStructure;
    static const System::String FixedDocument;
    static const System::String FixedDocumentSequence;
    static const System::String FixedPage;
    static const System::String ResourceDictionary;
    static const System::String SignatureDefinitions;
    static const System::String StoryFragments;
    
public:
    XpsNamespaces() = delete;
};

/// <summary>
/// Class contains the list of XPS Document relationship types.
/// </summary>
class XpsDocumentRelationshipTypes
{
    typedef XpsDocumentRelationshipTypes ThisType;
    
public:

    static const System::String FixedRepresentation;
    static const System::String CoreProperties;
    static const System::String DigitalSignatureDefinitions;
    static const System::String DiscardControl;
    static const System::String DocumentStructure;
    static const System::String PrintTicket;
    static const System::String RequiredResource;
    static const System::String RestrictedFont;
    static const System::String StartPart;
    static const System::String StoryFragments;
    
public:
    XpsDocumentRelationshipTypes() = delete;
};

/// <summary>
/// Class contains the list of Package-wide relationship types. 
/// </summary>
class XpsPackageWideRelationshipTypes
{
    typedef XpsPackageWideRelationshipTypes ThisType;
    
public:

    static const System::String CoreProperties;
    static const System::String DigitalSignature;
    static const System::String DigitalSignatureCertificate;
    static const System::String DigitalSignatureOrigin;
    static const System::String Thumbnail;
    
public:
    XpsPackageWideRelationshipTypes() = delete;
};

/// <summary>
/// Class contains the list of XPS Document content types.
/// </summary>
class XpsDocumentContentTypes
{
    typedef XpsDocumentContentTypes ThisType;
    
public:

    static const System::String CoreProperties;
    static const System::String FixedDocument;
    static const System::String FixedDocumentSequence;
    static const System::String FixedPage;
    static const System::String DiscardControl;
    static const System::String DocumentStructure;
    static const System::String Font;
    static const System::String IccProfile;
    static const System::String JpegImage;
    static const System::String ObfuscatedFont;
    static const System::String PngImage;
    static const System::String PrintTicket;
    static const System::String RemoteResourceDictionary;
    static const System::String StoryFragments;
    static const System::String TiffImage;
    static const System::String ThumbnailPart;
    static const System::String WdpImage;
    
    static System::String Get(System::String name);
    
private:

    static System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::String>> dict;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
public:
    XpsDocumentContentTypes() = delete;
};

/// <summary>
/// Class contains the list of Package-wide content types. 
/// </summary>
class XpsPackageWideContentTypes
{
    typedef XpsPackageWideContentTypes ThisType;
    
public:

    static const System::String CorePropertiesPart;
    static const System::String DigitalSignatureCertificatePart;
    static const System::String DigitalSignatureOriginPart;
    static const System::String DigitalSignatureXMLSignaturePart;
    static const System::String RelationshipsPart;
    
public:
    XpsPackageWideContentTypes() = delete;
};

} // namespace XPS
} // namespace Page
} // namespace Aspose


