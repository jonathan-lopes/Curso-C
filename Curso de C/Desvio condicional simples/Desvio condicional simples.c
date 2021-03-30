// Desvio condicional simples.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*  Desvio Condicional Simples 
    Escreva um programa que leia um número inteiro qualquer.
    Informar se o número é; POSITIVO.
    positivo número maio do que 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf_s("%d", &numero);

    if (numero > 0)                                 //Desvio de condicional simples
        printf("Numero lido eh: POSITIVO \n");
    else
        printf("Numero lido eh: NEGATIVO \n");

    system("pause");
    
    return 0;

}
