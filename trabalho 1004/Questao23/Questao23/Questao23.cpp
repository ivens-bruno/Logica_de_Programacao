/* 23. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa.Assumindo que seja possível medir sua sombra e a do prédio no chão,
e que você lembre da sua altura, faça um algoritmo para ler os dados necessários e calcular a
altura do prédio.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float sombraPredio = 0;
	float suaSombra = 0;
	float suaAltura = 0;

	printf("Informe a sua altura:\n");
	scanf("%f", &suaAltura);
	printf("\n");
	printf("Informe o comprimento da sua sombra:\n");
	scanf("%f", &suaSombra);
	printf("\n");
	printf("Informe o comprimento da sombra do predio:\n");
	scanf("%f", &sombraPredio);
	printf("\n");

	printf("A altura do predio de %.2f metros\n\n", (suaAltura * sombraPredio) / suaSombra); /*Formula de Tales de Mileto*/
	system("pause");
	return 0;
}

