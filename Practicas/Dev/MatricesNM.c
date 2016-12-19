#include <stdlib.h>
#include <stdio.h>
#define N 3
#define M 4

void encontrarmayor(int vector[N], int matriz[N][M], int n, int m);

main(){
    int i;
    int matriz[N][M] = {1,2,3,4,5,6};
    int vector[N] = {0};

    encontrarmayor(vector, matriz, N, M);

    for(i = 0; i < N; i++){
        printf("%d ", vector[i]);
    }

}

void encontrarmayor(int vector[N], int matriz[N][M], int n, int m){         //Sin colocar tamaño de los arreglos, arroja:
    int i,j;                                                                // "array type has incomplete element type"

    for(i = 0; i < n; i++){
        vector[i] = matriz[i][0];
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(matriz[i][j] >= vector[i]){
                vector[i] = matriz[i][j];
            }
        }
    }
}
