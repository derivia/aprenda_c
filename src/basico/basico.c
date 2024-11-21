/*
 * Cabeçalho (header) `stdio.h` é incluído para utilizar a função printf()
 * Headers são arquivos que contém declarações de funções e/ou macros
 * permitindo compartilhar código entre diferentes arquivos .c
 */
#include <stdio.h>

int soma(int a, int b)
{
  return a + b;
}

int main()
{
  /*
   * Toda instrução de C precisa ser terminada com `;` para que o compilador
   * seja capaz de identificar o fim da instrução
   */
  int resultado = soma(5, 6);

  /*
   * Os dois caracteres `%d` formam um "especificador de formato"
   * nessa execução, o valor de `%d` é "substituido" pelo argumento `resultado`
   *
   * Os dois caracteres `\n` formam uma "escape sequence"
   * Sm strings, qualquer caractere com o prefixo `\` será entendido pelo
   * compilador como uma escape sequence, por isso, quando quiser como saída o
   * caractere literal "\" utilize \\ para escapar o próprio caractere
   */
  printf("%d\n", resultado);
  return 0;
}
