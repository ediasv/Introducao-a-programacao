#include <stdio.h>

#define STR_MAX 20

int ehPalindromo(char* s);

int main()
{
    char suus[STR_MAX];

    fgets(suus, STR_MAX, stdin);

    if (ehPalindromo(suus))
        printf("Eh palindromo\n");
    
    return 0;
}

int ehPalindromo(char* s)
{
    int i, j, n;
    
    j = STR_MAX-1;
    while (s[j] != '\n')
    {
        j--;
    }
    j--;
    n = j;

    for (i = 0; i <= n/2; i++, j--)
    {
        if (s[i] != s[j])
            return 0;
    }
    

    return 1;
}