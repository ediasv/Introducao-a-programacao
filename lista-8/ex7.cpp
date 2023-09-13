#include <stdio.h>

int main()
{
    int i, n, v1, v2, seq, maior_seq;

    // recebe N (numero de valores a serem lidos) e v1
    scanf("%d %d", &n, &v1);

    // sequencia inicia em 1 (só um valor foi lido) e a maior sequencia lida até agora é essa
    seq = 1;
    maior_seq = seq;

	// i começa em 1 porque um valor foi lido fora do laco de repeticao
    for (i=1 ; i<n ; i++)
    {
        // recebe o segundo valor
        scanf("%d", &v2);

        // se o segundo valor for igual ao primeiro, a variável "seq" é acrescida de uma unidade (essa variavel armazena o tamanho da sequencia atual) 
        if (v1 == v2)
        {
            seq++;
            // se a sequencia atual for maior o que a maior lida, ela se torna a maior
            if (seq > maior_seq)
                maior_seq = seq;
        }
        // se o segundo valor for diferente do primeiro, inicia a contagem de uma nova sequencia
        else
            seq = 1;
        
        // a janela anda
        v1 = v2;
    }

    // imprime a maior sequencia
    printf("%d\n", maior_seq);

    return 0;
}
