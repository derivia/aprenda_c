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
   *
   * e os dois caracteres `\n` formam uma "escape sequence"
   * em strings, qualquer caractere com o prefixo `\` será entendido pelo
   * compilador como uma escape sequence, por isso, quando quiser como saída o
   * caractere literal "\" utilize \\ para escapar o próprio caractere
   */
  printf("%d\n", resultado);
  return 0;
}
