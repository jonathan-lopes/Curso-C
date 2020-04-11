// Lendo uma string.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[80];

	printf("Digite um nome: ");
	gets_s(nome);

	printf("Nome lido: %s \n", nome);

	system("pause");

	return 0;

}

