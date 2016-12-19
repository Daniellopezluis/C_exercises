/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio4Lab3.c
    DESCRIPCION: Programa que lee un valor entero positivo
                y responde si el numero insertado es primo
                o no.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 02/02/2015
------------------------------------------------------------
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

void main(){

    int primo, i, N;

    //Precondicion: N>0
    do{
        printf("Inserte un numero entero positivo:\n");
        scanf("%d", &N);
    }while(N <= 0);

    i = 2;
    primo = TRUE;        //Suposicion inicial

    if(primo && i< N/2){
        do{
            if(N%i == 0)
                primo = FALSE;
            else
                i++;
        }while(primo && i< N/2);
    }

    //Poscondicion: la variable 'primo' indica si N es primo o no
    if(primo)
        printf("El numero %d es primo\n", N);
    else
        printf("El numero %d NO es primo\n",N);
}

/*
NOTA: El diagrama de flujo propuesto no fue realizado haciendo uso de Do-while
*/
