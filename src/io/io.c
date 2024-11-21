#include <stdio.h>

int soma_com_entrada()
{
  int p_valor;
  int s_valor;

  printf("Insira o primeiro valor: ");
  scanf("%d", &p_valor);
  printf("Insira o segundo valor: ");
  scanf("%d", &s_valor);

  return p_valor + s_valor;
}

int main()
{
  // utiliza o retorno da função soma_com_entrada como substituição para o
  // especificador de formato %d
  printf("%d", soma_com_entrada());
  return 0;
}
