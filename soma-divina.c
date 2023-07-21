#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/1279?quizId=8318

int main()
{
    int tam, i = 0, j = 0;
    scanf("%d", &tam);
    int notas[tam][tam];
    int notas2[tam][tam];
    int final[tam][tam];

    if (tam <= 0)
    {
        printf("Vazia");
        return 0;
    }
    for (i = 0; i < tam; i++)
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &notas[i][j]);
            final[i][j] = notas[i][j];
        }
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &notas2[i][j]);
            final[i][j] += notas2[i][j];
        }
    }

    for (i = 0; i < tam; i++)
        for (j = 0; j < tam; j++)
            printf("%d\n", final[i][j]);

    return 0;
}