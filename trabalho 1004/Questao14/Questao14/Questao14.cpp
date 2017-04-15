// 14. Calcule a área de uma pizza que possui um raio R (pi=3.14).
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>



int main()
{
	float raio = 0;

	printf("Informe o tamanho do raio da pizza em centimetros:\n");
	scanf("%f", &raio);
	printf("\n");

	printf("A area da piza e de: %.2f centimetros quadrados\n\n", 3.14 * (raio * raio));
	system("pause");
    return 0;
}

