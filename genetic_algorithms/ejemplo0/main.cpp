#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "clase_ag.hpp"

#define N_BYTES         10      // longitud máxima del string (cromosoma)
#define N_INDIVIDUOS    100

typedef unsigned char uchar;
typedef unsigned long ulong;

// variables
CLASECromosoma a;
CLASECromosoma b;
CLASECromosoma c;
CLASECromosoma d;
CLASEAGenetico ag;
FILE *archivo;

// DECLARAR funciones
float evaluacion(uchar *);
void mostrar(uchar *, ulong);

int main()
{
    CLASECromosoma *ap = NULL;

    ag.PoblacionAleatoria(N_INDIVIDUOS, N_BYTES);
    ag.FuncionEvaluacion(evaluacion);
    ag.dTasaMutacion = 0.001;

    //archivo de excel
    archivo = fopen("ag_patrones.xls", "w+");
    fprintf(archivo, "Mejor:\tPoblacion:\n"); // \n\r para windows

    do{
        ag.Generacion();
        ap = ag.SeleccionarMejor();
        printf("\nMejor: %.3f\tPob: %.3f\t", ap->Fitness(), ag.Fitness());
        fprintf (archivo, "%.3f\t%.3f\n", ap->Fitness(), ag.Fitness());
        mostrar(ap->Cromosoma, N_BYTES);
    }while(ap->Fitness() < 0.99);    // condicion de parada

    printf ("\n\tGeneracion: %ld", ag.Edad()); //imprimo la edad de la poblacion: numero de iteraciones totales ejecutadas (generaciones)
    fclose(archivo);

    return 0;
}

// DEFINICION de funciones
/*
 ** ----------------------------------------------------------------------------
 **     Nombre      :
 **     Función     :
 **     Parámetros  :
 **     Retorna     :
 ** ----------------------------------------------------------------------------
 */
float evaluacion(uchar* string)
{
    float error = 0;
    float acumulado = 0;

    for(int i = 0; i < N_BYTES; i++){
        error = fabs(string[i] - 0xFF*(i & 0x01));  // patron  = ?
        acumulado += error;
    }
    acumulado /= N_BYTES;   // promedio
    return 1/(1 + acumulado);
}

/*
 ** ----------------------------------------------------------------------------
 **     Nombre      :
 **     Función     :
 **     Parámetros  :
 **     Retorna     :
 ** ----------------------------------------------------------------------------
 */
void mostrar(uchar* string, ulong index)
{
    for(uchar i = 0; i < index; i++)
        printf("%02X ", string[i]);
}
