## Funções de manipulação de strings (string.h)

- Sempre que possível, utilize as funções de string.h ou bibliotecas externas que abstraiam o funcionamento de strings
    - Ao invés de tratar strings como arrays de caracteres, que pode acarretar problemas como [buffer overflow](https://pt.wikipedia.org/wiki/Transbordamento_de_dados)
- Funções comuns
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
- Cuidado com strcpy
    - Caso o array de destino não seja grande o suficiente para a string copiada, isso pode causar um buffer overflow.
    - Substitua por strncpy caso não tenha certeza:
    ```c
    // Ao invés de:
    char dest[5];                           // Suporta 5 caracteres
    char src[] = "Hello World";             // Tem 11 caracteres
    strcpy(dest, src);                      // Buffer overflow

    // Utilize:
    char dest[5];
    char src[] = "Hello World";
    strncpy(dest, src, 5);                  // Copia apenas "Hello", por ser o que o array suporta
    dest[4] = '\0';                         // Importante adicionar o null terminator manualmente

    // Uma boa prática é utilizar dessa maneira:
    strncpy(dest, src, sizeof(dest) - 1);   // Deixa espaço disponível para '\0'
    dest[sizeof(dest) - 1] = '\0';          // Garante que a string termine corretamente
    ```

- Veja o código de exemplo: [Exemplo de Strings](./strings.c)
