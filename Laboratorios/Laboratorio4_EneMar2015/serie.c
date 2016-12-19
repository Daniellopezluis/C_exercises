/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: serie.c
    DESCRIPCION: Programa que calcula el elemento numero 'x'
                de la serie de Fibonacci
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 19/01/2015
------------------------------------------------------------
*/

#include <stdio.h>
void main()
{
    int x; // Entrada
    int ax; // Salida

    int i, an, an_1;

    //Precondicion: x > 0
    do{
        printf("Introduzca un entero positivo:\n");
        scanf("%d",&x);
    }while(x <= 0);

    an_1=0;
    an=1;

    //Poscondicion: ax = fibonacci(x)
    if(x == 1)
        printf("El elemento %d de la serie es 1 ",x);
    else{
        for(i=2; i <= x; i++)
        {
            ax = an_1+an;
            an_1 = an;
            an = ax;
        }
        printf("El elemento %d de la serie es %d ",x,ax);
    }
}
