## Declaração e definição

A declaração de uma função ou variável informa ao compilador sobre sua existência, sem alocar memória ou detalhar sua implementação.

A definição é onde a memória é alocada e o comportamento ou valor são especificados.
```c
/*
 * Declaração de uma função (sem corpo)
 * Em C, funções têm de ser declaradas antes (acima no código) de serem usadas
 */
int soma(int a, int b);

// Definição da função
int soma(int a, int b) {
    return a + b;
}
```

## Passagem de parâmetros

Em C, parâmetros podem ser passados por valor ou por referência (via ponteiros).

- Por valor: Uma cópia do argumento é passada, não afetando o valor original.
- Por referência: Um ponteiro para o argumento é passado, permitindo alterar o valor original.
```c
// Passagem por valor
void alteraValor(int x) {
    x = 10; // Não altera o valor original
}

// Passagem por referência (ponteiro)
void alteraReferencia(int *x) {
    *x = 10; // Altera o valor original
}
```
