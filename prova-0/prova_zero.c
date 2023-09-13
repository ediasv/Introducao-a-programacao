#include <stdio.h>

#define N 11

int main()
{
    int i, j, larg, n_esp;

    larg = N;
    n_esp = larg-2;

    while (larg >= 3)
    {
        printf("%d\n", larg);

        for(i=0 ; i<(larg+1)/2 ; i++)
        {
            for(j=0 ; j<i ; j++)
                printf(" ");

            printf("%d", i);

            for (j=0 ; j<n_esp ; j++)
                printf(" ");

            if(n_esp != -1)
            {
                printf("%d", i);
                n_esp-=2;
            }

            printf("\n");
        }
        
        larg-=2;
        n_esp=larg-2;
        printf("\n");
    }
    
    return 0;
}
