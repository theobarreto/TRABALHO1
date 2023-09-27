#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "funcoes.h"
double* square(double*array,int tam){ //essa funcao eleva ao quadrado os elementos do array
    double * squares = (double*)malloc(tam*sizeof(double)); //alocacao de memoria dinamica
    for (int i=0;i<tam;i++){
        squares[i]=array[i]*array[i];
    }
    return squares;
} 