/*

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++;
		//b = ++a;
		//b = a--;
		cout << "a =" << a << "b = " << b << endl;
	}
	{
		int a = 10;
		int b = -5;
		bool result = false; //bool 은 0,1로 표시  boolalpha 는 true false 로 표시
		 //true false 자리에 값을넣어줄수 있음
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false;
		result = (a > 0 || b > 0) ? true : false;
		result = (a > 0 && --b > 0) ? true : false; // 축약논리 a 값이 참인지 아닌지에 따라 b 값이 달라질수있음
		result = !(a > 0) ? true : false;
		cout << "Reulst =" << boolalpha << result << noboolalpha << " b = " << b << endl;

	}
	{
		int num = 10;
		cout << "2진수 표기 : " << bitset<32>(num) << endl;
		cout << "8진수 표기 : " << oct << num << endl;
		cout << "10진수 표기 : " << dec << num << endl;
		cout << "16진수 표기 : " << hex << num << endl;
		
		int x = 0x35;
		int y = 0xf0;
		cout << " x = " << bitset<8>(x) << endl;
		cout << " y = " << bitset<8>(y) << endl;
		cout << " x & y = " << bitset<8>(x & y) << endl;
		cout << " x | y = " << bitset<8>(x | y) << endl;
		cout << " x ^ y = " << bitset<8>(x ^ y) << endl; // 배타적논리합 같으면 false 다르면 true
		cout << " ~x = " << bitset<8>(~x ) << endl;

		int x1 = x << 2; //비트를 왼쪽으로 두칸 민다
		cout << " x1 = " << bitset<8>(x1) << endl;

		char cX = 0b10010100;
		cout << "cX= " << bitset<8>(cX) << endl;
		cX = cX >> 2; // 비트 오른쪽으로 두칸 (꺽쇠 방향)
		cout << "cX= " << bitset<8>(cX) << endl; //오른쪽으로 밀려서 소실될때는 맨 처음 비트를 복사한다
	

	}
	{
		//형 변환
		
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		//자료형 우선순위 - 사이즈가 크고, 실수인 형태가 우선
		//char - int - long - float - double - long double     오른쪽으로 갈수록 더 우선됨

		intVar = doubleVar + intVar * floatVar;
		//                        float
		//               double
		//    int (연산끝에 들어가는 형을 따라감)


	}
	{
		
		//static_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 때 수식에 지정된 그대로 변환함
		//dynamic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함
		//reinterpret_cast : 포인터를 다른 자료형의 포인터나 정수 자료형으로 , 또는 그 역으로 변환함
		//const_cast : const 지정을 일시 해제함
		

		double d = 10.5;
		int a = static_cast<int>(d);
		int a = d;

	}

} 

*/