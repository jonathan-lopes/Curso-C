// Exercicio 012.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main()
{
	int anoNascimento, idade, qtdDias, qtdhoras, qtdMinutos, qtdSengundos;

	printf("Digite o ano do seu nascimento: ");
	scanf_s("%d", &anoNascimento);

	idade = 2020 - anoNascimento;
	qtdDias = idade * 365;
	qtdhoras = qtdDias * 24;
	qtdMinutos = qtdhoras * 60;
	qtdSengundos = qtdMinutos * 60;

	printf("Seu tempo de vida e: %d Anos %d Dias %d Horas %d Minutos %d Segundos \n", idade, qtdDias, qtdhoras, qtdMinutos, qtdSengundos);

	system("pause");

	return 0;
}