/* 10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano.
Cada ponto é um par ordenado(x, y).
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
	float x1 = 0;
	float x2 = 0;
	float y1 = 0;
	float y2 = 0;
	float dxy = 0;

	printf("Informe o primeiro valor de X:\n");
	scanf("%f", &x1);
	printf("\n");
	printf("Informe o segundo valor de X:\n");
	scanf("%f", &x2);
	printf("\n");
	printf("Informe o primeiro valor de Y:\n");
	scanf("%f", &y1);
	printf("\n");
	printf("Informe o segundo valor de Y:\n");
	scanf("%f", &y2);
	printf("\n");

	dxy = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	printf("A distancia entre os dois ponte eh %.2f\n\n", dxy);
	system("pause");
    return 0;
}

