#include <stdlib.h>
#include <stdio.h>

void alocaRealloc(char **ponteiro, int tamanho);

int main()
{
	char *str=NULL;
	int tamanho=50;

	alocaRealloc(&str, tamanho);
	gets(str);
	puts(str);

	system("pause");

	return 0;
}

void alocaRealloc(char **ponteiro, int tamanho)
{
	if ((*ponteiro=(char*)realloc(*ponteiro,tamanho*sizeof(char)))==NULL)
		exit(1);
}