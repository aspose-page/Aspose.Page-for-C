#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void AddTransparentObject()
{
	// ExStart:AddTransparentObject
	// Create new XPS Document
	auto doc = System::MakeObject<XpsDocument>();

	// Just to demonstrate transparency
	doc->AddPath(doc->CreatePathGeometry(u"M120,0 H400 v1000 H120"))->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Gray()));
	doc->AddPath(doc->CreatePathGeometry(u"M300,120 h600 V420 h-600"))->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Gray()));

	// Create path with closed rectangle geometry
	System::SharedPtr<XpsPath> path1 = doc->CreatePath(doc->CreatePathGeometry(u"M20,20 h200 v200 h-200 z"));
	// Set blue solid brush to fill path1
	path1->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Blue()));
	// Add it to the current page
	System::SharedPtr<XpsPath> path2 = doc->Add(path1);

	// path1 and path2 are the same as soon as path1 hasn't been placed inside any other element
	// (which means that path1 had no parent element).
	// Because of that rectangle's color on the page effectively turns to green
	path2->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Green()));

	// Now add path2 once again. Now path2 has parent. So path3 won't be the same as path2.
	// Thus a new rectangle is painted on the page ...
	System::SharedPtr<XpsPath> path3 = doc->Add(path2);
	// ... and we shift it 300 units lower ...
	path3->set_RenderTransform(doc->CreateMatrix(1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 300.0f));
	// ... and set red solid brush to fill it
	path3->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Red()));

	// Create new path4 with path2's geometry ...
	System::SharedPtr<XpsPath> path4 = doc->AddPath(path2->get_Data());
	// ... shift it 300 units to the right ...
	path4->set_RenderTransform(doc->CreateMatrix(1.0f, 0.0f, 0.0f, 1.0f, 300.0f, 0.0f));
	// ... and set blue solid fill
	path4->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Blue()));

	// Add path4 once again.
	System::SharedPtr<XpsPath> path5 = doc->Add(path4);
	// path4 and path5 are not the same again ...
	// (move path5 300 units lower)
	path5->set_RenderTransform(path5->get_RenderTransform()->Clone());
	// to disconnect RenderTransform value from path4 (see next comment about Fill property)
	path5->get_RenderTransform()->Translate(0.0f, 300.0f);
	// ... but if we set the opacity of Fill property, it will take effect on both path5 and path4
	// because brush is a complex property value which remains the same for path5 and path4
	path5->get_Fill()->set_Opacity(0.8f);

	// Create new path6 with path2's geometry ...
	System::SharedPtr<XpsPath> path6 = doc->AddPath(path2->get_Data());
	// ... shift it 600 units to the right ...
	path6->set_RenderTransform(doc->CreateMatrix(1.0f, 0.0f, 0.0f, 1.0f, 600.0f, 0.0f));
	// ... and set yellow solid fill
	path6->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Yellow()));

	// Now add path6's clone ...
	System::SharedPtr<XpsPath> path7 = doc->Add(path6->Clone());
	// (move path5 300 units lower)
	path7->set_RenderTransform(path7->get_RenderTransform()->Clone());
	path7->get_RenderTransform()->Translate(0.0f, 300.0f);
	// ... and set opacity for path7
	path7->get_Fill()->set_Opacity(0.8f);
	// Now opacity effects independantly as soon as property values are cloned along with the element

	// The following code block is equivalent to the previous one.
	// Add path6 itself. path6 and path7 are not the same. Although their Fill property values are the same 
	//XpsPath path7 = doc.Add(path6);
	//path7.RenderTransform = path7.RenderTransform.Clone();
	//path7.RenderTransform.Translate(0, 300);
	// To "disconnect" path7's Fill property from path6's Fill property reassign it to its clone (or path6's Fill clone)
	//path7.Fill = ((XpsSolidColorBrush)path7.Fill).Clone();
	//path7.Fill.Opacity = 0.8f;

	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"WorkingWithTransparency_out.xps");
	// ExEnd:AddTransparentObject
}