#include <stdio.h>

#define N 11

int ehValido(int* cpf);

int main()
{

    int cpf[N] = {2,8,6,1,9,0,8,7,0,0,2};

    if(ehValido(cpf))
        printf("Eh valido\n");
    else
        printf("Nah eh valido\n");

    return 0;
}

int ehValido(int* cpf)
{
    int soma1=0, soma2=0, i;

    for (i=0; i<9; i++)
        soma1 += (i+1)*cpf[i];
    for (i=1; i<10; i++)
        soma2 += i*cpf[i];

    soma1 = (soma1%11)%10;
    soma2 = (soma2%11)%10;
    
    if (cpf[9] != soma1 || cpf[10] != soma2)
        return 0;

    return 1;
}