#include <stdio.h>

#define LARGURA 5
#define ALTURA 5

int main()
{
    int i, j, n, inicio;
    int m[LARGURA][ALTURA];

    n = 1;
    inicio = 0;
    while (inicio <= LARGURA/2)
    {
        i = inicio;
        for (j = inicio; j < LARGURA - inicio; j++)
            m[i][j] = n++;

        j = LARGURA - 1 - inicio;
        for (i = inicio + 1; i < ALTURA - inicio; i++)
            m[i][j] = n++;

        i = ALTURA - 1 - inicio;
        for (j = (LARGURA - 2 - inicio); j >= inicio; j--)
            m[i][j] = n++;

        j = inicio;
        for (i = (ALTURA - 2 - inicio); i > inicio; i--)
            m[i][j] = n++;

        inicio++;
    }

    for (i = 0; i < ALTURA; i++)
    {
        for (j = 0; j < LARGURA; j++)
            printf("%3d ", m[i][j]);
        printf("\n");
    }

    return 0;
}