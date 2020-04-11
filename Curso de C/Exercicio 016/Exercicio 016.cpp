// Exercicio 016.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1, numero2, didivirMAIOR;

    printf("Digite um numero: ");
    scanf_s("%f", &numero1);
    printf("Digite outro numero: ");
    scanf_s("%f", &numero2);

    if (numero1 > numero2)
        didivirMAIOR = numero1 / numero2;
    else
        didivirMAIOR = numero2 / numero1;

    printf("A divisao do maior pelo menor: %.2f \n", didivirMAIOR);

    system("pause");
    return 0;
}