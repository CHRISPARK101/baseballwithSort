#include<iostream>
#include<Windows.h>

using namespace std;
/*
int main()
{
	
	int a[3] = { 1,2,3 };
	int b[3] = { 0 };
	int cntS,cntB;

	while (1) {

		cin >> b[0] >> b[1] >> b[2];

		system("cls");


		int cntS = 0;
		int cntB = 0;
		int cntO = 0;

		for (int i = 0; i < 3;i++) 
		{	
			//스트라이크 갯수 구하기
			//비교 처리
			if (a[i] == b[i]) 
			{	
				cntS++;
			}
			//볼 갯수 구하기
			else if (a[i] == b[i + 1] || a[i] == b[i + 2] || a[i] == b[i - 1] || a[i] == b[i - 2]) //[i] = [j]
			{
				cntB++;
			}
			//out 갯수 구하기
			else if (a[i] != b[i])
			{
				cntO++;
			}
		}
	cout << endl;

	//결과 출력
	cout << "S : " << cntS << endl;
	cout << "B : " << cntB << endl;
	cout << "O : " << cntO << endl;
	
	}
}

//----------------------[선택정렬]----------------------------
int main()
{
	int arr[10] = { 10, 3, 76, 54, 42, 13, 34, 28, 99, 7 };
	int i, j, temp, index, min;

	for (i = 0; i < 10; ++i) {

		min = arr[i]; //가장 작은 수
		index = i;	  //가장 작은수 위치

		//비교하여 가장 작은 수와 위치기록 
		for (j = i + 1; j < 10; ++j) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
				}
		}
		//비교가 끝나면 교환 
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	//출력 
	for (i = 0; i < 10; ++i) {
		cout<< arr[i];
	}

	return 0;
}
*/

int main()
{
	int arr[10] = { 10,3,76,54,42,13,34,28,99,7 };

	for (int i = 0; i < 10; i++)
	{	
		int lowest = i;
		for(int j = i+1; j<10;j++) // i를 제외한 따라서 i+1 부터
		{
			if (arr[lowest] > arr[j])  //찾은수를 입력해서 비교후 가장낮은숫자를 찾는다.
			{
				lowest = j;
			}
		}

		int temp = arr[lowest];
		arr[lowest] = arr[i];
		arr[i] = temp;
	}
	for (int itr : arr)
	{
		cout << itr << " ";
	}
}
