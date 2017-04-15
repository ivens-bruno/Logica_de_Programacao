/* 26. Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses
números.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int numero1 = 0;
	int numero2 = 0;
	int numero3 = 0;

	printf("Informe o primeiro numero\n");
	scanf("%d", &numero1);
	printf("\n");
	printf("Informe o segundo numero\n");
	scanf("%d", &numero2);
	printf("\n");
	printf("Informe o terceiro numero\n");
	scanf("%d", &numero3);
	printf("\n");
	
	printf("%d x %d x %d = %d\n\n", numero1, numero2, numero3, numero1 * numero2 * numero3);
	system("pause");
	return 0;
}

