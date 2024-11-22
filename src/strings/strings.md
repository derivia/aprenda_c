### Funções de manipulação de strings (string.h)

- A biblioteca padrão de C possui uma biblioteca útil que facilita o uso de strings.
- Funções comuns:
    - strcat  -> concatena uma string modificável com outra string.
    - strcpy  -> copia o conteúdo de uma string para outra.
    - strcmp  -> compara duas strings lexicograficamente.
    - strlen  -> retorna o comprimento de uma string (excluindo o caractere nulo).
    - strpbrk -> localiza o primeiro caractere em uma string que coincide com qualquer caractere de um conjunto.
    - strrchr -> localiza a última ocorrência de um caractere em uma string.
    ```c
    char hello[20] = "hello, ";
    strcat(hello, "world!");                // Concatena "world!" à string hello
    printf("%s\n", hello);                  // Saída: hello, world!

    char copy[20];
    strcpy(copy, hello);                    // Copia o conteúdo de hello para copy
    printf("%s\n", copy);                   // Saída: hello, world!

    printf("%d\n", strcmp(hello, copy));    // Compara as strings, saída: 0 (iguais)

    printf("%lu\n", strlen(hello));         // Comprimento da string hello, saída: 12

    char *found = strpbrk(hello, "aeiou");  // Localiza a primeira vogal em hello
    printf("%c\n", *found);                 // Saída: e

    char *last = strrchr(hello, 'l');       // Última ocorrência de 'l' em hello
    printf("%c\n", *last);                  // Saída: l
    ```
