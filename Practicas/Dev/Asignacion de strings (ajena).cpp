#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
    char cadena[100];
    char *PtrTok;
    char *mayor;
    int posicion = 1;
    int i;
    int largo;
    
    printf("Inserte una cadena de caracteres\n");
    gets(cadena);
    i = 2;
    for (PtrTok = strtok(cadena, " .,;"), mayor = PtrTok, largo = strlen(PtrTok); PtrTok != NULL;
    PtrTok = strtok(NULL, " .,;")) {
        if(strlen(mayor) < strlen(PtrTok)) {
            mayor = PtrTok;
            largo = strlen(PtrTok);
            posicion = i-1;
        }
        i++;
    }
    
    printf("La palabra mas larga es: %s \ncon una longitud de %d\n", mayor, largo);
    printf("Fue insertada en la posicion %d\n", posicion);
    system("PAUSE");
}
