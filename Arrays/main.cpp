#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	//arr[3] = 123;
	cout << "������� �������� ��������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = SIZE-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum=0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� ������� = " << sum << endl;
	cout << "����� �������-�������������� ��������� �������: " << sum / SIZE << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;
}
