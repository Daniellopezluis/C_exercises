#include <stdio.h>
#include <stdlib.h>

float ancho, largo, area;   /*variables tipo flotante*/

int main()
{
    printf("Introduzca el ancho de la habitacion:\n");
    scanf("%f", &ancho);   /*recepcion de la variable 'ancho'*/
    printf("Introduzca el largo de la habitacion:\n");
    scanf("%f", &largo);
    area = ancho * largo;
    printf("El area de la habitacion es: %.4f\n", area);

    system("PAUSE");
    return 0;   
}
