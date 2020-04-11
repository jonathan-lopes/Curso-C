// Exercicio 007.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float pi, raio, altura, result;

    pi = 3.14159;
	altura = 2.0;
	raio = 3.6;

	result = pi * raio * raio * altura;

	printf("O valor do volume de um lata de azeitona x e: %.2f \n", result);

	system("pause");

	return 0;
}

