#include <stdio.h>

int main()
{
    int n, i, j, b;

    scanf("%d", &n);
    b=n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("A ");
        }
        b--;
        printf("\n");
    }

    return 0;
}