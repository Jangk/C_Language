#pragma once
#include <vector>
#include "CStudent.h"

#ifndef __SCOREBOARD_H__
#define __SCOREBOARD_H__
class ScoreBoard
{
public:
	void Init(int iMax);
	void Insert();
	void Render();
	void SearchDelete();
	void Sort();
	void Release();
public:
	ScoreBoard();
	~ScoreBoard();
private:
	vector<CStudent*> m_CStudents;
	int m_iStudentsMax;
};
#endif // !__SCOREBOARD_H__

