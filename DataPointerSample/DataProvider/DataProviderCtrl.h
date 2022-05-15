///////////////////////////////////////////////////////////////////////////////
// DataProviderCtrl.h

#ifndef __DATAPROVIDERCTRL_H__
#define __DATAPROVIDERCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "DataProviderW32.h"
#include "TcBase.h"
#include "DataProviderClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CDataProviderCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CDataProviderCtrl, &CLSID_DataProviderCtrl>
	, public IDataProviderCtrl
	, public ITcOCFCtrlImpl<CDataProviderCtrl, CDataProviderClassFactory>
{
public:
	CDataProviderCtrl();
	virtual ~CDataProviderCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_DATAPROVIDERCTRL)
DECLARE_NOT_AGGREGATABLE(CDataProviderCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CDataProviderCtrl)
	COM_INTERFACE_ENTRY(IDataProviderCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __DATAPROVIDERCTRL_H__
