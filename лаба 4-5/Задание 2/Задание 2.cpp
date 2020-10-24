#include <stdio.h>             // ввод библиотек                                 
#include <math.h>


int main()                         // начало функции, началор программы                      
{
	int i = 0, j = 0, buf, mass[] = { 4,7,10,3,2,16,9 }; // объявление массива и переменных
	int n = sizeof(mass) / sizeof(int); //размер массива

	for (i = 0; i < n - 1; i++) {            //начало цикла
		for (j = 0; j < n - 1 - i; j++) {
			if (mass[j] > mass[j + 1]) {       
				buf = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = buf;
			}
		}
	
	}
	for (int i = 0; i < n; i++) {
		printf_s("%d\n", mass[i]);             //вывод измененного массива
	}
	return 0;
}