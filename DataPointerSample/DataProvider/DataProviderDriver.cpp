///////////////////////////////////////////////////////////////////////////////
// DataProviderDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "DataProviderDriver.h"
#include "DataProviderClassFactory.h"

DECLARE_GENERIC_DEVICE(DATAPROVIDERDRV)

IOSTATUS CDataProviderDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CDataProviderClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CDataProviderDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CDataProviderDriver::DATAPROVIDERDRV_GetVersion( )
{
	return( (DATAPROVIDERDRV_Major << 8) | DATAPROVIDERDRV_Minor );
}

