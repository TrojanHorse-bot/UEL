#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

    // recebe um novo elemento e coloca ele no rabo da fila
    // recebe: fila, valor do item atual, array da fila
    // retorna: 0 (sucesso) ou -1 (filha cheia)
    int enqueue(Q *fila, char x, char resultado[]){
        if (fila->head == fila->tail + 1 || fila->head == 0 && fila->tail == fila->size) {return -1;}; // fila cheia
        resultado[fila->tail] = x; // coloca o novo valor no rabo da fila
        if (fila->tail == fila->size) {fila->tail = 0;}
        else {fila->tail++;} // move o rabo da fila
        return 0;
    }

    // função que retorna o próximo elemento da fila
    // recebe: fila
    // retorna: valor do processo, 0 (fila vazia)
    // o erro deve estar em ou char x= ou no if/else que vem depois
    char dequeue(Q *fila, char resultado[]){
        if (fila->head == fila->tail) {return 0;} // fila vazia
        char x = resultado[fila->head]; // pega o valor da cabeça da fila
        if (fila->head == fila->size && fila->head != 0) {fila->head = 0;}
        else {fila->head++;}
        return x;
    }

    // executa o próximo processo
    // WIP (exercício 5)
    // retornar -2 (processo expirado)
    // COLOCAR: um sleep aleatório e um teste se ele passar de fila.timeout, retornar -2 se não
    // re-ler o enunciado do exercício
/*     void execute(Q fila){
        char x = fila.Q[fila.head]; // pega o valor da cabeça da fila

        int rn = rand() % 2147483646 + 1;

        time_t start, current;
        time(&start);

        for (int i = 0; rn > i; i++){
            time(&current);
            double j = difftime(start, current);
            if (j > fila.timeout){
                enqueue(fila, x);
                return -2;
            }
        }
    } */