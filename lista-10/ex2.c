#include <stdio.h>

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4)
{
    int q1, q2;

    q1 = n2/n1;
    q2 = n3/n2;

    if (q1 != q2)
        return 0;
    
    q1 = n4/n3;

    if (q1 != q2)
        return 0;
    else
        return q1;
}

int main ()
{
    int n1, n2, n3, n4;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("%d\n", ehProgressaoAritmetica(n1, n2, n3, n4));

    return 0;
}