// Exercicio 018.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float salarioVelho, taxaReajuste, salarioNovo;

	printf("Digite o salario do funcionario: ");
	scanf_s("%f", &salarioVelho);

	if (salarioVelho <= 1000)									//Desvio condicional encadeado
		taxaReajuste = 15;
	
	else if (salarioVelho <= 2000)
		taxaReajuste = 10;
	
	else
		taxaReajuste = 5;

	salarioNovo = salarioVelho + (salarioVelho * (taxaReajuste / 100));

	printf("Salario Velho.......: R$ %.2f   \n", salarioVelho);
	printf("Taxa de Reajuste....: R$ %.0f%% \n", taxaReajuste);
	printf("Salario Novo........: R$ %.2f   \n", salarioNovo);

	system("pause");

	return 0;
}
