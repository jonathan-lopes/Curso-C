#include <stdio.h>
#include <stdlib.h>

/* Leia um valor de volume em litros e apresente-a convertido em metros c�bicos Uma f�rmula de convers�o �: M = L / 1000.
Sendo L o volume em litros e M o volume em metros c�bicos.*/

int main()
{
	float litros, cubicos;

	printf("Digite um valor em litros: ");
	scanf_s("%f", &litros);

	cubicos = litros / 1000;

	printf("\nConvertido para metros cubicos\n\n");

	printf("Resultado..: %.3f \n\n", cubicos);

	system("pause");
	return 0;
}