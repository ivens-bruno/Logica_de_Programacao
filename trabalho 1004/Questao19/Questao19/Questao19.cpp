/* 19. A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No
p� direito do frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is
para indicar o tipo de alimento que ele deve consumir.Sabendo que o anel com chip custa
R$4, 00 e o anel de alimento custa R$3, 50, fa�a um algoritmo para calcular o gasto total da
granja para marcar todos os seus frangos.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int frangos = 0;
	float anelChip = 4;
	float anelAlimento = 3.5;

	printf("======================\n");
	printf("|     FRANGOTECH     |\n");
	printf("======================\n\n");
	printf("Informa a quantidade de frangos:\n");
	scanf("%d", &frangos);
	printf("\n");
	
	printf("Para marcar todos os frangos a granja ira gastar: R$ %.2f\n\n", (frangos*anelChip) + (frangos*(2 * anelAlimento)));
	system("pause");
	return 0;
}

