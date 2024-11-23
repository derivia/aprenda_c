#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[50];
  int idade;
  float altura;
} Pessoa;

union Valor {
  int i;
  float f;
  char c;
};

typedef struct {
  /*
   * tipo:
   * i -> inteiro
   * f -> float
   * c -> char
   */
  char tipo;
  union Valor valor;
} Item;

/*
 * Imprime o valor do item baseado no caractere
 */
void imprimir_item(Item item)
{
  printf("Tipo: %c, Valor: ", item.tipo);
  switch (item.tipo) {
  case 'i':
    printf("%d\n", item.valor.i);
    break;
  case 'f':
    printf("%.2f\n", item.valor.f);
    break;
  case 'c':
    printf("%c\n", item.valor.c);
    break;
  default:
    printf("tipo desconhecido\n");
  }
}

int main()
{
  Pessoa p1;
  strcpy(p1.nome, "João");
  p1.idade = 25;
  p1.altura = 1.75;

  printf("Pessoa: %s, %d anos, %.2fm\n", p1.nome, p1.idade, p1.altura);

  Item items[3];

  items[0].tipo = 'i';
  items[0].valor.i = 42;

  items[1].tipo = 'f';
  items[1].valor.f = 3.14;

  items[2].tipo = 'c';
  items[2].valor.c = 'A';

  for (int i = 0; i < 3; i++) {
    imprimir_item(items[i]);
  }

  return 0;
}
