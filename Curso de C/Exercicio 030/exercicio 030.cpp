#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number = 1, soma_POSITIVO = 0, soma_NEGATIVO = 0;

	while (number != 0)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &number);

		if (number > 0)
		{
			soma_POSITIVO += number;
		}
		else 
		{
			soma_NEGATIVO += number;
		}
	}

	printf("Somatorio dos numeros positivos: %d \n", soma_POSITIVO);
	printf("Somatorio dos numeros negativos: %d \n", soma_NEGATIVO);
	
	system("pause");
	return 0;
}