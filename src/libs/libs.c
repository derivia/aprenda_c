#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void demonstra_arquivo()
{
  FILE *arquivo = fopen("teste.txt", "w+");
  if (arquivo == NULL) {
    printf("Erro ao abrir arquivo\n");
    return;
  }

  fprintf(arquivo, "Teste %d\n", 123);

  rewind(arquivo);

  char linha[100];
  if (fgets(linha, 100, arquivo) != NULL) {
    printf("Lido do arquivo: %s", linha);
  }

  fclose(arquivo);
}

void demonstra_math()
{
  double x = 16.0;
  printf("Raiz quadrada de %.1f: %.1f\n", x, sqrt(x));
  printf("2 elevado a 3: %.1f\n", pow(2.0, 3.0));
  printf("Seno de PI/2: %.1f\n", sin(M_PI / 2));
  printf("Arredondamentos de 3.7: %.1f (floor) %.1f (ceil)\n", floor(3.7),
         ceil(3.7));
}

void demonstra_ctype()
{
  char c = 'a';
  printf("'%c' é letra? %s\n", c, isalpha(c) ? "sim" : "não");
  printf("'%c' em maiúsculo: %c\n", c, toupper(c));

  c = '5';
  printf("'%c' é dígito? %s\n", c, isdigit(c) ? "sim" : "não");
}

void demonstra_time()
{
  time_t agora = time(NULL);
  struct tm *tempo_local = localtime(&agora);

  char data[80];
  strftime(data, 80, "%d/%m/%Y %H:%M:%S", tempo_local);
  printf("Data/hora atual: %s\n", data);
}

int main()
{
  srand(time(NULL));
  printf("Número aleatório entre 0 e 99: %d\n", rand() % 100);

  char *num_str = "123.45";
  printf("String convertida para float: %.2f\n", atof(num_str));

  demonstra_arquivo();
  demonstra_math();
  demonstra_ctype();
  demonstra_time();

  return 0;
}
