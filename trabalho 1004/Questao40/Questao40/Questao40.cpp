/* 40. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor
da hipotenusa
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca necesária para tilizar a função sqrt()//



int main()
{
	float x = 0;
	float y = 0;
	float hipotenusa = 0;

	printf("Informe o valor do primeiro cateto:\n");
	scanf("%f", &x);
	printf("\n");
	printf("Informe o valor do segundo cateto:\n");
	scanf("%f", &y);
	printf("\n");

	hipotenusa = sqrt((x * x) + (y * y)); //função sqrt() calcula a raiz quadrada//

	printf("O valor da hipotenusa eh %.2f\n\n", hipotenusa);
	system("pause");
	return 0;
}

