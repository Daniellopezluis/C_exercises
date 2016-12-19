/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio2Lab5.c
    DESCRIPCION: Programa crea un arreglo de dimension N,
                llenado por el usuario y luego encuentra
                en el mismo una variable pedida por el usuario.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 23/02/2015
------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 20

void Leer(float V[], int n);
void Sumar(float A[], float B[], int n, float S[]);
void Escribir(float V[], int n);

int main ( )
{

   int N;        // Entrada: numero de elementos

   do{
        printf("Nro. de elementos del vector (1-20):");
        scanf("%d", &N);
   } while ((N<0) || (N>MAX)); //Chequea la pre

   /* Pre: 0<N<=20 */

    float A[N]; // Entrada: elementos del vector A
    float B[N]; // Entrada: elementos del vector B

    float S[N]; // Salida: el vector suma A+B

    printf("\nElementos del vector A:\n");
    Leer(A,N);
    printf("\nElementos del vector B:\n");
    Leer(B,N);
    printf("\nLa suma de los vectores es:");
    Sumar(A,B,N,S);

   /* Post: S[i] = A[i]+B[i], para todo 0≤i<N */

    Escribir(S,N);
}

void Leer(float V[], int n)
// Pre: 0<n<=20
// Post: V contiene los valores leidos
{
   int i;

   for (i=0; i<n; i++){
      scanf("%f", &V[i]);
   }
}

void Sumar(float A[], float B[], int n, float S[])
// Pre: 0<n<=20
// Post: S[i] = A[i]+B[i], para todo 0≤i<N
{
    int i;

    for (i=0; i<n ; i++){
        S[i] = A[i]+B[i];
    }
}

void Escribir(float V[], int n)
// Pre: 0<n<=20
// Post: escribe en pantalla el contenido del arreglo V en notación
//       vectorial (v1,..,vN)

{
    int i;

    printf("(");
    for ( i=0; i<n; i++){
        if (i<n-1)
            printf(" %5.2f,", V[i]);
        else
            printf(" %5.2f )", V[i]);
    }
}

/*---NOTAS----
Se hizco modificacion en la declaracion de los arreglos
de igual forma que en el ejercicio anterior y por la misma
razon.
*/
