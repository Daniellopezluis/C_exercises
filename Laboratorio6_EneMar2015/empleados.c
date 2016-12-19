/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio3lab6.c
    DESCRIPCION: Programa que utiliza la estructura EMPLEADOS, ASIGNACION
                y DEDUCCIONES. Permite leer datos y calcular el sueldo
                total de los empleados en nomina.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 01/03/2015
------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Asignacion {
	float bono_trans;
	float bono_alim;
	float bono_vaca;
}ASIGNACION;

typedef struct Deducciones {
	float seguro;
	float ahorro_h;
}DEDUCCIONES;

typedef struct Empleados {
	int codigo;
	enum {no,si} actividad;
	enum {masculino,femenino} sexo;
	float sueldoXhora;
	int horas_t;
	ASIGNACION asig;
	DEDUCCIONES dedu;
}EMPLEADOS;

void leer(int n,EMPLEADOS emp[]);
void sueldo_total (int n,EMPLEADOS emp[]);

void main() {
   EMPLEADOS emp[MAX];
   int i,n;

   printf("Introduzca el numero de empleados:");
   scanf("%d",&n);
   leer(n,emp);
   sueldo_total(n,emp);
}

void leer(int n,EMPLEADOS emp[]){
//PRE: La estructura tipo EMPLEADOS debe existir
//POST: lee los datos ingresados por el usuario y los asigna a la estructura deseada
   int i;
   for(i=0;i<n;i++){
      printf("\nEmpleado %d:",i);
      printf("Introduzca el codigo\n");
      scanf("%d",&emp[i].codigo);
      printf("Introduzca su estado de actividad\n");
      scanf("%d",&emp[i].actividad);
      printf("Introduzca el sexo\n");
      scanf("%d",&emp[i].sexo);
      printf("Introduzca el sueldo por hora\n");
      scanf("%f",&emp[i].sueldoXhora);
      printf("Introduzca las horas trabajadas\n");
      scanf("%d",&emp[i].horas_t);
      printf("Introduzca el bono de transporte\n");
      scanf("%f",&emp[i].asig.bono_trans);
      printf("Introduzca el bono de alimentacion\n");
      scanf("%f",&emp[i].asig.bono_alim);
      printf("Introduzca el bono de vacasiones\n");
      scanf("%f",&emp[i].asig.bono_vaca);
      printf("Introduzca el seguro\n");
      scanf("%f",&emp[i].dedu.seguro);
      printf("Introduzca el ahorro habitacional\n");
      scanf("%f",&emp[i].dedu.ahorro_h);
   }
}

void sueldo_total (int n,EMPLEADOS emp[]){
//PRE: La estructura tipo EMPLEADOS debe existir
//POST: calcula el sueldo total correspondiente al empleado
   int i;
   float sueldo_t;
   for(i=0;i<n;i++){
      if (emp[i].actividad == 1){
         sueldo_t=(emp[i].sueldoXhora*emp[i].horas_t)+(emp[i].asig.bono_trans+emp[i].asig.bono_alim+emp[i].asig.bono_vaca)-(emp[i].dedu.seguro+emp[i].dedu.ahorro_h);
         printf("sueldo total del empleado %d es %4.2f\n",i,sueldo_t);
      }
   }
}

