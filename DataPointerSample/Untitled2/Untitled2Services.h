///////////////////////////////////////////////////////////////////////////////
// Untitled2Services.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_Untitled2 = 0x3F000000;
#define SRVNAME_UNTITLED2 "Untitled2"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_Untitled2CModule1 = {0x16c068c4,0xc813,0x4547,{0x99,0xff,0x2b,0x5a,0xb5,0xa9,0x22,0x36}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_Module1Parameter = 0x00000001;
const PTCID PID_Module1DataPointer1 = 0x00000002;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _Module1Parameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} Module1Parameter, *PModule1Parameter;

typedef struct _Module1Inputs
{
	ULONG Value;
	ULONG Status;
	ULONG Data;
} Module1Inputs, *PModule1Inputs;

typedef struct _Module1Outputs
{
	ULONG Value;
	ULONG Control;
	ULONG Data;
} Module1Outputs, *PModule1Outputs;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_Module1Inputs 0
#define ADI_Module1Outputs 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>

///<AutoGeneratedContent id="EventClasses">
///</AutoGeneratedContent>
