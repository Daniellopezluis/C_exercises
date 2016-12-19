/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio2Lab4.c
    DESCRIPCION: Programa que utiliza una funcion para
                obtener el factorial de un numero. Ademas,
                obtiene combinatorias utilizando una funcion
                adicional.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 08/02/2015
------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

int factorial(int n);
int combinatorio(int n, int k);

void main()
{
    int n,k; //ENTRADAS
    int comb; //SALIDA

    printf("\nCalculo del numero combinatorio(n,k)");

   //Precondicion : n >= k AND k >= 0
    do{
        printf("\nIntroduzca n y k: ");
        scanf("%d%d", &n,&k);
    }while(n < k || k <= 0);


    comb = combinatorio(n,k);
   //Postcondicion: comb = combinatorio(n,k)

    printf("\nEl valor del Combinatorio(%d,%d) = %d\n",n,k,comb);
}

int factorial(int n)
//Pre: n >= 0
//Post: Retorna el factorial de n.
{
    int i,r;

    for(i=1,r=1;i<=n;i++)
        r=r*i;
    return r;
}

int combinatorio(int n, int k)
//Pre: n >= k >= 0
//Post: Retorna el combinatorio Cn,k
{
    return factorial(n)/(factorial(k)*factorial(n-k));
}
