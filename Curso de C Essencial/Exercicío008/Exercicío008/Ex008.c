#include <stdio.h>
#include <stdlib.h>

/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. 
A formula de conversão é C = K - 273.15 sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

int main()
{
	float cel, kel;

	printf("Digite uma temperatura em kelvin: ");
	scanf_s("%f", &kel);

	cel = kel - 273.15;

	system("cls");
	printf("CONVERSAO FEITA. \n\n");
	printf("Celsius.: %.0f \n", cel);

	system("pause");
	return 0;
}