/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: primo.c
    DESCRIPCION: Programa que identifica si un numero es primo
                o no.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 19/01/2015
------------------------------------------------------------
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

void main()
{
    int num, mitad;             // Entrada
    int primo;                  // Salida
    int i;

    //Precondicion: num > 0
    do{
        printf("Introduzca un numero entero positivo:\n");
        scanf("%d",&num);
    }while(num <= 0);

    /*----- Utilizando un while: -----*/
	mitad = (num+1)/2;
    i=2;
    primo = TRUE;
    while (primo && i<mitad)    //mientras i no divida a num
    {
        if (num%i==0)           // si num es divisible por i, entonces num
        {
            primo = FALSE;      // no es primo
        }
        i=i+1;
    }

    //Poscondicion: el numero insertado es/no es primo
    if (primo)
        printf("%d es primo\n",num);
    else
        printf("%d no es primo\n",num);

    /*----- Utilizando un for: -----*/
    mitad = (num+1)/2;
    primo = TRUE;
    for(i=2; i<mitad && primo; i=i+1)
    {
        if(num%i == 0)
            primo = FALSE;
    }
    if (primo)
        printf("%d es primo\n", num);
    else
        printf("%d no es primo\n", num);

    /*----- Utilizando un do-while: -----*/

    i = 2;
    mitad = (num+1)/2;
    primo = TRUE;
    do {
        if (num%i == 0)
            primo = FALSE;
        i = i+1;
    }while(primo && i<mitad);

    if (primo)
        printf("%d es primo\n", num);
    else
        printf("%d no es primo\n", num);
}
