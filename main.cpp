/*
#include <iostream>

//main은 시작프로그램
int main(int argc, char* argv[])
{
	int value1 = 0; // 1, -1
	int a1(0);
	int a2 = { 0 }; //최신 초기화 표기법
	int a3{ 0 };    //최신 초기화 표기법

	value1 = 0b1001011;  // 0b <- 2진법 표기법
	value1 = 0123; // 0 <- 8 진법
	value1 = 0x9f; // 0x <- 16진법
	signed int ; // 음수가능 기본
	unsigned int value2; // 1,2,3
	float value3; // 실수 (에 3.141592 등)
	char c1 = 'A'; // 'A'
	c1 = '\101'; //10진수 유니코드'A'
	c1 = '\x41'; //16진수 유니코드'A'
	
	//std::cin >> c1;

	int value; //변수(정수형만 가능)
	std::cin >> value;
	// cin <- 멈추고 실행
	std::cout << "Hello, World!" << std::endl;
	
	// --- 이스케이프 시퀀스 줄바꿈 \n
	// ; <- 문장의 마침표
	std::cout << "There are " << 219 << "ways\n I love you." " \n A" << " \n BC" << " \nDEF " << "\nGH" << std::endl; //아랫줄과 같다
	std::cout << "There are " << 219 << "ways \n I love you. \nA\nBC\nDEF\nGH" << std::endl;
	std::cout << "There are " << value1 << "ways \n I love you. \nA\nBC\nDEF\nGH" << std::endl; //내가 입력한숫자가 나옴



	return 0;
}*/