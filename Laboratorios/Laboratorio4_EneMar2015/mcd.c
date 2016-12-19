/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: mcd.c
    DESCRIPCION: Programa que calcula el maximo comun divisor
                de un par de numeros, mediante el algoritmo
                de Euclides.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 19/01/2015
------------------------------------------------------------
*/

#include <stdio.h>
void main()
{
    int a,b,r;                  //a y b son los dos números cuyo MCD se desea calcular

    //Precondicion: a>0 AND b>0
    do{
        printf("Escriba el valor de los numeros enteros cuyo MCD se desea calcular\n");
        scanf("%d %d",&a,&b);
    }while(a<=0 || b<= 0);

    printf("\n\tMCD(%d, %d) = ",a,b);
    r=a%b;
    while (r>0) {
        a=b;
        b=r;
        r=a%b;
    }

    //Poscondicion: b = MCD(a,b)
    printf("%d\n",b);
}
