/* 34. Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado *
lado;
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float lado = 0;
	
	printf("Informe o tamanho do lado do quadrado:\n");
	scanf("%f", &lado);
	printf("\n");

	printf("A area do quadrado e %.2f metros quadrados\n\n", lado * lado);
	system("pause");
	return 0;
}

