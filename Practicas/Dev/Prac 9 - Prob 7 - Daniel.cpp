#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cad1[100];
char cad2[100];

main () {
    printf("Inserte una cadena:\n");
    gets(cad1);
    printf("Inserte otra cadena:\n");
    gets(cad2);
    
    int size1, size2, size3;
    size1 = strlen(cad1);
    size2 = strlen(cad2);
    size3 = size1 + size2;
    char comb[size3];
    
    int i, j = 0;
    for(i = 0; i < size3; i++) {
        if( i%2 == 0) {
            comb[i] = cad1[j];
            j++;
        }
    }
    
    j = 0;
    for(i = 1; i < size3; i++) {
        if(i == 1 || i == 3 || i%5 == 0 || i%7 == 0 || i == 9) {
            comb[i] = cad1[j];
            j++;
        }
    }
    comb[size3] = '\0';
    puts(comb);
    system("PAUSE");
    return 0;
}
