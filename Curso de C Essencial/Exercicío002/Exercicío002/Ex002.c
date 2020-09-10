#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Faça um programa de que leia um numero real e o imprima

	float num;

	printf("Digite um numero real: ");
	scanf_s("%f", &num);

	printf("Numero digitado: %.2f \n", num);


	system("pause");
	return 0;
}