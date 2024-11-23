## Diretivas

- Comandos que começam com #, são processados antes da compilação
- Principais diretivas:
    - #include -> inclui conteúdo de outro arquivo
    - #define -> define macros ou constantes
    - #ifdef, #ifndef -> compilação/definição/inclusão condicional
    - #pragma -> instruções específicas do compilador

## Macros

- Substituição de texto feita pelo preprocessador
```c
#define PI 3.14159
#define QUADRADO(x) ((x) * (x))

float area = PI * QUADRADO(raio);  // Substituído antes da compilação
```

## Compilação condicional

- Permite incluir ou excluir código baseado em condições
- Geralmente utilizado para definir códigos dependentes do sistema operacional
- Também utilizado para garantir inclusão de bibliotecas somente uma vez
```c
#ifndef BUFFER_SIZE
    #define BUFFER_SIZE 1024
#endif
```

## Inclusão de bibliotecas

- Bibliotecas padrão (standard libraries) são incluídas com <>
- Arquivos locais são incluídos com ""
```c
#include <stdio.h>          // Biblioteca padrão
#include "minha_lib.h"      // Arquivo local
```

- Veja o código de exemplo: [Exemplo de Preprocessamento](./preprocess.c)
