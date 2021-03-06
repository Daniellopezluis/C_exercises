/*
 * ARCHIVO:   ASIGNACION_C.c
 * DESCRIPCION: Contiene las definiciones de las funciones en ASIGNACION.h
 * Daniel Lopez 08-10631
 * Mar�a Alejandra Sanchez 08-11039
 * FECHA: 24/10/2010
 */

#include "C:\Users\DANIEL\Documents\Programas en C\Preasignacion1\TRIPLETS.h"
#include <stdio.h>
#include "C:\Users\DANIEL\Documents\Programas en C\Preasignacion1\ASIGNACION.h"
#include <string.h>

            /*PRIMITIVAS*/

/*CONSTRUCTORES*/

Estudiante_t construirEstudiante (void) {
    Estudiante_t E;
    new(E);
    /*PONER TODO IGUAL A CERO*/
    return E;
}

void destruirEstudiante(Estudiante_t E) {
    free(E);
}

/*MUTADoRES*/
        
void asignar_carnet_Estudiante (Estudiante_t E, char carnetNuevo[9]) {
    _pre(E != NULL);
    strcpy(carnetNuevo, E->carnet);
}

void asignar_nombres_Estudiante (Estudiante_t E, char nombreNuevo[21]) {
    _pre(E != NULL);
    strcpy(nombreNuevo, E->nombres);
}

void asignar_apellidos_Estudiante (Estudiante_t E, char apellidoNuevo[21]) {
    _pre(E != NULL);
    strcpy(apellidoNuevo, E->apellidos);
}

void asignar_fecha_ingreso_Estudiante (Estudiante_t E, Fecha_t fechaNueva) {
    _pre(E != NULL);
    _pre(fechaNueva != NULL);
    E->fecha_ingreso->ano = fechaNueva->ano;
    E->fecha_ingreso->mes = fechaNueva->mes;
    E->fecha_ingreso->dia = fechaNueva->dia;
}

void asignar_edad_Estudiante (Estudiante_t E, int edadNueva) {
    _pre(E != NULL);
    _pre(edadNueva != 0);
    E->edad = edadNueva;
}

void asignar_creditos_aprobados_Estudiante (Estudiante_t E, int creditos_aprobadosNuevos) {
    _pre(E != NULL);
    _pre(creditos_aprobadosNuevos != 0);
    E->creditos_aprobados = creditos_aprobadosNuevos;
}

void asignar_carrera_Estudiante (Estudiante_t E, int carreraNueva) {
    _pre(E != NULL);
    _pre(carreraNueva != 0);
    E->carrera = carreraNueva;
}

void asignar_indice_Estudiante (Estudiante_t E, float indiceNuevo) {
    _pre(E != NULL);
    _pre(indiceNuevo != 0);
    E->indice = indiceNuevo;
}
    
/*SELECTORES*/
    
char* obtener_carnet_Estudiante (Estudiante_t E) {
    _pre(E != NULL);
    char *c_devuelto;
    new(c_devuelto);
    strcpy(c_devuelto, E->carnet);
    return c_devuelto;
}


char* obtener_nombres_Estudiante (Estudiante_t E) {
    _pre(E != NULL);
    char *nombre_devuelto;
    new(nombre_devuelto);
    strcpy(nombre_devuelto, E->nombres);
    return nombre_devuelto;
}


char* obtener_apellidos_Estudiante (Estudiante_t E) {
    _pre(E != NULL);
    char *apellido_devuelto;
    new(apellido_devuelto);
    strcpy(apellido_devuelto, E->apellidos);
    return apellido_devuelto;
}
    

Fecha_t obtener_fecha_ingreso_Estudiante (Estudiante_t E) {
    _pre(E != NULL);
    Fecha_t fecha_devuelta;
    new(fecha_devuelta);
    fecha_devuelta->dia = E->fecha_ingreso->dia;
    fecha_devuelta->mes = E->fecha_ingreso->mes;
    fecha_devuelta->ano = E->fecha_ingreso->ano;
    return fecha_devuelta;
}
    
    
int obtener_edad( Estudiante_t E){
    _pre(E != NULL);
    int e_devuelto;
    e_devuelto = E->edad;
    return e_devuelto;
    }
    

int obtener_creditos_aprobados_Estudiante( Estudiante_t E){
    _pre(E != NULL);
    int creditos_devueltos;
    creditos_devueltos = E->creditos_aprobados;
    return creditos_devueltos;
    }

    
int obtener_carrera_Estudiante (Estudiante_t E){
    _pre(E != NULL);
    int carrera_devuelto;
    carrera_devuelto = E->carrera;
    return carrera_devuelto;
    }

float obtener_indice_Estudiante (Estudiante_t E){
    _pre(E != NULL);
    int indice_devuelto;
    indice_devuelto = E->indice;
    return indice_devuelto;
    }
    
        /*NO PRIMITIVAS*/

void leerEstudiante (char* archivo, Estudiante_t E) {
    FILE* fp;
    fp = fopen(archivo, "r");
    if(fp == NULL) {
        printf("No se pudo abrir %s\n", archivo);
        exit(1);
    }
    fscanf(fp, "%s", &(E->carnet));
    fscanf(fp, "%s", &(E->nombres));
    fscanf(fp, "%s", &(E->apellidos));
    fscanf(fp, "%d", &(E->fecha_ingreso->ano));
    fscanf(fp, "%d", &(E->fecha_ingreso->mes));
    fscanf(fp, "%d", &(E->fecha_ingreso->dia));
    fscanf(fp, "%d", &(E->edad));
    fscanf(fp, "%d", &(E->creditos_aprobados));
    fscanf(fp, "%d", &(E->carrera));
    fscanf(fp, "%f", &(E->indice));
    
    fclose(fp);
}

void escribirEstudiante (char* archivo, Estudiante_t E) {
    FILE* fp;
    fp = fopen(archivo, "w");
    if(fp == NULL) {
        printf("No se pudo abrir %s\n", archivo);
        exit(1);
    }
    fprintf(fp, "%s", E->carnet);
    fprintf(fp, "%s", E->nombres);
    fprintf(fp, "%s", E->apellidos);
    fprintf(fp, "%d", E->fecha_ingreso->ano);
    fprintf(fp, "%d", E->fecha_ingreso->mes);
    fprintf(fp, "%d", E->fecha_ingreso->dia);
    fprintf(fp, "%d", E->edad);
    fprintf(fp, "%d", E->creditos_aprobados);
    fprintf(fp, "%d", E->carrera);
    fprintf(fp, "%f", E->indice);
    
    fclose(fp);
}
