#include <stdio.h>

#define N_MAX 100
#define M_MAX 100

int main()
{
    int q_pedras, q_sapos, i, pos_sapo, salto, j;
    int pedras[N_MAX] = {0};

    scanf("%d %d", &q_pedras, &q_sapos);
    
    for (i = 0; i < q_sapos; i++)
    {
        scanf("%d %d", &pos_sapo, &salto);

        for(j = pos_sapo; j>=0; j -= salto)
        {
            pedras[j] = 1;
        }

        if (pos_sapo+salto < q_pedras)
        {
            for(j = pos_sapo + salto; j+salto<q_pedras; j += salto)
            {
                pedras[j] = 1;
            }
        }
    }

    for (i = 0; i < q_pedras; i++)
    {
        printf("%d", pedras[i]);
    }

    printf("\n");

    return 0;    
}