/* 23. Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o �
suficientemente longa.Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o,
e que voc� lembre da sua altura, fa�a um algoritmo para ler os dados necess�rios e calcular a
altura do pr�dio.
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

