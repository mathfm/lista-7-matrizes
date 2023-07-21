#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/326?quizId=8318

int main()
{
    int valorDois, valorUm;
    scanf("%d%d", &valorUm, &valorDois);
    int contador;
    int skip = 1;

    for (contador = 1; contador <= valorUm; contador++)
    {
        printf("%d", contador);
        if (skip < valorUm)
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

    for (contador = valorUm + 1; contador <= valorDois; contador++)
    {
        printf("%d", contador);
        if (skip <= valorUm)
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