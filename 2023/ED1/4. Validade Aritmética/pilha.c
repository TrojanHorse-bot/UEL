#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>

    // recebe um novo elemento e coloca ele em cima da pilha
    void empilha(P *pilha, char x, char resultado[]){
        resultado[pilha->head] = x; // coloca o novo valor no topo da pilha
        pilha->head++; // aumenta o topo da pilha
    }

    // função que tira o topo da pilha
    char despilha(P *pilha, char resultado[]){
        char x = resultado[pilha->head]; // pega o valor da cabeça da pilha
        resultado[pilha->head] = ""; // tira a cabeça
        pilha->head--;
        return x;
    }