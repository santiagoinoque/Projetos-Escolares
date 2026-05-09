#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int v1, v2;
    char caracter;

    printf("Operacao: ");
    scanf("%c", &caracter);
    if (caracter != '+' && caracter != '-' && caracter != '/' && caracter != '*') {
        puts("Caracter Invalido!");
    }
    else
    {
        printf("Valores: ");
        scanf("%d %d", &v1, &v2);
        if (caracter == '+')
            printf("%d %c %d = %d", v1, caracter, v2, v1 + v2);
        if (caracter == '-')
            printf("%d %c %d = %d", v1, caracter, v2, v1 - v2);
        if (caracter == '/')
            printf("%d %c %d = %d", v1, caracter, v2, v1 / v2);
        if (caracter == '*')
            printf("%d %c %d = %d", v1, caracter, v2, v1 + v2);
    }
    return 0;
}
