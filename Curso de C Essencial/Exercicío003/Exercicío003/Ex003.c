#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles

	int num1, num2, num3, soma;

	printf("Digite tres valores: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	soma = num1 + num2 + num3;
	
	printf(" \n A soma eh: %d \n", soma);

	system("pause");
	return 0;
}