/* 13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma:
CENTENA = x DEZENA = x UNIDADE = x
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int numero = 0;
	int centenas = 0;
	int dezenas = 0;
	int unidades = 0;
	int restoCentenas = 0;
	int restoDezenas = 0;

	printf("Informe um numero com no maximo 3 digitos:\n");
	scanf("%3d", &numero);
	printf("\n");

	centenas = numero / 100;
	restoCentenas = numero % 100;
	dezenas = restoCentenas / 10;
	restoDezenas = restoCentenas % 10;
	unidades = restoDezenas;

	printf("Centenas = %d\nDezenas = %d\nUnidades = %d\n\n", centenas, dezenas, unidades);
	system("pause");
    return 0;
}

