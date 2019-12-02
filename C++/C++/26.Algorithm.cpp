#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void main()
{
	// STL Algorithm
	//						   | ���� �Ұ� ����(Suquence) ���� : find(), for_each() ��
	// #include <algorithm>----| ���� ���� ���� ����			: copy(), swap() ��
	//						   | ���İ��� ����				: sort(), merge() ��
	//
	// #include <numeric> -----| ���� ��ġ ����				: accumulate() ��
	// 
	// ==========================================================================
	// ex) stl algorithm copy�� ����Ͽ� ���� �����ϱ�
	vector<int> scores;
	scores.push_back(100);
	scores.push_back(200);
	scores.push_back(300);

	vector<int> copyScores;
	copyScores.resize(scores.size());
	//		   scores ���ۺ���, socres ������ ����, copyScores���ͷ� ����.
	std::copy(scores.begin(), scores.end(), copyScores);
	//		  ������ۺκ�,     ����ɺκ��� ������ �����ּ�



	// ============================================================================
	// ex) find()
}