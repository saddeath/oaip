﻿#include <stdio.h>             // ввод библиотек                                 
#include <math.h>


int main()                         // начало функции, началор программы                      
{
	double a, b;                              //ввод переменных             
	a = 1000;
	b = 1;

	while (a>200){      // пока a>200 цикл повторяется, как только значение переменной а не удовлетворяет условию, цикл заканчивается
		a = a / 2;
		b = b * 2 + 1;
	}
	printf_s("%lf", b);   // вывод данных

	return 0;                                                  // конец программы
}