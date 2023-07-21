#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/321?quizId=8318

int main()
{
    int n_casos, i, j;
    scanf("%d", &n_casos);
    double listasCompras[n_casos];
    char listaFrutas[n_casos][100];
    double valorDia = 0;
    int sp = 0;
    int aux[n_casos];

    for (i = 0; i < n_casos; i++)
    {

        scanf("%lf", &listasCompras[i]);
        scanf(" %[^\n]", listaFrutas[i]);
        int frutasN = 1;
        int tamanho_p = strlen(listaFrutas[i]);
        for (j = 0; j < tamanho_p; j++)
        {
            if (listaFrutas[i][j] == ' ')
            {
                frutasN++;
            }
            aux[i] = frutasN;
        }
    }

    double somaKg = 0;

    for (i = 0; i < n_casos; i++)
        somaKg += aux[i];

    somaKg = somaKg / n_casos;

    //-------------------------------------------
    for (i = 0; i < n_casos; i++)
        valorDia += listasCompras[i];

    valorDia = valorDia / n_casos;

    for (i = 0; i < n_casos; i++)
        printf("dia %d: %d kg\n", i + 1, aux[i]);

    printf("%.2lf kg por dia\nR$ %.2lf por dia", somaKg, valorDia);

    return 0;
}