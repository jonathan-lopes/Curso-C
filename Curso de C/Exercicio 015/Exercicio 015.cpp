// Exercicio 015.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Desvio condicinal composto

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf_s("%d", &numero);

	if (numero != 1000)
		printf("O numero lido eh diferente de 1000 \n");
	else
		printf("O numero lido eh igual a 1000 \n");

	system("pause");

	return 0;
}
