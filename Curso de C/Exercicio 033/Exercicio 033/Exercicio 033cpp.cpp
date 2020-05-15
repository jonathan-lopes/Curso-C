#include <stdio.h>
#include <stdlib.h>

int main()
{
	char answer = 's';
	int  age, status , qtd_single = 0, qtd_married = 0, qtd_divorced = 0, c;
	float  average_single = 0, average_married = 0, everage_divorced = 0;
	/*(tipo float) average_age_sin = 0, average_age_mar = 0, average_age_div = 0;  OBS: elas podem ser utilizadas também*/
		
	while (answer == 's')
	{
		system("cls");

		printf("Digite sua idade: ");
		scanf_s("%d", &age);
		while ((c = getchar()) != '\n' && c != EOF) {}
		printf("Digite seu estado civil (1 - Solteiro | 2 - Casado | 3 - Divorciado): ");
		scanf_s("%d", &status);
		while ((c = getchar()) != '\n' && c != EOF) {}

		if (status == 1)
		{
			qtd_single++;
			average_single += age;
		}
		else
		{
			if (status == 2)
			{
				qtd_married++;
				average_married += age;
			}
			else
			{
				qtd_divorced++;
				everage_divorced += age;
			}
		}

		printf("Deseja digita os dados de outra pessoa (s/n)?: ");
		answer = getchar();
		
		printf("\n");
	}

	system("cls");

	printf("A media da idade dos solteiros......: %.1f anos. \n", /*average_age_sin*/ average_single   /= qtd_single);
	printf("A media da idade dos casasdos.......: %.1f anos. \n", /*average_age_mar*/ average_married  /= qtd_married);
	printf("A media da idade dos divorciados....: %.1f anos. \n", /*average_age_div*/ everage_divorced /= qtd_divorced);

	system("pause");
	return 0;
}