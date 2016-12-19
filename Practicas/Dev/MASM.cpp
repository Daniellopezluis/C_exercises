# include < stdio.h>
#include <stdlib.h>
int N;
int leer(int arreglo[N], int);
int main (){
    printf ("Introduzca el numero\n"),
    scanf ("%d",&N);
    printf("Introduzca los numeros del arreglo\n");
    leer(array, N);
    for(i=0 ; i<N; i++){
        printf ( "%d \n", array[i]);
        }
    system("PAUSE")
    return 0;
}
int leer ( 
