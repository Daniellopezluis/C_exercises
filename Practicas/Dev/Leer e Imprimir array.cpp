#include <stdlib.h>
#include <stdio.h>

#define SIZE 2

void leerArray(int arreglo[SIZE][SIZE]);
void SumarMatriz(int A[SIZE][SIZE], int B[SIZE][SIZE], int [SIZE][SIZE]);
int printArray(int arreglo[SIZE][SIZE]);

main () {
    
    int Matriz1[SIZE][SIZE] = {0};
    int Matriz2[SIZE][SIZE] = {0};
    int Suma[SIZE][SIZE] = {0};
    
    leerArray(Matriz1);
    leerArray(Matriz2);
    
    SumarMatriz(Matriz1, Matriz2, Suma);
    
    printArray(Suma);
    
    system("PAUSE");
    return 0;
}

void leerArray(int arreglo[SIZE][SIZE]) {
    int i, j;
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            scanf("%d", &arreglo[i][j]);
        }
    }
}
    
void SumarMatriz(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    
    int i, j;
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int printArray(int arreglo[SIZE][SIZE]) {
    
    int i, j;
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            printf("%d", arreglo[i][j]);
        }
        printf("\n");
    }
}
