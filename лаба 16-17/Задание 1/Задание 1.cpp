#include <stdio.h>       // ввод библиотеки 


void qsort(int* mass, int a, int b){     // начало функции и программы
	
	if (a < b){
		int ml, c = a, x = b, m = mass[(a + b) / 2];           // объявление переменных
		do{
			while (mass[c] < m){              // цикл, если значение меньше опорного
				c++;
			}
			while (mass[x] > m){               // цикл, если значение больше опорного
				x--;
			}
			if (c <= x){
				int ml = mass[c];
				mass[c] = mass[x];
				mass[x] = ml;
				c++;
				x--;
			}
		} while (c <= x);        // проверка 
		qsort(mass, a, x);
		qsort(mass, c, b);
	}
}


int main()
{

	int y;
	int mass[] = { 1,2,89,5,0,24,78 };            // объявление массива
	int n = sizeof(mass) / sizeof(int);            // размер массива
    qsort(mass, 0, n - 1);                   // вызов функции сортировки

	for (y = 0; y < n; y++){
		printf_s("%i ", mass[y]);            // вывод измененного массива 
	}
}