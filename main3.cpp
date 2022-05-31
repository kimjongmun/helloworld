/*
#include <iostream> 

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
}

int main()
{
	unsigned int x = 2999999999;
	cout << "x = " << x << endl;


	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; // 257
	someInteger *= 2; // 514 
	someShort = static_cast<short>(someInteger); // 514
	someLong = someShort * 10000; // 5140000
	someFloat = someLong + 0.785f; //  5140000.785
	someDouble = static_cast<double>(someFloat) / 100000; // 51.40000785
	cout << someDouble << endl;

	int firstNum = 0;
	cout << "firstNum : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "secondNum : ";
	cin >> secondNum;
	cout << "Sum: ";
	cout << firstNum + secondNum << endl;

	const int a = 0; //const <- 수정할수 없음
	constexpr int b = fac(4); //미리 계산돼서 들어감 중요하지않음
	
} */