/*
 * buscarVector.c
 */

#include<stdio.h>
#include<stdlib.h>

#define MAX 20
#define true 1
#define false 0

void Leer(int A[], int n);
int buscar(int A[], int n, int X);

int main ( )
{
   int A[MAX]; // Entrada: elementos leidos
   int N;      // Entrada: numero de elementos
   int desea;  // Entrada: decision del usuario
   int X;      // Salida: elemento a buscar

   do{
        printf("Nro. de elementos del arreglo (1-20):");
        scanf("%d", &N);
   } while ((N<0) || (N>MAX)); //Chequea la pre

   /* Pre: 0<N<=20 */

   Leer(A,N);

   do {
      printf("\nIntroduzca un valor a buscar:");
      scanf("%d", &X);
      if (buscar(A,N,X)==true)
         printf("\nEl valor %d esta en el arreglo\n",X);
      else
         printf("\nEl valor %d NO esta en el arreglo\n", X);

      /* Post: dice si X está o no en el arreglo */
      printf("\nDesea buscar otro número (Si=1, No=0):");
      scanf("%d", &desea);

   } while (desea == true);
}

void Leer(int A[], int n)
// Pre: 0<n<=20
// Post: A contiene los valores leidos
{
   int i;

   printf("Introduzca los elementos del arreglo\n");
   for ( i=0; i<n; i++){
      scanf("%d", &A[i]);
   }
}

int buscar(int A[], int n, int X)
// Pre: 0<n<=20
// Post: devuelve TRUE si X está en el arreglo A y
//       FALSE en caso contrario
{
   int i;
   int aviso;

   aviso = false;
   for (i=0; i<n && !aviso; i++){
      if (A[i] == X){
        aviso = true;
      }
   }
   return(aviso);
}
