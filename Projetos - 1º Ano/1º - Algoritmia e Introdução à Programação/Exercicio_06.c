#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int total, dias, horas, mins, segs;

    printf("Quantidade de segundos: ");
    scanf("%d", &total);

    dias = total / 86400;
    horas = (total % 86400) / 3600;
    mins = (total % 3600) / 60;
    segs = total % 60;

    printf("Os %d segs correspondem a %d dias %d hrs %d mins %d segs.\n",
        total, dias, horas, mins, segs);

    return 0;
}
