/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: NewtonRapson.c
    DESCRIPCION: Programa que calcula la raiz cuadrada de un
                numero real mediante el metodo de
                Newton-Rapson
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 19/01/2015
------------------------------------------------------------
*/

#include <stdio.h>
void main()
{
    const float epsilon=0.000006;        //Esta es la precision deseada
    float f, a, x = 1;                     //Se parte de 1 como valor inicial de la raiz, f es el valor absoluto de la funcion

    //Precondicion: a >= 0
    do{
        printf("Escriba el numero real al cual se le desea calcular la raiz cuadrada\n");
        scanf("%f",&a);
    }while(a < 0.0);

    f = x*x - a;

    if (f<0)
        f=-f;

    while (f > epsilon){
        x = (x + a/x)/2;
        f = x*x - a;

        if (f < 0)
            f=-f;
    }

    //Poscondicion: x = sqrt(a)
    printf("La raiz cuadrada de %.2f es: %f\n",a,x);
}
