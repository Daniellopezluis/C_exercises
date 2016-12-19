/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio3bp2.c
    DESCRIPCION: Programa que solicita un radio real y muestra
                el area del circulo, perimetro de la circunferencia
                y volumen de la esfera asociada. Ademas, revisa
                precondición.
    AUTOR: Daniel Lopez
    ULTIMA MODIFICACION: 11/01/2015
------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

void main(){

    float radio, area, perimetro, volumen;              //variables a usar

    printf("Inserte el radio de la circunferencia. Debe cumplir la precondicion:\n\tRadio > 0\n");
    scanf("%f", &radio);

    //Precondicion: radio > 0
    if(radio <= 0){
        printf("\n** ERROR. La precondicion no se satisface. El programa terminara **\n");
        exit(0);
    }

    area = PI*radio*radio;
    perimetro = 2*PI*radio;
    volumen = (float)(4/3)*(PI*radio*radio*radio);      //Se realiza cast de tipo (float) para garantizar
                                                        //que la operacion retorne valor de tipo float

    //Poscondicion: area=PI*r^2, perimetro=2*PI*r, volumen=(4/3)*PI*r^3
    printf("El area del circulo es: %f\n", area);
    printf("El perimetro de la circunferencia es: %f\n", perimetro);
    printf("El volumen de la esfera es: %f\n", volumen);

}
