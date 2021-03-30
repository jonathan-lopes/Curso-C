// Desvio condicional composto.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf_s("%d", &numero);

    if (numero > 0)                                     //Desvio Condicional Composto
        printf("POSITIVO \n");

    else
        printf("NEGATIVO \n");

    system("pause");

    return 0;
}
