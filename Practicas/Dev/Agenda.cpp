#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[11];

main ()
{
    printf("*****AGENDA*****\n");
    printf("\tIntroduzca su nombre: \n");
    scanf("%s", name);
    printf("\nBienvenido %s\n", name);
    
    system("PAUSE");
}
