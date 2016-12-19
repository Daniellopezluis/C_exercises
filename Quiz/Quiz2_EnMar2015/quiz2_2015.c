#include <stdio.h>
#include <stdlib.h>

int menorimpar(int *n);

int main(){

    int n;
    int p, m;

    int errores = 0;

    do{
        if(errores >= 3){
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
            printf("ENTRE\n");                            //en la que fue encontrado el menor impar
            menor = num;
            p = i;
        }
    }

    *n = menor;
    return p;
}
