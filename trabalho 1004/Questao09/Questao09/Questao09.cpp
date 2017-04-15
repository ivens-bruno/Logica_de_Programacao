/* 9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais.Construa um algoritmo em que o usuário
forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a
máquina informe quanto será o valor arrecadado.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int pequenas = 0;
	int medias = 0;
	int grandes = 0;
	float total = 0;

	printf("Informa a quantidade de camisetas pequenas:\n");
	scanf("%d", &pequenas);
	printf("\n");
	printf("Informa a quantidade de camisetas medias:\n");
	scanf("%d", &medias);
	printf("\n");
	printf("Informa a quantidade de camisetas grandes:\n");
	scanf("%d", &grandes);
	printf("\n");

	total = (pequenas * 10) + (medias * 12) + (grandes * 15);

	printf("Foi arrecadado R$ %.2f com a venda.\n\n", total);
	system("pause");
    return 0;
}

