/* 29. Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço,
sabendo - se que este sofreu um desconto de 10 % .
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float precoProduto = 0;
	float desconto = 0;

	printf("Informe o valor do produto:\n");
	scanf("%f", &precoProduto);
	printf("\n");

	desconto = (precoProduto / 100) * 10;

	printf("O preco do produto apos o desconto e de: R$ %.2f\n\n", precoProduto - desconto);
	system("pause");
	return 0;
}
