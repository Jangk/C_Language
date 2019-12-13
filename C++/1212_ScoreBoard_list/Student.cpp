#include "pch.h"
#include "Student.h"

Student::Student()
{
	memset(&m_Student, 0, sizeof(m_Student));
}

Student::~Student()
{
}


void Student::Init(const char* Name, int kor, int eng, int math)
{
	strcpy_s(m_Student.szName, 32, Name);
	m_Student.iKor = kor;
	m_Student.iEng = eng;
	m_Student.iMath = math;
	m_Student.iTotal = m_Student.iKor + m_Student.iEng + m_Student.iMath;
	m_Student.fAver = static_cast<float>(m_Student.iTotal / 3);
}


const StudentScore& Student::GetInfo() const
{
	return m_Student;
}


void Student::Render()
{
	cout << "�̸� : " << m_Student.szName << endl;
	cout << "���� : " << m_Student.iKor << endl;
	cout << "���� : " << m_Student.iEng << endl;
	cout << "���� : " << m_Student.iMath << endl;
	cout << "���� : " << m_Student.iTotal << endl;
	cout << "��� : " << m_Student.fAver << endl;
}


void Student::operator=(const Student& other)
{
	memcpy(&m_Student, &other.m_Student, sizeof(m_Student));
}