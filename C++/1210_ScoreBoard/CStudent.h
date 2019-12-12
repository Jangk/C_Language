#pragma once
#ifndef __CSTUDENT_H__
#define __CSTUDENT_H__
#include "STRUCT.h"
class CStudent
{
public :
	void Init(const char*, int, int, int);
	const SStudent& GetInfo()const;
	void Render();
	void operator=(const CStudent& other );

public :
	CStudent();
	~CStudent();
private:
	SStudent m_Student;
};
#endif // !__CSTUDENT_H__