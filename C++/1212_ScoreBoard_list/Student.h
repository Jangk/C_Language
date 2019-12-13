#pragma once
#include "STRUCT.h"

#ifndef __STUDENT_H__
#define __STUDENT_H__

class Student
{
public:
	Student();
	~Student();
public:
	void Init(const char*, int, int, int);
	const StudentScore& GetInfo()const;
	void Render();
	void operator=(const Student& other);
private:
	StudentScore m_Student;
};
#endif // !__STUDENT_H__