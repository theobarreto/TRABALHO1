#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "funcoes.h"

double* cossine(double*array,int tam){ //definicao da funcao cosseno 
    double * coss = (double*)malloc(tam*sizeof(double)); 
    for (int i=0;i<tam;i++){
        coss[i]=cos(array[i]);
    }
    return coss;
}