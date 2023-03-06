#include <iostream>
#include <ctime>
using namespace std;



void main ()
{
	setlocale(LC_ALL, "ru");
	const int n = 15;
	int arr[n];

	//rand();	//Функция rand() возвращает псевдослучайное число, в диапазоне от 0 до 32 767 (RAND_MAX)
	//Заполнение массива случайными числами:
	int minRand, maxRand;
	do
	{
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand)cout << "Error: значения некорректны, попробуйте еще раз" << endl;
	} while (minRand >= maxRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		bool unique;	
		do
		{
			arr[i] = rand() % n;
			unique = true;	
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}