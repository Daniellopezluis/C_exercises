/*
    Programa: Identificador de numeros primos
    Entrada: Numero entero
    Salida: primo o No primo
    Autor: Daniel Lopez
    Fecha: 28 de Mayo, 2010
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    int N = 2;
    int A;

        /*Peticion de la variable*/
    do {
        printf("Inserte un numero entero:\n");
        scanf("%d", &X);
        if(X <= 0) {
            printf("Valor incorrecto, inserte un enteros positivo\n");
        }
    }while(X <= 0);

        /*Verificacion de divisibilidad*/
    for(A = 1; N < ((X+1)/2) && A; N += 1) {
        if(X % N == 0) {
            A = 0;
        }
    }

        /*Salida*/
    if(A == 1) {
        printf("El numero %d es primo\n", X);
    } else {
        printf("El numero %d NO es primo\n", X);
    }

    system("PAUSE");
    return 0;
}
