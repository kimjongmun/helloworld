/*
#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
	int myArray[5] = { 0 };   //������ 5�� �����ʹ�~
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;
	//myArray[5] <- 0���� �����ϱ⶧���� ����

	int myArray1[] = { 1,2,3,4 };  //�迭 4���� �����ȴ�
	int myArray1[] { 1,2,3,4 };
	int myArray1[5] { 1,2,3 }; // ������ 4,5�� 0���� �ʱ�ȭ

	int myArray2[2][4] = { {1,2,3,4},{5,6,7,8} };    //2�� 4��
	//int myArray2[8] = {1,2,3,4,5,6,7,8} <-���� �޸𸮴� ����
	/*
	*  1  2  3  4 
	*  5  6  7  8
	

	// int myArray[3] = { 0 }; �Ʒ� array�� ������ ��밡�� ����� �Ʒ��� ������
	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr; // ���� 123�� a1, a2, a3 �� �ڵ������� �����ϰ� ������

	vector<int> myVector = { 11, 22 };
	myVector.push_back(33);
	myVector.push_back(44);     //�������� �߰��ϰ� ������ ������ ���
	

	//myVector�� ��� ���� ���� ���� ����غ���
	{
	{vector<int> myVector = { 11, 22, 33 };

	int vectorSize = myVector.size();
	cout << "VectorSize = " << vectorSize << endl;
	int sum = 0;

	for (int i : myVector)
	{
		sum += myVector[i]; // i?
	}

	for (int i : myVector)
	{
		sum += i;
	}

	for (auto iter = myVector.begin(); iter < myVector.end(); iter++)    // �� ������ �� �������
	{
		sum += iter; [i] ;
	}
	cout << "sum = " << sum << endl;


	//myVector�� ��� ���� 1�� ���غ��� (11, 22, 33) -> (12, 23, 34)

	int myArray[3] = { 11, 22, 33 };
	for (int& i : myArray)  //&�ּҰ� 
	{
		i++;
	}
	for (int i : myArray)
	{
		cout << "myArray[" << i << "] = " << i << endl;
	}
	}

	{
		vector<int> myVector = { 11, 22, 33 };

		int vectorSize = myVector.size();
		cout << "VectorSize = " << vectorSize << endl;

		int sum = 0;
		int i = 0;
		while (i < 3)
		{
			sum += myVector[i];
			i++;
		}

		sum = 0; //���� int �̹� �����س��⶧���� 
		i = 0;
		do {
			sum += myVector[i];
			i++;
		} while (i > 3);
	}

	{
		int selection = 0;

		do {
			system("cls");  //���� �����ֱ�
			cout << "What do you like? : \n";
			cout << "1) Red\n";
			cout << "2) Blue\n";
			cout << "3) Black\n";
			cout << "4) White\n";
			cin >> selection;
		} while (!(4 >= selection && selection >= 0));

		cout << "You like" << selection << endl;
	}
	

	{
		do {
			system("cls");
			int a, b = { 0 };
			cout << "put number [A B] : \n ";
			cin >> a >> b;

			
			cout << "A + B = " << a + b << endl;
			cout << "Quit?(Y/N) : ";
			char q = ' ';
			cin >> q;
			if (q == 'Y')
			{
				break;
			}
		} while (1);
	}
  
}
*/