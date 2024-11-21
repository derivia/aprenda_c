#include <stdio.h>

/*
 * Lembrando que, o retorno dessa função, se usado numa comparação
 * resultará em verdade sempre, pois as strings "false" e "true" ambas são
 * diferentes de 0
 */
char *falso_ou_verdadeiro(int a, int b)
{
  char *falso = "false";
  char *verdadeiro = "true";
  if (a == b) {
    return verdadeiro;
  } else {
    return falso;
  }
}

int main()
{
  char *resultado = falso_ou_verdadeiro(5, 5);
  printf("A comparação resultou em: %s", resultado);
  return 0;
}
