#include <stdio.h>

#define N_MAX 20

int ehCrescente(int* valores, int len);

int main()
{
    int numeros[N_MAX];
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &numeros[i]);    
    
    if (ehCrescente(numeros, n))
        printf("Eh crescente\n");

    return 0;
}

int ehCrescente(int* valores, int len)
{
    int eh_crescente, i;

    eh_crescente = 1;
    for (i = 1; i < len; i++)
    {
        if (valores[i] < valores[i-1])
            return 0;
    }

    return 1;
}