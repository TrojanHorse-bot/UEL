#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    char frase[26] = "EXERCICIO MUITO COMPLICADO";
    Q queue;
    queue.head = 0;
    queue.tail = 0;
    queue.size = 26;
    char resultado[26] = "";

    for (int i = 25; i > -1; i--){
        int a = enqueue(&queue, frase[i], resultado);
    }

    for (int i = 0; i < 27; i++){
        char curr = dequeue(&queue, resultado);
        printf("%c", curr);
    }

    Sleep(3000);

    return 0;
};