// tipo: Número Complexo "R + Ci"
    typedef struct{
        float R, C;
    }NumComplexo;

// declaração das funções
    // atribui valores para os campos de um novo número complexo
    // recebe: endereço da struct, R, C
    void inicializa(NumComplexo *, float, float);

    // função que imprime um número complexo no terminal
    // recebe: endereço da struct
    void imprime(NumComplexo *);

    // função que copia o segundo número complexo para o primeiro
    // recebe: endereço da primeira struct, endereço da segunda struct
    void copia(NumComplexo *, NumComplexo *);

    // função que guarda a soma de dois números complexos
    // recebe: struct que guarda a soma, endereço de struct a ser somada, endereço de struct a ser somada
    void soma(NumComplexo *, NumComplexo *, NumComplexo *);

    // função que checa se um dado número complexo é real
    // recebe: endereço da struct
    // retorna: 1 (é real), 0 (não é real)
    int EhReal(NumComplexo *);
