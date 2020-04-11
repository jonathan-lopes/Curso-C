// Volume do Paralelepípedo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Fórmula volume = comprimento x altura x lagura 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float volume, largura, comprimento, altura; // Declacaração de variáveis

	printf("Digite o valor do comprimento: "); 
	scanf_s("%f", &comprimento);
	printf("Digite o valor do largura: ");        //Entrada de dados (lendo)
	scanf_s("%f", &largura);
	printf("Digite o valor da altura: ");
	scanf_s("%f", &altura);

	volume = comprimento * largura * altura;    //Processamento de dados (calculando)

	printf("O volume do paralelepipedo foi: %.2f \n", volume);  //Saída de dados (mostrando)

	system("pause");

	return 0;
}

