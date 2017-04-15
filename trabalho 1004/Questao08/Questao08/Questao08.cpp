/* 8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média
ponderada(as notas tem pesos respectivos de 1, 2 e 3).
*/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	float media = 0;

	printf("Informe a primeira nota:\n");
	scanf("%f", &nota1);
	printf("\n");
	printf("Informe a segunda nota:\n");
	scanf("%f", &nota2);
	printf("\n");
	printf("Informe a terceira nota:\n");
	scanf("%f", &nota3);
	printf("\n");
	
	media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / 3;

	printf("A media ponderada e: %.2f\n\n", media);
	system("pause");
    return 0;
}

