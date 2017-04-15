/* 6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um
algoritmo que leia o peso do prato montado pelo cliente(em quilos) e imprima o valor a pagar.
Assuma que a balança já desconte o peso do prato.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float pesoPrato = 0;

	printf("=======================\n");
	printf("|       BEM-BAO       |\n");
	printf("=======================\n\n");

	printf("Informe o peso do pra em KG:\n");
	scanf("%f", &pesoPrato);
	printf("\nO valor a pagar e de: R$ %.2f\n\n", pesoPrato * 12);
	system("pause");
    return 0;
}

