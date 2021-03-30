// Desvio Condicional encadeado.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf_s("%d", &num);

    if (num > 0)
        printf("POSITIVO \n");
    else if (num < 0)
        printf("NEGATIVO \n");
    else
        printf("ZERO \n");
    
    system("pause");

    return 0;

}
