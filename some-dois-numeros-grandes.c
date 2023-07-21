#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/526?quizId=8318

void inverter_string(char string[])
{
    int len = strlen(string);

    int i;

    for (i = 0; i < len / 2; i++)
    {
        char aux = string[i];

        string[i] = string[len - i - 1];

        string[len - i - 1] = aux;
    }
}

int main()
{

    char numero2[10002];

    char numero1[10002];

    char resultado[10003];

    int i, tam_um, tam_dois, n_zero = 0;

    for (int i = 0; i < 10003; i++)
    {
        resultado[i] = '\0';
    }
    scanf("%s %s", numero1, numero2);

    inverter_string(numero1);

    inverter_string(numero2);

    tam_um = strlen(numero1);

    tam_dois = strlen(numero2);

    for (i = 0; i < tam_um || i < tam_dois; i++)
    {
        int numeroCima = i < tam_um ? (numero1[i] - '0') : 0;

        int numeroBaixo = i < tam_dois ? (numero2[i] - '0') : 0;

        int soma = numeroCima + numeroBaixo + n_zero;

        resultado[i] = soma % 10 + '0';

        n_zero = soma / 10;
    }

    if (n_zero == 1)
        resultado[i] = '1';

    inverter_string(resultado);

    printf("%s", resultado);

    return 0;
}