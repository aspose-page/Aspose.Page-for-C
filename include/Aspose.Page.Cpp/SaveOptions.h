#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/Drawing/Size.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
class XpsPresenter;
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Page {

/// <summary>
/// This class contains options necessary for managing conversion process.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS SaveOptions : public virtual System::Object
{
    typedef SaveOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    
public:

    /// <summary>
    /// Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.
    /// If false the first error will terminate the program.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API bool get_SupressErrors();
    /// <summary>
    /// Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.
    /// If false the first error will terminate the program.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_SupressErrors(bool value);
    /// <summary>
    /// Gets/sets the size of the image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::Drawing::Size get_Size() const;
    /// <summary>
    /// Gets/sets the size of the image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Size(Aspose::Page::Drawing::Size value);
    /// <summary>
    /// Returns a list of suppressed conversion errors If <see cref="SuppressErrors"></see> is true.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::Exception>> get_Exceptions();
    /// <summary>
    /// Specifies whether debug information must be printed to standard output stream or not.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API bool get_Debug();
    /// <summary>
    /// Specifies whether debug information must be printed to standard output stream or not.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Debug(bool value);
    /// <summary>
    /// Specifies additional folders where converter should find fonts for input document.
    /// Default folder are standard fonts folder where OS finds fonts for internal needs.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_AdditionalFontsFolders() const;
    /// <summary>
    /// Specifies additional folders where converter should find fonts for input document.
    /// Default folder are standard fonts folder where OS finds fonts for internal needs.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_AdditionalFontsFolders(System::ArrayPtr<System::String> value);
    /// <summary>
    /// The Quality category specifies the level of compression for an image.
    /// Available values are 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// 0 value results in lowest quality image, while 100 results in highest.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_JpegQualityLevel() const;
    /// <summary>
    /// The Quality category specifies the level of compression for an image.
    /// Available values are 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// 0 value results in lowest quality image, while 100 results in highest.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_JpegQualityLevel(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="SaveOptions"></see> class with default values 
    /// for flags <see cref="SuppressErrors"></see> (true) and <see cref="Debug"></see> (false).
    /// </summary>
    ASPOSE_PAGE_SHARED_API SaveOptions();
    /// <summary>
    /// Initializes a new instance of the <see cref="SaveOptions"></see> class with default value for flag <see cref="Debug"></see> (false).
    /// </summary>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    ASPOSE_PAGE_SHARED_API SaveOptions(bool supressErrors);
    /// <summary>
    /// Initializes a new instance of the <see cref="SaveOptions"></see> with
    /// with specified size of the page.
    /// </summary>
    /// <param name="size"> The page size.</param>
    ASPOSE_PAGE_SHARED_API SaveOptions(Aspose::Page::Drawing::Size size);
    /// <summary>
    /// Initializes a new instance of the <see cref="SaveOptions"></see> class with default value for flag <see cref="Debug"></see> (false) and with specified size of the page.
    /// </summary>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    /// <param name="size"> The page size.</param>
    ASPOSE_PAGE_SHARED_API SaveOptions(bool supressErrors, Aspose::Page::Drawing::Size size);
    
protected:

    virtual ASPOSE_PAGE_SHARED_API bool get_OutlineCff();
    virtual ASPOSE_PAGE_SHARED_API void set_OutlineCff(bool value);
    
private:

    bool supressErrors;
    System::SharedPtr<System::Collections::Generic::List<System::Exception>> exceptions;
    System::ArrayPtr<System::String> additionalFontsFolders;
    bool debug;
    int32_t jpegQualityLevel;
    Aspose::Page::Drawing::Size pr_Size;
    
};

} // namespace Page
} // namespace Aspose


