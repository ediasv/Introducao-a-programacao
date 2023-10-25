/*
Desafio 08
Desenvolvido por: Eduardo Vinicius Dias
*/

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

#define N_MAX 500

int* crivoDeEratostenes(int tamanho);

int main()
{
    int num, // variavel que armazena os valores de teste
        i, j, tam_tabela;
    int* tabela;

    scanf("%d", &tam_tabela);

    tabela = crivoDeEratostenes(tam_tabela); 

    /* Loop para pesquisar se valores entre 1 a N_MAX são primos*/
    printf("\n\nPesquisa por primos entre 1 e %d...\n", tam_tabela);
    printf("Digite -1 para sair.\n");
    scanf("%d", &num);
    while(num != -1)
    {
        if(tabela[num])
            printf("Eh primo!\n");
        else
            printf("Nao eh primo!\n");

        scanf("%d", &num);
    }

    return 0;
}

int* crivoDeEratostenes(int tamanho)
{
    int num, // variavel que armazena os valores de teste
        i, j;
    int* tabela_func;

    tabela_func = (int*) malloc(sizeof(int) * (tamanho + 1));
    // seta que 0 e 1 nao sao primos
    tabela_func [0] = FALSE;
    tabela_func [1] = FALSE;
    // se que todos os demais sao primos
    for (i = 2; i <= tamanho; i++)
        tabela_func [i] = TRUE;

    /* Agora, analisa cada número a partir de 2. Se o número ainda
       não foi desmarcado, ele é primo e precisa "eliminar"
       todos os seus múltiplos.*/
    for (i = 2; i <= tamanho; i++)
        if (tabela_func [i])
            for (j = i + i; j <= tamanho; j += i)
                tabela_func [j] = FALSE;
    return tabela_func;
}
