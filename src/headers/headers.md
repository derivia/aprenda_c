## Definição

- Headers são arquivos utilizados para organizar e modularizar código em C.
    - Declarações de funções (protótipos) [Também útil como espécie de API]
    - Definições de tipos e estruturas
    - Constantes e macros
    ```c
    // matematica.h
    #ifndef MATEMATICA_H
    #define MATEMATICA_H

    // Declarações de funções
    int is_primo(int numero);

    // Constantes
    #define PI 3.14159

    // Estruturas
    typedef struct {
        double x;
        double y;
    } Ponto;

    #endif
    ```

## Boas Práticas

- Guardas de Inclusão
   - Usar `#ifndef`, `#define` e `#endif`
   - Previne inclusão múltipla
   ```c
   #ifndef NOME_DO_ARQUIVO_H
   #define NOME_DO_ARQUIVO_H

   // Conteúdo do header

   #endif
   ```
- Documentação
   - Documentar interface pública
   - Explicar parâmetros e retornos
   ```c
   /*
    * Calcula a distância entre dois pontos
    * @param p1 Primeiro ponto
    * @param p2 Segundo ponto
    * @return Distância euclidiana entre os pontos
    *
    * Exemplo de uso:
    * Ponto a = {0, 0};
    * Ponto b = {3, 4};
    * double dist = calcular_distancia(a, b); // retorna 5.0
    */
    double calcular_distancia(Ponto p1, Ponto p2);
   ```

- Veja o código de exemplo: [Exemplo de Headers](./headers.c)
