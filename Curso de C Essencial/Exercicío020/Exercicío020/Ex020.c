#include <stdio.h>
#include <stdlib.h>

/* Leia um valor de massa em quilogramas e apresente-o e convertido em libras. 
A fórmula de conversão é: L = K / 0,45, sendo K a massa em quilogramas e L a massa em libras.*/

int main()
{
	float quilo, libra;

	printf("Digite uma massa em quilogramas: ");
	scanf_s("%f", &quilo);

	libra = quilo / 0.45;

	printf("\nConvertido pra libras.\n\n");

	printf("Resultado..: %.2f \n\n", libra);

	system("pause");
	return 0;
}