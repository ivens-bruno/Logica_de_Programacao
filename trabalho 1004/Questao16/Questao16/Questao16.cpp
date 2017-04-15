/* 16. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias
de queijo, uma fatia de presunto e uma rodela de hambúrguer.Sabendo que cada fatia de
queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um
algoritmo em que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as
quantidades(em quilos) de queijo, presunto e carne necessários para compra.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float quantidade = 0;
	float queijoPresunto = 0;
	float carne = 0;

	printf("=====================\n");
	printf("|     GOSTOSURA     |\n");
	printf("=====================\n\n");
	printf("Informe a quantidade de sanduiches:\n");
	scanf("%f", &quantidade);
	printf("\n");
	
	queijoPresunto = quantidade / 20;
	carne = quantidade / 10;

	printf("Sera necessario comprar:\nQueijo = %.3f Kg\nPresunto = %.3f Kg\nCarne = %.3f Kg\n\n", queijoPresunto, queijoPresunto, carne);
	system("pause");
    return 0;
}

