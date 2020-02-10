#pragma once

//#include "RunExamples.h"

//Licensing
void ApplyLicenseFromFile();
void ApplyLicenseFromStreamObject();

//Working with Document Conversion
void XPStoBMP();
void XPStoJPEG();
void XPStoPDF();
void XPStoPNG();
void XPStoTIFF();

//Working with Gradient
void AddLinearGradient();
void AddVerticalGradient();
void AddHorizontalGradient();

//Working with Images
void AddImage();
void AddTiledImage();

//Working with Pages
void AddPage();

//Working wiht PostScriptConversion
void PostScriptToImage();
void PostScriptToPdf();

//Working with Shapes
void AddRectangle();
void AddEllipse();

//Working with Text
void AddText();
void AddTextUsingUnicodeString();

//Working with Transparency
void AddTransparentObject();
void SetOpacityMask();

//Working with Visual Brush
void AddGrid();
