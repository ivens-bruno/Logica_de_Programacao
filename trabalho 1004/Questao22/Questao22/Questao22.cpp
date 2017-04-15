/* 22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
poupar.Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor
total economizado, em reais.Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e
ainda moedas de 1 real.Não havendo moeda de um tipo, a quantidade respectiva é zero.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int moedas001 = 0;
	int moedas005 = 0;
	int moedas010 = 0;
	int moedas025 = 0;
	int moedas050 = 0;
	int moedas100 = 0;
	float total = 0;

	printf("Informe a quantidade de moedas 0,01 centavos:\n");
	scanf("%d", &moedas001);
	printf("\n");
	printf("Informe a quantidade de moedas 0,05 centavos:\n");
	scanf("%d", &moedas005);
	printf("\n");
	printf("Informe a quantidade de moedas 0,10 centavos:\n");
	scanf("%d", &moedas010);
	printf("\n");
	printf("Informe a quantidade de moedas 0,25 centavos:\n");
	scanf("%d", &moedas025);
	printf("\n");
	printf("Informe a quantidade de moedas 0,50 centavos:\n");
	scanf("%d", &moedas050);
	printf("\n");
	printf("Informe a quantidade de moedas 1,00 real:\n");
	scanf("%d", &moedas100);
	printf("\n");
	
	total = (float(moedas001) / 100) + (float(moedas005) / 20) + (float(moedas010) / 10) + (float(moedas025) / 4) + (float(moedas050) / 2) + float(moedas100);

	printf("O valor total economizado foi de: R$ %.2f\n\n", total);
	system("pause");
	return 0;
}

