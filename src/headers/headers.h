#ifndef EXEMPLO_H
#define EXEMPLO_H

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

/**
 * Valida a data fornecida.
 * @param data: Data a ser validada
 * @return: 1 se válida, 0 se inválida
 */
int validar_data(Data data);

/**
 * Compara duas datas.
 * @param d1: Primeira data a ser comparada
 * @param d2: Segunda data a ser comparada
 * @return: -1 se d1 < d2, 0 se iguais, 1 se d1 > d2
 */
int comparar_datas(Data d1, Data d2);

#endif
