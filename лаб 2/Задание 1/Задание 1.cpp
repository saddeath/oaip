#include <stdio.h>             // ввод библиотек                                 
#include <locale.h>
#include <math.h>


int main()                         // начало функции, началор программы                      
{
	double a, b,c, rez;                              //ввод переменных             
	setlocale(LC_ALL, "Rus");
	printf_s("Выраженрие (6a^5+6cb^2-2-(a-34)^3 -|a-b|):\n");     // вывод сообщения 
	printf_s("Введите значение переменной a:");
	scanf_s("%lf", &a);                                           // считывает переменную
	printf_s("Введите значение переменной b:");
	scanf_s("%lf", &b);
	printf_s("Введите значение переменной c:");
	scanf_s("%lf", &c);
	rez = 6 * pow(a, 5) + 6 * c * pow(b, 2) - 2 - pow(a - 34, 3) - abs(a - b);     
	printf_s("Значение выражения равно: %lf", rez);                        // вывод значения

	return 0;                                                  // конец программы
}


