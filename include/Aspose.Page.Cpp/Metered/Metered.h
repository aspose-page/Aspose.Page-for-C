#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.
// To compile metered for your product, make sure your product is mentioned here and add a conditional 
// compilation constant to your project properties (both to Debug and Release configurations).
/*#if ASPOSE_WORDS
namespace Aspose.Words
#elif ASPOSE_WORDS_REPORTING_SERVICES
namespace Aspose.Words.ReportingServices
#elif ASPOSE_WORDS_SHAREPOINT
namespace Aspose.Words.SharePoint
#elif ASPOSE_CELLS
namespace Aspose.Cells
#elif ASPOSE_SLIDES
namespace Aspose.Slides
#elif ASPOSE_TASKS
namespace Aspose.Tasks
#elif ASPOSE_PDF
namespace Aspose.Pdf
#elif ASPOSE_PDF_FORM
namespace Aspose.Pdf.Form
#elif ASPOSE_PDF_KIT
namespace Aspose.Pdf.Kit
#elif ASPOSE_PDF_FO
namespace Aspose.Pdf.Fo
#elif ASPOSE_CHART
namespace Aspose.Chart
#elif ASPOSE_SPELL
namespace Aspose.Spell
#elif ASPOSE_EMAIL
namespace Aspose.Email
#elif ASPOSE_MIME
namespace Aspose.Mime
#elif ASPOSE_ADHOC
namespace Aspose.AdHoc
#elif ASPOSE_ASPXPAND
namespace Aspose.ASPXPand
#elif ASPOSE_GRID
namespace Aspose.Grid
#elif ASPOSE_RECURRENCE
namespace Aspose.Recurrence
#elif ASPOSE_ICALENDAR
namespace Aspose.iCalendar
#elif ASPOSE_RECOGNITION
namespace Aspose.Recognition
#elif ASPOSE_OCR
namespace Aspose.OCR
#elif ASPOSE_IMAGING
namespace Aspose.Imaging
#elif ASPOSE_BARCODE && REPORT
namespace Aspose.BarCode.ReportingServices
#elif ASPOSE_BARCODE && WPF
namespace Aspose.BarCode.WPF
#elif ASPOSE_BARCODE && RECOGNITION
namespace Aspose.BarCodeRecognition
#elif ASPOSE_BARCODE
namespace Aspose.BarCode
#elif ASPOSE_3D
namespace Aspose.ThreeD
#else
namespace Dynabic.Metered
#endif*/

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
class Decimal;
class String;
} // namespace System

namespace Aspose {

namespace Page {

/// <summary>
/// Provides methods to set metered key.
/// </summary>
/// <example>
/// </example>
class ASPOSE_PAGE_SHARED_CLASS Metered : public System::Object
{
    typedef Metered ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of this class.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Metered();
    
    /// <summary>
    /// Sets metered public and private key.
    /// If you purchase metered license, when start application, this API should be called, normally, this is enough. 
    /// However, if always fail to upload consumption data and exceed 24 hours, the license will be set to evaluation status, 
    /// to avoid such case, you should regularly check the license status, if it is evaluation status, call this API again.
    /// </summary>
    /// <param name="publicKey">public key</param>
    /// <param name="privateKey">private key</param>
    ASPOSE_PAGE_SHARED_API void SetMeteredKey(System::String publicKey, System::String privateKey);
    /// <summary>
    /// Gets consumption file size
    /// </summary>
    /// <returns>consumption quantity</returns>
    static ASPOSE_PAGE_SHARED_API System::Decimal GetConsumptionQuantity();
    /// <summary>
    /// Gets consumption credit
    /// </summary>
    /// <returns>consumption quantity</returns>
    static ASPOSE_PAGE_SHARED_API System::Decimal GetConsumptionCredit();
    
};

} // namespace Page
} // namespace Aspose


