#include <iostream>
#include <vector>

using namespace std;

//1. �����̳�(�ڷᱸ��)
//< ���� ��ġ�� ���� �з� >
//ǥ�� ������ �����̳�(������) : vector, list, deque, array ��.
//ǥ�� ���� �����̳�(������) : map, multi map, set, multi set ��
//
//<�޸� ����Ŀ� ���� �з�>
//�迭���(���ӵ� �޸�) : vector, deque, array
//�����(�񿬼� �޸�) : list, map, multi map, set, multi set

// vector
// ǥ�� ������ �����̳�, ���� �迭 ���.
// ��ȭ���¿��� �߰� ���� �� ���Ҵ� �� ���簡 ����ȴ�. -> ����� ���� �Ҹ�
// ���ҿ� ���� �ε��� ������ ������. -> Ž�� ����

void main()
{
	//// ##9. vector�� ���� �ִ� ���Ұ� �����Ҵ� �� ���Ҷ��
	//// ���Ҹ� �����ϱ� ���� �׻� delete�ض�!
	//vector<int*>	vec;
	//vec.push_back(new int);

	//delete vec[0];
	////vec.pop_back();
	////vec.clear();


	//// ##8. clear �Լ�
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;

	//cout << "---------------------------------" << endl;

	//// clear: ��� ���Ҹ� ����. �׷��� capacity�� �״�δ�.
	//vec.clear();

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;


	//// ##7. empty �Լ�
	//vector<int>	vec;

	//// ���Ͱ� ��������� true ��ȯ.
	//if (vec.empty())
	//	cout << "����ֽ��ϴ�" << endl;






	//// ##6. ������ �ε��� ����
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//for (size_t i = 0; i < vec.size(); ++i)
	//	cout << vec[i] << endl; // �ε��� �����ڰ� �����ε� �Ǿ��ִ�!






	//// ##5. ���� ���� �� capacity ���̱�.
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;
	//cout << "�迭�� �ּ�: " << &vec[0] << endl;

	//cout << "-------------------------" << endl;

	//vec.pop_back();	// |10|20|

	//// shrink_to_fit: ���� capacity�� size�� �°� �����ϴ� �Լ�.
	//// �� �� �ٽ� ���Ҵ� �� ���簡 �����.
	//vec.shrink_to_fit();

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;
	//cout << "�迭�� �ּ�: " << &vec[0] << endl;





	//// ##4. ������ �⺻ ���� ���� (pop)
	//// pop_back�� ���������� pop_front�� �������� �ʴ´�.
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;

	//cout << "-------------------------" << endl;

	//// ������ ���Ҹ� �����Ͽ��� capacity�� �پ���� �ʴ´�.
	//vec.pop_back();	// |10|20|

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;




	//// ##3. ���Ͱ� �̹� ��ȭ������ �� �߰� ���ԵǸ� ���Ҵ� �� ���簡 ����ȴ�.
	//// �� �� capacity�� �������� 1.5�� �þ��. -> ���Ҵ� �� ���� �ּ�ȭ.
	//vector<int>	vec;

	//for (int i = 0; i < 10; ++i)
	//{
	//	vec.push_back(i);

	//	cout << "size: " << vec.size() << endl;		
	//	cout << "capacity: " << vec.capacity() << endl; 
	//	cout << "�迭�� �ּ�: " << &vec[0] << endl; // ���ʹ� �ε��� ���� ����!
	//	cout << "---------------------------------" << endl;
	//}




	//// ##2. ������ �⺻ ���� ���� (push)
	//// push_back�Լ��� �����Ѵ�. push_front�� �������� �ʴ´�.
	//// ���Ͱ� �̹� ��ȭ������ �� �߰� ���ԵǸ� ���Ҵ� �� ���簡 ����ȴ�.
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//// size: ���� ���Ϳ� ������ ������ ����
	//cout << "size: " << vec.size() << endl;		

	//// capacity: ���Ͱ� ������ �� �ִ� ������ �ִ� ����
	//cout << "capacity: " << vec.capacity() << endl; 







	//// ##1. ������ ����: ���ø� Ŭ����.
	//vector<int>		vec1;
	//vector<float>	vec2;
	////vector<���������Ÿ��>	vec3;
}