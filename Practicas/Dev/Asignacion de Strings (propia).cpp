/*Fecha: 2 de Julio 2010
Programa: Ocurrencias de una palabra en una cadena de caracteres
Autor: Daniel Lopez
Entrada: Cadena de caracteres, palabra clave
Salida: Posiciones de ocurrencia de la palbra clave
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 26      /*Tamano del arreglo respuesta*/
#define MAX_W 11    /*Tamano de la palbra clave*/
#define MAX_F 51    /*Tamano de la cadena de caracteres*/

int word_finder(char *frase, char *key_w, int arreglo[MAX]);

main () {
    char cadena[MAX_F];
    char palabra[MAX_W];
    int array[MAX] = {0};
    int k;

    do{
        printf("Inserte una cadena de caracteres (maximo 50 caracteres):\n");
        gets(cadena);
    } while(strlen(cadena) > 50);

    do{
        printf("Inserte una palabra (maximo 10 caracteres):\n");
        gets(palabra);
    } while (strlen(palabra) > 10);

    word_finder(cadena, palabra, array);    /*llamada a word_finder*/

    printf("Posiciones relativas:\n");

    for(k = 0; k < MAX; k++) {      /*Posiciones de aparicion*/
        if(array[k] == 1) {         /*de la palabra clave*/
            printf("%d ", k);
        }
    }
    system("PAUSE");
}

int word_finder(char *frase, char *key_w, int arreglo[MAX]) {

    int j = 1;      /*Contador*/
    int z = 0;      /*Identificador de posiciones en el arreglo*/
    char *ptrTok;   /*Apuntador a las palabras*/

    for(ptrTok = strtok(frase, " "); ptrTok != '\0'; ptrTok = strtok(NULL, " ")) {
        z = strcmp(ptrTok, key_w);
        if(z == 0) {
            arreglo[j] = 1;
        }
        j++;
    }
}
