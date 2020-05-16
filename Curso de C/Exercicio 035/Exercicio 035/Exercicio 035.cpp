#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void menu();
int main()
{
	int codigo = 0, und_prod = 0, entrada = 0, saida = 0;
	setlocale(LC_ALL, "portuguese");
	
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
			printf("\nIncluindo uma unidade no estoque... \n\n");
			und_prod++;
			entrada++;
			system("pause");
			break;

		case 2:
			if (und_prod == 0)
			{
				printf("\nO estoque está zerado!! Porfavor adicione um produto! \n\n");
				system("pause");
			}
			else 
			{
				printf("\nExcluindo um unidade no estoque... \n\n");
				und_prod--;
				saida++;
				system("pause");
			}

			break;
		case 3:
			printf("\n O total no estoque é %d \n\n", und_prod);
			system("pause");
			break;

		case 4:
			printf("\n O total de entradas no estoque é %d \n\n", entrada);
			system("pause");
			break;

		case 5:
			printf("\nO total de saídas do estoque %d \n\n", saida);
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
	printf("\n\t>>> Bem-Vindo ao Menu <<<\n\n");
	printf(" Digite 0 para encerrar o programa \n");
	printf(" Digite 1 para incluir uma unidade no estoque \n");
	printf(" Digite 2 para excluir uma unidade no estoque \n");
	printf(" Digite 3 para mostrar o total no estoque \n");
	printf(" Digite 4 para mostrar o total de entradas no estoque \n");
	printf(" Digite 5 para mostrar o total de saídas no estoque \n");
	printf(" Digite sua opção aqui>> ");
}