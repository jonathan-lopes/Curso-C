#include <stdio.h>
#include <stdlib.h>

/* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. 
A fórmula de conversão é: C = P * 2,54, sendo C o comprimento em centímetros e P o Comprimento em polegadas*/

int main()
{
	float polegada, centimetros;

	printf("Digite um comprimento em polegadas: ");
	scanf_s("%f", &polegada);

	centimetros = polegada * 2.54;

	printf("\nCovertido.\n\n");

	printf("Resultado..: %.2f \n\n", centimetros);

	system("pause");
	return 0;
}