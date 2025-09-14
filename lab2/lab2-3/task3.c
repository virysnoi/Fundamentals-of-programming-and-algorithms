#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_CTYPE, "rus");

	float n, L;

	n = 3;

	L = 233;

	printf("Дано:\n\t\t%3.0f\n\t\t%.0f\n\t\t------\nОтвет:\n\t\t%-+2.2f\n\n", n, L, n / L);


}
