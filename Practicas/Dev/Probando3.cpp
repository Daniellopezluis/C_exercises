#include <stdio.h>
#include <stdlib.h>

int z, x = 3, y = 2;

int Multiplicacion(int, int);

int main() {
    
    z = Multiplicacion(x, y);
    printf("Multiplicacion de %d por %d da: %d\n", x, y, z);
    printf("Los valores originales son %d y %d\n", x, y);
    
    system("PAUSE");
    return 0;
}

int Multiplicacion(int a, int b) {
    int c;
    a = a*b;
    return a;
}
