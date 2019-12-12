#include "pch.h"
#include "CStudent.h"


void CStudent::Init(const char* Name, int kor, int eng, int math)
{
	strcpy_s(m_Student.szName, 32, Name);
	m_Student.iKor   = kor;
	m_Student.iEng   = eng;
	m_Student.iMath  = math;
	m_Student.iTotal = m_Student.iKor + m_Student.iEng + m_Student.iMath;
	m_Student.fAver  = static_cast<float>(m_Student.iTotal / 3);
}


const SStudent& CStudent::GetInfo()const
{
	return m_Student;
}


void CStudent::Render()
{
	cout << "�̸� : " << m_Student.szName << endl;
	cout << "���� : " << m_Student.iKor << endl;
	cout << "���� : " << m_Student.iEng << endl;
	cout << "���� : " << m_Student.iMath << endl;
	cout << "���� : " << m_Student.iTotal << endl;
	cout << "��� : " << m_Student.fAver << endl;
}


void CStudent::operator=(const CStudent& other)
{
	memcpy(&m_Student, &other.m_Student, sizeof(m_Student));
}


CStudent::CStudent()
{
	memset(m_Student.szName, 0, 32);
	m_Student.iKor   = 0;
	m_Student.iEng   = 0;
	m_Student.iMath  = 0;
	m_Student.iTotal = 0;
	m_Student.fAver  = 0;
}


CStudent::~CStudent()
{
}
