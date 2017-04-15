// 25. Calcule o volume de uma caixa d'água cilíndrica.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float altura = 0;
	float raio = 0;

	printf("Informe a altura da caixa d'agua:\n");
	scanf("%f", &altura);
	printf("\n");
	printf("Informe o raio da base da caixa d'agua:\n");
	scanf("%f", &raio);
	printf("\n");
	
	printf("O volume da cixa d'agua e de %.2f metros cubicos\n\n", altura * 3.14 * (raio * raio)); /*Formula matemática do 
																							     volume do cilindro*/
	system("pause");
	return 0;
}

