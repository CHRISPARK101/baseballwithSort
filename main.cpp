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
			//��Ʈ����ũ ���� ���ϱ�
			//�� ó��
			if (a[i] == b[i]) 
			{	
				cntS++;
			}
			//�� ���� ���ϱ�
			else if (a[i] == b[i + 1] || a[i] == b[i + 2] || a[i] == b[i - 1] || a[i] == b[i - 2]) //[i] = [j]
			{
				cntB++;
			}
			//out ���� ���ϱ�
			else if (a[i] != b[i])
			{
				cntO++;
			}
		}
	cout << endl;

	//��� ���
	cout << "S : " << cntS << endl;
	cout << "B : " << cntB << endl;
	cout << "O : " << cntO << endl;
	
	}
}

//----------------------[��������]----------------------------
int main()
{
	int arr[10] = { 10, 3, 76, 54, 42, 13, 34, 28, 99, 7 };
	int i, j, temp, index, min;

	for (i = 0; i < 10; ++i) {

		min = arr[i]; //���� ���� ��
		index = i;	  //���� ������ ��ġ

		//���Ͽ� ���� ���� ���� ��ġ��� 
		for (j = i + 1; j < 10; ++j) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
				}
		}
		//�񱳰� ������ ��ȯ 
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	//��� 
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
		for(int j = i+1; j<10;j++) // i�� ������ ���� i+1 ����
		{
			if (arr[lowest] > arr[j])  //ã������ �Է��ؼ� ���� ���峷�����ڸ� ã�´�.
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
