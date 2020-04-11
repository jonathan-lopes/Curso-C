// exercicio 021.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Desvio de condicional encadeada

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Digite um codigo numerico: ");
    scanf_s("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Panela \n");
        break;
    case 2:
        printf("Chaleira \n");
        break;
    case 3:
        printf("Prato \n");
        break;
    default:
        printf("Codigo digitado eh invalido \n");
        break;
    }
    
    system("pause");
    return 0;
}