/* 31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre: a) o novo peso se a
pessoa engordar 15 % sobre o peso digitado; b) o novo peso se a pessoa emagrecer 20 % sobre
o peso digitado.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float pesoAtual = 0;
	float pesoAumentado = 0;
	float pesoDiminuido = 0;

	printf("Informe o seu peso:\n");
	scanf("%f", &pesoAtual);
	printf("\n");

	pesoAumentado = pesoAtual + ((pesoAtual / 100) * 15);
	pesoDiminuido = pesoAtual - ((pesoAtual / 100) * 20);

	printf("a) Se voce engordar 15%% do seu peso, voce ficara com: %.2fKg\nb) Se voce emagrecer 20%% do seu peso, voce ficara com: %.2fKg\n\n", pesoAumentado, pesoDiminuido);
	system("pause");
	return 0;
}

