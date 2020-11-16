#include <stdio.h>   // ввод библиотек
#include <locale.h>

int main()      //главная функция 
{
	setlocale(LC_ALL, "Rus");
	int i, j, x, mass[] = { 3,7,34,76,0,21 }; // Объявление переменных и массива
	int n = sizeof(mass) / sizeof(int); // Объявление размера массива

	for (i = 1; i < n; i++) // Начало цикла 
	{
		j = i;
		x = mass[i];
		for (; (j > 0) && (mass[j - 1] > x); j--) {
			mass[j] = mass[j - 1]; 
		}
		mass[j] = x; 
	
	}
	for (i = 0; i < n; i++){
		printf("%d ", mass[i]); // Вывод измененного массива

	}
	return 0;
}