#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
    char cadena[100];
    gets(cadena);
    char *PtrTok;
    
    PtrTok = strtok(cadena, " ,;.");
    
    printf("%s\n", PtrTok);
    system("PAUSE");
}
