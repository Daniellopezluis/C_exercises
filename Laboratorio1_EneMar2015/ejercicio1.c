/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: laboratorio1.c
    DESCRIPCION: Solucion a ejercicios basicos para conocer
    con el ambiente de programacion
    AUTOR: Daniel Lopez
    ULTIMA MODIFICACION: 11/01/2015
------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    //**-- Ejercicio 1 parte a --**
    printf("Hola mundo!\n");

    //**-- Ejercicio 1 parte b --**
    printf("Pedro Perez\nCarnet 12-345678\nEdad 19\n");

    //**-- Ejercicio 1 parte c --**
    int x;
    printf("Inserte un valor entero:\n");
    scanf("%d", &x);
    printf("x^2 = %d\n", x*x);

    //**-- Ejercicio 1 parte d --**
    int ancho, profundidad;
    printf("Inserte el ancho de la habitacion:\n");
    scanf("%d", &ancho);
    printf("Inserte la profundidad de la habitacion:\n");
    scanf("%d", &profundidad);
    printf("El area de la habitacion es: %d\n", ancho*profundidad);
}
