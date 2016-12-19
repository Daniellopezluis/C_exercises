#include <stdlib.h>
#include <stdio.h>

#define PI 3.14159

int opcion;
float base, altura, radio, areatri, areacir;

int main()
{
    printf("\t\t\tBienvenido!\n\n\tSi desea calcular el area de un triangulo presione 1\n\n");
    printf("\tSi desea calcular el area de un ciruclo presione 2\n");
    scanf("%d", &opcion);
    
    switch(opcion)
    {
        case 1: 
            printf("Introduzca la base del triangulo:\n");
            scanf("%f", &base);
            printf("Introduzca la altura del triangulo:\n");
            scanf("%f", &altura);
            areatri = (base*altura)/2;
            printf("\t******************************\n");
            printf("\tEl area del triangulo es: %.2f\n", areatri);
            printf("\t******************************\n");
            break;
        
        case 2:
            printf("Introduzca el radio del circulo:\n");
            scanf("%f", &radio);
            areacir = PI*radio*radio;
            printf("\t******************************\n");
            printf("\tEl area del circulo es: %.2f\n", areacir);
            printf("\t******************************\n");
            break;
            
        default:
            printf("\tOpcion incorrecta panita!\n");
    }
    
    system("PAUSE");
    return 0;
}
