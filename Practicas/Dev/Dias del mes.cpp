#include <stdlib.h>
#include <stdio.h>

int mes, dias1, dias2;

int main()
{
    printf("Introduzca el numero del mes:\n");
    scanf("%d", &mes);
    switch(mes)
    {
        case 1: printf("Enero tiene 31 dias\n");
        break;
        case 2: printf("Febrero tiene 28 dias\n");
        break;
        case 3: printf("Marzo tiene 31 dias\n");
        break;
        case 4: printf("Abril tiene 30 dias\n");
        break;
        case 5: printf("Mayo tiene 31 dias\n");
        break;
        case 6: printf("Junio tiene 30 dias\n");
        break;
        case 7: printf("Julio tiene 31 dias\n");
        break;
        case 8: printf("Agosto tiene 31 dias\n");
        break;
        case 9: printf("Septiembre 30 tiene dias\n");
        break;
        case 10: printf("Octubre 31 tiene dias\n");
        break;
        case 11: printf("Noviembre 30 tiene dias\n");
        break;
        case 12: printf("Diciembre 31 tiene dias\n");
        break;
        default: printf("Numero invalido\n");
    }
    system("PAUSE");
    return 0;
}
