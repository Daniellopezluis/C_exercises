#include <stdio.h>
#include <string.h>
#define SIZE 6

main() {
    int i;
    char cadena1 [SIZE];
    char cadena2 [SIZE];
    char cadenafinal [2*SIZE - 1];
    printf("Introduza una cadena de max 5 caracteres:\n");
    gets(cadena1);
    //scanf("%s", cadena1);

    printf("Introduza otra cadena de max 5 caracteres:\n");
    gets(cadena2);
    //scanf("%s", cadena2);

    for (i=0; i<SIZE; i++ ){
        cadenafinal[2*i]= cadena1[i];
        cadenafinal[2*i+1] = cadena2[i];
    }

    printf("La cadena intercalada es:\n");
    puts(cadenafinal);
    //printf("%s", cadenafinal);

}
