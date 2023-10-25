#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define BUFLEN 1024

char* empacotaString(char* string);

int main()
{
	char buffer[BUFLEN];
	char* str_nova;

	fgets(buffer, BUFLEN, stdin);

	str_nova = empacotaString(buffer);
	printf("%s", str_nova);
	free(str_nova);

	return 0;
}

char* empacotaString(char* string)
{
	char* copia;
	int tamanho;
	tamanho = strlen(string) + 1;
	copia = (char*) malloc(sizeof(char) * tamanho);
	for (int i = 0; i < tamanho; i++)
		copia[i] = string[i];
	return copia;
}
