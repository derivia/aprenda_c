## stdio.h

- Entrada e saída padrão
- Funções principais:
    - printf(), scanf() -> E/S formatada
    ```c
    printf("%.2f\n", 1.424242); // Saída: 1.42
    int num;
    scanf("%d", &num); // Lê um número inteiro
    ```
    - fopen(), fclose() -> manipulação de arquivos
    ```c
    FILE *arquivo = fopen("teste.txt", "w");
    fputs("Hello!", arquivo);
    fclose(arquivo);
    ```
    - fprintf(), fscanf() -> E/S formatada em arquivos
    ```c
    fprintf(arquivo, "Número: %d\n", 42);
    fscanf(arquivo, "%d", &numero);
    ```
    - fgets(), fputs() -> leitura/escrita de strings
    ```c
    char linha[100];
    fgets(linha, 100, stdin);
    fputs(linha, arquivo);
    ```

## stdlib.h
 
- Funções utilitárias gerais
- Principais funções:
    - malloc(), free() -> gerenciamento de memória
    ```c
    int *array = (int *)malloc(5 * sizeof(int));
    free(array);
    ```
    - rand(), srand() -> números aleatórios
    ```c
    /*
     * Inicializa o gerador de números pseudoaleatórios
     * Geralmente se utiliza como semente do gerador, o tempo atual do sistema
     */
    srand(time(NULL));
    int aleatorio = rand() % 100; // Retorna um número entre 0 e 99
    ```
    - exit() -> termina o programa
    ```c
    /*
     * Utilizado para conseguir uma espécie de "graceful exit"
     * Buffers são liberados, streams são fechadas, etc
     */
    if (erro) exit(1);
    ```
    - atoi(), atof() -> conversão de strings
    ```c
    char *str = "123";
    int num = atoi(str);        // Converte string para int
    ```

## math.h
 
- Funções matemáticas
- Principais funções:
    - sqrt() -> raiz quadrada
    ```c
    double raiz = sqrt(16.0);   // Resultado: 4.0
    ```
    - pow() -> potenciação
    ```c
    double potencia = pow(2.0, 3.0); // Resultado: 8.0
    ```
    - sin(), cos(), tan() -> funções trigonométricas
    ```c
    double seno = sin(3.14159/2);    // Seno de 90 graus
    ```
    - floor(), ceil() -> arredondamento
    ```c
    double piso = floor(3.7);    // Resultado: 3.0
    double teto = ceil(3.2);     // Resultado: 4.0
    ```

## time.h

- Manipulação de data e hora
- Principais funções:
    - time() -> tempo atual
    ```c
    time_t agora = time(NULL);
    ```
    - localtime() -> converte para hora local
    ```c
    struct tm *tempo_local = localtime(&agora);
    ```
    - strftime() -> formata data/hora
    ```c
    char data[80];
    strftime(data, 80, "%d/%m/%Y", tempo_local);
    ```

## ctype.h
- Classificação e manipulação de caracteres
- Funções principais:
    - isalpha() -> verifica se é letra
    ```c
    if (isalpha('A')) printf("É uma letra\n");
    ```
    - isdigit() -> verifica se é dígito
    ```c
    if (isdigit('5')) printf("É um dígito\n");
    ```
    - toupper(), tolower() -> converte maiúsculo/minúsculo
    ```c
    char maiuscula = toupper('a'); // Resultado: 'A'
    char minuscula = tolower('B'); // Resultado: 'b'
    ```

- Veja o código de exemplo: [Exemplo de Bibliotecas](./libs.c)
