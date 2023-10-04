#include <stdio.h>

int verificaAlternancia(int n, int *k);

int main()
{
    int n, k, ehalt;
    n=12;
    ehalt = verificaAlternancia(n, &k);

    if (ehalt)
        printf("eh alt %d\n", k);
    else
        printf("nao eh alt %d\n", k);

    return 0;
}

int verificaAlternancia(int n, int *k)
{
    int i, primeiro_bloco, ultimo_div, num, j, reps;

    primeiro_bloco = 1;
    reps = 0;
    for (i=0; i<n; i++)
    {
        scanf("%d", &num);

        if (!i)
        {
            ultimo_div = num%2; // 0 é par
        }
        else if(primeiro_bloco)
        {
            if(num%2 != ultimo_div)
            {
                *k = i;
                ultimo_div = num%2;
                primeiro_bloco = 0;
                reps++;
            }
        }
        else
        {
            if(num%2 != ultimo_div)
            {
                j = i - reps*(*k);
                if (j != *k)
                {
                    return 0;
                }
                ultimo_div = num%2;
                reps++;
            }
        }
    }

    return 1; 
}
