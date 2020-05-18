#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ASSI_BASIC 7

int main()
{
	int consumo, cont_agua, opcao;
	
	setlocale(LC_ALL, "portuguese");

	do
	{
		system("cls");

		printf("Digite o consumo de água da sua residência: ");
		scanf_s("%d", &consumo);

		if ((consumo >= 0) && (consumo <= 10))
		{
			printf("O valor da sua conta é: %d,00 R$ \n\n", ASSI_BASIC);
		}
		else
		{
			if ((consumo >= 11) && (consumo <= 30))
			{
				cont_agua = (consumo - 10) + ASSI_BASIC;
				printf("O valor da sua conta é: %d,00 R$ \n\n", cont_agua);
			}
			else
			{
				if ((consumo >= 31) && (consumo <= 100))
				{
					cont_agua = ((consumo - 30) * 2) + 20 + ASSI_BASIC;
					printf("O valor da sua conta é: %d,00 R$ \n\n", cont_agua);
				}
				else
				{
					if (consumo > 101)
					{
						cont_agua = (consumo - 100) * 5 + 60 + ASSI_BASIC;
						printf("O valor da sua conta é: %d,00 R$ \n\n", cont_agua);
					}
				}
			}
		}

		printf("Deseja calcular o valor de outra conta de água? ( 1 - Sim | 2 - Não ) \n");
		scanf_s("%d", &opcao);

	} while (opcao == 1);

	system("pause");
	return 0;
}