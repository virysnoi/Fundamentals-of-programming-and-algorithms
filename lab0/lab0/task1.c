#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "rus");
	
	puts("Нажмите Enter для продолжения...");
	
	getchar(); // ожидание нажатия Enter

	puts("Продолжение программы");

	system("pause");
	return 0;

}

