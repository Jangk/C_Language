#pragma once

#ifndef __STRUCT_H__
#define __STRUCT_H__

struct StudentScore
{
	char szName[32];
	unsigned int iKor;
	unsigned int iEng;
	unsigned int iMath;
	unsigned int iTotal;
	float fAver;
};
#endif // !__STRUCT_H__
