#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
/*Leia um ângulo em graus e apresente-o convertido em radianos. 
A fórmula de conversão é: R = G * π / 180, sendo G o ângulo em graus e R em radianos e π= 3,14.*/

int main()
{
	float graus, radianos;

	printf("Digite um angulo em graus: ");
	scanf_s("%f", &graus);

	radianos = graus * PI / 180;

	printf("\nConvertendo em radianos \n\n");

	printf("Resultado..: %.2f \n\n", radianos);
	
	system("pause");
	return 0;
}
