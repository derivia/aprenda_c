#include <stdio.h>

int soma(int a, int b)
{
  return a + b;
}

int main()
{
  /*
   * toda instrução de C precisa ser terminada com `;` para que o compilador
   * seja capaz de identificar o fim da instrução
   */
  int resultado = soma(5, 6);
  /*
   * os dois caracteres `%d` formam um "especificador de formato"
   * nessa execução, o valor de `%d` é "substituido" pelo argumento `resultado`
   */
  printf("%d", resultado);
  return 0;
}
