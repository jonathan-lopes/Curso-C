// Inicializando variáveis.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Declaração das variáveis e inicialazando as variáveis
	int numero  = 46;
	float valor = 8.37;
	char letra  = 'X';
	int valor1, valor2, valor3;
	
	valor1 = valor2 = valor3 = 0;
	
	printf("Variavel numero....:%d     \n", numero);
	printf("Variavel valor.....:%f     \n", valor);
	printf("Variavel valor.....:%10.2f \n", valor);
	printf("Variavel valor.....:%.2f   \n", valor);
	printf("Variavel letas.....:%c     \n", letra);
	printf("%d %d %d                   \n", valor1, valor2, valor3);
	
	system("pause");
	
	return 0;
}