#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraValor (float *ponteiro, int tamanho, int limiteRandomico);
void imprimiValorGer(float *ponteiro, int tamanho);

int main()
{
  int tam=30, limiteRand = 50;
  float *ponteiro=NULL, vet[tam];
  ponteiro = vet;

  geraValor(ponteiro,tam, limiteRand);
  imprimiValorGer(ponteiro,tam);
  system("PAUSE");
  return 0;
}

void geraValor (float *ponteiro, int tamanho, int limiteRandomico)
{
  srand(time(NULL));

  for (int i = 0; i < tamanho; i++)
    *(ponteiro+i) = rand() % limiteRandomico;
}

void imprimiValorGer(float *ponteiro, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
    printf("%f\n", *(ponteiro+i));
}