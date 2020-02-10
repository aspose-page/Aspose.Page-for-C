// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <cstdint>

// TODO: reference additional headers your program requires here
#include "system/console.h"
#include "system/enum.h"
#include "system/object.h"
#include "system/object_ext.h"
#include "system/shared_ptr.h"
#include "system/scope_guard.h"
#include "system/string.h"
#include "system/special_casts.h"
#include "system/type_info.h"
#include "system/details/dispose_guard.h"
#include "system/io/directory.h"
#include "system/io/directory_info.h"
#include "system/io/file.h"
#include "system/io/file_mode.h"
#include "system/io/memory_stream.h"
#include "system/io/stream.h"
#include "system/io/stream_reader.h"
#include "system/io/seekorigin.h"
#include "system/reflection/assembly.h"
#include "system/text/unicode_encoding.h"
#include "drawing/rectangle.h"
#include "drawing/bitmap.h"
#include "drawing/graphics.h"

#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsConverterException.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/ImageSaveOptions.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/ImageDevice.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PdfDevice.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PdfSaveOptions.h>

#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <Aspose.Page.Cpp/xps/src_xps/Import/XpsLoadOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Image/ImageDevice_.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Image/BmpSaveOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Image/JpegSaveOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Image/PngSaveOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Image/TiffSaveOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Pdf/PdfDevice_.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Pdf/PdfSaveOptions_.h>


#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPolyQuadraticBezierSegment.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPolyLineSegment.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPolyBezierSegment.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPathSegment.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsArcSegment.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathFigure.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsMatrix.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsGlyphs.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsEnums.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsCanvas.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsVisualBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsRadialGradientBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsLinearGradientBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsImageBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsGradientStop.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsGradientBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/Properties/AssemblyInfo.h>
#include <Aspose.Page.Cpp/License.h>