#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Fa�a um programa que lia um n�mero interiro e o imprima

	int num;

	printf("Digite um numero inteiro: ");
	scanf_s("%d", &num);

	printf("Numero digitado: %d \n", num);

	system("pause");
	return 0;
}
