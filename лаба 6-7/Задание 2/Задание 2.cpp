#include <stdio.h>              //ввод библиотек
#include <math.h>
 

int main()                 //начало функции, начало программы
{
	int i, b, mass[] = { 24,35,65,6,0,9,3 }, c;                // объявление переменных и массива
	int n = sizeof(mass) / sizeof(int);                 // размера массива
	const float k = 1.247;                      //объявление константы
	c = n - 1;


	while (c >= 1){                //начало цикла
		i = 0;
		while (i < n - c){
			if (mass[i] > mass[i + c]){
				b = mass[i];
				mass[i] = mass[i + c];
				mass[i + c] = b;
			}
			i++; 
		}
		c /= k; 
	}
	for (i = 0; i < n; i++){
		printf("%d ", mass[i]); // вывод измененного массива
	}
	return 0;
}