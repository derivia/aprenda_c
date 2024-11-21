## Funções printf() e scanf()
> Veja: [STDOUT - Wikipedia](https://pt.wikipedia.org/wiki/Fluxos_padr%C3%A3o)
> A partir daqui, os fragmentos de código que possuem apenas a função *main* terão sua assinatura omitida para destacar apenas a lógica do conteúdo abordado.

Em C, os caracteres e strings (formados por caracteres, pois C **não possui** o tipo *string*) são baseados na tabela ASCII.
Assim, o tipo char possui 8 bits (1 byte), sendo possível representar 256 combinações, que são mapeadas a caracteres de controle e caracteres imprimíveis da tabela ASCII.
> Veja: [ASCII - Wikipedia](https://pt.wikipedia.org/wiki/ASCII)

## Formatação de saída

A função *printf()* permite imprimir à saída padrão .
```c
int idade = 25;
float altura = 1.65;
char inicial = 'M';
char nome[] = "Maria";

printf("Idade: %d\n", idade);
printf("Altura: %.2f metros\n", altura);
printf("Inicial: %c\n", inicial);
printf("Nome: %s\n", nome);
```
> Ao utilizar %.2f invés de apenas %f, a representação da variável altura é limitada a 2 casas decimais.

A função *scanf()* permite receber entrada do usuário, fazendo a leitura e armazenamento de dados

```c
int numero;
char letra;
float valor;

printf("Insira um número inteiro: ");
scanf("%d", &numero);

printf("Insira uma letra: ");
/*
 * Quando scanf tenta capturar um caractere, ele pode erroneamente capturar um espaço vazio ou tab.
 * É importante adicionar um espaço antes de %c para ignorar espaço em branco.
 */
scanf(" %c", &letra);

printf("Insira um valor decimal: ");
scanf("%f", &valor);
```
> O operador & no segundo argumento da função scanf indica que é passada a referência (endereço da memória) da variável.

## Manipulação de strings
Como C não possui tipo *string* nativo, se utiliza arrays de caracteres.

```c
/*
 * Ambas sintaxes criam strings.
 * Porém, a primeira é preferível quando a string for modificável, cria um array de caracteres terminado com '\0'.
 * A segunda armazena um ponteiro (pointer) para a string "Ana" armazenada numa área de somente leitura na memória.
 * Toda string que não for armazenada como somente leitura (um ponteiro para uma string na área de somente leitura) é terminada com '\0'.
 */
char nome[] = "Maria";
char *outroNome = "Ana";

nome[5] = 'h'; // Adiciona o caractere 'h' à string.
nome[6] = '\0'; // Adiciona o caractere null terminator '\0', útil para utilização em funções das bibliotecas de C.

printf("Nomes: %s e %s", nome, outroNome);
```

- Veja o código de exemplo: [Exemplo IO](./io.c)
