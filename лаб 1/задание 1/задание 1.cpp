#include <stdio.h>             // ввод библиотек                                 
#include <locale.h>
#include <math.h>


int main()                         // начало функции, началор программы                      
{                                                                               
	double a, b,rez;                              //ввод переменных             
	setlocale(LC_ALL, "Rus");
	printf_s("Выраженрие (2a^4+570b-6+(b-6)^3)/(a+3b)^2:\n");     // вывод сообщения 
	printf_s("Введите значение переменной a:");                 
	scanf_s("%lf", &a);                                           // считывает переменную
	printf_s("Введите значение переменной b:");                
	scanf_s("%lf", &b);

	if ((a+3*b)==0) {
		printf_s("Ошибка, знаменатель не может быть равен 0"); 
		return 0;
	}
	else {
		rez = (pow(2 * a, 4) + 570*b-6 + pow(b - 6, 3) / pow(a + 3 * b, 2));
		printf_s("Итоговое значение выражения: %lf", rez);     
	}
	return 0;                                                  // конец программы
}                                                             

	
