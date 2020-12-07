#include <stdio.h>         //ввод библиотек

int main()          //начло главной функции и программы
{
	int a,b,x,y, N = 7, mass[] = { 12,5,8,9,0,34,56,6}; // объявление переменных и массива
	
	while ( a< N - 1){               // начало цикла
		b = a + 1;
		x = a;
		while (b < N){
			if (mass[b] < mass[x]){
				x = b;
				b++;
			}
		}
		y = mass[a];
		mass[a] = mass[x];
		mass[x] = y;
	}

	for (a = 0; a < N; a++){
		printf("%d ", mass[a]); // вывод измененного массива
	}


	return 0;
}