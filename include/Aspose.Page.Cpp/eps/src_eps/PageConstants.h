#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Drawing
{
class Size;
} // namespace Drawing
class Margins;
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class IDictionary;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

/// <summary>
/// This class defines a set of constants which describe a page.
/// Convenience objects are provided for various margins, orientations,
/// rescaling, and standard page sizes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageConstants : public System::Object
{
    typedef PageConstants ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///  Orientation key, for the named orienation of page, Portret or Landscape.
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& ORIENTATION();
    
    /// <summary>
    ///  Viewing orientation key, for rotation matrix distinguishing orientation of content on the page. The default viewing orientation matrix is identity.
    /// </summary>
    static const ASPOSE_PAGE_SHARED_API System::String VIEWING_ORIENTATION;
    
    /// <summary>
    ///  "Portrait" orientation value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& ORIENTATION_PORTRAIT();
    /// <summary>
    ///  "Landscape" orientation value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& ORIENTATION_LANDSCAPE();
    /// <summary>
    ///  "Best fit" orientation value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& ORIENTATION_BEST_FIT();
    
    /// <summary>
    ///  <returns>Available orientation values</returns>
    /// </summary>
    static ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_OrientationList();
    
    /// <summary>
    ///  Page size key
    /// </summary>
    static const ASPOSE_PAGE_SHARED_API System::String PAGE_SIZE_;
    
    /// <summary>
    ///  "International" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_INTERNATIONAL();
    /// <summary>
    ///  "A3" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_A3();
    /// <summary>
    ///  "A4" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_A4();
    /// <summary>
    ///  "A5" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_A5();
    /// <summary>
    ///  "A6" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_A6();
    /// <summary>
    ///  "Letter" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_LETTER();
    /// <summary>
    ///  "Legal" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_LEGAL();
    /// <summary>
    ///  "Executive" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_EXECUTIVE();
    /// <summary>
    ///  "Ledger" page size value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& SIZE_LEDGER();
    
    /// <summary>
    ///  <returns>Available page size values</returns>
    /// </summary>
    static ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_SizeList();
    
    /// <summary>
    ///  Page margins key
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& PAGE_MARGINS();
    /// <summary>
    ///  "Zero" page margins value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& MARGINS_ZERO();
    /// <summary>
    ///  "Small" page margins value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& MARGINS_SMALL();
    /// <summary>
    ///  "Medium" page margins value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& MARGINS_MEDIUM();
    /// <summary>
    ///  "Large" page margins value
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& MARGINS_LARGE();
    /// <summary>
    ///   Fit content to page key
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& FIT_TO_PAGE();
    /// <summary>
    ///  Transparent background key
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& TRANSPARENT();
    /// <summary>
    ///  Background key
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& BACKGROUND();
    /// <summary>
    ///  Background color key
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& BACKGROUND_COLOR();
    /// <summary>
    ///  Calculates page size in "Portrait" page orientation
    ///  <param name="size">predefined page size</param>
    ///  <returns>Calculated page size</returns>
    /// </summary>
    static ASPOSE_PAGE_SHARED_API Aspose::Page::Drawing::Size GetSize(const System::String& size);
    /// <summary>
    ///  Calculates page size in given page orientation
    ///  <param name="size">predefined page size</param>
    ///  <param name="orientation">orientation of the page</param>
    ///  <returns>Calculated page size</returns>
    /// </summary>
    static ASPOSE_PAGE_SHARED_API Aspose::Page::Drawing::Size GetSize(const System::String& size, const System::String& orientation);
    /// <summary>
    ///  Calculates page size in given page orientation
    ///  <param name="size">Original page size</param>
    ///  <param name="orientation">Orientation of the page</param>
    ///  <returns>Calculated page size</returns>
    /// </summary>
    static ASPOSE_PAGE_SHARED_API Aspose::Page::Drawing::Size GetSize(Aspose::Page::Drawing::Size size, System::String orientation);
    /// <summary>
    ///  Gets page margins values
    ///  <param name="marginsSize">Predefined page margins name</param>
    ///  <returns>Predefined page margins values</returns>
    /// </summary>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<Margins> GetMargins(const System::String& marginsSize);
    /// <summary>
    ///  Calculate page margins мфдгуы in specified orientation
    ///  <param name="margins">Original margins</param>
    ///  <param name="orientation">Orientation of the page</param>
    ///  <returns>Зredefined page margins for given orientation</returns>
    /// </summary>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<Margins> GetMargins(System::SharedPtr<Margins> margins, System::String orientation);
    
private:

    static System::SharedPtr<System::Collections::Generic::IDictionary<System::String, Aspose::Page::Drawing::Size>>& sizeTable();
    static System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Margins>>>& marginTable();
    
    PageConstants();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageConstants, CODEPORTING_ARGS());
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


