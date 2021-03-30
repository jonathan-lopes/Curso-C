#include <stdio.h>
#include <stdlib.h>

/*Leia uma distancia em quilômetros e apresente-a convertida em milhas.
A fórmula de conversão é: M = K / 1,61, sendo K a distância em quilômetros e M em milhas.*/

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