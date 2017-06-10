//
// Cmpnt3.cpp - Component 3
//
#include "hykd3d11graphic_h.h"
#include "CUnknown.h"

///////////////////////////////////////////////////////////
//
// Component C
//
class CHYKBox : public CUnknown,
           public ID3D11Box
{
public:	
	// Creation
	static HRESULT CreateInstance(IUnknown* pUnknownOuter,
	                              CUnknown** ppNewComponent) ;

 private:
	// Declare the delegating IUnknown.
	DECLARE_IUNKNOWN

	// Nondelegating IUnknown
	virtual HRESULT __stdcall
		NondelegatingQueryInterface(const IID& iid, void** ppv) ;

	// Interface ID3D11Box
	virtual HRESULT __stdcall DrawBox();

	// Constructor
	CHYKBox(IUnknown* pUnknownOuter) ;

	// Destruction
	~CHYKBox() ;
} ;
