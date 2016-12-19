#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
  int c, n=0;
  FILE* pf;
  char* nombre = "\\SALIDA.TXT";
  
  if ((pf = fopen(nombre, "r")) == NULL) {
        puts("ERROR");
        return 1;
    }
    
    while ((c = getc(pf)!= EOF)) {
        if (c == '\n') {
            n++; printf("\n");
        }
        else
            putchar(c);
    }
    
    printf("\nNumero lineas del archivo: %d", n);
    fclose(pf);
    system("PAUSE");
    return 0;
}
