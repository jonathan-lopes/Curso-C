/* Faça um program que leia o codigo do gênero de uma pessoa 
 0 - Masculino | 1 - Ferminino
 Identificar se o código digitado é válido ou não*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int code;

	printf("Digite o codigo do genero: ");
	scanf_s("%d", &code);

	if ((code == 0) || (code == 1))
		printf("Codigo Valido! \n");
	else
		printf("Codigo Invalido! \n");

	system("pause");
	return 0;
}