#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int p1, p2;
    double n1, n2;

    printf("Indique os pesos (P1 P2): ");
    scanf("%d %d", &p1, &p2);
    printf("Indique a nota do T1: ");
    scanf("%lf", &n1);

    n2 = (10 - n1 * (p1 / 100.0)) / (p2 / 100.0);

    printf("Nota minima: %.1f\n", n2);

    return 0;
}
