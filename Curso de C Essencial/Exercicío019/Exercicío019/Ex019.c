#include <stdio.h>
#include <stdlib.h>

/* Leia um valor de volume em litros e apresente-a convertido em metros cúbicos Uma fórmula de conversão é: M = L / 1000.
Sendo L o volume em litros e M o volume em metros cúbicos.*/

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