#include <iostream>
#include <filesystem>
using namespace std;

// 컴파일러에 따라 std::filesystem 대신 std::experimental::filesystem::v1 써야할 수 도 있다.
namespace fs = std::experimental::filesystem::v1;


void main()
{
	// 파일 시스템 
	// - 경로(path), 일반 파일, 디렉터리(directory)
	// - 파일 읽기, 쓰기에 관한 것이 아님.
	// - 파일의 속성변경, 디렉터리 순회, 파일 복사 등에 관한 라이브러리 
	// - 모든걸 std::fs로 할 수 있음
	// - #include <filesystem>
	
	// 파일 시스템 연산
	// - 플랫폼 공통적인 방법으로 경로 합치기
	// - 파일과 디렉터리 복사, 이름 바꾸기, 삭제
	// - 디렉터리에서 파일, 디렉터리 목록 가져오기
	// - 파일 권한 읽기 및 설정
	// - 파일 상태 읽기 및 설정


	// path
	fs::path path1 = "c:\\TestFolder";
	fs::path path2 = "examples";
	path1 /= path2;						// 나누기가 아니라  c:\\TestFolder\\examples 로바낌
										// path2가 \examples면 c:\\exampls로 바낌

	fs::path path3 = "c:\\TestFolder";
	fs::path path4 = "example";
	path3 += path4;						//  c:\\TestFolderexample 로 바낌


	// copy(from path, to path, copy_option)		file option 생략가능.
	// - 특정파일이 아닌 디렉토리 안의 것들을 복사함
	// ex) fs::copy(frompath, topath, fs::copy_option::recursive)	// 재귀로 복사( 전부 복사)


	// rename(file path, renamepath);
	// - file path를 renamepath로 바꾸거나 이동시킴 (filepath에 있던걸 renamepath로 이동시킴)
	// ex)
	// fs::rename(filepath, renamepath);



	// create_directories(path, 만들 폴더명)
	// - path에 폴더 생성
	// remove(path, 지울 폴더명)
	// - path에 폴더 제거
	// std::uintmaxt::removle_all(path)
	// - path에 해당하는 디렉토리 제거
	// recursive_directory_iterator(path);
	// - 파일 시스템 이터레이터
	// ex) 
	// for( auto dd : fs::recursive_directory_iterator(path)
	//	cout << dd << endl;				// 모든 path 하위에 있는 폴더 모두 출력

	// PrintPermission(fs::status(filepath).permission());
	// - 파일 속성 읽기
	// fs::status(filepath).permission();
	// - 파일 권한 리턴.
}