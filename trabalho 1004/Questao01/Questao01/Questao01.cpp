/* 1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float largura = 0;
	float comprimento = 0;

	printf("========================\n");
	printf("|       IMOBILIS       |\n");
	printf("========================\n\n");
	printf("Informe a largura do terreno\n");
	scanf("%f", &largura);
	printf("\n");
	printf("Agora informe o comprimento do terreno\n");
	scanf("%f", &comprimento);
	printf("\n");

	printf("Area do terreno eh: %f\n\n", largura*comprimento);
	system("pause");
	return 0;
}

