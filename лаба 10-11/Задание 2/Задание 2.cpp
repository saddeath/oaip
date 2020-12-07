#include <stdio.h>              //ввод иблиотек 
#include <locale.h> 


int main()              //начало главной функции, начло программы
{

	int a, b, c, d, mass[] = { 4,23,6,2,5,634,65,3,4 };           // объявление переменных и массива
	int n = sizeof(mass) / sizeof(int);         // объявление размера массива
	d = n / 2; 

	while (d > 0){                //начало цикла 
		a = d;
		while (a < n){
			c = mass[b];
			b = a;
			while (b >= d){
				if (c < mass[b - d]){
					mass[b] = mass[b - d];
					b = b - d;
				}
				else break;
			}
			mass[b] = c;
			a++; 
		}
		d = d / 2; 
	}

	for (a = 0; a < n; a++){
		printf("%d ", mass[a]);                      // вывод измененного массива
	}


	return 0;
}
