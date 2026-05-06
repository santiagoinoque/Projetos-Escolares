#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	double cerca, raio;

	printf("Comprimento da cerca: ");
	scanf("%lf", &cerca);

	cerca *= 100.0;

	raio = cerca / 3.14;

	printf("Valor do raio: %.2lf\n\n", raio);

	return 0;
}
