/*
----------------------------------------------------------------------
    NOMBRE DEL ARCHIVO: quiz2_EneMar2015.c
    DESCRIPCION: Solucion propuesta al quiz numero 2 de ci2125
                programa que arroja el menor impar y la posicion del mismo
                entre una serie de numeros ingresados por el usuario.
                Utiliza pasaje de parametros por referencia y verificacacion
                de condiciones de error posibles.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 13/02/2015
----------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int menorimpar(int *n);

int main(){

    int n;
    int p, m;

    int errores = 0;

    do{
        if(errores >= 3){                       //El usuario tiene 3 oportunidades para cumplir con la condicion de error
            printf("Cantidad de oportunidades de error excedida. El programa terminará\n");
            return EXIT_FAILURE;
        }else{
            printf("Inserte la cantidad de numeros a procesar (n):\n");
            scanf("%d", &n);
            errores++;
        }
    }while(n <= 1);

    m = n;
    printf("Inserte %d numeros positivos:\n", m);

    p = menorimpar(&n);
    if(p == 0)
        printf("No se leyo ningun impar\n");
    else
        printf("De los %d numeros leidos, el valor del menor impar fue %d\ny fue dado en la posicion %d\n", m, n, p);

    return EXIT_SUCCESS;
}

int menorimpar(int *n){

    int num, menor, i, p;

    for(i=1, p=0; i <= *n; i++){
        scanf("%d", &num);

        while(num < 0){
            printf("Numero invalido, intente de nuev0\n");
            scanf("%d", &num);
        }

        if( num%2 != 0 && (num <= menor || i == 1)){      //Criterio personal: Arroja la ultima posicion
            menor = num;                                  //en la que fue encontrado el menor impar
            p = i;
        }
    }

    *n = menor;
    return p;
}
