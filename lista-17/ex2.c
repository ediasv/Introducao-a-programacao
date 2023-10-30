#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 128
#define N 5

int main()
{
    char s[N][MAX];
    int i;

    for (i = 0; i < N; i++)
        scanf("%s", s[i]);
    
    printf("\n");

    for (i = N - 1; i >= 0; i--)
        printf("%s\n", s[i]);

    return 0;
}