#pragma once
#include "Student.h"
#ifndef __SCOREBOARD_H__
#define __SCOREBOARD_H__

class ScoreBoard
{
public:
	ScoreBoard();
	~ScoreBoard();
public:
	void Input();
	void Renderer();
	void Search();
private:
	void Release();


	std::list<Student*> m_Student;
};

bool StudentCmp(Student* st1, Student* st2);
#endif // !__SCOREBOARD_H__