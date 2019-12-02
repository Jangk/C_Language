#pragma once
//#ifndef __STUDENT_H__
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
class ScoreBoard
{
private:
	Student*	m_CStudents;
	int			m_iStudentsMax;


public:
	void InitScoreBoard(int iStudentsMax);
	void InsertStudents();
	void PritnStudents();
	void SearchStudents(string strName);
	void SearchDelete(string strName);
	void AddStudentsMax(int iVal);
	void SortScoreBoard();
	ScoreBoard();
	~ScoreBoard();
};
//#define __STUDENT_H__
//#endif // __STUDENT_H_