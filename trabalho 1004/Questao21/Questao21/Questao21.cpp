/* 21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
garrafa de 600 ml e garrafa de 2 litros.Se um comerciante compra uma determinada
quantidade de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele
comprou.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int latas = 0;
	int garrafas600 = 0;
	int garrafas2 = 0;
	float litros = 0;

	printf("=====================\n");
	printf("|     MEIA-COLA     |\n");
	printf("=====================\n\n");
	printf("Informe a quantidade de latas de 350ml:\n");
	scanf("%d", &latas);
	printf("\n");
	printf("Informe a quantidade de garaffas de 600ml:\n");
	scanf("%d", &garrafas600);
	printf("\n");
	printf("Informe a quantidade de garrafas de 2L:\n");
	scanf("%d", &garrafas2);
	printf("\n");

	litros = (latas*.35) + (garrafas600*.6) + (garrafas2 * 2);

	printf("Voce comprou %.3f litros de refrigerante.\n\n", litros);
	system("pause");
    return 0;
}

