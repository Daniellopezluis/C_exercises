/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio1Lab3.c
    DESCRIPCION: Programa que lee valores enteros positivos
                y los suma, hasta que lee el valor -1.
                Ignora valores negativos.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 02/02/2015
------------------------------------------------------------
*/

#include <stdio.h>

void main(){

    int x, suma;
    suma = 0;
    printf("Introduzca valores enteros positivos para sumar. Introduzca -1 para terminar:\n");

    //Precondicion: ninguna; x debe ser entero
    scanf("%d", &x);
    while(x != -1){
        if(x < 0)
            printf("Valor no aceptado. Intente de nuevo. Introduzca -1 para terminar:\n");
        else
            suma += x;
        scanf("%d", &x);
    }

    //Poscondicion: suma de todos los valores enteros positivos introducidos.
    printf("Suma total de elementos: %d\n", suma);
}

/*
NOTA: Con respecto al diagrama de flujo enviado como solucion propuesta, me parece que tiene un enfoque mejor el programa
ya que segun el diagrama, si se recibe un valor negativo al inicio, debe terminar el programa, cosa que puede evitarse simplemente
ignorando el valor y mostrando al usuario un mensaje que indique lo sucedido.
*/
