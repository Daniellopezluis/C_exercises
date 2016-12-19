#include <stdio.h>

int contar_pares(int inf, int sup);     //Funcion para contar numeros pares en un intervalo

void intercambiar(int* a, int* b);      //Funcion para intercambiar dos variables

void main(){
    int sup, inf, pares;

    do{
        printf("Introduzca un entero positivo correspondiente al limite inferior:\n");
        scanf("%d", &inf);
        printf("Introduzca un entero positivo correspondiente al limite superior:\n");
        scanf("%d", &sup);
    }while(inf < 0 || sup < 0);          //Verifica precondicion de pertenecer a intervalo

    if(inf > sup){                      //Verifica precondicion de limites
        intercambiar(&inf, &sup);
    }

    printf("Introduzca tantos enteros como desee, instroduzca un entero negativo para finalizar:\n");
    pares = contar_pares(inf, sup);

    printf("Hay %d numeros pares en el intervalo [%d, %d]\n", pares,inf,sup);
}

int contar_pares(int inf, int sup){
    int numero = 0;
    int pares = 0;

    while(numero >= 0){                 //Condicion de parada de la iteracion
        scanf("%d", &numero);
        if((numero >= inf) && (numero <= sup)){
            if(numero%2 == 0){
                pares++;
            }
        }
    }
    return pares;                       //Cantidad de numeros pares encontrados

}

void intercambiar(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
