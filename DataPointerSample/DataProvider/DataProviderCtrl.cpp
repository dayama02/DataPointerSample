// DataProviderCtrl.cpp : Implementation of CTcDataProviderCtrl
#include "TcPch.h"
#pragma hdrstop

#include "DataProviderW32.h"
#include "DataProviderCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CDataProviderCtrl

CDataProviderCtrl::CDataProviderCtrl() 
	: ITcOCFCtrlImpl<CDataProviderCtrl, CDataProviderClassFactory>() 
{
}

CDataProviderCtrl::~CDataProviderCtrl()
{
}

