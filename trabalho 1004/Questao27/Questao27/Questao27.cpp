/* 27. Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro
n�mero pelo segundo.Sabe - se que o segundo n�mero n�o pode ser zero, portanto n�o �
necess�rio se preocupar com valida��es.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int numero1 = 0;
	int numero2 = 0;

	printf("Informe o primeiro numero:\n");
	scanf("%d", &numero1);
	printf("\n");
	printf("Informe o segundo numero:\n");
	scanf("%d", &numero2);
	printf("\n");

	printf("%d / %d = %d\n\n", numero1, numero2, numero1 / numero2);
	system("pause");
	return 0;
}

