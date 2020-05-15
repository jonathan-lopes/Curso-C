#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define TAM 4

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int c;
	float nota[TAM];
	char opcao = 's';

	while (opcao == 's')
	{
		system("cls");

		printf("Digite a primeira nota :");
		scanf_s("%f", &nota[0]);
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Digite a segunda nota :");
		scanf_s("%f", &nota[1]);
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Digite a teceira nota :");
		scanf_s("%f", &nota[2]);
		while ((c = getchar()) != '\n' && c != EOF) {}

		nota[3] = (nota[0] + nota[1] + nota[2]) / 3;

		if (nota[3] >= 6)
		{
			printf("Você está APROVADÃO, parabéns. \n\n");
			printf("Sua média foi....: %.2f \n", nota[3]);
			printf("\n");
		}
		else
		{
			printf("Você está na RECU, se ferrou otário. \n\n");
			printf("Sua média foi....: %.2f \n", nota[3]);
			printf("\n");
		}
	
		printf("Deseja digitar a nota de outro aluno (s/n)?: ");
		opcao = getchar();
		while ((c = getchar()) != '\n' && c != EOF) {}
		printf("\n");
	}

	system("pause");
	return 0;
}