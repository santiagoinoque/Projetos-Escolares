#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    int diamReserv, altReserv, dias_int, horas;
    double volume, capReserv, raio, PI = M_PI, dias;

    printf("Indique o diametro da base: ");
    scanf("%d", &diamReserv);
    printf("Indique a altura do reservatorio: ");
    scanf("%d", &altReserv);

    if (altReserv <= 50 || diamReserv <= 50)
    {
        puts("Valor Invalido!");
    }
    else
    {
        raio = diamReserv / 2;
        volume = PI * raio * raio * altReserv;
        capReserv = volume / 1000;
        dias = capReserv / 555;

        if (dias >= 3)
        {
            dias_int = dias;
            horas = (dias - dias_int) * 24;
            printf("Abastece durante %d dias e %d horas\n", dias_int, horas);
        }
        else
            puts("Reservatorio Insuficiente!");
    }
    return 0;
}
