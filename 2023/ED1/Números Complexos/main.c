#include "NumComplexo.h"
#include <stdio.h>

int main(){
    NumComplexo real;
    NumComplexo naoreal;
    NumComplexo resultado;

    inicializa(&real, 4, 0);
    inicializa(&naoreal, 2, 1);

    if (EhReal(&real) == 1){
        copia(&real, &naoreal);
        imprime(&real); // espera-se que retorne "2 + 1i"
        imprime(&naoreal); // espera-se que retorne "2 + 1i"
    }

    if (EhReal(&naoreal) == 0){
        soma(&resultado, &real, &naoreal);
        imprime(&resultado); // espera-se que retorne "4 + 2i"
    }

    return 0;
}
