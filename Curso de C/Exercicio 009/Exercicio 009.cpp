// Exercicio 009.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Fórmula volume = pi * raio² * altura

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float volume, pi = 3.14159, raio, altura;

	printf("Digite o raio da lata: ");
	scanf_s("%f", &raio);
	printf("Digite a altura da lata: ");
	scanf_s("%f", &altura);

	volume = pi * raio * raio * altura;

	printf("Valores da multiplicacao \n Pi = %.2f * Raio = %.2f * Raio = %.2f * Altura = %.2f \n", pi, raio, raio, altura);
	printf("O volume da lata: %.2f \n", volume);

	system("pause");

	return 0;
}


