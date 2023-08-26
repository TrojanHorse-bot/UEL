#include "NumComplexo.h"
#include <stdio.h>

void inicializa(NumComplexo *num, float R, float C){
    num->R = R;
    num->C = C;
}

void imprime(NumComplexo *num){
    printf("\n%.2f + %.2fi", num->R, num->C);
}

void copia(NumComplexo *D, NumComplexo *B){
    D->R = B->R;
    D->C = B->C;
}

void soma(NumComplexo *a, NumComplexo *F, NumComplexo *G){
    a->R = F->R + G->R;
    a->C = F->C + G->C;
}

int EhReal(NumComplexo *num){
    if (num->C == 0){ return 1; }else{ return 0; };
}
