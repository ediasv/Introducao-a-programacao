#include <stdio.h>

#define MAX_QUESTOES 80

int main()
{
    char gabarito[MAX_QUESTOES];
    char respostas[MAX_QUESTOES];
    int n, i, nota;

    scanf("%d", &n);
    scanf("%s", gabarito);
    scanf("%s", respostas);

    nota = 0;
    for (i = 0; i < n; i++)
    {
        if (gabarito[i] == respostas[i])
            nota++;
    }

    printf("%d\n", nota);

    return 0;
}
