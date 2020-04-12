#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero = 0, qtd_DIGITADOS = 0;

	while (numero >= 0)
	{
		printf("Digite um numero: \n");
		scanf_s("%d", &numero);
		qtd_DIGITADOS++;
	}

	printf("Quantidade de numero digitados: %d \n", qtd_DIGITADOS);
	system("pause");
	return 0;
}