/* 18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora
extra.Fa�a um algoritmo para calcular e imprimir o sal�rio bruto e o sal�rio l�quido de um
determinado funcion�rio.Considere que o sal�rio l�quido � igual ao sal�rio bruto descontandose 10 % de impostos.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float horasNormais = 0;
	float horasExtra = 0;
	float impostos = 0;

	printf("========================\n");
	printf("|     HIPOTHETICUS     |\n");
	printf("========================\n\n");
	printf("Informe a quantidade de horas normais trabalhadas:\n");
	scanf("%f", &horasNormais);
	printf("\n");
	printf("Informe a quantidade de horas extra trabalhadas:\n");
	scanf("%f", &horasExtra);
	printf("\n");

	impostos = ((horasNormais * 10 + horasExtra * 15) / 100) * 10;

	printf("Salario Bruto = R$ %.2f\nSalario Liquido = R$ %.2f\n\n", horasNormais * 10 + horasExtra * 15, (horasNormais * 10 + horasExtra * 15) - impostos);
	system("pause");
    return 0;
}

