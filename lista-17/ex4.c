#include <stdio.h>

#define N 2
#define M 3

int main()
{
    int a[N][M] =
    {{61, 2, 3},
     {3, 2, 41}};
    
    int b[M][N] =
    {{4, 42},
     {34, 2},
     {4, 2}};

    int c[N][N] = {0};

    int i, j, k, l;

    for(i = 0; i < N; i++)
    {
        for (l = 0; l < N; l++)
        {
            for(j = 0; j < M; j++)
            {
                c[i][l] += a[i][j]*b[j][l];
            }
        }
    }
    
    for (i = 0; i<N; i++)
    {
        for (j = 0; j<N; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}