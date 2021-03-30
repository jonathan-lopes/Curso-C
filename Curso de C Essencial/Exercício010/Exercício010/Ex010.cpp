#include <stdio.h>
#include <stdlib.h>

/* Leia uma velocidade em km/h (qulómetros por hora) e apresente-a convertida em m/s (metros por segundo). 
A formula de conversao e M = k / 3,6, sendo K a velocidade em km/h e M em m/s*/

int main()
{
	float quiHora, metros;

	printf("Digite Uma velocidade em km/h: ");
	scanf_s("%f", &quiHora);

	metros = quiHora / 3.6;

	printf("\nConvertido para m/s: %.2f \n\n", metros);

	system("pause");
	return 0;
}