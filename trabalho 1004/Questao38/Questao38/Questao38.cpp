/* 38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e
mostre: a) a idade dessa pessoa em anos; b) a idade dessa pessoa em meses; c) a idade dessa
pessoa em dias; d) a idade dessa pessoa em semanas.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int anoNascimento = 0;
	int anoAtual = 0;

	printf("Informe o seu ano de nascimento:\n");
	scanf("%d", &anoNascimento);
	printf("\n");
	printf("Informe o ano atual:\n");
	scanf("%d", &anoAtual);
	printf("\n");

	printf("a) A sua idade em anos e %d\n", anoAtual - anoNascimento);
	printf("b) A sua idade em meses e %d\n", (anoAtual - anoNascimento) * 12);
	printf("c) A sua idade em semanas e %d\n", (anoAtual - anoNascimento) * 52);
	printf("d) A sua idade em dias e %d\n\n", (anoAtual - anoNascimento) * 360); //Assumindo que todos os meses tem 30 dias e ignorando os anos bissextos//
	system("pause");
	return 0;
}

