// Laço de repetição for.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado;

    for (int i = 0; i < 5; i++) 
    {
        printf("DIgite um numero: ");
        scanf_s("%d", &numero);
        resultado = numero * 3;
        printf("O resulatado foi: %d \n", resultado);
    }

    system("pause");
    return 0;
}