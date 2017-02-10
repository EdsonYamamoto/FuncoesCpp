#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int armazenaInt();
void printInt(int valor);

int main()
{
  int i;
  i = armazenaInt();
  printInt(i);

  system("PAUSE");
  return 0;
}

int armazenaInt()
{
  int valor;
  scanf("%i",&valor);
  fflush(stdin);

  return valor;
}

void printInt(int valor)
{
    printf("%i\n", valor);
}