#include <stdio.h>            //ввод библиотек


int main()                  //начало главной функции и программы 
{

	int x,y,a,b, N = 7, mass[] = { 4,6,3,9,34,67,10,0 };             // объявление переменных и массива

	for ( a= 0; a < N - 1; a++){             // начало цикла
		for (b = a + 1, x = a; b < N; b++){              
			if (mass[b] < mass[x]) 
				x = b;
		}
		y = mass[a];
		mass[a] = mass[x];
		mass[x] = y;
	}

	for (a = 0; a < N; a++){
		printf("%d ", mass[a]);       // Вывод измененного массива
	}


	return 0;
}