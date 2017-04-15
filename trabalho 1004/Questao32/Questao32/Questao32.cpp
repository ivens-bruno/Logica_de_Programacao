/* 32. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso
em gramas.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float peso = 0;

	printf("Informe o seu peso:\n");
	scanf("%f", &peso);
	printf("\n");

	printf("O seu peso equivale a %.2f gramas\n\n", peso * 1000);
	system("pause");
	return 0;
}
