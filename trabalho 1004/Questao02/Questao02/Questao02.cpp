/* 2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{	
	int cavalos;

	printf("Informe a quantidade de cavalos comprados\n");
	scanf("%d", &cavalos);
	printf("\n");
	printf("A quantidade de ferraduras necessarias sera: %d\n\n", cavalos * 4);
	system("pause");
	return 0;
}

