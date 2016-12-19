/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio4Lab5.c
    DESCRIPCION: Programa que crea un arreglo de dimension n
                con elementos insertados por el usuario.
                Luego devuelve el mayor elemento del arreglo
                y la posicion del mismo.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 23/02/2015
------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 20

void Elementos(float vect[], int n);
void Mayor(float vect[], int n, float *mayor, int *iM);

int main ( )
{
    int n;             // Entrada: numero de elementos
    float mayor;       // Salida: el mayor elemento
    int iM;            // Salida: posición del mayor elemento

    do{
        printf("Nro. de elementos del vector (1-20):");
        scanf("%d", &n);
    }while ((n<0) || (n>MAX)); //Chequea la pre

   /* Pre: 0<n<=20 */

    float vect[n]; // Entrada: elementos del vector

    Elementos(vect,n);

    Mayor(vect,n,&mayor,&iM);

   /* Post: mayor=vector[iM] y 0<=iM<MAX  */

    printf("El mayor elemento del vector es %7.2f\n",mayor);
    printf(" La posición en el arreglo es %4d\n",iM+1);
}

void Elementos(float vect[], int n)
// Pre: 0<n<=20
// Post: vector contiene los valores leidos
{
    int i;

    printf("Introduzca los elementos del vector\n");
    for ( i=0; i<n; i++){
        scanf("%f", &vect[i]);
    }
}

void Mayor(float vect[], int n, float *mayor, int *iM)
// Pre: 0<n<=20
// Post: mayor contiene el mayor valor del vector y su posición
//       queda en iM

{
    int i;

    *mayor = vect[0];
    *iM = 0;
    for (i=0; i<n; i++){
        if ( *mayor < vect[i]){
            *mayor = vect[i];
            *iM = i;
        }
    }
}
