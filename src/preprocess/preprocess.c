#include <stdio.h>

// Definição de constantes
#define PI         3.14159
#define MAX_BUFFER 1024

// Definição de macros [funções]
#define QUADRADO(x) ((x) * (x))
#define MAIOR(a, b) ((a) > (b) ? (a) : (b))

#define DEBUG

// Definição condicional baseado na definição DEBUG
#ifdef DEBUG
#define LOG(msg) printf("DEBUG: %s\n", msg)
#else
#define LOG(msg) // Não faz nada se DEBUG não estiver definido
#endif

#ifndef EXEMPLO_H
#define EXEMPLO_H

typedef struct {
  int x, y;
} Ponto;

#endif

int main()
{
  printf("Valor de PI: %.5f\n", PI);

  int x = 5;
  printf("Quadrado de %d: %d\n", x, QUADRADO(x));

  int a = 10, b = 20;
  printf("Maior entre %d e %d: %d\n", a, b, MAIOR(a, b));

  LOG("Programa executando normalmente");

  char buffer[MAX_BUFFER];

#ifdef DEBUG
  printf("Modo debug ativado\n");
#endif

#if defined(MAX_BUFFER) && MAX_BUFFER > 512
  printf("Buffer grande disponível\n");
#endif

  return 0;
}
