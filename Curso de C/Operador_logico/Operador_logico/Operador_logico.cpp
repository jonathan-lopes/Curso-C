/* Faça um program que leia um numero inteiro qualquer.
Informarse este número está na faixa de 0 até 100*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um número: ");
    scanf_s("%d", &numero);

    if ((numero >= 0) && (numero <= 100))
         printf("O número %d está na faixa de 0 até 100 \n", numero);
    else
        printf("O número %d está fora da faixa de 0 até 100 \n", numero);

    system("pause");
    return 0;
}