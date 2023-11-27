#include <stdio.h>

int ehEngracada(char* risada)
{
    int i, tam;

    tam = 0;
    for (i = 0; risada[i] != '\0'; i++)
    {
        tam++;
    }
    tam--;
    for (i = 0; (i < tam/2); i++)
    {
        if (risada[i] != risada[tam-i])
        {
            
        }
    }
}

int main()
{

}