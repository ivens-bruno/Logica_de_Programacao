/* 5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu
colocar no tanque.
*/

#include "stdafx.h"
#include <stdio.h>
#include<stdlib.h>


int main()
{
	float valorCombustivel = 0;
	float valorAbastecido = 0;

	printf("Informe o valor do litro do combustivel:\n");
	scanf("%f", &valorCombustivel);
	printf("Informe o valor que sera abastecido:\n");
	scanf("%f", &valorAbastecido);
	printf("Seu veiculo sera abastecido com %.2f litros de combustivel.\n\n", valorAbastecido / valorCombustivel);
	system("pause");
	return 0;
}

