#include <stdio.h>             // ввод библиотек                                 
#include <math.h>


int main()                         // начало функции, началор программы                      
{
	int i = 0, j = 0, buf, mass[] = { 4,7,10,3,2,16,9 }; // объявление массива и переменных
	int n = sizeof(mass) / sizeof(int); //размер массива
	while (i < n - 1) {                           // Начало цикла
		while (j < n - 1 - i){               
			if (mass[j] > mass[j + 1]){ 
				buf = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = buf;
			}
			j++; 
		}
		i++; 
		j = 0;
	}
	for (i = 0; i < n; i++){
		printf_s("%d\n ", mass[i]); // Вывод измененного массива
	}
	return 0;
}