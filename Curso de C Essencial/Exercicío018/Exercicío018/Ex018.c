#include <stdio.h>
#include <stdlib.h>

/*Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros.
A formula de conversão e L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.*/

int main()
{
	float litros, meCubicos;

	printf("Digite um valor em metros cubicos m3: ");
	scanf_s("%f", &meCubicos);

	litros = 1000 * meCubicos;

	printf("\nConvertido para litros \n\n");

	printf("Resultado..: %.2f \n\n", litros);

	system("pause");
	return 0;
}