#pragma once
#include <iostream>
#include <string>
using namespace std;


class Student
{
private :
	string m_strName;
	bool m_bIsEmpty;
	int m_iKor;
	int m_iEng;
	int m_iMath;
	int m_iTotal;
	float m_fAver;


public:
	bool CheckEmptyStudent();
	void InitStudent(string strName, int iKor, int iEng, int iMath);
	void PrintStudent();
	void ClearStudent();
	float GetAver();
	string GetName();
	Student(string strName, int iKor, int iEng, int iMath);
	Student();
	~Student();
};

