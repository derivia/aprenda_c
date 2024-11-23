#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char *nome;
  int idade;
} Pessoa;

Pessoa *criar_pessoa(const char *nome, int idade)
{
  // Aloca espaço para a estrutura
  Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
  if (p == NULL) {
    return NULL;
  }

  // Aloca espaço para o nome
  p->nome = (char *)malloc(strlen(nome) + 1);
  if (p->nome == NULL) {
    free(p); // Libera memória já alocada da estrutura, caso não dê para alocar
             // o nome
    return NULL;
  }

  strcpy(p->nome, nome);
  p->idade = idade;

  return p;
}

void liberar_pessoa(Pessoa *p)
{
  if (p != NULL) {
    /*
     * Primeiro libera os campos que utilizam alocação, nesse caso "nome"
     * Depois libera a estrutura em si, para evitar perder memória.
     */
    free(p->nome);
    free(p);
  }
}

int main()
{
  // Array de pessoas, baseado no tamanho da estrutura Pessoa * 3
  Pessoa **pessoas = (Pessoa **)malloc(3 * sizeof(Pessoa *));
  if (pessoas == NULL) {
    printf("Erro de alocação\n");
    return 1;
  }

  pessoas[0] = criar_pessoa("João", 25);
  pessoas[1] = criar_pessoa("Maria", 30);
  pessoas[2] = criar_pessoa("Pedro", 20);

  for (int i = 0; i < 3; i++) {
    if (pessoas[i] != NULL) {
      printf("Pessoa %d: %s, %d anos\n", i + 1, pessoas[i]->nome,
             pessoas[i]->idade);
    }
  }

  /*
   * Libera a memória individual de cada uma das struct Pessoa
   * Depois libera a memória do array
   */
  for (int i = 0; i < 3; i++) {
    liberar_pessoa(pessoas[i]);
  }
  free(pessoas);

  return 0;
}
