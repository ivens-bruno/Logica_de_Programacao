/* 24. Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se fazer
X litros de refresco(informados pelo usuário).
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float refrescoLitros = 0;
	float fruta = 0;
	float agua = 0;

	printf("Informe a quantidade de refereco em litros:\n");
	scanf("%f", &refrescoLitros);
	printf("\n");
	
	fruta = (refrescoLitros / 10) * 2; /*2 partes*/
	agua = (refrescoLitros / 10) * 8;  /*8 partes*/

	printf("Para fazer %.3f litros de refresco sao necessarios:\nAgua: %.3f litros\nSuco: %.3f litros\n\n", refrescoLitros, agua, fruta);
	system("pause");
	return 0;
}

