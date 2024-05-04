//Задание 3.*4

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b; //Добавляем нужные переменные
	printf("a = "); scanf("%d", &a); //Вводим значение переменной

	a = a * a * a;	//a^3
	b = a * a;		//a^6
	b = b * b * a;	//a^15

	printf("\na в степени 15 равно %d\n", b); //Выводим значение переменной
	
	return 0;
}
