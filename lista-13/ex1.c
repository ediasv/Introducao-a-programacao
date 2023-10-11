// gerar N valores aleatorios
// valores entre -40 e +40
// nao armazenar negativos
//calcular média dos positivos
// mostrar positivos
// dizer se positivos sao maiores menores ou iguais a media

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM_INF -40
#define LIM_SUP 40
#define N 10

int main()
{
    int foo[N], qmaior, qmenor, bar;
    float media;
    int i;

    srand(time(0));

    media = 0;
    qmaior = 0;
    qmenor = 0;
    i = 0;
    while (i < N)
    {
        bar = rand() / (float) RAND_MAX * (LIM_SUP-LIM_INF) + LIM_INF;
        
        if (bar>=0)
        {
            foo[i] = bar;
            media += bar;
            i++;
        }
    }
    media /= N;
    printf("%f\n", media);
    for (i=0; i<N; i++)
    {
        // mostrar valor
        // dizer se é maior, menor ou igual
        if (foo[i]>media)
        {
            printf("%d eh maior que a media\n", foo[i]);
            qmaior++;
        } 
        else if (foo[i]<media)
        {
            printf("%d eh menor que a media\n", foo[i]);
            qmenor++;
        }
        else
            printf("%d eh igual a media\n", foo[i]);
    }

    // mostrar qmaior e qmenor
    printf("%d valores maiores que a media\n%d valores menores que a media\n", qmaior, qmenor);
    return 0;
}