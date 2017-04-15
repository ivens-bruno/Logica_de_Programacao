/* 33. Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base
maior + base menor)* altura) / 2.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float baseMaior = 0;
	float baseMenor = 0;
	float altura = 0;

	printf("Informe o tamanho da base maior do trapezio:\n");
	scanf("%f", &baseMaior);
	printf("\n");
	printf("Informe o tamanho da base menor do trapezio:\n");
	scanf("%f", &baseMenor);
	printf("\n");
	printf("Informe a altura do trapezio:\n");
	scanf("%f", &altura);
	printf("\n");
	
	printf("A area do trapezio e de %.2f metros quadrados\n\n", ((baseMaior + baseMenor) * altura) / 2); /*Formula matematica da área do trapezio*/
	system("pause");
	return 0;
}

