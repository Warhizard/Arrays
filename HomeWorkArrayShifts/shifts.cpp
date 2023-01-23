#include<iostream>
using namespace std;
//#define Shifts1
#define Shifts2
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 }, NumbOfShifts;
	cout << "¬ведите кол-во сдвигов массива: "; cin >> NumbOfShifts;
#ifdef Shifts1
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < NumbOfShifts; i++)
	{
	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	 {
		arr[i] = arr[i + 1];
	 }
	arr[n - 1] = buffer;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif
#ifdef Shifts2
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	NumbOfShifts = n - NumbOfShifts;
	for (int i = 0; i < NumbOfShifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n-1] = buffer;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif
}
	