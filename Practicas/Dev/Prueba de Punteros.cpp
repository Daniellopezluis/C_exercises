#include <stdio.h>
#include <stdlib.h>

void printArray(int [][3]);

main () {
    int arreglo[2][3] = {1,2,3,4,5,6};

    printArray(arreglo);
    
    system("PAUSE");
    return 0;
}

void printArray(int array[][3]) {
    int i, j;
    
    for(i = 0; i <= 1; i++) {
        for (j = 0; j <= 2; j++) {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}
