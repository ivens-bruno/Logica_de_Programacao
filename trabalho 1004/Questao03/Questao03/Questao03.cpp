/* 3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar
numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos
para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
broas, e depois calcular os dados solicitados.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int paes = 0;
	int broas = 0;
	float total = 0;

	printf("==========================\n");
	printf("|         HOTPAO         |\n");
	printf("==========================\n\n");
	printf("Informa a quantidade de paes vendidos:\n");
	scanf("%d", &paes);
	printf("\n");
	printf("Informe a quantidade de broas vendidas:\n");
	scanf("%d", &broas);
	printf("\n");
	total = (paes*0.12) + (broas * 1.5);
	printf("O seu total de vendas foi de: %.2f\n\n", total);
	printf("Voce devera aplicar na poupanca o valor de: %.2f\n\n", (total/100)*10);
	system("pause");
	return 0;
}

