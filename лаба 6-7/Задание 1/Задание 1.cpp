#include <stdio.h>  //ввод библиотек
#include <math.h>


int main()                    //начало функции, начало программы
{
	int i, b, mass[] = { 3,2,35,0,11 }, c; // объявление переменных и массива
	int n = sizeof(mass) / sizeof(int);            // размер массива
	const double k = 1.247;                    // объявление константы
	for (c = n - 1; c >= 1; c /= k)                    // начало цикла
	{
		for (i = 0; i < n - c; i++) 
		{
			if (mass[i] > mass[i + c]) 
			{
				b = mass[i];
				mass[i] = mass[i + c];
				mass[i + c] = b;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", mass[i]);          // Вывод измененного массива
	}
	return 0;
}
