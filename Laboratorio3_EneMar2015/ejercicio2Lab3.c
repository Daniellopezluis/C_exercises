/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio2Lab3.c
    DESCRIPCION: Programa que lee un valor entero positivo
                N y calcula la suma de los cuadrados hasta N.
                Ignora valores negativos de N.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 02/02/2015
------------------------------------------------------------
*/

#include <stdio.h>

void main(){

    int N, i, suma;

    //Precondicion: N debe ser entero positivo
    do{
        printf("Introduzca un entero positivo N:\n");
        scanf("%d", &N);
    }while(N < 0);

    for(suma=0 , i=0; i <= N; i++)
        suma += i*i;

    //Poscondicion: Suma de los cuadrados hasta N
    printf("Suma de los cuadrados hasta N = %d es: %d\n", N, suma);

}

/*
NOTA: Sucede algo similar al ejercicio anterior. Considero que el diagrama de flujo no hace ningun esfuerzo por
descartar valores no aceptados, cuestion que se soluciona con el Do-While observado.
*/
