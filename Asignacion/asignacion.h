/*
 * ARCHIVO:   asignacion.h
 * DESCRIPCION: Contiene los prototipos, pre y post condiciones de las primitivas del TAD Estudiante_t
 * AUTOR: Daniel Lopez
 * FECHA: 24/10/2010
 */
 #include "triplets.h"

typedef struct {
    int ano;
    int mes;
    int dia;
} StructFecha;

typedef StructFecha* Fecha_t;

typedef struct {
    char carnet[9];
    char nombres[21];
    char apellidos[21];
    Fecha_t fecha_ingreso;
    int edad;
    int creditos_aprobados;
    int carrera;
    float indice;
} StructEstudiante;

typedef StructEstudiante* Estudiante_t;

/*CONSTRUCTORES*/

Estudiante_t construirEstudiante (void);

void destruirEstudiante(Estudiante_t E);


