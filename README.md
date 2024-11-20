## Aprenda C

### Diferenças entre C e Python

- Gerenciamento manual de memória: Em C, você precisa alocar e desalocar memória manualmente usando funções como malloc() e free().
    - Diferente de Python, que possui coleta de lixo (garbage collector) automática, um mecanismo que desaloca automaticamente memória não mais utilizada.
- Tipagem estática vs dinâmica: C é uma linguagem de tipagem estática, onde os tipos de variáveis são declarados explicitamente antes do uso e não podem mudar durante a execução.
    - Em Python, a tipagem é dinâmica, permitindo que uma variável mude de tipo livremente.
- Ponteiros e referências: C trabalha extensivamente com ponteiros, você manipula diretamente endereços de memória, o que oferece maior controle, mas também maior complexidade e possibilidade de erros.
- Sem classes e herança nativas: Diferente de Python, C não possui suporte nativo para programação orientada a objetos. Não há classes, herança ou métodos como em linguagens orientadas a objetos. Estruturas (struct) podem ser usadas para agrupar dados, mas não têm os mesmos recursos de classes.
- Gerenciamento de strings: Em C, strings são arrays de caracteres terminados com um caractere nulo (\0), e você precisa gerenciar manualmente alocação, cópia e manipulação.
- Tratamento de exceções: C não possui um mecanismo nativo de tratamento de exceções como try/catch.
    - O tratamento de erros geralmente é feito através de códigos de retorno e verificações manuais.
- Arrays vs listas: Em C, arrays têm tamanho fixo. Não há operações integradas como em listas de Python.
- Biblioteca padrão limitada: A biblioteca padrão de C é muito mais enxuta comparada à de Python.

### Roteiro de aprendizado

1. Fundamentos da linguagem
   - Estrutura básica de um programa em C
   - Compilação e execução
   - Variáveis e tipos de dados primitivos
   - Operadores aritméticos e lógicos

2. Entrada e saída básica
   - Funções printf() e scanf()
   - Formatação de saída
   - Tratamento de entrada do usuário
   - Manipulação de strings

3. Estruturas de controle
   - Condicionais
   - Loops
   - Operadores de comparação

4. Funções
   - Declaração e definição
   - Passagem de parâmetros
   - Escopo de variáveis
   - Funções recursivas
   - Ponteiros para funções

5. Ponteiros
   - Conceitos básicos de ponteiros
   - Aritmética de ponteiros
   - Ponteiros e arrays
   - Alocação dinâmica de memória
   - Ponteiros para funções

6. Gerenciamento de memória
   - Alocação dinâmica
   - Liberação de memória (free)
   - Prevenção de vazamentos de memória
   - Introdução ao Valgrind
   - Boas práticas de gerenciamento de memória

7. Arrays e strings
   - Declaração e manipulação de arrays
   - Strings como arrays de caracteres
   - Funções de manipulação de strings
   - Matrizes multidimensionais

8. Estruturas e unions
   - Definição de structs
   - Unions
   - Typedef

9. Arquivos
   - Abertura e fechamento de arquivos
   - Leitura e escrita
   - Manipulação de arquivos binários
   - Tratamento de erros de arquivo

10. Preprocessador
    - Diretivas
    - Macros
    - Compilação condicional
    - Inclusão de bibliotecas

11. Bibliotecas-padrão comuns
    - stdio.h
    - stdlib.h
    - string.h
    - math.h
    - time.h

12. Depuração e ferramentas
    - Uso do GDB
    - Valgrind em profundidade
    - Técnicas de debug
    - Identificação e correção de erros comuns
