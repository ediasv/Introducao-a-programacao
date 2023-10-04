#include <stdio.h>

void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;
    tn = *n;
    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }
    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

int main()
{
    int num, primeiro, ultimo, eh_pali;
    num = 12344321;
    eh_pali = 1;
    while (num)
    {
        removeExtremos(&num, &primeiro, &ultimo);
        if (primeiro != ultimo)
        {
            eh_pali = 0;
            break;
        }
    }

    printf("%d\n", eh_pali);
    
    return 0;
}