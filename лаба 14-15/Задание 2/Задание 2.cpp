#include <stdio.h>          // ввод библиотеки 


int main()          // начало главной функции и программы
{

	int a = 1, b = 2, c, n = 7, mass[] = { 7,23,6,312,0,9,52 };           // объявление переменных и массива
	
	while (a < n){                    // начало цикла
		if (mass[a - 1] > mass[a]){ 
			c = mass[a];
			mass[a] = mass[a - 1];
			mass[a - 1] = c;
			a--;
			if (a > 0){
				continue;              // начало работы цикла заново
			}
		}
		a = b++;
	}
	for (a = 0; a < n; a++){
		printf("%d ", mass[a]);                   // вывод измененного массива 


	}
	return 0;

}