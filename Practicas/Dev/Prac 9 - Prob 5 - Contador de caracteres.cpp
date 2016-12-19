#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char cadena[100];
	int i;
	
    printf("Por favor introduzca una cadena de caracteres:\n");
	gets(cadena);
	
    for(i = 1; cadena[i] != '\0'; i++) {}

	printf("La cantidad de caracteres en \"%s\" es: %d\n",cadena ,i);
	system("pause");
	return 0;
}
