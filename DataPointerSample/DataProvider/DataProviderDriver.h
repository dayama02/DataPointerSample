///////////////////////////////////////////////////////////////////////////////
// DataProviderDriver.h

#ifndef __DATAPROVIDERDRIVER_H__
#define __DATAPROVIDERDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define DATAPROVIDERDRV_NAME        "DATAPROVIDER"
#define DATAPROVIDERDRV_Major       1
#define DATAPROVIDERDRV_Minor       0

#define DEVICE_CLASS CDataProviderDriver

#include "ObjDriver.h"

class CDataProviderDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl DATAPROVIDERDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(DATAPROVIDERDRV)
	VxD_Service( DATAPROVIDERDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __DATAPROVIDERDRIVER_H__