/* 30. Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um
algoritmo que receba o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e
mostre a comiss�o e o sal�rio final do funcion�rio.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float salarioFixo = 0;
	float vendas = 0;
	float comissao = 0;

	printf("Informe o valor do salario fixo:\n");
	scanf("%float", &salarioFixo);
	printf("\n");
	printf("Informe o valor das vendas:\n");
	scanf("%f", &vendas);
	printf("\n");
	
	comissao = (vendas / 100) * 4;

	printf("O valor da comissao e de R$ %.2f e o valor final do salario e de R$ %.2f\n\n", comissao, salarioFixo + comissao);
	system("pause");
	return 0;
}

