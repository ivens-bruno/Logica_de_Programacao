/* 15. Tr�s amigos, Carlos, Andr� e Felipe. decidiram rachar igualmente a conta de um bar. Fa�a
um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas fa�a
com que Carlos e Andr� n�o paguem centavos.Ex: uma conta de R$101, 53 resulta em R$33, 00
para Carlos, R$33, 00 para Andr� e R$35, 53 para Felipe.
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float conta = 0;
	float valorQuebrado = 0;
	float quebra = 0;
	int valorRedondo = 0;

	printf("Informe o valor da conta:\n");
	scanf("%f", &conta);
	printf("\n");

	valorRedondo = conta / 3;
	quebra = conta - (valorRedondo * 3);
	valorQuebrado = valorRedondo + quebra;

	printf("Carlos = R$ %d\nAndre = R$ %d\nFelipe = R$ %.2f\n\n", valorRedondo, valorRedondo, valorQuebrado);
	system("pause");
    return 0;
}

