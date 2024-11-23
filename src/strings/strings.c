#include <stdio.h>
#include <string.h>

void demonstra_lib_strings()
{
  char str1[20] = "Hello";
  char str2[20] = " World";
  char str3[40];

  printf("Comprimento de str1: %lu\n", strlen(str1));

  // strcpy - copia uma string
  strcpy(str3, str1);
  printf("String copiada (str3): %s\n", str3);

  // strcat - concatena strings
  strcat(str3, str2);
  printf("Strings concatenadas: %s\n", str3);

  // strcmp - compara strings
  printf("Comparacao str1 e str2: %d\n", strcmp(str1, str2));
  printf("Comparacao str1 e str1: %d\n", strcmp(str1, str1));

  // strrchr - encontra última ocorrência de caractere
  char *ultima = strrchr(str3, 'l');
  if (ultima != NULL) {
    printf("Ultima ocorrencia de 'l': %s\n", ultima);
  }

  // strpbrk - encontra primeira ocorrência de qualquer caractere de um conjunto
  char *primeira = strpbrk(str3, "aeiou");
  if (primeira != NULL) {
    printf("Primeira vogal encontrada: %c\n", *primeira);
  }
}

void demonstra_modificacao_strings()
{
  char texto[50] = "Exemplo de Manipulacao";
  printf("Texto original: %s\n", texto);

  for (int i = 0; texto[i] != '\0'; i++) {
    if (texto[i] >= 'a' && texto[i] <= 'z') {
      /*
       * Diferença entre 'a' e 'A' na tabela ASCII
       * Veja: https://pt.wikipedia.org/wiki/ASCII
       */
      texto[i] = texto[i] - 32;
    }
  }
  printf("Texto em maiusculas: %s\n", texto);
}

void demonstra_busca()
{
  char texto[100] = "O rato roeu a roupa do rei de Roma";
  char procurar = 'r';
  int contador = 0;

  /*
   * Conta as ocorrências do caractere "r" manualmente
   */
  for (int i = 0; texto[i] != '\0'; i++) {
    if (texto[i] == procurar) {
      contador++;
    }
  }

  printf("Texto: %s\n", texto);
  printf("O caractere '%c' [apenas minusculo] aparece %d vezes\n", procurar,
         contador);
}

int main()
{
  demonstra_lib_strings();
  demonstra_modificacao_strings();
  demonstra_busca();
  return 0;
}
