#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    double cerca, raio;
    double pi = M_PI;

    printf("Comprimento da cerca: ");
    scanf("%lf", &cerca);

    raio = (cerca * 100) / pi;

    printf("Valor do raio: %.2lf cm\n", raio);

    return 0;
}
