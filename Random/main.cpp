#include <iostream>
using namespace std;



void main ()
{
	setlocale(LC_ALL, "ru");
	const int n = 15;
	int arr[n];
	//rand();	//������� rand() ���������� ��������������� �����, � ��������� �� 0 �� 32 767 (RAND_MAX)
	//���������� ������� ���������� �������:
	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (minRand >= maxRand)cout << "Error: �������� �����������, ���������� ��� ���" << endl;
	} while (minRand >= maxRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}