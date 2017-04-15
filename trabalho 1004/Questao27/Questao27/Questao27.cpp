/* 27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro
número pelo segundo.Sabe - se que o segundo número não pode ser zero, portanto não é
necessário se preocupar com validações.
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

