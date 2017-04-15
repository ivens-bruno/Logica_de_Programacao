/* 12. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o
aumento, desconte 8 % de impostos.Imprima o salário inicial, o salário com o aumento e o
salário final
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float salarioInicial = 0;
	float salarioAumento = 0;

	printf("Informe o valor do salario:\n");
	scanf("%f", &salarioInicial);
	printf("\n");
	salarioAumento = salarioInicial + ((salarioInicial / 100) * 15);
	printf("O salario inicial e de: R$ %.2f\n", salarioInicial);
	printf("O salario apos o aumento e de: R$ %.2f\n", salarioAumento);
	printf("O salario final e de: R$ %.2f\n\n", salarioAumento - ((salarioAumento / 100) * 8));
	system("pause");
	return 0;
}

