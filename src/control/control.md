## Condicionais

C interpreta qualquer valor diferente de 0 como verdadeiro.
Condições falsas retornam 0, enquanto condições verdadeiras retornam 1.
```c
int a = 5;
int b = 10;
if (a < b) {
    printf("5 é menor que 10\n");
}

// A negação lógica de uma expressão também é possível
int maior = (a > b); // maior recebe 0, pois a é menor que b
if (!maior) {
    printf("`maior` negado com `!`\n");
}
```

## Operadores de comparação
```c
int igual = (a == b);           // 0 (falso)
int diferente = (a != b);       // 1 (verdadeiro)

int maior = (b > a);            // 1 (verdadeiro)
int menor = (a < b);            // 1 (verdadeiro)
int maior_ou_igual = (b >= a);  // 1 (verdadeiro)
int menor_ou_igual = (a <= b);  // 1 (verdadeiro)
```

## Loops

C possui apenas dois tipos de loops:

- For loop
```c
/*
 * Sintaxe básica do loop `for`:
 * int i = 1 -> inicialização opcional de uma variável
 * i < 6 -> condição de parada/teste
 * i++ -> incremento/passo
 *
 * Após cada passagem do loop, o terceiro argumento, "incremento/passo"
 * é executado, podendo ser qualquer expressão, porém é comum adicionar
 * um incremento/decremento à variável inicializada
 */
for (int i = 1; i < 6; i++) {
    printf("%d\n", i);
}
```

- While loop
```c
int i = 1;
while (i < 6) {
    printf("%d\n", i);
    i++;
}
```

- Veja o código de exemplo: [Exemplo de Controle](./control.c)
