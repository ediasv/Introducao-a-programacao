#include <stdio.h>

#define N_MAX 100

int main()
{
    int i, n, secoes[N_MAX], soma, acha_k;

    scanf("%d", &n);

    soma = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &secoes[i]);
        soma += secoes[i];
    }
    acha_k = soma / 2;
    soma = 0;
    for (i = 0; i < n; i++ )
    {
        soma += secoes[i];
        if (soma == acha_k)
        {
            break;
        }
    }
    
    printf("%d\n", i+1);
    return 0;
}