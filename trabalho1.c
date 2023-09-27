#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double* square(double*array,int tam){ //essa funcao eleva ao quadrado os elementos do array
    double * squares = (double*)malloc(tam*sizeof(double)); //alocacao de memoria dinamica
    for (int i=0;i<tam;i++){
        squares[i]=array[i]*array[i];
    }
    return squares;
} 

double* squareroot(double*array,int tam){ //definicao da funcao raiz
    double * roots = (double*)malloc(tam*sizeof(double)); //alocacao de memoria dinamica
    for (int i=0;i<tam;i++){
        roots[i]=sqrt(array[i]);
    }
    return roots;
}

double* cossine(double*array,int tam){ //definicao da funcao cosseno 
    double * coss = (double*)malloc(tam*sizeof(double)); 
    for (int i=0;i<tam;i++){
        coss[i]=cos(array[i]);
    }
    return coss;
}


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
       printf("Esses sao os cossenos dos valores em radianos:\n");
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
