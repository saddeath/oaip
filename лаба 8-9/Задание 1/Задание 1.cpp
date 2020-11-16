#include <stdio.h>   // ввод библиотек 
#include <locale.h>

int main()              //главная функция 
{
	setlocale(LC_ALL, "Rus");
	int i, j, x, mass[] = { 5,7,88,9,23,0 };            // объявление переменных и массива
	int n = sizeof(mass) / sizeof(int);            // Объявление размера массива

	for (i = 1; i < n; i++) {                 // начало цикла
		x = mass[i];
		j = i;
		while ((j > 0) && (mass[j - 1] > x)) {
			mass[j] = mass[j - 1]; 
				j--; 
		}
		mass[j] = x;
	}

	for (i = 0; i < n; i++) {
		printf("%d ", mass[i]); // Вывод измененного массива 
	}

	return 0;
}