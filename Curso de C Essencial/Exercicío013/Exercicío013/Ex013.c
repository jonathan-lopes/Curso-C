#include <stdio.h>
#include <stdlib.h>

/*Leia uma distancia em quil�metros e apresente-a convertida em milhas.
A f�rmula de convers�o �: M = K / 1,61, sendo K a dist�ncia em quil�metros e M em milhas.*/

int main()
{
	float milhas, quilometros;

	printf("Digite uma distancia em quilometros: ");
	scanf_s("%f", &quilometros);

	milhas = quilometros / 1.61;

	printf("\nConvertando para Milhas...\n\n");

	printf("Resultado...: %.2f \n\n", milhas);
	
	system("pause");
	return 0;
}