#include <stdio.h>

#define N 30

void stling(char* v_original, char* v_cebolinha)
{
    int i, j;
    
    for (i = 0; v_original[i] != '\0'; i++)
    {
        if (v_original[i] == 'R')
            v_cebolinha[i] = 'L';
        else if (v_original[i] == 'r' && v_original[i+1] == 'r')
        {   
            v_cebolinha[i] = 'l';
            for (j = i+1; v_original[j] != '\0'; j++)
                v_original[j] = v_original[j+1];
        }
        else if (v_original[i] == 'r' && v_original[i+1] != ' ')
            v_cebolinha[i] = 'l';
        else
            v_cebolinha[i] = v_original[i];
    }
}

int main()
{
    char frase[N] = "Para com isso, caramba!";
    char cebolinha[N];
    int i;
    for (i=0; i<N; i++)
        cebolinha[i] = '\0';

    stling(frase, cebolinha);

    printf("%s\n", cebolinha);

    return 0;
}