#include <stdio.h>

#define LIMITE 100

int formaConjunto(int* v, int* r, int tam);

int main()
{   
    int entrada[LIMITE];
    int saida[LIMITE];
    int i, tam;

    tam = 10;
    for (i=0; i<tam; i++)
        scanf("%d", &entrada[i]);

    tam = formaConjunto(entrada, saida, tam);

    for (i=0; i<tam; i++)
        printf("%d ", saida[i]);
    
    printf("\n%d\n", tam);
    
    return 0;
}

int formaConjunto(int* v, int* r,int tam)
{
    int i, j, achou=0, q_saida=0;

    r[0] = v[0];

    for(i = 1; i<tam; i++)
    {
        for(j = q_saida; j>=0; j--)
        {
            if(r[j] == v[i])
            {
                achou = 1;
                break;
            }
        }
        if(!achou)
        {
            q_saida++;
            r[q_saida] = v[i];
        }
        achou = 0;
    }
    q_saida++;
    return q_saida;
}