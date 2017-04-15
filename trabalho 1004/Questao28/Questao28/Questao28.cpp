/* 28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas
notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float nota1 = 0;
	float nota2 = 0;

	printf("Informe a primeira nota:\n");
	scanf("%f", &nota1);
	printf("\n");
	printf("Informe a segunda nota:\n");
	scanf("%f", &nota2);
	printf("\n");
	
	printf("A media ponderada e %.2f\n\n", ((nota1 * 2) + (nota2 * 3)) / 2);
	system("pause");
	return 0;
}

