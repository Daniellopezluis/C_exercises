/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio3ap2.c
    DESCRIPCION: Programa que solicita ancho, alto y largo
                de una habitación.muestra el volumen de la
                habitación con 4 decimales. Ademas revisa
                la precondicion
    AUTOR: Daniel Lopez
    ULTIMA MODIFICACION: 11/01/2015
------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void main(){

    float ancho, alto, largo;   //dimensiones de la habitacion

    printf("Inserte ancho, largo y alto de la habitacion. Debe cumplir la precondicion: \tlados > 0.\n");
    scanf("%f", &ancho);
    scanf("%f", &alto);
    scanf("%f", &largo);

    //Precondicion: ancho>0 largo>0 alto>0
    if(ancho<=0 || largo<=0 || alto<=0){
        printf("\n** ERROR. La precondicion no se satisface. El programa terminara **\n");
        exit(0);
    }

    //Poscondicion volumen = ancho*largo*alto
    printf("El volumen de la habitacion es: %.4f\n", ancho*largo*alto);
}
