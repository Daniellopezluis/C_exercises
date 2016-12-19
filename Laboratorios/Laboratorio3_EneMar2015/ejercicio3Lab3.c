/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio3Lab3.c
    DESCRIPCION: Programa que lee un valor entero representando un
                numero de dias, y calcula la cantidad de barajitas
                cambiadas al final de dichos dias, cambiando 5
                el primer dia.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 02/02/2015
------------------------------------------------------------
*/

#include <stdio.h>

void main(){

    int i, numbar, total, N;
    numbar = 5;

    //Precondicion: N > 0
    do{
        printf("Inserte el numero de dias para cambiar barajitas:\n");
        scanf("%d", &N);
    }while(N <= 0);

    for(i=0, total=0; i<N; i++){
        numbar += 1;
        total += numbar;
    }

    //Poscondicion: numero total de barajitas cambiadas en N dias
    printf("El total de barajitas cambiadas en %d dias es: %d\n", N, total);
}

/*
NOTA: Considero que la precondicion propuesta es incorrecta, por que habria de ser N>5? deberia ser N>0
*/
