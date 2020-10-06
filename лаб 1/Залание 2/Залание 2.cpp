#include <stdio.h>                          //ввод библиотеки 
#include <locale.h>
#include <math.h>


int main()                                  // начало функции, начало программы 
{
	int a, b;                                 // ввод переменных
	double rez;
	setlocale(LC_ALL, "Rus");
	printf_s("Выраженрие (a^16+(b-10)^2)/(a+b)^4:\n");   // вывод сообщения 
	printf_s("Введите значение переменной a:");
	scanf_s("%d", &a);                                     // считывает переменную
	printf_s("Введите значение переменной b:");
	scanf_s("%d", &b);

	if ((a +  b) == 0) {
		printf_s("Ошибка, знаменатель не может быть равен 0");
		return 0;
	}
	else {
		rez = (pow( a, 16)  +(double)pow(b - 10, 2) / pow(a +  b, 4));
		printf_s("Итоговое значение выражения: %lf", rez);
	}
	return 0;                                          // конец функции, конец программы
}