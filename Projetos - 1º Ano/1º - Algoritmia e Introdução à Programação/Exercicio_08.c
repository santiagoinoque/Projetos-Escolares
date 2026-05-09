#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, maior, menor;

    printf("Indique os valores: ");
    scanf("%d %d", &a, &b);

    if (a > b) 
    { 
        maior = a; 
        menor = b; 
    }
    else 
    { 
        maior = b; 
        menor = a; 
    }

    printf("Maior valor: %d\n", maior);
    printf("Div. Real: %.1lf\n", 1.0 * maior / menor);

    return 0;
}
