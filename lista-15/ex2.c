#include <stdio.h>

#define MAIOR_STR 100

int ehLetra(char l);

int contaPalavras(char* s);

int main()
{   
    char s[] = "Bom dia, estou com fome";
    printf("%d\n", contaPalavras(s));
    return 0;
}

int ehLetra(char l)
{
    if ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z'))
        return 1;
    
    return 0;
}

int contaPalavras(char* s)
{
    int i, q_palavras = 0;
    for (i = 0; s[i]!='\0'; i++)
    {
        if (ehLetra(s[i]) && !ehLetra(s[i+1]))
        q_palavras++;
    }

    return q_palavras;
}