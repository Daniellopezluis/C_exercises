#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char cadena[11];
char letra, minus, mayus;
int i, ocurrencia = 0;

int main () {
    do {
        printf("Inserte una cadena: (10 caracteres maximo)\n");
        gets(cadena);
    } while (strlen(cadena) > 10);
    
    printf("Inserte una letra:\n");
    letra = getchar();
    
    letra = tolower(letra);
    mayus = toupper(letra);
    
    for(i = 0; i < 10; i++) {
        minus = tolower(cadena[i]);
        if(minus == letra) {
            ocurrencia++;
        }
    }
   
    printf("La letra %c o %c aparece %d veces en %s\n", letra, mayus, ocurrencia, cadena);
    system("PAUSE");
    return 0;
}
