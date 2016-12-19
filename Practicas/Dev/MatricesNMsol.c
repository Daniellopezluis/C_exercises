#include <stdio.h>
#define  N  3
#define  M  4

void leerMatriz(float a[N][M]);
float maximo(float a[M]);
void imprimirArreglo(float a[N]);

int main ( ){
    int i;
    float matriz[N][M];	// Entrada
    float max_fila[N]; 	// Salida

    printf("Intro. elem. de la matriz (%dx%d) por fila\n", N,M);
    leerMatriz(matriz);
    for(i=0;i<N;i++){
        max_fila[i]=maximo(matriz[i]);
    }
    printf("Los maximos por filas son:\n");
    imprimirArreglo(max_fila);
    return 0;
}

void leerMatriz(float a[N][M]){
    int i,j;

    for ( i=0; i<N; i++){
        for (j=0; j<M; j++){
            scanf("%f", &a[i][j]);
        }
    }
}

float maximo(float a[M]){
    float max;
    int i;

    max=a[0];
    for(i=1;i<M;i++){
        if(max<a[i]) {
            max=a[i];
        }
    }
    return max;
}

void imprimirArreglo(float a[N]){
    float max;
    int i;

    for(i=0;i<N;i++){
        printf("\t%f",a[i]);
    }
    printf("\n");
}
