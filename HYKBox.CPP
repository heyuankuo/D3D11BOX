//
// Cmpnt3.cpp - Component 3
//
#include <objbase.h>
#include "HYKBox.H"
#include "CUnknown.h"


///////////////////////////////////////////////////////////
//
// Interface ID3D11Box
//
HRESULT __stdcall CHYKBox::DrawBox()
{
	return S_OK;
}

//
// Constructor
//
CHYKBox::CHYKBox(IUnknown* pUnknownOuter)
: CUnknown(pUnknownOuter)
{
}

CHYKBox::~CHYKBox() 
{
}

//
// NondelegatingQueryInterface implementation
//
HRESULT __stdcall CHYKBox::NondelegatingQueryInterface(const IID& iid,
                                                  void** ppv)
{ 	
	if (iid == __uuidof(ID3D11Box))
	{
		return FinishQI(static_cast<ID3D11Box *>(this), ppv) ;
	}
	else
	{
		return CUnknown::NondelegatingQueryInterface(iid, ppv) ;
	}
}


///////////////////////////////////////////////////////////
//
// Creation function used by CFactory
//
HRESULT CHYKBox::CreateInstance(IUnknown* pUnknownOuter,
                           CUnknown** ppNewComponent) 
{
	*ppNewComponent = new CHYKBox(pUnknownOuter) ;
	return S_OK ;
}
