#include <stdio.h>
#include <stdlib.h>

/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km / h (quil�metros por hora).
A f�rmula de convers�o �: K = M * 3,6, sendo K a velocidade em km/h e M em m/s.
*/

int main()
{
	float velocidade, metrosSegundo;

	printf("Digite uma velocidade em m/s: ");
	scanf_s("%f", &metrosSegundo);

	velocidade = metrosSegundo * 3, 6;

	printf("\nResultado da conversao: %.1f km/h \n", velocidade);

	system("pause");
	return 0;
}