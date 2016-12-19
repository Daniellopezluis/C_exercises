/*
 * ARCHIVO:   asignacion.h
 * DESCRIPCION: Contiene los prototipos, pre y post condiciones de las primitivas del TAD Estudiante_t
 * Daniel Lopez 08-10631
 * María Alejandra Sanchez 08-11039
 * FECHA: 24/10/2010
 */
 
 #include "C:\Users\DANIEL\Documents\Programas en C\Preasignacion1\TRIPLETS.h"
 #include <string.h>

/* Tipo de dato para la fecha de ingreso
 * del estudiante */
typedef struct {
    int ano;
    int mes;
    int dia;
} StructFecha;
/* Apuntador a la estructura anterior*/
typedef StructFecha* Fecha_t;

/* Tipo de dato para los datos del estudiante*/
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
/*Apuntador a la estructura anterior*/
typedef StructEstudiante* Estudiante_t;

/*CONSTRUCTORES*/

Estudiante_t construirEstudiante (void);
/*PRE: ninguno
  POST: Devuelve un Estudiante_t*/

void destruirEstudiante(Estudiante_t E);
/*PRE: el Estudiante_t ha sido creado
  POST: Libera el espacio ocupado por el Estudiante_T*/
  
/*MUTADORES*/  

void asignar_carnet_Estudiante (Estudiante_t E, char carnetNuevo[9]);
/*PRE: E debe existir
  POST: devuelve E con carnetNuevo asignado como E->carnet*/

void asignar_nombres_Estudiante (Estudiante_t E, char nombreNuevo[21]);
/*PRE: E debe existir
  POST: devuelve E con nombreNuevo asignado como E->nombres*/

void asignar_apellidos_Estudiante (Estudiante_t E, char apellidoNuevo[21]);
/*PRE: E debe existir
  POST: devuelve E con apellidoNuevo asignado como E->apellidos*/

void asignar_fecha_ingreso_Estudiante (Estudiante_t E, Fecha_t fechaNueva);
/*PRE: E debe existir
  POST: devuelve E con fechaNueva asignado como E->fecha_ingreso*/

void asignar_edad_Estudiante (Estudiante_t E, int edadNueva);
/*PRE: E debe existir
  POST: devuelve E con edadNueva asignado como E->edad*/

void asignar_creditos_aprobados_Estudiante (Estudiante_t E, int creditos_aprobadosNuevos);
/*PRE: E debe existir
  POST: devuelve E con creditos_aprobadosNuevos asignado como E->creditos_aprobados*/

void asignar_carrera_Estudiante (Estudiante_t E, int carreraNueva);
/*PRE: E debe existir
  POST: devuelve E con carreraNueva asignado como E->carrera*/

void asignar_indice_Estudiante (Estudiante_t E, float indiceNuevo);
/*PRE: E debe existir
  POST: devuelve E con indiceNuevo asignado como E->indice*/

/*SELECTORES*/

char* obtener_carnet_Estudiante (Estudiante_t E);
/*PRE: E debe existir.
  POST: Devuelve un apuntador a E->carnet  */

char* obtener_nombres_Estudiante (Estudiante_t E);
/*PRE: E debe existir.
  POST: Devuelve un apuntador a E->nombres  */

char* obtener_apellidos_Estudiante (Estudiante_t E);
/*PRE: E debe existir.
  POST: Devuelve un apuntador a E->apellidos  */

Fecha_t obtener_fecha_ingreso_Estudiante (Estudiante_t E);
/*PRE: E debe existir.
  POST: Devuelve un apuntador a E->fecha_ingreso.  */

int obtener_edad( Estudiante_t E);
/*PRE: E debe existir.
  POST: Devuelve un apuntador a E->edad  */

int obtener_creditos_aprobados_Estudiante( Estudiante_t E);
/*PRE: E debe existir.
  POST: Devuelve un apuntador a E->creditos_aprobados */

int obtener_carrera_Estudiante (Estudiante_t E);
/*PRE: E debe existir.
  POST: Devuelve un apuntador a E->carrera  */

float obtener_indice_Estudiante (Estudiante_t E);
/*PRE: E debe existir.
  POST: Devuelve un apuntador a E->indice  */

void leerEstudiante (char* archivo, Estudiante_t E);
/*PRE: E debe existir, archivo debe existir
  POST: devuelve E con los datos asignados obtenidos de archivo*/

void escribirEstudiante (char* archivo, Estudiante_t E);
/*PRE: E debe existir, si archivo existe se sobreescribe, si no, se crea
  POST: devuelve el archivo conteniendo los tados de E*/


