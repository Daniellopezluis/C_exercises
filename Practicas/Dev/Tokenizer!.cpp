#include <string.h>
#include <stdio.h>
#include <stdlib.h>

main () {
    char frase[32];
    char *p;
    
    printf("Introduzca una frase:\n");
    gets(frase);
    
    for( p = strtok(frase, " ,:.;"); p != NULL; p = strtok(NULL, " ,:.;")) {
        puts(p);
    }
    
    system("PAUSE");
    return 0;
}
