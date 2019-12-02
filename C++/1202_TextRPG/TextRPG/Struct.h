#pragma once

#ifndef __STRUCT_H__

typedef struct tagInfo
{
	char szName[32];
	int iAtt;
	int iHp;
	int iMaxHp;
	int iLev;
	int iExp;
	int iMaxExp;
}INFO;

#define __STRUCT_H__
#endif