#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu();

int main()
{
	setlocale(LC_ALL, "portuguese");

	int codigo = 1, panela = 0, chaleira = 0, vassoura = 0;
	
	do
	{
		system("cls");

		menu();
		scanf_s("%d", &codigo);
		
		switch (codigo)
		{
		case 0:
			printf("\nSaindo...\n");
			break;
		case 1:
			panela++;
			break;
		case 2:
			chaleira++;
			break;
		case 3:
			vassoura++;
			break;
		case 4:
			printf("\n");
			printf("Quatidade de panelas no estoque.....: %d \n", panela);
			printf("Quatidade de panelas no chaleira....: %d \n", chaleira);
			printf("Quatidade de panelas no vassoura....: %d \n", vassoura);
			system("pause");
			break;

		default: 
			printf("\nOpção Invalida!\n");
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
	printf(" Digite 1 para incluir uma panela no estoque \n");
	printf(" Digite 2 para incluir uma cheleira no estoque \n");
	printf(" Digite 3 para incluir uma vassoura no estoque \n");
	printf(" Digite 4 para um relatório de inclusões \n");
	printf(" Digite aqui>> ");
}