#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

// tipo: Fila de Processos
// o valor de cada processo é um inteiro para representar seu endereço de memória
    typedef struct{
        int head, tail, size, timeout;
    }Q;

// declaração das funções
    // função que coloca um processo na fila
    // recebe: fila, valor do processo
    // retorna: 0 (sucesso) ou -1 (fila cheia)
    int enqueue(Q *, char, char *);

    // função que retorna o próximo processo da fila
    // recebe: fila
    // retorna: valor do processo ou -1 (timeout)
    char dequeue(Q *, char *);

    #endif