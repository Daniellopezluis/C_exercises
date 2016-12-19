/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: barajitas.c
    DESCRIPCION: Programa que calcula la cantidad de barajitas
                cambiadas por un niño, que cambia una barajita
                mas que el dia anterior, comenzando por 5
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 19/01/2015
------------------------------------------------------------
*/

#include <stdio.h>
void main()
{
    int N;                   // Entrada
    int total;               // Salida
    int d,b;                 //d = contador de dias, b = contador de barajitas por dia

    //Precondicion: N > 0
    do{
        printf("Escriba el numero de dias para cambiar barajitas:\n");
        scanf("%d",&N);
    }while(N <= 0);

    d=0;
    b=5;                     // La cantidad de barajitas que cambia el primer dia
    total=0;                 //barajitas cambiadas en d dias
    for (d,b; d<N; d++,b++)
    {
        total=total+b;       // Cada día siguiente cambia una barajita más que
                            // el día anterior
    }

    //Poscondicion: numero de barajitas cambiadas
    printf("El numero de barajitas cambiadas es: %d\n",total);

}
