#include <iostream>
#include <vector>

using namespace std;

// ##1. �ݺ��� (iterator)
// �����̳�(�ڷᱸ��) �������� �����Ǿ��ִ� ���ҿ� �����ϴ� ����� ��� �ٸ���.
// STL���� �����ϴ� �����̳ʸ��� ���ο� �ش� �����̳��� ���� ��Ŀ� 
// �°� "�ݺ���"�� ���ǵǾ� �ְ� �� �ݺ��ڴ� ���� ���ٿ� ���� ���ϵ� �������̽��� �����Ѵ�.
// �ݺ��ڴ� ������ ��ġ�� ���� �ִ� �����̴�. �����͸� ����ߴ�.

void main()
{

	/*vector<int>	vec1;
	vec1.push_back(10);
	vec1.push_back(50);

	vector<int>	vec2;
	vec2.push_back(20);
	vec2.push_back(30);
	vec2.push_back(40);	

	vec1.insert(vec1.begin() + 1, vec2.begin(), vec2.end());

	for (size_t i = 0; i < vec1.size(); ++i)
	{
		cout << vec1[i] << endl;
	}*/

	

	

	




	// ##3. �ݺ����� ��ȿȭ 
	//vector<int>	vec;

	//vec.push_back(10);
	//vec.push_back(20);
	//vec.push_back(30);

	//vector<int>::iterator iter = vec.begin();

	//iter += 1;
	//iter = vec.erase(iter); // ������ ���� ��ġ�� ��ȯ.
	//cout << *iter << endl;

	//// vector�� �߰� ���� �� �ݺ����� ��ȿȭ�� �Ͼ.
	//iter += 1;
	//vec.erase(iter); // ������ ��ġ�� ���ڷ� ������.		
	//cout << *iter << endl; // Error! ��ȿȭ.

	//// vector�� �߰� ���� ���Ŀ��� �ݺ����� ��ȿȭ�� �Ͼ.
	//iter += 1;
	//vec.insert(iter, 50);
	//cout << *iter << endl; // Error! ��ȿȭ.




	//// ##2. vector�� �ݺ���: �������� �ݺ���
	//vector<int>	vec;

	//vec.push_back(10);
	//vec.push_back(20);
	//vec.push_back(30);

	//vector<int>::iterator iter = vec.begin();

	//// �������� �ݺ���
	////cout << iter[1] << endl;
	////cout << *(iter + 1) << endl;

	//// vector�� �߰� ����: �� ���� capacity�� �״�� ����.
	////vec.erase(iter + 1); // ������ ��ġ�� ���ڷ� ������.	
	//

	//// vector�� �߰� ����: �� �� �̹� ��ȭ���¶�� ���Ҵ� �� ���簡 �Ͼ.
	////vec.insert(iter + 1, 50);


	///////////////////////////////////////////////////////////////////////

	//vector<int>::iterator iter_begin = vec.begin(); // begin: ù��° ���� ��ġ
	//vector<int>::iterator iter_end = vec.end(); // end: ������ ���� ���� ��ġ

	//// �ݺ��ڿ��Դ� �� ���� �� ���� �����ڰ� �����ε��Ǿ� �ִ�.
	//for (; iter_begin != iter_end; ++iter_begin)
	//{
	//	// ������ ������ ���� �����ε��Ǿ� �ִ�.
	//	cout << *iter_begin << endl;
	//}
}