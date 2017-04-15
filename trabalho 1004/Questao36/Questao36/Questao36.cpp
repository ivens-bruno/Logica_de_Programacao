/* 36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um
funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float salarioMinimo = 0;
	float salarioFuncionario = 0;

	printf("Informe o valor do salario minimo:\n");
	scanf("%f", &salarioMinimo);
	printf("\n");
	printf("Informe o valor do salario do funcionario:\n");
	scanf("%f", &salarioFuncionario);
	printf("\n");
	
	printf("O funcionario recebe %.2f salarios minimos\n\n", salarioFuncionario / salarioMinimo);
	system("pause");
	return 0;
}

