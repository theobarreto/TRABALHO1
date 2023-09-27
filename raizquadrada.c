#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "funcoes.h"

double* squareroot(double*array,int tam){ //definicao da funcao raiz
    double * roots = (double*)malloc(tam*sizeof(double)); //alocacao de memoria dinamica
    for (int i=0;i<tam;i++){
        roots[i]=sqrt(array[i]);
    }
    return roots;
}