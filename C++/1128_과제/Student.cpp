#include "Student.h"


bool Student::CheckEmptyStudent()
{
	return m_bIsEmpty;
}


void Student::InitStudent(string strName, int iKor, int iEng, int iMath)
{
	m_strName = strName;
	m_iKor = iKor;
	m_iEng = iEng;
	m_iMath = iMath;
	m_iTotal = iKor + iEng + iMath;
	m_fAver = m_iTotal / 3.0f;
	m_bIsEmpty = false;
	std::cout << "학생 성적 등록완료" << std::endl;
}


void Student::PrintStudent()
{
	cout << "이름 : " << m_strName << endl;
	cout << "국어 : " << m_iKor << endl;
	cout << "영어 : " << m_iEng << endl;
	cout << "수학 : " << m_iMath << endl;
	cout << "총점 : " << m_iTotal << endl;
	cout << "평균 : " << m_fAver << endl;
}

void Student::ClearStudent()
{
	m_strName = "";
	m_bIsEmpty = true;
	m_iKor = 0;
	m_iEng = 0;
	m_iMath= 0;
	m_iTotal= 0;
	m_fAver= 0;
}


float Student::GetAver()
{
	return m_fAver;
}


string Student::GetName()
{
	return m_strName;
}


Student::Student(string strName, int iKor, int iEng, int iMath) :
	m_strName(strName), m_iKor(iKor), m_iEng(iEng), m_iMath(iMath), m_bIsEmpty(false)
{
	m_iTotal = iKor + iEng + iMath;
	m_fAver = m_iTotal / 3.0f;
	std::cout << "학생 성적 등록완료" << std::endl;
}


Student::Student() :
	m_strName(""), m_iKor(0), m_iEng(0), m_iMath(0), m_bIsEmpty(true)
{
}


Student::~Student()
{
}
