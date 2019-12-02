#include <iostream>
#include <memory>
#include <vector>
using namespace std;


struct MyStruct
{
	int x;
	int y;
};


void main()
{	
	// ����Ʈ ������ �Ǵ� ���� ������
	// - ���� �����͸� ���� ������ �Ǵ� naked �����Ͷ�� �θ�
	// - ����Ʈ�����͸� ���� delete�� �Ƚᵵ �ȴ�.
	// - ������ ���� �Ⱦ��϶� ���ŵ�.
	// - ������ �÷��� ���� ������.


	// unique_ptr
	// - �����ڸ��� ����� �� ���� ������ ( ���� �� ���� �Ұ���)
	// - �����ڰ� �Ҹ�� �ڵ����� ������.
	// #include <memory> �ʼ�
	std::unique_ptr<MyStruct> myStruct(new MyStruct);	// * ������ ǥ�ô� ������.
	myStruct->x;										// ������ó�� �۵��Ѵ�.
														// delete �����ʾƵ� ��

	// ����ũ ������ ����ϱ� ������ 3����
	// 1. Ŭ���� ��� ����  ---- �Ҹ��ڿ��� ���� ���������ʾƵ� �ȴ�. �����ڿ��� �����Ҵ� ���ؾߴ�
	// 2. �Լ��������� ���� ?
	// 3. ���� �����͸� ������ �ִ� ���Ϳ� ����ũ �����͸����� ���߿� clear���ϸ� ��.


	// ����ũ ������ �߸� ����� ����
	int* a = new int;
	std::unique_ptr<int> uniPtr(a);				// a�� �ּҸ� ���� uniPtr ����
	std::unique_ptr<int> uniPtr2(a);			// a�� �ּҸ� ���� uniPtr ���� 
												// - ����ũ ptr�� �ϳ��� �����ؾ��ؼ� ������ ������
												//   unique_ptr�� ���� �����͸� �����ѵ� ������ ������ ����
												//	 ������ǿ� �ſ� ���
	uniPtr2 = nullptr;							// unique ptr�� nullptr�� ������ �ڵ����� �Ҹ��� ȣ��
												// - �̷����� uniPtr�� a�� �����Ⱚ�� ����;


	// ������ �Ǽ��� �������� c++ 14���� make_unique�� ���� new ����θ� ���� ��Ŵ
	// make_unique<�ڷ���>(������ �Լ�����);
	// - new Ű���带 ���� ��Ű�� ���� �ּҸ� ����Ű�� ������ ������ ����
	// - ���������� ������ new�� ������ ���� ��������.
	// - ����ũ �����;ȿ� ����ũ �����͸� �������� �ص� ����.
	//std::unique_ptr<int> uniPtr3 = std::make_unique<int>(8);	// make_unique�� ���� �����ϰ��ؼ�
	//cout << *uniPtr3 << endl;									// ���� �ּҸ� ����Ű�� ����ũ ������
																// ������ ����� ��Ȳ�� ����.


	// ����ũ������.reset()
	// - ����ũ �Լ� ���� ���� �ٸ� ������ �����ϴ� ��.
	// ex)
	//uniPtr3.reset(new  int(5));		// ������ �ִ� ���� �����ʹ� �ڵ����� ����.
	//cout << *uniPtr3 << endl;
	//uniPtr3.reset();				// uniPtr3 = nullptr �� ����� ����
	//cout << *uniPtr3 << endl;


	// ����ũ������.get()
	// - ����Ƽ �������� ���� ������ ��ȯ.


	// ����ũ������.release()
	// - ���� ���������͸� ���������ʰ� Ǯ���ְ�, nullptr�� ���ٳ�





	// std::move(����ũ ������);
	// ����ũ �����ͳ��� �������� �ȱ�� ����.
	//std::unique_ptr<int> uni1 = std::make_unique<int>(8);
	//std::unique_ptr<int> uni2 = std::move(uni1);				// ������ ���� ( �ſ� �����ϴ�)
	//const std::unique_ptr<int> uni3 = std::make_unique<int>(8);
	//std::unique_ptr<int> uni2 = std::move(uni3);				// const unique_ptr�� ������ ���� �Ұ���
	// - stl vector�� ������ �׳� push_back�� ������ ������ ����
	//   �׷��� push_back(std::move(����ũ������));�� �־�ߵȴ�.


}