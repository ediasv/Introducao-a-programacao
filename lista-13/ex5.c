#include <stdio.h>

#define N_MAX 50

int main()
{
    int i, n, minas[N_MAX], tabuleiro[N_MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &minas[i]);
        tabuleiro[i] = 0;
    }

    if (minas[0] == 1)
    {
        tabuleiro[0]++;
        tabuleiro[1]++;
    }

    if (minas[n-1] == 1)
    {
        tabuleiro[n-1]++;
        tabuleiro[n-2]++;
    }

    for (i = 1; i < n-1; i++)
    {
        if (minas[i]==1)
        {
            tabuleiro[i-1]++;
            tabuleiro[i]++;
            tabuleiro[i+1]++;
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", tabuleiro[i]);
    }

    printf("\n");
    return 0;
}