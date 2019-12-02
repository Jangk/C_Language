#include <iostream>
using namespace std;


void main()
{
	// lambda
	// - 간단하고 빠르게 가능, 디버깅이 하기 힘듬
	// - 이름 없는 함수 개체, 내포되는 함수
	// - 외부 변수 사용불가능 함.
	// [캡처 블록](함수인자)지정자 반환형{ 함수 정의 };
	// ex)
	auto noCap = []() { cout << "람다 함수 " << endl; };
	noCap();


	// 캡쳐의 종류
	// []  : 비어있음 (특별한 기능이 없다)
	// [=] : 값의 의한 캡쳐(선언된 람다 위에 정의된 변수를 값 복사(call by value)로 불러옴)
	//		 식 안에서 값을 수정할 수 없다. 바꾸려하면 에러뜸.
	int val1 = 50;
	int val2 = 100;
	auto max = [=]() {return val1 > val2 ? val1 : val2; };
	cout << max() << endl;

	// - & : 참조에 의한 캡쳐, 다른 외부 변수 캡쳐함
	//		 식 안에서 값을 수정할 수 있다.
	auto and = [&]() {val1 = 30, val2 = 30; cout << val1 << ", " << val2 << endl; };
	and ();
	

	// - [변수이름] : 특정 변수의 값을 참조 (변수 이름에 해당하는 변수만 사용가능)
	//				 식 안에서 값을 수정할 수 없다.
	auto name = [val1]() {cout << val1 << endl; };
	auto name2 = [val1, val2]() {cout << val1 << ", " << val2 << endl; }; // 특정 변수가 여러개도 상관없음.
	name();						

	// - &[변수이름] : 특정 변수를 참조로 캡처
	//				  식 안에서 값을 수정할 수 있다.			
	auto name3 = [&val1]() {val1 = 0; cout << val1 << endl; };
	name3();



	// 여러개의 캡쳐를 섞어쓸수도 있다.
	auto capture1 = [=, &val1]() {};		// 모든 변수를 받지만 val1만 수정가능.



	// mutable		(지정자)
	// - 현재 람다식에 있는 유일한 지정자.
	// - 값에 의한 캡쳐도 값을 수정할 수 있게해줌.
	// ex)
	auto mutableFunc = [val1]() mutable {val1 = 10; cout << val1 << endl; };	// 원래 수정불가능하지만 mutble을
	//			  																   붙여서 수정가능



	// 반환형
	// - 람다식에서 기본적으로 return이 없으면 자동으로 판단
	// - 
}