#include "pilha.h"
#include <stdio.h>

int main (){
    P heap;
    heap.head = 0;
    char harray[100];
    char apilha[100];
    char curr;
    char aux = ".";

    for (int i = 0; i < 100; i++){
        harray[i] = '\0';
    }

    scanf("%s", harray);

    // Montando a pilha

    for (int i = 0; harray[i] != '\0'; i++){
        empilha(&heap, harray[i], apilha);
    }

    // Testando a pilha

    while(heap.head >= 0){
        curr = despilha(&heap, apilha);
        
        if (curr == ']' || curr == ')'){
            aux = curr;
        }

        if (curr == '[' && aux == ']' || curr == '(' && aux == ')'){
            aux = '.';
        }

        if (curr == '(' && aux == ']' || curr == '[' && aux == ')'){
            printf("\nEXPRESSAO MALFORMADA.");
            return 0;
        }
    }
    
    printf("\nEXPRESSAO CORRETA.");
    
    return 0;
}