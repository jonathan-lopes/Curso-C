// Exercicio 011.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1, nota2, nota3, media;

	printf("Digite a primeira nota: ");
	scanf_s("%f", &nota1);

	printf("Digite a segunda nota: ");
	scanf_s("%f", &nota2);

	printf("Digite a terceira nota: ");
	scanf_s("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("Sua media final foi: %.2f \n", media);

	system("pause");

	return 0;

}