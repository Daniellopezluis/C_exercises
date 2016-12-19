#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
    char cad1[30]; char cad2[30];
    
    printf("Introduzca 2 palabras (ENTER luego de cada una)\n");
    gets(cad1);
    gets(cad2);
    
    strcat(cad1, cad2);
    puts(cad1);
    
    system("PAUSE");
}
