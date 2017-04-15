/* 11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um
algoritmo para converter este tempo em anos, meses e dias.Assuma que cada mês possui
sempre 30 dias.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int semAcidentes = 0;
	int anos = 0;
	int meses = 0;
	int dias = 0;
	int restoAnos = 0;
	int restoMeses = 0;

	printf("Informe a quantidade de dias sem acidente:\n");
	scanf("%d", &semAcidentes);
	printf("\n");

	anos = semAcidentes / 360;
	restoAnos = semAcidentes % 360;
	meses = restoAnos / 30;
	restoMeses = restoAnos % 30;
	dias = restoMeses;

	printf("A fabrica esta a %d ano(s) %d mes(es) e %d dia(s) sem acidentes.\n\n", anos, meses, dias);
	system("pause");
	return 0;
}

