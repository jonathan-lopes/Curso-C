#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void menu();

int main()
{
	setlocale(LC_ALL, "portuguese");

	int codigo, entrada = 0, saida = 0, lugares = 40;
	
	do
	{
		system("cls");

		menu();
		scanf_s("%d", &codigo);

		switch (codigo)
		{
		case 0:
			printf("\nSaindo...\n\n");
			break;

		case 1:
			if (lugares > 0)
			{
				printf("\nBem-vindo! \n");
				entrada++;
				lugares--;
				system("pause");
			}
			else
			{
				printf("\nDesculpe mas o restaurante está cheio\n");
				system("pause");
			}
			break;

		case 2:
			if (lugares == 40 )
			{
				printf("\nO restaurante está vazio \n");
				system("pause");
			}
			else
			{
				printf("\nAté mais\n");
				system("pause");
				saida++;
				lugares++;
			}
			break;

		case 3:
			printf("\nQuantidade de lugares disponiveis %d \n", lugares);
			system("pause");
			break;

		case 4:
			printf("\nTotal de pessoas que entraram %d \n", entrada);
			system("pause");
			break;

		case 5:
			printf("\nTotal de pessoas que sairam %d \n", saida);
			system("pause");
			break;

		default:
			printf("\nOpção Invalida!\n\n");
			return 0;
		}

	} while (codigo != 0);

	system("pause");
	return 0;
}

void menu()
{
	printf("\n\t>>> *Bem-Vindo ao Menu* <<<\n\n");
	printf(" Digite 0 para encerrar o programa \n");
	printf(" Digite 1 para entra uma pessoa no restaurante \n");
	printf(" Digite 2 para sair uma pessoa do restaurante \n");
	printf(" Digite 3 para mostrar quantos lugares estão disponiveis \n");
	printf(" Digite 4 para mostrar o total de pessoas que entraram \n");
	printf(" Digite 5 para mostrar o total de pessoas que saíram \n");
	printf(" Digite sua opção aqui>> ");
}