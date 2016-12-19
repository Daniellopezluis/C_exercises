#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "clase_ag.hpp"
#include "extra_ag.cpp"

#define N_BYTES         1      // longitud máxima del string (cromosoma)
#define N_INDIVIDUOS    10

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
    ag.dTasaMutacion = 0.01;

    //archivo de excel
    archivo = fopen("ag_minimo.xls", "w+");
    fprintf(archivo, "Mejor:\tPoblacion:\n"); // \n\r para windows

    do{
        ag.Generacion();
        ap = ag.SeleccionarMejor();
        printf("\nMejor: %.3f\tPob: %.3f\tGeneracion = %5ld\t", ap->Fitness(), ag.Fitness(), ag.Edad());
        fprintf (archivo, "%.3f\t%.3f\n", ap->Fitness(), ag.Fitness());
        mostrar(ap->Cromosoma, N_BYTES);
    }while(ap->Fitness() < 0.99 && ag.Edad() < 1000);    // condicion(es) de parada

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
    //int numero = (char)(string[0]); // exGrayBinario -> ?
    int numero = (char)exGrayBinario(string[0]);
    //float val = powf(numero, 2) - 8*numero + 16;
    float val = powf(numero - 126, 2);

    return 1/(1+val);
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
    //printf("Cromosoma = %02X , %hhi", (string[0]), (char)(string[0]));
    printf("Cromosoma = %02X , %hhi", exGrayBinario(string[0]), (char)exGrayBinario(string[0]));
}
