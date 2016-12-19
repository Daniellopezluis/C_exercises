/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio3lab6.c
    DESCRIPCION: Programa que utiliza la estructura Tipo_Emp y
                algoritmos para calcular cantidad de personas
                pertenecientes a grupos especificos.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 01/03/2015
------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

#define N 100

typedef enum {Soltero,Casado,Viudo,Divorciado} ESTADO;

typedef struct Empleados {
	char Apellido[20],Nombre[20];
	int edad;
	enum {Masculino,Femenino} Sexo;
	ESTADO EdoCivil;
}Tipo_Emp;

int algoritmo_a(int n,Tipo_Emp Lista_Emp[]);
int algoritmo_b(int n,Tipo_Emp Lista_Emp[]);
int algoritmo_c(int n,Tipo_Emp Lista_Emp[]);
int algoritmo_d(int n,Tipo_Emp Lista_Emp[]);

void main() {
   int i,n;
   Tipo_Emp Lista_Emp[N];

   printf("Introduzca el numero de empleados:");
   scanf("%d",&n);

   for(i=0;i<n;i++){
      printf("\nEmpleado %d:",i);
      printf("Introduzca el apellido\n");
      scanf("%s",Lista_Emp[i].Apellido);
      printf("Introduzca el nombre\n");
      scanf("%s",Lista_Emp[i].Nombre);
      printf("Introduzca la edad\n");
      scanf("%d",&Lista_Emp[i].edad);
      printf("Introduzca el sexo\n");
      scanf("%d",&Lista_Emp[i].Sexo);
      printf("Introduzca el estado civil\n");
      scanf("%d",&Lista_Emp[i].EdoCivil);
   }

   printf("\nEmpleados mayores de 50 anios que estan divorciados: %d",algoritmo_a(n,Lista_Emp));
   printf("\nPorcentaje de mujeres casadas %d",algoritmo_b(n,Lista_Emp));
   printf("\nPorcentaje de empleados solteros %d",algoritmo_c(n,Lista_Emp));
   printf("\nMujeres solteras entre 20 y 30 anios de edad %d",algoritmo_d(n,Lista_Emp));

}

int algoritmo_a(int n,Tipo_Emp Lista_Emp[]){
//PRE: la estructura tipo Tipo_Emp debe existir
//POST: Arroja la cantidad de empleados mayores de 50 anios divorciados
   int i,contador=0;
   for(i=0;i<n;i++){
      if(Lista_Emp[i].edad>=50 &&Lista_Emp[i].EdoCivil==3){
         contador=contador+1;
      }
   }
   return contador;
}

int algoritmo_b(int n,Tipo_Emp Lista_Emp[]){
//PRE: la estructura tipo Tipo_Emp debe existir
//POST: Arroja el porcentaje de mujeres casadas
   int i,mujeres=0,contador=0,por_casadas;
   for (i=0;i<n;i++){
      if (Lista_Emp[i].Sexo==1){
         mujeres=mujeres+1;
         if (Lista_Emp[i].EdoCivil==1)
           contador=contador+1;
      }
   }
   if (mujeres>0){
      por_casadas=contador*100/mujeres;
      return por_casadas;
   }
}

int algoritmo_c(int n,Tipo_Emp Lista_Emp[]){
//PRE: la estructura tipo Tipo_Emp debe existir
//POST: Arroja el porcentaje de empleados solteros
   int i,hombres=0,contador=0,por_solteros;
   for(i=0;i<n;i++){
      if (Lista_Emp[i].Sexo==0){
         hombres=hombres+1;
      if(Lista_Emp[i].EdoCivil==0)
         contador=contador+1;
      }
   }
   if(hombres>0){
      por_solteros=contador*100/hombres;
      return por_solteros;
   }
}

int algoritmo_d(int n,Tipo_Emp Lista_Emp[]){
//PRE: la estructura tipo Tipo_Emp debe existir
//POST: Arroja la cantidad de mujeres solteras entre 20 y 30 anhos
   int i,contador=0;
   for (i=0;i<n;i++){
      if (Lista_Emp[i].Sexo==1 && 19<Lista_Emp[i].edad<31 &&Lista_Emp[i].EdoCivil==0)
         contador=contador+1;
   }
   return contador;
}
