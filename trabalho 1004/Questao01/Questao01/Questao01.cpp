/* 1. A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as
dimens�es de um terreno e depois exibir a �rea do terreno.
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

