#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFLEN 1024

char* concatenaStrings(char* s1, char* s2);

int main()
{
	char* concatenada;

	concatenada = concatenaStrings("foo", "bar");

	printf("%s\n", concatenada);

	free(concatenada);

	return 0;
}

char* concatenaStrings(char* s1, char* s2)
{
	char* str;
	int j, i, tam1, tam2;

	tam1 = strlen(s1);
	tam2 = strlen(s2);

	str = (char*) malloc(sizeof(char) * (tam1 + tam2 + 1));

	for (i = 0; i<tam1 ; i++)
		str[i] = s1[i];
	for (j = 0, i = tam1; i < tam1 + tam2 +1; i++, j++)
		str[i] = s2[j];
	
	str[i] = '\0';

	return str;
}
