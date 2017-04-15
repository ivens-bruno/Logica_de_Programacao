/* 4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de
vida ela possui.Considere sempre anos completos, e que um ano possui 365 dias.Ex: uma
pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída : MARIA, VOCÊ JÁ
VIVEU 6935 DIAS
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int idade = 0;
	printf("Informe a sua idade:\n");
	scanf("%d", &idade);
	printf("\n");
	printf("Voce ja viveu %d dias.\n\n", idade * 365);
	system("pause");

    return 0;
}

