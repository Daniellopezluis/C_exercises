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

#define MAX 11

void Leer(float P[], int grado);
float Evaluar(float P[], int grado, float X);

int main ( )
{
    int grado;    // Entrada: grado del polinomio
    float X;      // Entrada: valor donde se evalua el polinomio
    float eval;   // Salida: resultado de evaluar el polinomio

    do{
        printf("Grado del polinomio (0-10):");
        scanf("%d", &grado);
    }while((grado<=0) || (grado>MAX)); //Chequea la pre

   /* Pre: 0<=grado<=20 */

    float P[grado+1]; // Entrada: elementos del polinomio

    printf("\nCoeficientes del polinomio:\n");
    Leer(P,grado);
    printf("\nValor donde se va a evaluar el polinomio:");
    scanf("%f",&X);
    eval=Evaluar(P,grado,X);

   /* Post: eval = P(X), el resultado de evaluar P en X */

    printf("\nEl resultado de evaluar el polinomio es: %5.2f\n",eval);
}

void Leer(float P[], int grado)
// Pre: 0<=grado<=10
// Post: P contiene los coeficientes del polinomio
{
    int i;

    for (i=0; i<=grado; i++){
        printf("Coeficiente %d = ",i);
        scanf("%f", &P[i]);
    }
}

float Evaluar(float P[], int grado, float X)
// Pre: 0<=grado<=10
// Post: evaluar contiene el valor de P(X)
{
    int i;
    float potX, eval;

    potX = 1;
    eval = 0;
    for (i=0; i<=grado ; i++){
        eval = eval + P[i]*potX;
        potX = potX*X;
    }
    return (eval);
}
