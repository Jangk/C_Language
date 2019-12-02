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
	std::cout << "�л� ���� ��ϿϷ�" << std::endl;
}


void Student::PrintStudent()
{
	cout << "�̸� : " << m_strName << endl;
	cout << "���� : " << m_iKor << endl;
	cout << "���� : " << m_iEng << endl;
	cout << "���� : " << m_iMath << endl;
	cout << "���� : " << m_iTotal << endl;
	cout << "��� : " << m_fAver << endl;
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
	std::cout << "�л� ���� ��ϿϷ�" << std::endl;
}


Student::Student() :
	m_strName(""), m_iKor(0), m_iEng(0), m_iMath(0), m_bIsEmpty(true)
{
}


Student::~Student()
{
}
