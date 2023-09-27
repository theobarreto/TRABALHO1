#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "funcoes.h"

int main (int argc, char** argv){ //definicao da funcao principal
    int tam;
    printf("Insira o tamanho do array:\n"); //possibilitacao da variacao do tamanho do array pelo user
    scanf("%d", &tam);
    double * array = (double*)malloc(tam*sizeof(double));
    printf("Insira os numeros do array:\n");
    for (int i=0;i<tam;i++){ //leitura dos valores inputados pelo usuario
        scanf("%lf", &array[i]);
    }
    double* squares = square(array, tam);
       printf("Esses sao os valores ao quadrado:\n");
        for (int i=0;i<tam;i++){
        printf("%lf\n", squares[i]);
    }
    double* roots = squareroot(array, tam);
       printf("Essas sao as raizes dos valores:\n");
        for (int i=0;i<tam;i++){
        printf("%lf\n", roots[i]);
    }
       double* coss = cossine(array, tam);
       printf("Esses sao os cossenos dos valores inputados em radianos:\n");
        for (int i=0;i<tam;i++){
        printf("%lf\n", coss[i]);
    }
    //liberacao de memoria alocada
    free(array);
    free(squares);
    free(roots);
    free(coss);
    return 0;
}
