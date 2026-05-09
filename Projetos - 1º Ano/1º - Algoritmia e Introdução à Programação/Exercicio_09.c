#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int nota;

    printf("Nota: ");
    scanf("%d", &nota);

    if (nota >= 0 && nota <= 20)
    {
        if (nota <= 7)
            puts("Classificacao: Muito Mau");
        else
            if (nota <= 9)
                puts("Classificacao: Mau");
            else
                if (nota <= 12)
                    puts("Classificacao: Medio");
                else
                    if (nota <= 17)
                        puts("Classificacao: Bom");
                    else
                        puts("Classificacao: Muito Bom");
    }
    else
        puts("Valor Invalido!");
    return 0;
}
