#include <iostream>
#include <map>
#include <string>
using namespace std;


class testClass
{
public:
	testClass(int id, string name) : m_Id(id), m_Name(name) {}	// ������
	bool operator<(const testClass& other)const;				// ������ �����ε�
private:
	int m_Id;
	string m_Name;
};
void main()
{
	// Map    ------ key�� value�� ����� ������ ������
	// - key���� �ߺ��� �� ����.
	// - 2�� Ž��Ʈ�� ���, c++�� hash���� �ƴ�
	// - c++ ���� key �������� ������������ �ڵ� ���ĵ� 
	//ex) ��뿹
	//std::map < key �ڷ���, value �ڷ���> map������;
	//std::map<std::string, int> testMap;




	// std::pair<key, value>								// 2���� �׻����� ���
	// std::pair<iterator, bool> insert(const value_type& value);
	// - Ű���� �ߺ��� �� ���� ������ bool �˻� ���� ���������� ���� true ��ȯ,
	//testMap.insert(std::pair<std::string, int>("data1", 1));
	//testMap.insert(std::pair<std::string, int>("data2", 2));
	//testMap["data1"] = 100;									// key���� �迭 �ε���ó�� ��밡��.
	
	
	// map.size()											// 
	//cout << testMap.size() << ", " << testMap["data1"] << endl;


	// map[] ����
	// - �����͸� ������ ���� Ű���� ���� �� Ű���� 0���� �ʱ�ȭ��.(�ǵ�ġ�ʰ� ������ ������ �� ����)
	//std::map<std::string, int> testMap;
	//testMap["First"] = 10;									// Ű ���� �ߺ� �ȵǴ� ���ο� ������ ����
	//testMap["First"] = 100;									// ���� ���


	// vector�� �����ϰ� iterator ��밡��.
	// �ڵ����� ������ �༭ abc, bbc, cbc ������ ����.
	//std::map<std::string, int> testMap;
	//testMap.insert(pair<string, int>("cbc", 3));
	//testMap.insert(pair<string, int>("bbc", 2));
	//testMap.insert(pair<string, int>("abc", 1));
	//for (map<string, int>::iterator iter = testMap.begin(); iter != testMap.end(); ++iter)
	//	// map->first  == key , map->second  == value
	//	cout << iter->first << ", " << iter->second << endl;


	// map.find("ã����")
	// - ã������ ���� iterator�� ������ ��ȯ(�� ������ ������ �ٳ�), ������ map.end()�� ����.
	// ex)
	//map<string, int> testMap;
	////testMap.insert(pair<string, int>("abc", 10));
	//map<string, int>::iterator it = testMap.find("abc");
	//if (it != testMap.end())
	//	it->second = 80;
	//cout << it->first << ", " << it->second;


	// map.swap(map����)
	// - ���׷��� �����Ѵ�.
	// map.clear()
	// - map�� �����͸� ����.
	// map.erase(����ó�� iter �Ǵ� key)
	// - vector�� ���������� key���� ����� �ٷ� ����� ����.





	// object�� key�� ����ϱ�
	// - �׳� object�� key�� ����ϸ� ������ �߻��Ѵ�.
	// - map�� �ڵ� ���ĵǴµ� class object�� < ��� �񱳰� ������ �ȵǱ⶧��.
	//ex)
	map<testClass, int> testMap;
	// testclass�� ���� ũ�ų� �������� �ǴܺҰ�, ������ �ȵǼ� ����.
	// ����� �۵��ϰ� �Ϸ��� ������ �����ε��� �ؾߵ�.
	testMap.insert(pair<testClass, int>(testClass(1234, "�̸���"), 30));
	testMap.insert(pair<testClass, int>(testClass(6789, "�ٸ��̸���"), 30));

}


// ���� ��ū�� �Ǵ��� �� �ְ� ������ �����ε�.
bool testClass::operator<(const testClass & other) const
{	// �̸��� ������ ���̵�� ����
	if (m_Name == other.m_Name)
		return m_Id < other.m_Id;
	return m_Name < other.m_Name;
}
