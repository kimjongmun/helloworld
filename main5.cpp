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
		bool result = false; //bool �� 0,1�� ǥ��  boolalpha �� true false �� ǥ��
		 //true false �ڸ��� �����־��ټ� ����
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false;
		result = (a > 0 || b > 0) ? true : false;
		result = (a > 0 && --b > 0) ? true : false; // ���� a ���� ������ �ƴ����� ���� b ���� �޶���������
		result = !(a > 0) ? true : false;
		cout << "Reulst =" << boolalpha << result << noboolalpha << " b = " << b << endl;

	}
	{
		int num = 10;
		cout << "2���� ǥ�� : " << bitset<32>(num) << endl;
		cout << "8���� ǥ�� : " << oct << num << endl;
		cout << "10���� ǥ�� : " << dec << num << endl;
		cout << "16���� ǥ�� : " << hex << num << endl;
		
		int x = 0x35;
		int y = 0xf0;
		cout << " x = " << bitset<8>(x) << endl;
		cout << " y = " << bitset<8>(y) << endl;
		cout << " x & y = " << bitset<8>(x & y) << endl;
		cout << " x | y = " << bitset<8>(x | y) << endl;
		cout << " x ^ y = " << bitset<8>(x ^ y) << endl; // ��Ÿ������ ������ false �ٸ��� true
		cout << " ~x = " << bitset<8>(~x ) << endl;

		int x1 = x << 2; //��Ʈ�� �������� ��ĭ �δ�
		cout << " x1 = " << bitset<8>(x1) << endl;

		char cX = 0b10010100;
		cout << "cX= " << bitset<8>(cX) << endl;
		cX = cX >> 2; // ��Ʈ ���������� ��ĭ (���� ����)
		cout << "cX= " << bitset<8>(cX) << endl; //���������� �з��� �ҽǵɶ��� �� ó�� ��Ʈ�� �����Ѵ�
	

	}
	{
		//�� ��ȯ
		
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		//�ڷ��� �켱���� - ����� ũ��, �Ǽ��� ���°� �켱
		//char - int - long - float - double - long double     ���������� ������ �� �켱��

		intVar = doubleVar + intVar * floatVar;
		//                        float
		//               double
		//    int (���곡�� ���� ���� ����)


	}
	{
		
		//static_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ��
		//dynamic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		//reinterpret_cast : �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ������� , �Ǵ� �� ������ ��ȯ��
		//const_cast : const ������ �Ͻ� ������
		

		double d = 10.5;
		int a = static_cast<int>(d);
		int a = d;

	}

} 

*/