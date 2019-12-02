#include <iostream>
#include <iomanip>	// �ڷ���������� �����ϱ� ���� ���� ��� (������)
					// ��� ������
// ex1)
namespace Jangk
{
	void TangK();
}

void main()
{
	Jangk::TangK();
}


void Jangk::TangK()
{	//ex1)
	int num = 100;

	// setw(�ʿ�ĭ��)�� ������ �ѹ� ������ ���� �����ȴ�.( 8������ ������, ���߿� �ٸ����� ����ص� 8������ ����)
	// ������� ����
	std::cout << std::showbase << std::hex << 123 << std::endl;					// �ٸ� ���� ǥ��� ǥ�� (0x7b ���	)
	std::cout << std::noshowbase << std::hex << 123 << std::endl;				// ǥ��� ��ǥ�� (7b ���)
	std::cout << std::dec << 123 << std::endl;									// 10������ ���
	std::cout << std::hex << 123 << std::endl;									// 16������ ���
	std::cout << std::oct << 123 << std::endl;									//  8������ ���


	std::cout << std::uppercase << 'a' << std::endl;							// �ҹ��ڸ� �빮�ڷ�
	std::cout << std::nouppercase << 'a' << std::endl;							// �ҹ��ڸ� �ǵ帮������ ( �̹̺���Ȱ� �Ű�X)


																				// ��� ����
	std::cout << std::dec << std::endl;											// ������ �������� 8������ ��� �����س��� 10������ �ǵ���
	std::cout << std::setw(10) << 123 << std::endl;								// ����� ���� ĭ�� ���� 
	std::cout << std::setfill('*') << std::setw(10) << 123 << std::endl;		// �Լ����ڸ� ���� ������ ����(���ķ� ��ĭ�� ����)
	std::cout << std::setw(6) << std::left << -123 << std::endl;				// ��ȣ�� ���� ����   ��������
	std::cout << std::setw(6) << std::internal << -123 << std::endl;			// ��ȣ�� ���� ���ڴ� ��������
	std::cout << std::setw(6) << std::right << -123 << std::endl;				// ��ȣ�� ���� ����   ��������


																				// �Ҽ��� ����
	std::cout << std::noshowpoint << 100.0f << ",   " << 100.002f << std::endl;	// ���� �ʿ���� ���� �Ҽ������ϰ� ����
	std::cout << std::showpoint << 100.0f << ",   " << 100.002f << std::endl;	// �Ҽ��� 3�ڸ� ���� ���

																				// �Ҽ��� ǥ����
	std::cout << std::setprecision(4) << 123.456789 << std::endl;				// �Ҽ��� ǥ���� �ڸ��� ����(������ �����ϸ�, �ݿø���)
	std::cout << std::fixed << 123.456789 << std::endl;							// �Ϲ� �Ǽ� ǥ�� (123.45678 ���)
	std::cout << std::scientific << 123.456789 << std::endl;					// �ε��Ҽ��� ǥ��(1.2345678e+02)
}