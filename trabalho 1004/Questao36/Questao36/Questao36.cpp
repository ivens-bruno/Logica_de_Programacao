/* 36. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um
funcion�rio, calcule e mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.
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

