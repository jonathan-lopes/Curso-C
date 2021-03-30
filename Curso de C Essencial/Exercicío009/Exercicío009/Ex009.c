#include <stdio.h>
#include <stdlib.h>

/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.
Uma fórmula de conversão e K=C+273.15, sendo C a temperatura em Celsius e K temperatura em Kelvin */

int main()
{
	float kel, cel;

	printf("Digite uma tempetura em celsius: ");
	scanf_s("%f", &cel);

	kel = cel + 273.15;

	printf("\n Resulatado da conversao: %.2f graus \n", kel);

	system("pause");
	return 0;
}