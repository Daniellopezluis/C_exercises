/*
    Programa: Maximo comun divisor
    Entrada: dos enteros
    Salida: MCD
    Autor: Daniel Lopez
    Fecha: 28 de Mayo, 2010
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;       /*Variables*/

    /*Peticion de variables*/
    do {
        printf("Inserte dos numeros enteros:\n");
        scanf("%d %d", &a, &b);
        if(a <= 0 || b <= 0) {
            printf("Valores incorrectos, inserte 2 enteros positivos\n");
        }
    } while(a <= 0 || b <= 0);

    while(a != b) {
        if(a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    printf("\t*****************\n");
    printf("\tEl MCD es: %d\n", a);
    printf("\t*****************\n");

    system("PAUSE");
    return 0;
}
