#include <stdio.h>

#define BUFLEN 1024

int contaBit (unsigned char n);
void codifica (unsigned char* msg, unsigned char* output);
void mostraMensagem (unsigned char* input);

int main ()
{
    int i;
    unsigned char buffer [BUFLEN];

    codifica ((unsigned char*) "Eduardo.", buffer);

    // Supondo agora que o '.' delimita o fim da mensagem.
    // Mostra os valores numéricos.
    for (i = 0; buffer [i] != '.'; i++)
        printf ("%d ", buffer [i]);

    printf ("%d\n", buffer [i]);

    // Corrompe algum bit.
    buffer [2] = 236;

    mostraMensagem (buffer);
    
    return 0;
}

void codifica (unsigned char* msg, unsigned char* output)
{
    int i, conta_bit;

    for (i = 0; msg[i] != '.'; i++)
    {
	conta_bit = contaBit(msg[i]);
	if (conta_bit & 1)
		output[i] = msg[i] + 128;
	else
		output[i] = msg[i];
    }
    output[i] = msg[i];
}

void mostraMensagem (unsigned char* input)
{
	int i, n_bits;
	
	for (i = 0; input[i] != '.'; i++)
	{
		n_bits = contaBit(input[i]);
		
		if (n_bits & 1)
			printf("*");
		else
			printf("%c", input[i] & 0x7F);
	}	
	printf(".\n");
}

int contaBit (unsigned char n)
{
	int i, conta;
	conta = 0;
	for (i = 0; i < 8; i++)
	{
		conta += n & 1;
		n = n >> 1;
	}
	return conta;
}	
