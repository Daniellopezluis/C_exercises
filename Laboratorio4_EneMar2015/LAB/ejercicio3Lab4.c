/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio1Lab4.c
    DESCRIPCION: Programa que utiliza una funcion para calcular
                el MCD de tres numeros ingresados por un
                usuario.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 08/02/2015
------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

int mcd(int a, int b);

void main()
{
    int a,b,c; //ENTRADAS
    int aux;
    int m;     //SALIDA

    //Precondicion: a>0 AND b>0 AND c>0
    do{
        printf("Introduzca tres enteros positivos: \n");
        scanf("%d%d%d", &a, &b, &c);
    }while(a <= 0 || b <= 0 || c <= 0);


    aux = mcd(a,b);
    m = mcd(aux,c);
   //Post: m = mcd (a,b,c)

    printf("El maximo comun divisor de %d, %d y %d es: %d\n",a,b,c,m);
}

int mcd(int a, int b)
//Pre: a>0 AND b>0;
//Post: Retorna el mcd de a y b.
{
   while (a != b){
      if (a<b) {
         b = b - a;
      } else {
         a = a - b;
      }
   }
   return a;
}
