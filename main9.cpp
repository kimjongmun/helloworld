/*
#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
	int myArray[5] = { 0 };   //변수를 5개 만들고싶다~
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;
	//myArray[5] <- 0부터 시작하기때문에 없다

	int myArray1[] = { 1,2,3,4 };  //배열 4개가 생성된다
	int myArray1[] { 1,2,3,4 };
	int myArray1[5] { 1,2,3 }; // 나머지 4,5는 0으로 초기화

	int myArray2[2][4] = { {1,2,3,4},{5,6,7,8} };    //2행 4열
	//int myArray2[8] = {1,2,3,4,5,6,7,8} <-위와 메모리는 같다
	/*
	*  1  2  3  4 
	*  5  6  7  8
	

	// int myArray[3] = { 0 }; 아래 array와 같지만 사용가능 기능이 아래가 더많다
	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr; // 위의 123을 a1, a2, a3 에 자동적으로 대입하고 싶을때

	vector<int> myVector = { 11, 22 };
	myVector.push_back(33);
	myVector.push_back(44);     //변수값을 추가하고 싶을때 백터의 기능
	

	//myVector에 모든 값을 더한 값을 출력해보자
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

	for (auto iter = myVector.begin(); iter < myVector.end(); iter++)    // 위 세가지 다 같은방법
	{
		sum += iter; [i] ;
	}
	cout << "sum = " << sum << endl;


	//myVector에 모든 값에 1씩 더해보자 (11, 22, 33) -> (12, 23, 34)

	int myArray[3] = { 11, 22, 33 };
	for (int& i : myArray)  //&주소값 
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

		sum = 0; //위에 int 이미 정의해놨기때문에 
		i = 0;
		do {
			sum += myVector[i];
			i++;
		} while (i > 3);
	}

	{
		int selection = 0;

		do {
			system("cls");  //과정 지워주기
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