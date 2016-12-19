#include <stdio.h>
#define N 3
#define M 4

void trasponer(int entrada[N][M], int salida[M][N], int n, int m);
void imprimirmatriz(int matriz[M][N], int n, int m);

main(){

    int matriz[N][M] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int traspuesta[M][N] = {0};

    trasponer(matriz, traspuesta, N, M);
    imprimirmatriz(traspuesta, M, N);

}

void trasponer(int entrada[N][M], int salida[M][N], int n, int m){
    int i,j;

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            salida[j][i] = entrada[i][j];
        }
    }
}

void imprimirmatriz(int matriz[M][N], int n, int m){
    int i, j;
     for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}

