#include "CFactory.h"
#include "hykd3d11graphic_h.h"
#include "HYKBox.H"
///////////////////////////////////////////////////////////
//
// Server.cpp
//
CFactoryData g_FactoryDataArray[] =
{
	{&CLSID_IHYKD3D11Graphic, CHYKBox::CreateInstance,
		L"Inside COM, HYK Graphic", // Friendly name
		L"InsideCOM.HYK.Graphic.BOX",                  // ProgID
		L"InsideCOM.HYK.Cmp1"}                  // Version-independent
		                                              //   ProgID
} ;

int g_cFactoryDataEntries
	= sizeof(g_FactoryDataArray) / sizeof(CFactoryData) ;
