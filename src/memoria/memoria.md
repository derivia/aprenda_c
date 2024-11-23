## Alocação dinâmica de memória

- A biblioteca stdlib.h fornece funções para alocação dinâmica:
    - malloc() -> aloca um bloco de memória do tamanho especificado
    - calloc() -> aloca e inicializa com zero um bloco de memória
    - realloc() -> redimensiona um bloco de memória previamente alocado
    - free() -> libera um bloco de memória alocado dinamicamente
```c
/*
 * Aloca espaço para 5 inteiros
 * E inicializa um pointeiro (a variável numeros) que aponta para o "inicio da alocação"
 */
int *numeros = (int *)malloc(5 * sizeof(int));
if (numeros == NULL) {
    // Tratamento de erro [caso malloc falhe]
    return 1;
}

numeros[0] = 10;  // Pode ser acessado normalmente como um array
free(numeros);    // Libera a memória quando não for mais necessária
```

## Prevenção de vazamentos de memória

- Vazamento ocorre quando memória alocada não é liberada
- Sempre libere memória alocada com malloc/calloc usando free()

## Introdução ao Valgrind
> A instalação depende do seu sistema.

- Ferramenta comumente utilizada para detecção de vazamentos de memória
- Uso básico
```sh
$ valgrind ./programa <- onde "programa" é seu código compilado que faz uso de alocação de memória
```
- Identifica:
    - Memória não liberada
    - Acessos inválidos
    - Uso de memória não inicializada

- Veja o código de exemplo: [Exemplo de Memória](./memoria.c)
