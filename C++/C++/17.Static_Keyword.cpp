#include <iostream>
#include <exception>					// try catch���� ����ϱ� ���ؼ� ����ϴ� ���� ���
using namespace std;


void Add(int a)
{
	static int  staticVal = 0;			// �Լ��� ���ö����� �ʱ�ȭ�ϴ°� �ƴ� ù ����ÿ��� �ѹ��� 0���� �ʱ�ȭ
	staticVal += a;
}


void main()
{
	// static Ű����
	// static�� ����� �� ���� �ٸ����Ͽ��� �� ������ ���� �� �� ����(���α׷� ���࿡ �� �ϳ��� �����ϴ� ��)
	// main�Լ��� static�� ���������� main�Լ� ����� ���� �Ұ�, �ʱ�ȭ�� �� �ѹ��� ��.
	// �Լ������� static���� ��밡��
	// ex) Add(10);								// ù �����̶� static�� 0���� �ʱ�ȭ�� +10�ؼ� 10 
	//	   Add(20);								// static�̶� �ʱ�ȭ�� �����ʰ� 10 +20 �ؼ� 30�� ��.


	// Ŭ�������� ��� static ������ �ʱ�ȭ�ҋ�  Ŭ������::static������ = �ʱ�ȭ�Ұ�; ���� �ʱ�ȭ��.
	// �� �ϳ��� ���ǵǱ⋚���� �ν��Ͻ��� �þ���ص� static������ �������� ��������. (�޸𸮸� �ν��Ͻ��� ����������)
	// Ŭ���� ��� ����/�Լ��� ����� ��� Ŭ������::����/�Լ���()�� ȣ�Ⱑ��
	// ex) TestClass::StaticFunc();



	//extern Ű����
	// �ٸ� ���Ͽ� �ִ� ����/�Լ��� �����ϰ� ��.
	// ex) exturn void Print();					// �ٸ� ���Ͽ� ���ǵ� �Լ��� ���Ǹ� �ҷ���, exturn ������ ����.



	//exception    ����
	//tryCatch��			----#include<exception>  �ʼ�
	int val1 = 0, val2 = 0;
	cin >> val1 >> val2;
	
	
	try											// ���ܰ˻��� �ʱ��
	{
		int result = val1 / val2;
		//throw result;							// ����ó�� �Ȱ��� catch�� ����
	}
	catch (const std::exception& e)
	{
		std::cerr << "exception" << e.what() << endl;
	}
	catch (int i)								// throw�� ���� i�� ���� (throw�� ���������� ���� X)
	{
		cout << "����ó���� ���� " << i << "�Դϴ�" << endl;
	}
}