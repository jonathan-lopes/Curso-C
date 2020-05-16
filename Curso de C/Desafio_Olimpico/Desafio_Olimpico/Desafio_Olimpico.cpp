#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ASSI_BASIC 7

int main()
{
	int consumo;

	setlocale(LC_ALL, "portuguese");

	printf("Digite o consumo de água da sua residência: ");
	scanf_s("%d", &consumo);

	if ((consumo >= 0) && (consumo <= 10))
	{
		printf("O valor da sua conta é: %d R$ \n", ASSI_BASIC);
	}
	else
	{
		if ((consumo >= 11) && (consumo <= 30))
		{
			ASSI_BASIC
		}
	}

	system("pause");
	return 0;
}