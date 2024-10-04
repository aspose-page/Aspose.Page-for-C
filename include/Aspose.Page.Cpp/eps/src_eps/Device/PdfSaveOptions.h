#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/SaveOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Drawing
{
class Size;
} // namespace Drawing
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace EPS {

namespace Device {

/// <summary>
/// This class contains input and output streams and other options necessary for managing conversion process.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PdfSaveOptions : public Aspose::Page::SaveOptions
{
    typedef PdfSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="PdfSaveOptions"></see> class with default values 
    /// for flags <see cref="SuppressErrors"></see> (true) and <see cref="Debug"></see> (false).
    /// </summary>
    ASPOSE_PAGE_SHARED_API PdfSaveOptions();
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfSaveOptions"></see> class with default values for flag <see cref="Debug"></see> (false).
    /// </summary>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    ASPOSE_PAGE_SHARED_API PdfSaveOptions(bool supressErrors);
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfSaveOptions"></see> with
    /// with specified size of the page.
    /// </summary>
    /// <param name="size"> The page size.</param>
    ASPOSE_PAGE_SHARED_API PdfSaveOptions(Aspose::Page::Drawing::Size size);
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfSaveOptions"></see> class with default values for flag <see cref="Debug"></see> (false) and with specified size of the page.
    /// </summary>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    /// <param name="size"> The page size.</param>
    ASPOSE_PAGE_SHARED_API PdfSaveOptions(bool supressErrors, Aspose::Page::Drawing::Size size);
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


