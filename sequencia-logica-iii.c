#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// contar de um numero ate o outro 2
//  Escreva um programa que l? 3 n?meros X, Y e Z (X < Y e Z >= 1). Em seguida, o programa exibe uma seq??ncia de 1 a Y, com valores incrementados pelo valor de Z, passando para a pr?xima linha a cada X n?meros serem impressos na linha.
// https://thehuxley.com/problem/959?quizId=8318

int main()
{
    int valorQuebra, valorContagem, valorIncremento;
    scanf("%d%d%d", &valorQuebra, &valorContagem, &valorIncremento);
    int contador;
    int skip = 2;

    for (contador = 1; contador <= valorContagem; contador += valorIncremento)
    {
        printf("%d", contador);
        if (skip <= valorQuebra)
        {
            printf(" ");
            skip++;
        }
        else
        {
            printf("\n");
            skip = 2;
        }
    }
    return 0;
}