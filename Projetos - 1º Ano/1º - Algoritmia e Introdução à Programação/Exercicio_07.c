#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int pista, voltas, consumo, capacidade, depositos;
    double distancia_km, combustivel;

    printf("Comprimento da pista (m): ");
    scanf("%d", &pista);

    printf("Numero de voltas: ");
    scanf("%d", &voltas);

    printf("Consumo medio (L/100km): ");
    scanf("%d", &consumo);

    printf("Capacidade do deposito (L): ");
    scanf("%d", &capacidade);

    distancia_km = (pista * voltas) / 1000.0;
    combustivel = distancia_km * consumo / 100.0;
    depositos = (combustivel / capacidade);

    printf("Depositos necessarios: %d\n", depositos);

    return 0;
}
