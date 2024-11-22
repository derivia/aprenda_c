#include <stdio.h>

/*
 * Troca os valores dos elementos fazendo com que um aponte para o endereço do
 * outro
 */
void trocar(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x = 10, y = 20;
  printf("Antes da troca: x = %d, y = %d\n", x, y);
  trocar(&x, &y);
  printf("Depois da troca: x = %d, y = %d\n", x, y);
  return 0;
}
