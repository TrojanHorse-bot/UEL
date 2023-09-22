#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

// tipo: Pilha
    typedef struct{
        int head;
    }P;

// declaração das funções
    // recebe: struct da pilha, conteúdo a ser colocado, array da pilha
    void empilha(P *, char, char *);

    // função que retorna o próximo elemento da pilha
    // recebe: struct da pilha, array da pilha
    // retorna: valor
    char despilha(P *, char *);

    #endif