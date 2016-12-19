/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio4lab4.c
    DESCRIPCION: Programa que calcula el maximo comun divisor
                de un par de numeros, mediante el algoritmo
                de Euclides.
    AUTORES: Prep. Daniel Lopez y Prof. Rosseline Rodríguez
    ULTIMA MODIFICACION: 19/01/2015
------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

int mcd(int a, int b);
int factorial(int n);
int combinatorio(int n, int k);
int esPrimo(int n);

void main(){

    int n;
    int a, b, c, aux;
    printf("Bienvenido, escoja la operacion a realizar.\n");

    do{
        printf("Inserte:\n\t(1)Maximo comun divisor\n\t(2)Combinatorio\n\t(3)Numero primo\n\t(4)Salir.\n");
        scanf("%d", &n);
    }while(n < 0 || n > 4);

    switch(n){
        case 1: printf("\nIntroduzca tres enteros positivos:\n");
                scanf("%d%d%d", &a, &b, &c);
                if(a > 0 && b > 0 && c > 0){
                    aux = mcd(a,b);
                    aux = mcd(aux,c);
                    printf("El maximo comun divisor de %d, %d y %d es: %d\n",a,b,c, aux);
                }else{
                    printf("\tCifra no valida.\n");
                }
        break;

        case 2: printf("\nIntroduzca dos enteros positivos, el primero debe ser mayor que el segundo:\n");
                scanf("%d%d", &a, &b);
                if(a > b && b > 0){
                    aux = combinatorio(a,b);
                    printf("\nEl valor del Combinatorio(%d,%d) = %d\n",a,b,aux);
                }else{
                    printf("\tCifra no valida.\n");
                }
                break;

        case 3: printf("\nIntroduzca un entero positivo:\n");
                scanf("%d", &a);
                if(a > 0){
                    if (esPrimo(a)){
                        printf("%d es primo.\n",a);
                    }else{
                        printf("%d NO es primo.\n",a);
                    }
                }else{
                    printf("\tCifra no valida.\n");
                }
                break;

        case 4: printf("\n\t**Programa terminado**\n");

        default: break;

    }

}

int mcd(int a, int b)
//Pre: a>0 AND b>0;
//Post: Retorna el mcd de a y b.
{
   while (a != b){
      if (a<b) {
         b = b - a;
      } else {
         a = a - b;
      }
   }
   return a;
}

int factorial(int n)
//Pre: n >= 0
//Post: Retorna el factorial de n.
{
    int i,r;

    for(i=1,r=1;i<=n;i++)
        r=r*i;
    return r;
}

int combinatorio(int n, int k)
//Pre: n >= k >= 0
//Post: Retorna el combinatorio Cn,k
{
    return factorial(n)/(factorial(k)*factorial(n-k));
}

int esPrimo(int n)
//Pre: n >0
//Post: Retorna 1 si n es primo y 0 si no
{
    int b,k;

    if (n > 1)
        b = 1;
    else
        b = 0;

    k = 2;
    while (k < n) {
        if (n % k == 0)
        {
            b = 0;
            break;
        }
        k++;
    }
    return b;
}

