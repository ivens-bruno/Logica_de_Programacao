/* 12. Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s o
aumento, desconte 8 % de impostos.Imprima o sal�rio inicial, o sal�rio com o aumento e o
sal�rio final
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

