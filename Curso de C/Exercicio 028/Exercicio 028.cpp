#include <stdio.h>
#include <stdlib.h>

int main()
{
	int soma = 0;

	for (int i = 1; i <= 100; i++)
		soma = soma + i;
	

	printf("O valor da soma eh: %d \n", soma);
	system("pause");
	return 0;
}