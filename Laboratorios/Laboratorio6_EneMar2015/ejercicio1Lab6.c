/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio1lab6.c
    DESCRIPCION: Programa que utiliza la estructura PERSONA,
                ingresa datos, imprime el promedio de edad
                y la edad maxima del grupo.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 01/03/2015
------------------------------------------------------------
*/

#include<stdio.h>

#define MAX 10
typedef struct datos{
   int cedula;
   char nombre[50];
   char apellido[50];
   int edad;
}PERSONA;

void leer(int n,PERSONA grupo[]);
void imprimir(int n,PERSONA grupo[]);
void promedio(int n,PERSONA grupo[]);
void edadmax(int n,PERSONA grupo[]);

main (){
   int n;
   PERSONA grupo[MAX];
   printf("Introduzca el numero de personas a procesar\n");
   scanf("%i",&n);
   leer(n,grupo);
   imprimir(n,grupo);
   promedio(n,grupo);
   edadmax(n,grupo);
   return 0;
}

void leer(int n,PERSONA grupo[]){
//PRE: Ninguna.
//POST: Asigna los datos ingresados por el usuario
   int i;
   for(i=0;i<n;i++){
      printf("Persona %i: Introduzca la cedula\n",i);
      scanf("%i",&grupo[i].cedula);
      printf("Introduzca el nombre\n");
      scanf("%s",grupo[i].nombre);
      printf("Introduzca el apellido\n");
      scanf("%s",grupo[i].apellido);
      printf("Introduzca la edad\n");
      scanf("%i",&grupo[i].edad);
   }
}

void imprimir(int n,PERSONA grupo[]){
//PRE: arreglo tipo PERSONA debe existir
//POST: imprime los datos contenidos en la estructura
   int i;
   printf("\n");
   for(i=0;i<n;i++){
      printf("Cedula: %i\n",grupo[i].cedula);
      printf("Nombre: %s\n",grupo[i].nombre);
      printf("Apellido: %s\n",grupo[i].apellido);
      printf("Edad: %i\n\n",grupo[i].edad);
   }
}

void promedio(int n,PERSONA grupo[]){
//PRE: arreglo tipo PERSONA debe existir
//POST: imprime el promedio de edad del grupo
   int i;
   float prom=0;
   printf("\n");
   for(i=0;i<n;i++){
      prom=prom+grupo[i].edad;
   }
   prom=prom/n;
   printf("El proemdio de edad es: %3.2f",prom);
}

void edadmax(int n,PERSONA grupo[]){
//PRE: arreglo tipo PERSONA debe existir
//POST: imprime la edad maxima encontrada en el grupo
   int i,maximo=grupo[0].edad,pos=0;
   printf("\n");
   for(i=0;i<n;i++){
      if(grupo[i].edad>maximo){
         maximo=grupo[i].edad;
         pos=i;
      }
   }
   printf("\nLa persona de edad maxima es: %s %s con %i anios\n", grupo[pos].nombre, grupo[pos].apellido,grupo[pos].edad);
}
