/*
    Programa: Contador de barajitas cambiadas
    Entrada: Numero de dias y de barajitas cambiadas el primer dia
    Salida: Numero total de cambiadas
    Autor: Daniel Lopez
    Fecha: 28 de Mayo, 2010
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, N, B, CD, T;     /*Variables*/
    printf("Inserte el numero de dias y\nel numero de barajitas que\ncambio el primer dia\n");
    scanf("%d %d", &N, &X);

    B = X; CD = 1; T = X; /*Asignacion inicial de Barajitas cambiadas, Contador de dias*/
                            /* y total de barajitas*/
    while(CD < N) {
        B += 1; CD += 1; T += B;
    }

    printf("\tCambio %d barajitas en %d dias\n", T, N);
    system("PAUSE");
}
