/* 17. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça
um algoritmo para ler uma temperatura Celsius e imprimi - Ia em Fahrenheit(pesquise como
fazer este tipo de conversão).
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float celsius = 0;

	printf("Informe a temperatura em Celsius:\n");
	scanf("%f", &celsius);
	printf("\n");

	printf("A temperatura em Fahrenheit e: %.2f F\n\n", 1.8*celsius + 32);
	system("pause");
    return 0;
}

