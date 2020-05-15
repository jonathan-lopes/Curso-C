#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int number, soma = 0, c, qtdlido = 0;
	float media = 0;
	char opcao = 's';
	

	while (opcao == 's')
	{
		printf("Digite um número inteiro: ");
		scanf_s("%d", &number);
		while ((c = getchar()) != '\n' && c != EOF) {}		// Limpar buffer de teclado
		
		printf("\n");

		printf("Deseja digitar outro número (s/n)? \n");
		opcao = getchar();
		
		qtdlido++;
		soma += number;
		printf("\n");
	}

	media = (float)soma / qtdlido;							//casting de variavel

	printf("A média dos números lidos foi: %.2f \n", media);

	system("pause");
	return 0;
}