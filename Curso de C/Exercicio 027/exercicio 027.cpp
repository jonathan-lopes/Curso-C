#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int numero, positivo, negativo, zero;

	positivo = negativo = zero = 0;

	for (int i = 0; i < 20; i++)
	{
		printf("Digite um valor: \n");
		scanf_s("%d", &numero);
		

		if (numero > 0)
		{
			positivo += numero;
		}
		else
		{
			if (numero < 0)
			{
				negativo += numero;
			}

			else
			{
				zero++;
			}
		}
	}

	printf("Soma dos positivos......: %d \n", positivo);
	printf("Soma dos negativo.......: %d \n", negativo);
	printf("Soma dos zeros..........: %d \n", zero);
	
	system("pause");
	return 0;
}