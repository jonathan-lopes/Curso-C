#include <stdio.h>
#include <stdlib.h>

/*Leia um valor de comprimento em centímetros e presente o convertido em polegadas. 
A formula de conversao é P = C / 2,54 sendo C o comprimento em centímetros e P o comprimento em polegadas.*/

int main()
{
	float centimetros, polegada;

	printf("Digite um valor em centimetros: ");
	scanf_s("%f", &centimetros);

	polegada = centimetros / 2.54;

	printf("\nConvertido para Polegada\n\n");

	printf("Resultado..: %.2f \n\n", polegada);

	system("pause");
	return 0;
}