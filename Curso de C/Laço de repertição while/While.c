#include  <stdio.h>
#include <stdlib.h>

int main()
{
	int result, numero, cont = 0;

	while (cont < 5)
	{
		printf("DIgite um numero: ");
		scanf_s("%d", &numero);
		result = numero * 3;
		printf("O resulatado foi: %d \n", result);
		cont++;
	}



	system("pause");
	return 0;
}