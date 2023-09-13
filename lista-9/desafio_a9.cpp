#include <stdio.h>

int main()
{
    char a;
    int n, dim, esp_q, simb_q, i;

    scanf("%c %d", &a, &n);

    dim = 2*n + 1;
    esp_q = n;
    simb_q = 1;

    while (simb_q < dim)
    {
        for (i = 0 ; i < esp_q ; i++)
            printf(" ");
        
        for (i = 0 ; i < simb_q ; i++)
            printf("%c", a);

        printf("\n");
        esp_q--;
        simb_q+=2;
    }

    esp_q+=2;
    simb_q-=4;

    while (simb_q >= 1)
    {
        for (i = 0 ; i < esp_q ; i++)
            printf(" ");
        
        for (i = 0 ; i < simb_q ; i++)
            printf("%c", a);

        printf("\n");
        esp_q++;
        simb_q-=2;
    }

    return 0;
}