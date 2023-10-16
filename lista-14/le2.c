#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    int i, vals[N], usu, ultima_pos;

    // gerar vetor com N valores aleatórios entre 1 e 10
    srand(time(0));
    for (i = 0; i < N; i++)
        vals[i] = (rand() % 10) + 1;

    for (i = 0; i < N; i++)
            printf("%d ", vals[i]);

    printf("\n");

    ultima_pos = N - 1;
    scanf("%d", &usu);
    while (usu <= ultima_pos && usu >= 0 && ultima_pos >= 0)
    {
        for (i = usu; i < ultima_pos; i++)
            vals[i] = vals[i+1];

        for (i = 0; i < ultima_pos; i++)
            printf("%d ", vals[i]);

        printf("\n");

        ultima_pos--;
        scanf("%d", &usu);
    }
    
    return 0;
}