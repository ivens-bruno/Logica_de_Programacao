/* 7. Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do
ano.Esque�a a quest�o dos anos bissextos e considere sempre que um m�s possui 30 dias.
*/

#include "stdafx.h"
#include <stdio.h>
#include<stdlib.h>


int main()
{
	int dia = 0;
	int mes = 0;
	int totalDias = 0;

	printf("Informe o numero do dia:\n");
	scanf("%d", &dia);
	printf("\n");
	printf("Informe o numero do mes:\n");
	scanf("%d", &mes);
	printf("\n");

	totalDias = (mes - 1) * 30 + dia;

	printf("Desde o inicio do ano ja se passaram %d dias.\n\n", totalDias);
	system("pause");
    return 0;
}

