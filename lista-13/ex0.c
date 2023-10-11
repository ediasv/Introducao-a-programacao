#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM_INF 20
#define LIM_SUP 80
#define N 10

int main()
{
    int foo[N], qmaior, qmenor;
    float media;
    int i;

    srand(time(0));

    media = 0;
    qmaior = 0;
    qmenor = 0;
    for (i=0; i<N; i++)
    {
        foo[i] = (LIM_INF + (rand() % (LIM_SUP-LIM_INF+1)));
        media += foo[i];
    }
    media /= N;
    printf("Media = %.2f\n", media);
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