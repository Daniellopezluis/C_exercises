/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio3lab4.c
    DESCRIPCION: Programa que utiliza una funcion para
                determinar si un entero ingresado por el
                usuario es primo o no.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 08/02/2015
------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

int esPrimo(int n);

void main()
{
    int n;   //ENTRADA

    printf("\nEste programa verifica si un entero positivo es primo. ");

    do{
        printf("\nIntroduzca un entero positivo: ");
        scanf("%d", &n);
    }while(n <= 0);
    //Precondicion: n > 0


    if (esPrimo(n)){
        printf("\n%d es primo.",n);
    }
    else
    {
        printf("\n%d NO es primo.",n);
    }
   //Postcondicion: Arroja si el numero es primo o No

}

int esPrimo(int n)
//Pre: n >0
//Post: Retorna 1 si n es primo y 0 si no
{
    int b,k;

    if (n > 1)
        b = 1;
    else
        b = 0;

    k = 2;
    while (k < n) {
        if (n % k == 0)
        {
            b = 0;
            break;
        }
        k++;
    }
    return b;
}
