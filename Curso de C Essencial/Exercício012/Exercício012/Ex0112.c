#include <stdio.h>
#include <stdlib.h>
/*Leia uma dist�ncia em milhas e apresente-a convertida em quil�metros. 
A f�rmula de convers�o �: K = 1,61 * M, sendo K a dist�ncia em quil�metros e M em milhas.*/

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
