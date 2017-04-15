/* 37. Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int numero = 0;

	printf("Informe o valor da tabuada:\n");
	scanf("%d", &numero);
	printf("\n");

	printf("%d x 1 = %d\n", numero, numero);
	printf("%d x 1 = %d\n", numero, numero * 2);
	printf("%d x 1 = %d\n", numero, numero * 3);
	printf("%d x 1 = %d\n", numero, numero * 4);
	printf("%d x 1 = %d\n", numero, numero * 5);
	printf("%d x 1 = %d\n", numero, numero * 6);
	printf("%d x 1 = %d\n", numero, numero * 7);
	printf("%d x 1 = %d\n", numero, numero * 8);
	printf("%d x 1 = %d\n\n", numero, numero * 9);
	system("pause");
	return 0;
}

