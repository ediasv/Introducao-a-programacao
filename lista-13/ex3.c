#include <stdio.h>

int ehParDeFoolano(unsigned int n1, unsigned int n2);

int main()
{
    unsigned int v1, v2;
    scanf("%u %u", &v1, &v2);

    printf("%d\n", ehParDeFoolano(v1, v2));

    return 0;
}

int ehParDeFoolano(unsigned int n1, unsigned int n2)
{
    int cont[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int eh_foolano, i;
    while (n1 != 0 && n2 != 0)
    {
        cont[n1%10]++;
        cont[n2%10]--;
        n1 /= 10;
        n2 /= 10;
    }

    eh_foolano = 1;
    for (i = 0; i<10; i++)
    {
        if (cont[i] != 0)
            eh_foolano = 0;
    }

    if (eh_foolano)
        return 1;
    else 
        return 0;
}