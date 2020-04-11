// Exercicio 022.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Desvio de Condicional de Multiplos Casos

#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int Num;

    printf("Digite um numero entre 0 ate 10: ");
    scanf_s("%d", &Num);

    switch (Num)
    {
    case 0:
        printf("Zero \n");
        break;
    case 1:
        printf("Um \n");
        break;
    case 2:
        printf("Dois \n");
        break;
    case 3:
        printf("Tres \n");
        break;
    case 4:
        printf("Quatro \n");
        break;
    case 5:
        printf("Cinco \n");
        break;
    case 6:
        printf("Seis \n");
        break;
    case 7:
        printf("Sete \n");
        break;
    case 8:
        printf("Oito \n");
        break;
    case 9:
        printf("Nove \n");
        break;
    case 10:
        printf("Dez \n");
        break;
    default:
        printf("Numero fora do intevalo de 0 ate 10 \n");
        break;
    }

    system("Pause");
    
    return 0;
}