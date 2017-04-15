/* 35. Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A =
(diagonal_maior * diagonal_menor) / 2;*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float diagMaior = 0;
	float diagMenor = 0;

	printf("Informe o valor da diagonal maior do losango:\n");
	scanf("%f", &diagMaior);
	printf("\n");
	printf("Informe o valor da diagonal menor do losango:\n");
	scanf("%f", &diagMenor);
	printf("\n");
	
	printf("A area do losango e de %.2f metros quadrados\n\n", (diagMaior * diagMenor) / 2);
	system("pause");
	return 0;
}

