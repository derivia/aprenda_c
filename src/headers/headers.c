/*
 * Note que o arquivo headers.h foi incluido localmente
 * Seu conteúdo tem as declarações das funções definidas no arquivo atual
 */
#include "headers.h"
#include <stdio.h>

int validar_data(Data data)
{
  // Valida mês entre 1 e 12
  if (data.mes < 1 || data.mes > 12)
    return 0;

  // Valida dia ser maior ou igual a um
  if (data.dia < 1 || data.dia > 31)
    return 0;

  // Valida se o dia não é maior que 30 (31) para meses com apenas 30 dias
  if ((data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11) &&
      data.dia > 30)
    return 0;

  // Valida fevereiro para anos bissextos e não-bissextos
  if (data.mes == 2) {
    int bissexto =
        (data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0);
    if (data.dia > (bissexto ? 29 : 28))
      return 0;
  }

  return 1;
}

/*
 * Lembrando que o operador ternário funciona da seguinte maneira:
 * condição ? executa-se-for-true : executa-se-for-false
 *
 * Nessa função, caso algum dos componentes da data (ano, mês ou dia) seja
 * diferente entre as duas datas, o operador ternário retornará:
 * 1, se a primeira data for maior em algum dos componentes
 * -1, se a segunda data for maior em algum dos componentes
 *
 * Caso as datas sejam idênticas, a função retorna 0
 */
int comparar_datas(Data d1, Data d2)
{
  if (d1.ano != d2.ano)
    return d1.ano > d2.ano ? 1 : -1;
  if (d1.mes != d2.mes)
    return d1.mes > d2.mes ? 1 : -1;
  if (d1.dia != d2.dia)
    return d1.dia > d2.dia ? 1 : -1;
  return 0;
}

int main()
{
  Data d1 = {25, 12, 2023};
  Data d2 = {1, 1, 2024};

  if (validar_data(d1)) {
    printf("Data 1 é válida\n");
  }

  printf("Comparação: %d\n", comparar_datas(d1, d2));
  return 0;
}
