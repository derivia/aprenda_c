## Definição de estruturas (structs)

- Agrupa diferentes tipos de dados relacionados
- Uso similiar às classes em linguagens orientadas a objetos
    - Porém, não possui coisas como herança e métodos.
- Sintaxe básica:
```c
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

struct Pessoa p1;                 // Declara uma variável do tipo Pessoa
strcpy(p1.nome, "Maria");         // Acessa campos com operador ponto (.)
p1.idade = 25;
p1.altura = 1.75;
```

## Unions

- Similar a struct, mas todos os membros compartilham o mesmo espaço de memória
- Útil para economizar memória quando apenas um membro será usado por vez
```c
union Valor {
    int i;
    float f;
    char c;
};  // Tamanho da union será o do maior membro [nesse caso o float]
```

## Typedef

- Cria um alias (espécie de apelido) para tipos existentes
- Útil para simplificar a declaração de estruturas
```c
typedef struct {
    char nome[50];
    int idade;
} Pessoa;  // Agora é possível usar apenas 'Pessoa' ao invés de 'struct Pessoa'
```

- Veja o código de exemplo: [Exemplo de Structs](./structs.c)
