#include <stdio.h>

#define N_MAX 5

int buscaVetor(int* vetor, int len_vetor, int num_procurado);

int main()
{
    int foo[N_MAX], n, bar, i;

    scanf("%d %d", &n, &bar);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &foo[i]);
    }

    printf("%d\n", buscaVetor(foo, n, bar));

    return 0;
}

int buscaVetor(int* vetor, int len_vetor, int num_procurado)
{
    int i;
    for (i = 0; i < len_vetor; i++)
    {
        if (vetor[i] == num_procurado){return i;}
    }
    
    return -1;
}