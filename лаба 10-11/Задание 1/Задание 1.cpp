#include <stdio.h>    //ввод библиотек
#include <locale.h> 


int main()                           //начало главной функции, начало программы
{

	int a, b, c, d, mass[] = { 7,3,45,2,73,6 };                     // объявление переменных и массива
	int n = sizeof(mass) / sizeof(int);                // объявление размера массива


	for (d = n / 2; d > 0; d /= 2){                 //начало цикла
		for (a = d; a < n; a++){
			c = mass[a];
			for (b = a; b >= d; b -= d){
				if (c < mass[b - d]) {
					mass[b] = mass[b - d];
				}
				else break;
			}
			mass[b] = c;
		}
	}

	for (a = 0; a < n; a++){             //вывод измененного массива
		printf("%d ", mass[a]); 
	}


	return 0;
}
