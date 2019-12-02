#include <iostream>
#include <vector>
using namespace std;


void main()
{
	// vector			-- #include <vector>
	// - � �ڷ����̶� �������ִ�(���ø�)  ���� �迭		-- ���α����� �迭�� ������
	// - �迭�̶� ���ӵ� ������ �Ҵ� (�Ϲ� �迭ó�� �ε�����ȣ�� random access����)
	// - �޸𸮸� �뷮�� �ڵ����� ��������. ( ó�� �Ҵ�� �뷮�� �Ѿ�� �� ũ�� �Ҵ�� �������� ������ ����
	//   ��, �޸� ��뷮 ũ���� �ٲ��� ���ӵ� ������ �Ҵ��)
	// - ȿ�������� ����ϱ� ���ؼ� ������ ũ�⸦ reserve(); ��������� �޸� ����� �Ƴ����ִ�.
	// ex)
	std::vector<int> scores;
	vector<int> test(10);											// 0~9������ �ε��� 0���� �ʱ�ȭ (reserveó�� �����Ҵ��� �ƴ�)
	scores.reserve(2);												// 2���� ������ Ȯ���Ѵ�.(���Ͱ� ������ �������� ū ������ ������ �ִٰ� ������ ������ ����)
	//scores.resize(10);											// 10���� ũ�⸦ Ȯ���ϸ� ������ 0���� �ʱ�ȭ�� (�뷮�� ũ�⺸�� �۴ٸ� �÷���)
																	// �뷮���� ũ�Ⱑ ũ��  �뷮�� ũ�Ⱚ���� �ٰ�, �뷮�� ��� ������ ����. 

	scores.push_back(30);
	scores.push_back(50);											// ������ 2��   

	scores.pop_back();												// ������ ������(50) ���� 

	cout << "Current capacity : " << scores.capacity() << endl;		// capacity �����Ҵ�� ũ��
	cout << "Current size : " << scores.size() << endl;				// size		���� ����ִ� ũ��


	// ���͵� �迭ó�� �ε����� ���ٰ���
	// ���������� operator[]() ������ �����ε� ���ְ�, '����' �� �����ϱ� ������ ���� ����� �ҷ�����.
	cout << scores[1] << endl;

	
	// map�� ��� operator[]�� ���� ����. �׷��� iterator�� ����Ѵ�.
	

	// ��� ��Ҹ� ����ϱ�
	// iterator (�ݺ���) : Ư�� ������ ��Ҹ� ��ȸ�ϴµ� ����Ѵ�. 
	// socres.end(), begin()�� iter�� ��ȯ�Ѵ�.
	for (std::vector<int>::iterator iter = scores.begin(); iter != scores.end(); ++iter)
	{	// iterator�� ����� ��ǻ� ������ 
		cout << *iter << endl;
	}


	// vector.begin()�� ������ ù��° �����͸� ��ȯ.
	// vector.end()��   ������ ������ �����Ͱ� �ƴ϶� ������ �������� ���� ������ ��ȯ.
	// vector<�ڷ���>::const_iterator = iterator�� ����Ű�� ���� �ٲ� �� ������, ���� ���� �ٲ� �� ����.


	// ������ �ݺ���
	// ������ ó������ �ݺ��ϴ°��� begin end�� �����(end�� ���� �����̰�, begin�� ���ۺκ��̱⶧����)
	// �� ��Ȳ�� ���� rbeign()�� rend�� ������.
	// vector.rbegin() ������ �κ� �����͸� ����Ŵ.
	// vector.rend()   ù ����� �������� ���� ������ ��ȯ.
	// ������ �ݺ��ڵ� ������. 
	// ex)
	// vector<�ڷ���>::reverse_iterator
	// std::vector<�ڷ���>::const_reverse_iterator


	// Ư�� ��ġ�� ��� �����ϱ�
	// vector.insert(iterator ���ϴ� ��ġ, ���� ������) 
	// ���ϴ� ��ġ�� �ִ� ���� ����°� �ƴ϶� ���� �ְ� �ڷ� �о. �׸��� �� ��ġ�� iterator�� ��ȯ��.
	// ex)
	vector<int> testVec;
	testVec.reserve(5);									// 5���� �뷮
	testVec.push_back(1);								// 1��° ������
	testVec.push_back(2);								// 2��°
	testVec.push_back(3);								// 3��°
	testVec.push_back(4);								// 4��°
	std::vector<int>::iterator it = testVec.begin();	// �����͸� ���� ������ iter�� 
	it = testVec.insert(it, 0);							// it�� testVec.begin()�̱⶧���� 0 , 1, 2, 3,4 �� ����.


	// Ư�� ��ġ�� ��� �����ϱ�.
	std::vector<int>::iterator it = testVec.begin();
	testVec.erase(it);									// it��ġ�� ���� �����ǰ� it �����ǰ� ��ܿ� ���� ����  
														// ex )0���͵����� ���� �����, 1�� �ε����� 0������ �ٲٰ� 0���� ����

	// vector.assgin(�� ��, ��)							// ó������ 7���� ��ҿ� ���� ����.
	// ex) testVec.assign(7, 100);						// �ε��� 0������ 6���� 7���� 100�� ����.
	// vector.swap(vector����)							// �� ������ ���� �ٲ�.
	// vector.clear()									// ������ ��� �����͸� ����. �뷮�� �״��, ũ��� 0

}