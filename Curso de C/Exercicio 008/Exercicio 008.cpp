// Exercicio 008.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int kmInicial, kmFinal, distancia;

	printf("Digite a quilometragem inicial: ");
	scanf_s("%d", &kmInicial);
	printf("Digite a quilometragem final: ");
	scanf_s("%d", &kmFinal);

	distancia = kmFinal - kmInicial;

	printf("A distancia percorrida foi de: %dKm \n", distancia);

	system("pause");
		
	return 0;

}