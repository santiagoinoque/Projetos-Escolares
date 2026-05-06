#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int kbytes, veloc;

	printf("Indique o tamanho (KBytes): ");
	scanf("%d", &kbytes);
	printf("Indique a velocidade de transmissao (B/s): ");
	scanf("%d", &veloc);
	printf("Tempo de upload (s): %.6lf \n\n", (double)kbytes * 1024 / veloc);

	return 0;
}
