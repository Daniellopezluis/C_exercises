/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio2lab6.c
    DESCRIPCION: Programa que utiliza la estructura FECHA, permite
                ingresar una serie de fechas, imprimir fechas y
                luego las ingresa en orden.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 01/03/2015
------------------------------------------------------------
*/

#include<stdio.h>

#define MAX 100

typedef enum {enero=1,febrero,marzo,abril,mayo,junio,julio,agosto,septiembre,octubre,noviembre,diciembre} meses;

typedef struct datos{
   int dia;
   meses mes;
   int anio;
}FECHA;

void imprimir(int n,FECHA orden[MAX]);
int fechamenor(FECHA f1, FECHA f2);
void InsertarEnOrden(int n, int pos, FECHA f, FECHA orden[MAX]);

main (){
   int n,i;
   FECHA orden[MAX], f;
   printf("Introduzca el numero de fechas a procesar\n");
   scanf("%i",&n);
   for(i=0;i<n;i++){
      printf("Introduzca una fecha \ndia: ");
      scanf("%d",&f.dia);
      printf("mes: ");
	  scanf("%d",&f.mes);
      printf("anio: ");
      scanf("%d",&f.anio);
      printf("\n");
      InsertarEnOrden(n,i,f,orden);
   }
   imprimir(n,orden);
   return 0;
}

void imprimir(int n,FECHA orden[MAX]){
//PRE: la estructura tipo FECHA debe existir
//POST: imprime las fechas en orden
   int i;
   printf("\nLas fechas en orden quedarian: \n");
   for(i=0;i<n;i++){
      printf("%d - %d - %d\n",orden[i].dia,orden[i].mes,orden[i].anio);
   }
}

int fechamenor(FECHA f1, FECHA f2) {
//PRE: las variables tipo FECHA deben existir
//POST: distingue la mayor entre dos fechas
   if (f1.anio < f2.anio)
      return(1);
   if (f1.anio > f2.anio)
      return(0);
   if (f1.mes < f2.mes)	// en el mismo anio
      return(1);
   if (f1.mes > f2.mes)
      return(0);
   if (f1.dia< f2.dia)		// en el mismo mes
      return(1);
   return(0);
}

void InsertarEnOrden(int n, int pos, FECHA f, FECHA orden[MAX]){
//PRE: las estructuras tipo FECHA deben existir
//POST: llena la estructura con fechas ordenadas
   int i,j,noinserte;

   i=0;
   noinserte=0;
   while (i<pos && !noinserte){
      if (fechamenor (f,orden[i])) {
         for(j=n;j>i;j--){
            orden[j].dia=orden[j-1].dia;
            orden[j].mes=orden[j-1].mes;
            orden[j].anio=orden[j-1].anio;
         }
         noinserte=1;
      }
      else
         i++;
   }
   orden[i].dia=f.dia;
   orden[i].mes=f.mes;
   orden[i].anio=f.anio;
}
