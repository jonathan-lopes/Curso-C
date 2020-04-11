// Exercicio 010.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float receita, despesa, lucro;

	printf("Qual foi sua receita nesse ano?: ");
	scanf_s("%f", &receita);
	printf("Qual foi sau despesa neste ano?: ");
	scanf_s("%f", &despesa);

	lucro = receita - despesa;

	printf("Seu lucro neste ano foi: R$ %.3f \n", lucro);

	system("pause");

	return 0;
	

}
