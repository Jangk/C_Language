#include <iostream>
#include <filesystem>
using namespace std;

// �����Ϸ��� ���� std::filesystem ��� std::experimental::filesystem::v1 ����� �� �� �ִ�.
namespace fs = std::experimental::filesystem::v1;


void main()
{
	// ���� �ý��� 
	// - ���(path), �Ϲ� ����, ���͸�(directory)
	// - ���� �б�, ���⿡ ���� ���� �ƴ�.
	// - ������ �Ӽ�����, ���͸� ��ȸ, ���� ���� � ���� ���̺귯�� 
	// - ���� std::fs�� �� �� ����
	// - #include <filesystem>
	
	// ���� �ý��� ����
	// - �÷��� �������� ������� ��� ��ġ��
	// - ���ϰ� ���͸� ����, �̸� �ٲٱ�, ����
	// - ���͸����� ����, ���͸� ��� ��������
	// - ���� ���� �б� �� ����
	// - ���� ���� �б� �� ����


	// path
	fs::path path1 = "c:\\TestFolder";
	fs::path path2 = "examples";
	path1 /= path2;						// �����Ⱑ �ƴ϶�  c:\\TestFolder\\examples �ιٳ�
										// path2�� \examples�� c:\\exampls�� �ٳ�

	fs::path path3 = "c:\\TestFolder";
	fs::path path4 = "example";
	path3 += path4;						//  c:\\TestFolderexample �� �ٳ�


	// copy(from path, to path, copy_option)		file option ��������.
	// - Ư�������� �ƴ� ���丮 ���� �͵��� ������
	// ex) fs::copy(frompath, topath, fs::copy_option::recursive)	// ��ͷ� ����( ���� ����)


	// rename(file path, renamepath);
	// - file path�� renamepath�� �ٲٰų� �̵���Ŵ (filepath�� �ִ��� renamepath�� �̵���Ŵ)
	// ex)
	// fs::rename(filepath, renamepath);



	// create_directories(path, ���� ������)
	// - path�� ���� ����
	// remove(path, ���� ������)
	// - path�� ���� ����
	// std::uintmaxt::removle_all(path)
	// - path�� �ش��ϴ� ���丮 ����
	// recursive_directory_iterator(path);
	// - ���� �ý��� ���ͷ�����
	// ex) 
	// for( auto dd : fs::recursive_directory_iterator(path)
	//	cout << dd << endl;				// ��� path ������ �ִ� ���� ��� ���

	// PrintPermission(fs::status(filepath).permission());
	// - ���� �Ӽ� �б�
	// fs::status(filepath).permission();
	// - ���� ���� ����.
}