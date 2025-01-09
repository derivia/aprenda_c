## Aprenda C
> Assumindo que você já saiba alguma linguagem, por exemplo, Python.

### 📕 Índice:

- [Roteiro de aprendizado](#roteiro-de-aprendizado)
- [Diferenças entre C e Python](#diferenças-entre-c-e-python)
- [Leitura recomendada](#leitura-recomendada)

### Roteiro de aprendizado
> Nota: **não** será explicado como instalar os compiladores da linguagem, utilizem algum mecanismo de pesquisa. De preferência, pesquisem como configurar C no visual studio code, ou baixem code::blocks ou utilizem gcc/clang na linha de comando do terminal.

1. [Fundamentos da linguagem](./src/basico/basico.md)
   - Estrutura básica de um programa em C
   - Compilação e execução
   - Variáveis

2. [Entrada e saída básica](./src/io/io.md)
   - Funções printf() e scanf()
   - Formatação de saída
   - Strings

3. [Estruturas de controle](./src/control/control.md)
   - Condicionais
   - Operadores de comparação
   - Loops

4. [Funções](./src/funcoes/funcoes.md)
   - Declaração e definição
   - Passagem de parâmetros

5. [Ponteiros](./src/ponteiros/ponteiros.md)
   - Conceitos básicos de ponteiros
   - Aritmética de ponteiros

6. [Strings](./src/strings/strings.md)
   - Funções de manipulação de strings (string.h)

7. [Estruturas e unions](./src/structs/structs.md)
   - Definição de estruturas (structs)
   - Básico de alocação dinâmica (malloc/free)
   - Unions
   - Typedef

8. [Gerenciamento de memória](./src/memoria/memoria.md)
   - Alocação dinâmica de memória
   - Prevenção de vazamentos de memória
   - Introdução ao Valgrind

9. [Preprocessador](./src/preprocess/preprocess.md)
    - Diretivas
    - Macros
    - Compilação condicional
    - Inclusão de bibliotecas

10. [Bibliotecas-padrão comuns](./src/libs/libs.md)
    - stdio.h
    - stdlib.h
    - math.h
    - time.h
    - ctype.h

11. [Headers](./src/headers/headers.md)
    - Definição
    - Boas práticas

### Diferenças entre C e Python

- Gerenciamento manual de memória:
    - Em C, você precisa alocar e desalocar memória manualmente usando funções como malloc() e free().
    - Diferente de Python, que possui coleta de lixo (garbage collector) automática, um mecanismo que desaloca automaticamente memória não mais utilizada.
- Tipagem estática vs dinâmica:
    - C é uma linguagem de tipagem estática, onde os tipos de variáveis são declarados explicitamente antes do uso e não podem mudar durante a execução.
    - Em Python, a tipagem é dinâmica, permitindo que uma variável mude de tipo livremente.
- Ponteiros e referências:
    - C trabalha extensivamente com ponteiros, você manipula diretamente endereços de memória, o que oferece maior controle, mas também maior complexidade e possibilidade de erros.
- Sem classes e herança nativas:
    - Diferente de Python, C não possui suporte nativo para programação orientada a objetos. Não há classes, herança ou métodos como em linguagens orientadas a objetos.
- Gerenciamento de strings:
    - Em C, strings são arrays de caracteres terminados com caractere nulo (\0).
- Tratamento de exceções:
    - C não possui um mecanismo nativo de tratamento de exceções como try/catch.
    - O tratamento de erros geralmente é feito através de códigos de retorno e verificações manuais.
- Arrays vs listas:
    - Em C, arrays têm tamanho fixo. Não há operações integradas como em listas de Python.
- Biblioteca padrão limitada:
    - A biblioteca padrão de C é mais limitada e oferece menos abstrações quando comparada à de Python.

### Leitura recomendada

- The C Programming Language, Brian W. Kernighan e Dennis M. Ritchie
    - Considerado o livro clássico e definitivo sobre a linguagem C.
    - Escrito pelos criadores da linguagem.
- Entendendo Algoritmos, Aditya Y. Bhargava
    - Trata de forma visual conceitos fundamentais de algoritmos e estruturas de dados.
    - Utiliza Python como linguagem de implementação.
- Introduction to Algorithms, CORMEN et al.
    - Trata sobre algoritmos clássicos, incluindo ordenação, busca, grafos, etc.
    - Utiliza pseudocódigo como linguagem de implementação.
