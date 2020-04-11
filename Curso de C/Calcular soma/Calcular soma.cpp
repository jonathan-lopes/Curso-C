// Calcular soma.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int numero1, numero2, soma; 

	printf("Digite um numero: ");
	scanf_s("%d", &numero1);
	printf("Digite outro numero: ");
	scanf_s("%d", &numero2);
	
	soma = numero1 + numero2;

	printf("O resultado da soma foi: %d \n", soma);
	printf("%d + %d = %d \n", numero1, numero1, soma);

	system("pause");
	
	return 0;


}

    
