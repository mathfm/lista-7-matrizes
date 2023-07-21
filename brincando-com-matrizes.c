#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// soma de matrizes

// brincando com matrizes

// https://thehuxley.com/problem/1291?quizId=8318

int main()
{
    int matriz[3][3];
    double media;
    int maiorValor;
    int somaMatriz = 0;
    int somaDig = 0;
    int delta;
    int i, j;
    for (int i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
            somaMatriz += matriz[i][j];
            maiorValor = matriz[i][j];
        }
    media = (double)somaMatriz / 9;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (matriz[i][j] > maiorValor)
                maiorValor = matriz[i][j];

    if (maiorValor > 0)
        delta = 1;
    else if (maiorValor < 0)
        delta = -1;

    else
    {
        delta = 0;
    }

    for (i = 0; i < 3; i++)
    {
        somaDig += matriz[i][i];
    }

    printf("%.2lf %d %d %d", media, maiorValor, delta, somaDig);

    return 0;
}