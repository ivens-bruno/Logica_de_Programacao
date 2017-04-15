/* 39. João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e
C2=R$120,00) que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa
de 2% sobre cada conta. Faça um algoritmo que calcule e mostre quanto restará do salário do
João
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

float multa(float valorConta) { //Função para calcular o valor da multa//
	float taxa = 2;
	float valorTotal = valorConta + ((valorConta / 100) * taxa);
	return valorTotal;
}

int main()
{
	float salario = 0;
	float c1 = 0;
	float c2 = 0;

	printf("Informe o valor do salario:\n");
	scanf("%f", &salario);
	printf("\n");
	printf("Informe o valor da primeira conta:\n");
	scanf("%f", &c1);
	printf("\n");
	printf("Informe o valor da segunda conta:\n");
	scanf("%f", &c2);
	printf("\n");

	printf("Apos o pagamento das contas restara R$ %.2f do salario\n\n", salario - multa(c1) - multa(c2)); //aplicação da função multa//
	system("pause");
	return 0;
}

