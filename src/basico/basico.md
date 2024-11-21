## Estrutura básica de um programa em C

Todo programa executável de C necessita de um função *main*, a qual será o ponto de inicio da execução.
Comumente, a função *main* retorna um inteiro (*int*) igual a 0 para execução realizada com sucesso, e outros números para falhas/erros quaisqueres.
```c
 /*
  * estrutura de uma função em C:
  * tipo nome(argumentos)
  * {
  *   // código a ser executado
  * }
  *
  * por exemplo, a função main:
  * int -> tipo de retorno da função
  * main -> nome da função
  * () -> lista de argumentos vazia
  * return 0 -> explicitamente retorna o inteiro `0`
  */
int main()
{
    return 0;
}
```

## Compilação e execução

Todo código de C precisa ser compilado antes de ser executado. Diferente de linguagens interpretadas como Ruby e Python, onde um programa chamado Interpretador realiza
a execução do código em "tempo real". O código de C tem de ser "transformado" em código de máquina para ser processado pela CPU.
```sh
# exemplo de compilação e execução de um programa escrito em c utilizando o compilador gcc
# linhas iniciadas com $ são comandos executados em um terminal de linux

# compila o arquivo de código teste.c, gerando um arquivo executável com nome "teste"
$ gcc teste.c -o teste

# executa o código compilado anteriormente
$ ./teste
```

## Variáveis

C possui tipos primitivos básicos:
> Um tipo primitivo geralmente é aquele que é básico, oriundo da própria linguagem.

- char (8 bits)
- int (32 bits, a depender da CPU)
- float (32 bits, a depender da CPU)
- double (64 bits, a depender da CPU)

> Não há tipos primitivos booleanos em C (true e false), o inteiro 0 é interpretado como *false* e qualquer outra coisa diferente de 0 é interpretada como *true*.
```c
// O código abaixo tem como saída:
// 1 é interpretado como true
// 0 é interpretado como false
int main()
{
    int true = 1;
    int false = 0;

    if (true) {
        printf("1 é interpretado como true\n");
    } else {
        printf("1 é interpretado como false\n");
    }

    if (false) {
        printf("0 é interpretado como true\n");
    } else {
        printf("0 é interpretado como false\n");
    }

    return 0;
}
```

- Veja o código de exemplo: [Exemplo Básico](./basico.c)
