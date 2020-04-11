// Exercicio 014.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;

    printf("Digite um numero: ");
    scanf_s("%d", &numero1);
    printf("Digite outro numero: ");
    scanf_s("%d", &numero2);

    if (numero1 > numero1)
        printf("O valor maior: %d \n", numero1);
    else
        printf("O valor maior: %d \n", numero2);

    system("pause");

    return 0;
}

