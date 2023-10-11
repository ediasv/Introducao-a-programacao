#include <stdio.h>

#define N 1024

int main()
{
    int n, i, valores[N];

    scanf("%d", &n);

    for (i=0; i<n; i++)
        scanf("%d", &valores[i]);

    for (i=(n-1); i>=0; i--)
        printf("%d\n", valores[i]);
    
    return 0;
}