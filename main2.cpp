/*#include <iostream>

using namespace std; //밑 a주석부분을 생략하게 해줌

namespace myNS1 {int n = 10;}
namespace myNS2 {int n = 20;}
int n = 30;

int main(int argc, char* argv[])
{
	int n = 40;

	cout << myNS1::n << std::endl;
	cout << myNS2::n << std::endl;
	cout << ::n << std::endl;
	/*a- std::cout << n << std::endl;

	float myFloat = 3.14f;
	int i1 = (int)myFloat;      //방법1 비추천
	int i2 = int(myFloat);      //방법2 비추천
	int i3 = static_cast<int>(myFloat); //방법3  정확한 형변환 방법

	double d1 = 1200.;
	double d2 = 1200.0;
	double d3 = 12e2; //12 * (10^2)
	double d4 = 1.2e+3; // 1.2* (10^3)  +제곱으로 -제곱나눔으로
	cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl;

}
*/