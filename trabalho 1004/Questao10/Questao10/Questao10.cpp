/* 10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano.
Cada ponto é um par ordenado(x, y).
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	float hipotenusa = 0;

	printf("Informe o valor de X:\n");
	scanf("%d", &x);
	printf("\n");
	printf("Informe o valor de Y:\n");
	scanf("%d", &y);
	printf("\n");

	z = (x * x) + (y * y); // Os dois pontos do plano cartesiano formam um triangulo retangulo //

	hipotenusa = sqrt(z);

	printf("A distancia entre X e Y eh %.2f\n\n", hipotenusa);
	system("pause");
    return 0;
}

