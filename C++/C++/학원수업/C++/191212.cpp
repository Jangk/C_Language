#include <iostream>
#include <list>
#include <functional>

using namespace std;

//					vector			|			list
//--------------------------------------------------------
//	�޸� ���	|	(����)�迭 ���	|		��� ���	
//--------------------------------------------------------
//	�ݺ��� ����	|	�������� �ݺ���	|		����� �ݺ���
//--------------------------------------------------------
//	  Ž��		|		����			|			�Ҹ�
//--------------------------------------------------------
// ����� �߰�,����|		�Ҹ�			|			����
//--------------------------------------------------------
//	sort�Լ�		|	<algorithm> ����	|		��� �Լ�
//--------------------------------------------------------
//	������		|			ǥ�� ������ �����̳�
//--------------------------------------------------------

void main()
{
	//// ##6. list�� sort
	//list<int>	Mylist;

	//Mylist.push_back(5);
	//Mylist.push_back(3);
	//Mylist.push_back(1);
	//Mylist.push_back(4);
	//Mylist.push_back(2);

	//// list�� sort �Լ��� ����� ���� �ִ�.
	////Mylist.sort(); // �⺻ ��������

	//greater<int> functor;
	//Mylist.sort(functor);

	//list<int>::iterator iter_begin = Mylist.begin();
	//list<int>::iterator iter_end = Mylist.end();

	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << (*iter_begin) << endl;




	//// ##5. list�� �߰� ���԰� ���� (insert, erase)
	//list<int>	Mylist;

	//Mylist.push_back(10);
	//Mylist.push_back(20);
	//Mylist.push_back(30);
	//Mylist.push_back(40);

	//list<int>::iterator iter_begin = Mylist.begin();
	//list<int>::iterator iter_end = Mylist.end();

	//++iter_begin;
	//Mylist.insert(iter_begin, 50);

	//++iter_begin;
	//Mylist.erase(iter_begin); // ������ ���� ��ġ�� ��ȯ.
	////cout << *iter_begin << endl; // ������ �ݺ��ڴ� ��ȿȭ�� �Ͼ! Error!!

	//// list�� vector�� �޸� �߰� ���� ���Ŀ��� end�� ��ȿȭ�� �Ͼ�� ����.
	//// list�� vector�� �޸� �߰� ���� ���Ŀ��� end�� ��ȿȭ�� �Ͼ�� ����.
	//for (iter_begin = Mylist.begin(); iter_begin != iter_end; ++iter_begin)
	//	cout << (*iter_begin) << endl;



	//// ##4. list�� �ݺ���: ����� �ݺ���.
	//// ���� ���ٿ� �־ ++, -- �����ڸ� ����.
	//list<int>	Mylist;

	//Mylist.push_back(10);
	//Mylist.push_back(20);
	//Mylist.push_back(30);

	//Mylist.reverse(); // ��� ������ ��ġ�� �ڹٲ���´�.

	//list<int>::iterator iter_begin = Mylist.begin();
	//list<int>::iterator iter_end = Mylist.end();

	////iter_begin + 3; // Error
	////iter_begin[3]; // Error

	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << (*iter_begin) << endl;






	// ##3. list�� ����Լ�
	// swap, empty, clear, insert, erase �Լ��� ������.


	//// ##2. list ���� ����
	//// push_front, push_back �� �� ����.

	//list<int>	Mylist;
	//Mylist.push_back(30); // 30
	//Mylist.push_back(40); // 30 - 40

	//cout << "size: " << Mylist.size() << endl;
	//cout << "front: " << Mylist.front() << endl;
	//cout << "back: " << Mylist.back() << endl;

	//cout << "----------------------------" << endl;

	//Mylist.push_front(20); // 20 - 30 - 40
	//Mylist.push_front(10); // 10 - 20 - 30 - 40

	//cout << "size: " << Mylist.size() << endl;
	//cout << "front: " << Mylist.front() << endl;
	//cout << "back: " << Mylist.back() << endl;
	



	// ##1. list ����
	//list<int>	list1;
	//list<float> list2;
	//list<���������> list3;
}