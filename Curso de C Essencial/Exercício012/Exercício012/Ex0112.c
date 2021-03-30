#include <stdio.h>
#include <stdlib.h>
/*Leia uma distância em milhas e apresente-a convertida em quilómetros. 
A fórmula de conversão é: K = 1,61 * M, sendo K a distância em quilómetros e M em milhas.*/

int main()
{
	float quilometros, milhas;

	printf("Digite Uma Distancia em Milhas: \n");
	scanf_s("%f", &milhas);

	quilometros = 1.61 * milhas;

	printf("Distancia convertida em quilometros: %.2f \n\n", quilometros);

	system("pause");
	return 0;
}
