// Exercicio 026.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma = 0;
    for (int i = 0 ; i <= 10 ; i++)
    {
        printf(" ");
        scanf_s("%d", &numero);
        soma = soma + numero;
        printf("valor: %d",soma );
    }
    
    system("pause");
    return 0;
}