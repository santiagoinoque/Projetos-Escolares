#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    double altura, diametro, raio, volume, dias, pi = M_PI;

    printf("Indique a altura do reservatorio: ");
    scanf("%lf", &altura);
    printf("Indique o diametro da base: ");
    scanf("%lf", &diametro);

    raio = diametro / 2;
    volume = pi * (raio * raio) * altura / 1000;
    dias = volume / 555;

    printf("Dias de abastecimento: %.2f\n", dias);

    return 0;
}
