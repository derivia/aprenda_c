## Conceitos básicos de ponteiros

- Memória
    - Em computadores , a memória é mapeada para endereços lógicos em hexadecimal.
    - Cada processo possui uma visão limitada da memória total.
    - O kernel (núcleo do sistema operacional) é responsável por lidar com as interações de mais baixo nível com o hardware.
    - [Syscalls](https://pt.wikipedia.org/wiki/Chamada_de_sistema) são utilizadas para alocar/desalocar memória.
- Stack
    - Área de memória para armazenamento de dados locais, parâmetros de funções, etc.
    - Funciona como uma [pilha](https://pt.wikipedia.org/wiki/LIFO).
    - Espaço limitado, porém com acesso rápido.
- Heap
    - Memória alocada dinamicamente durante execução do programa.
    - Gerenciada pelo programador.
    - Útil para dados de tamanhos variáveis.
    - Mais lento, porém tem tamanho flexível.
- Ponteiros
    - Uma variável que armazena um endereço de memória RAM.
    ```c
    int numero = 5;
    int *numero_ptr; // Declara um ponteiro para um inteiro

    /*
     * Atribui como valor ao ponteiro, uma referência ao endereço da variável `numero` na memória.
     */
    numero_ptr = &numero;

    /*
     * Dereferencia o valor apontado pelo ponteiro `numero_ptr`.
     * Substituindo %d pelo valor inteiro 5.
     */
    printf("%d\n", *numero_ptr); //
    ```

> O mesmo operador é utilizado para criar e para dereferenciar ponteiros: *
- Declara ponteiros se usado durante inicializações/instanciações ou parâmetros na assinatura de funções.
- Dereferencia o valor apontado quando usado em ponteiros.
```c
void mostra_valor(int *numero) // Função recebe o parâmetro numero, do tipo ponteiro a um inteiro
{
    printf("%d\n", *numero); // Dereferencia valor apontado
}
```

## @TODO: Aritmética de ponteiros


## @TODO: Ponteiros para funções
