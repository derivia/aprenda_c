#include <stdio.h>

/*
 * FizzBuzz é um exercício clássico de programação
 *
 * O objetivo é imprimir números de 1 até o limite especificado `max`,
 * substituindo múltiplos de 3 por "fizz", múltiplos de 5 por "buzz" e
 * múltiplos de ambos por "fizzbuzz".
 */
void fizz_buzz(int max)
{
  for (int i = 1; i <= max; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      printf("fizzbuzz\n");
    } else if (i % 3 == 0) {
      printf("fizz\n");
    } else if (i % 5 == 0) {
      printf("buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
}

/*
 * O parâmetro `int *valor` indica que a função recebe um ponteiro para um
 * inteiro.
 * O operador de dereferência (*) acessa o valor armazenado no endereço
 * apontado.
 */
void altera_valor(int *valor)
{
  *valor += 5;
}

int main()
{
  fizz_buzz(40);
  int valor = 10;

  /*
   * Passa à função `altera_valor` o endereço de `valor`,
   * utilizando o operador &.
   */
  altera_valor(&valor);

  printf("Valor alterado: %d", valor);
  return 0;
}
