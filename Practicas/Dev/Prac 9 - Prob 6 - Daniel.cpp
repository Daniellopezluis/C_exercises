#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cad[100];
int n;

int main () {
    printf("Introduzca una palabra:\n");
    gets(cad);
    printf("Introduzca un numero:\n");
    scanf("%d", &n);
    
    int size, i, j;
    size = strlen(cad);
    char nueva[size];
    
    for(i = 0; i < n; i++) {
        nueva[i] = cad[size - n +i];
    }
    
    for(j = 0; i < size; j++) {
        nueva[i] = cad[j];
        i++;
    }
    nueva[size] = '\0';
    puts(nueva);
    system("PAUSE");
}
