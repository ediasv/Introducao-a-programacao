#include <stdio.h>

#define LARG 36
#define ALT 24

// Struct GSImage
typedef struct
{
	int altura;
	int largura;
	unsigned char** dados;
} GSImage;

// Funções
void destroiGSImage (GSImage* img);
GSImage* criaGSImage (int largura, int altura);
GSImage* reduzPelaMetade (GSImage* img);
void preencheImg ()

int main()
{
	return 0;
}

void destroiGSImage (GSImage* img)
{
	int i;
	for (i = 0; i < img->altura; i++)
		free(img->dados[i]);
	free(img->dados);
	free(img);
}

GSImage* criaGSImage (int largura, int altura)
{
	GSImage* img;
	int i;

	img = (GSImage*) malloc(sizeof(GSImage));

	img->largura = largura;
	img->altura = altura;

	img->dados = (unsigned char**) malloc(sizeof(unsigned char*) * altura);
	for (i = 0; i < altura; i++)
		img->dados[i] = (unsigned char*) malloc(sizeof(unsigned char) * largura);

	return (img);
}

GSImage* reduzPelaMetade (GSImage* img)
{
	int i, j;
	GSImage* nova_img;

	nova_img = criaGSImage((img->largura)/2, (img->altura)/2);

	if ((img->largura & 1) || (img->altura & 1)
			return NULL;

	else
	{
		i = 0;
		j = 0;
		for (i = 0; i < (img->largura - 1), i+=2)
			for (j = 0; j < (img->altura - 1); j+=2)
		{
			media = (int) (img->dados[i][j] + img->dados[i][j+1] + img->dados[i+1][j] + img->dados[i+1][j+1])/4;
			nova_img->dados[i/2][j/2] = media;
		}
	}
	return nova_img;
}

