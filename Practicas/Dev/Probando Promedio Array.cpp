#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

float PROMEDIO(int[], int);

int main() {
    int arreglo[SIZE] = {2, 4, 6, 8, 10, 13, 21, 11, 24, 32};
    
    PROMEDIO(arreglo, SIZE);
    printf("El promedio de los valores es %f", PROMEDIO(arreglo, SIZE));
    
    system("PAUSE");
    return 0;
}

float PROMEDIO(int arreglo[], int size) {
    int i, suma = 0;
    float prom = 0;
    for(i = 0; i <= size - 1; i++) {
        suma += arreglo[i];
    }
    prom = suma/size;
    return prom;
}
