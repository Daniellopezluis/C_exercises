#include <stdio.h>
#include <stdlib.h>

void main(){

    float ancho, alto, largo;

    printf("Inserte el ancho de la habitacion:\n");
    scanf("%f", &ancho);
    printf("Inserte el alto de la habitacion:\n");
    scanf("%f", &alto);
    printf("Inserte el largo de la habitacion:\n");
    scanf("%f", &largo);

    printf("El volumen de la habitacion es: %.4f\n", ancho*largo*alto);
}
