#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

/*Leia um ângulo em radianos e apresente-o convertido em graus.
A fórmula de conversão e: G = R * 180 / π sendo G o ângulo em graus e R em radianos e π 3.14.*/

int main()
{
	float grau, radiano;

	printf("Digite um valor em radianos: ");
	scanf_s("%f", &radiano);

	grau = radiano * 180 / PI;

	printf("\nConvertendo...\n\n");

	printf("Resultado..: %.2f \n\n", grau);

	system("pause");
	return 0;
}